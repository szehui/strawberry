/*
 * Strawberry Music Player
 * Copyright 2026, Sze Hui (szehui)
 *
 * Strawberry is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Strawberry is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Strawberry.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "config.h"

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QMimeDatabase>

#include "core/logging.h"
#include "core/networktimeouts.h"
#include "core/song.h"
#include "constants/timeconstants.h"
#include "utilities/strutils.h"
#include "core/urlhandler.h"
#include "subsonicservice.h"
#include "subsonicbaserequest.h"
#include "subsonicurlhandler.h"
#include "subsonicplaylistrequest.h"
#include "subsonicplaylistinfo.h"

using namespace Qt::Literals::StringLiterals;
using std::make_shared;

SubsonicPlaylistRequest::SubsonicPlaylistRequest(SubsonicService *service, SubsonicUrlHandler *url_handler, const SharedPtr<NetworkAccessManager> network, QObject *parent)
    : SubsonicBaseRequest(service, network, parent),
      service_(service),
      url_handler_(url_handler),
      timeouts_(new NetworkTimeouts(30000, this)),
      finished_(false) {}

SubsonicPlaylistRequest::~SubsonicPlaylistRequest() {

  while (!replies_.isEmpty()) {
    QNetworkReply *reply = replies_.takeFirst();
    QObject::disconnect(reply, nullptr, this, nullptr);
    if (reply->isRunning()) reply->abort();
    reply->deleteLater();
  }

}

void SubsonicPlaylistRequest::Reset() {

  finished_ = false;
  playlist_name_requested_.clear();
  playlists_.clear();
  songs_.clear();
  errors_.clear();

  while (!replies_.isEmpty()) {
    QNetworkReply *reply = replies_.takeFirst();
    QObject::disconnect(reply, nullptr, this, nullptr);
    if (reply->isRunning()) reply->abort();
    reply->deleteLater();
  }

}

void SubsonicPlaylistRequest::GetPlaylists() {

  QNetworkReply *reply = CreateGetRequest(u"getPlaylists"_s, ParamList());
  replies_ << reply;
 QObject::connect(reply, &QNetworkReply::finished, this, [this, reply]() { PlaylistsReplyReceived(reply); });
  timeouts_->AddReply(reply);

}

void SubsonicPlaylistRequest::PlaylistsReplyReceived(QNetworkReply *reply) {

  if (!replies_.contains(reply)) return;
  replies_.removeAll(reply);
  QObject::disconnect(reply, nullptr, this, nullptr);
  reply->deleteLater();

  const QScopeGuard finish_check = qScopeGuard([this]() { FinishCheck(); });

  const JsonObjectResult json_object_result = ParseJsonObject(reply);
  if (!json_object_result.success()) {
    Error(json_object_result.error_message);
    Q_EMIT PlaylistsReceived(QList<SubsonicPlaylistInfo>(), Utilities::StringListToHTML(errors_));
    return;
  }

  QString error;
  const SubsonicPlaylistInfoList playlists = ParsePlaylistsJson(json_object_result.json_object, &error);
  Q_EMIT PlaylistsReceived(playlists, error);

}

QList<SubsonicPlaylistInfo> SubsonicPlaylistRequest::ParsePlaylistsJson(const QJsonObject &json_object, QString *error) {

  errors_.clear();

  SubsonicPlaylistInfoList playlists;

  if (json_object.isEmpty()) {
    if (error) *error = QString();
    return playlists;
  }

  if (!json_object.contains("playlists"_L1)) {
    Error(u"Json reply is missing playlists."_s, json_object);
    if (error) *error = Utilities::StringListToHTML(errors_);
    return playlists;
  }

  QJsonValue value_playlists = json_object["playlists"_L1];
  if (!value_playlists.isObject()) {
    Error(u"Json playlists is not an object."_s, value_playlists);
    if (error) *error = Utilities::StringListToHTML(errors_);
    return playlists;
  }
  QJsonObject obj_playlists = value_playlists.toObject();

  if (!obj_playlists.contains("playlist"_L1)) {
    Error(u"Json playlists object is missing playlist array."_s, obj_playlists);
    if (error) *error = Utilities::StringListToHTML(errors_);
    return playlists;
  }
  QJsonValue value_playlist = obj_playlists["playlist"_L1];
  if (!value_playlist.isArray()) {
    Error(u"Json playlist is not an array."_s, value_playlist);
    if (error) *error = Utilities::StringListToHTML(errors_);
    return playlists;
  }
  QJsonArray array_playlists = value_playlist.toArray();
  if (array_playlists.isEmpty()) {
    if (error) *error = QString();
    return playlists;
  }

  for (const QJsonValue &value_playlist_info : array_playlists) {

    if (!value_playlist_info.isObject()) {
      Error(u"Invalid Json reply, playlist is not an object."_s);
      continue;
    }
    QJsonObject object_playlist = value_playlist_info.toObject();

    if (!object_playlist.contains("id"_L1) || !object_playlist.contains("name"_L1)) {
      Error(u"Invalid Json reply, playlist in array is missing id or name."_s, object_playlist);
      continue;
    }

    SubsonicPlaylistInfo playlist;
    playlist.id = object_playlist["id"_L1].toString();
    playlist.name = object_playlist["name"_L1].toString();

    if (playlist.id.isEmpty()) {
      Error(u"Playlist id is empty, skipping."_s);
      continue;
    }

    if (object_playlist.contains("owner"_L1)) playlist.owner = object_playlist["owner"_L1].toString();
    if (object_playlist.contains("comment"_L1)) playlist.comment = object_playlist["comment"_L1].toString();
    if (object_playlist.contains("songCount"_L1)) playlist.song_count = object_playlist["songCount"_L1].toInt();

    playlists << playlist;

  }

  if (error) *error = errors_.isEmpty() ? QString() : Utilities::StringListToHTML(errors_);
  return playlists;

}

void SubsonicPlaylistRequest::GetPlaylistSongs(const QString &playlist_id, const QString &playlist_name) {

  playlist_name_requested_ = playlist_name;

  QNetworkReply *reply = CreateGetRequest(u"getPlaylist"_s, ParamList() << Param(u"id"_s, playlist_id));
  replies_ << reply;
  QObject::connect(reply, &QNetworkReply::finished, this, [this, reply, playlist_id, playlist_name]() { PlaylistSongsReplyReceived(reply, playlist_id, playlist_name); });
  timeouts_->AddReply(reply);

}

void SubsonicPlaylistRequest::PlaylistSongsReplyReceived(QNetworkReply *reply, const QString &playlist_id, const QString &playlist_name) {

  Q_UNUSED(playlist_id);
  if (!replies_.contains(reply)) return;
  replies_.removeAll(reply);
  QObject::disconnect(reply, nullptr, this, nullptr);
  reply->deleteLater();

  const QScopeGuard finish_check = qScopeGuard([this]() { FinishCheck(); });

  if (finished_) return;

  const JsonObjectResult json_object_result = ParseJsonObject(reply);
  if (!json_object_result.success()) {
    Error(json_object_result.error_message);
    Q_EMIT SongsReceived(SongList(), playlist_name, Utilities::StringListToHTML(errors_));
    return;
  }

  QString error;
  QString playlist_name_actual;
  const SongList songs = ParsePlaylistSongsJson(json_object_result.json_object, playlist_name, &error, &playlist_name_actual);
  Q_EMIT SongsReceived(songs, playlist_name_actual, error);

}

SongList SubsonicPlaylistRequest::ParsePlaylistSongsJson(const QJsonObject &json_object, const QString &playlist_name, QString *error, QString *playlist_name_actual) {

  errors_.clear();

  SongList songs;

  if (playlist_name_actual) *playlist_name_actual = playlist_name;

  if (json_object.isEmpty()) {
    if (error) *error = u"Empty JSON reply"_s;
    return songs;
  }

  if (!json_object.contains("playlist"_L1)) {
    Error(u"Json reply is missing playlist."_s, json_object);
    if (error) *error = Utilities::StringListToHTML(errors_);
    return songs;
  }
  QJsonValue value_playlist = json_object["playlist"_L1];
  if (!value_playlist.isObject()) {
    Error(u"Json playlist is not an object."_s, value_playlist);
    if (error) *error = Utilities::StringListToHTML(errors_);
    return songs;
  }
  QJsonObject obj_playlist = value_playlist.toObject();

  if (playlist_name_actual && obj_playlist.contains("name"_L1)) {
    *playlist_name_actual = obj_playlist["name"_L1].toString();
  }

  if (!obj_playlist.contains("entry"_L1)) {
    // Empty playlist is not an error.
    if (error) *error = QString();
    return songs;
  }
  QJsonValue value_entries = obj_playlist["entry"_L1];
  if (!value_entries.isArray()) {
    Error(u"Json entry is not an array."_s, value_entries);
    if (error) *error = Utilities::StringListToHTML(errors_);
    return songs;
  }
  QJsonArray array_entries = value_entries.toArray();

  for (const QJsonValue &value_entry : array_entries) {

    if (!value_entry.isObject()) {
      Error(u"Invalid Json reply, playlist entry is not an object."_s);
      continue;
    }
    const QJsonObject object_entry = value_entry.toObject();

    Song song(Song::Source::Subsonic);
    ParseSong(song, object_entry);
    if (!song.is_valid()) continue;
    songs << song;

  }

  if (error) *error = errors_.isEmpty() ? QString() : Utilities::StringListToHTML(errors_);
  return songs;

}

void SubsonicPlaylistRequest::ParseSong(Song &song, const QJsonObject &json_object) {

  if (!json_object.contains("id"_L1) || !json_object.contains("title"_L1)) {
    Error(u"Invalid Json reply, playlist entry is missing one or more required values (id, or title)."_s, json_object);
    return;
  }

  QString song_id;
  if (json_object["id"_L1].type() == QJsonValue::String) {
    song_id = json_object["id"_L1].toString();
  }
  else {
    song_id = QString::number(json_object["id"_L1].toInt());
  }

  QString title = json_object["title"_L1].toString();

  QString album, album_id, artist, artist_id;
  if (json_object.contains("album"_L1)) album = json_object["album"_L1].toString();
  if (json_object.contains("albumId"_L1)) album_id = json_object["albumId"_L1].toString();
  if (json_object.contains("artist"_L1)) artist = json_object["artist"_L1].toString();
  if (json_object.contains("artistId"_L1)) artist_id = json_object["artistId"_L1].toString();

  int duration = 0;
  if (json_object.contains("duration"_L1)) {
    if (json_object["duration"_L1].type() == QJsonValue::String) {
      duration = json_object["duration"_L1].toString().toInt();
    }
    else {
      duration = json_object["duration"_L1].toInt();
    }
  }

  int bitrate = 0;
  if (json_object.contains("bitRate"_L1)) {
    if (json_object["bitRate"_L1].type() == QJsonValue::String) {
      bitrate = json_object["bitRate"_L1].toString().toInt();
    }
    else {
      bitrate = json_object["bitRate"_L1].toInt();
    }
  }

  QString mimetype;
  if (json_object.contains("contentType"_L1)) mimetype = json_object["contentType"_L1].toString();

  int year = 0;
  if (json_object.contains("year"_L1)) {
    if (json_object["year"_L1].type() == QJsonValue::String) {
      year = json_object["year"_L1].toString().toInt();
    }
    else {
      year = json_object["year"_L1].toInt();
    }
  }

  int track = 0;
  if (json_object.contains("track"_L1)) {
    if (json_object["track"_L1].type() == QJsonValue::String) {
      track = json_object["track"_L1].toString().toInt();
    }
    else {
      track = json_object["track"_L1].toInt();
    }
  }

  int disc = 0;
  if (json_object.contains("discNumber"_L1)) {
    if (json_object["discNumber"_L1].type() == QJsonValue::String) {
      disc = json_object["discNumber"_L1].toString().toInt();
    }
    else {
      disc = json_object["discNumber"_L1].toInt();
    }
  }

  QString genre;
  if (json_object.contains("genre"_L1)) genre = json_object["genre"_L1].toString();

  QString cover_id;
  if (json_object.contains("coverArt"_L1)) {
    if (json_object["coverArt"_L1].type() == QJsonValue::String) {
      cover_id = json_object["coverArt"_L1].toString();
    }
    else {
      cover_id = QString::number(json_object["coverArt"_L1].toInt());
    }
  }

  QUrl url;
  if (url_handler_) {
    url.setScheme(url_handler_->scheme());
  }
  url.setPath(song_id);

  QUrl cover_url;
  if (!cover_id.isEmpty()) {
    cover_url = CreateUrl(server_url(), auth_method(), username(), password(), u"getCoverArt"_s, ParamList() << Param(u"id"_s, cover_id));
  }

  Song::FileType filetype(Song::FileType::Stream);
  if (!mimetype.isEmpty()) {
    QMimeDatabase mimedb;
    const QStringList suffixes = mimedb.mimeTypeForName(mimetype).suffixes();
    for (const QString &suffix : suffixes) {
      filetype = Song::FiletypeByExtension(suffix);
      if (filetype != Song::FileType::Unknown) break;
    }
    if (filetype == Song::FileType::Unknown) {
      qLog(Debug) << "Subsonic: Unknown mimetype" << mimetype;
      filetype = Song::FileType::Stream;
    }
  }

  song.set_source(Song::Source::Subsonic);
  song.set_song_id(song_id);
  if (!album_id.isEmpty()) song.set_album_id(album_id);
  if (!artist_id.isEmpty()) song.set_artist_id(artist_id);
  song.set_album(album);
  song.set_artist(artist);
  song.set_title(title);
  if (track > 0) song.set_track(track);
  if (disc > 0) song.set_disc(disc);
  if (year > 0) song.set_year(year);
  song.set_url(url);
  song.set_length_nanosec(static_cast<qint64>(duration) * kNsecPerSec);
  if (cover_url.isValid()) song.set_art_automatic(cover_url);
  song.set_genre(genre);
  song.set_directory_id(0);
  song.set_filetype(filetype);
  if (json_object.contains("size"_L1)) {
    if (json_object["size"_L1].type() == QJsonValue::String) {
      song.set_filesize(json_object["size"_L1].toString().toInt());
    }
    else {
      song.set_filesize(json_object["size"_L1].toInt());
    }
  }
  song.set_bitrate(bitrate);
  song.set_mtime(0);
  song.set_ctime(0);
  song.set_valid(true);

}

void SubsonicPlaylistRequest::FinishCheck() {

  if (finished_) return;
  finished_ = true;

}

void SubsonicPlaylistRequest::Error(const QString &error, const QVariant &debug) {

  if (!error.isEmpty()) {
    qLog(Error) << "Subsonic:" << error;
    errors_ << error;
  }
  if (debug.isValid()) qLog(Debug) << debug;

}
