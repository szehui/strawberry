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

#ifndef SUBSONICPLAYLISTREQUEST_H
#define SUBSONICPLAYLISTREQUEST_H

#include "config.h"

#include <QObject>
#include <QList>
#include <QHash>
#include <QMap>
#include <QVariant>
#include <QString>
#include <QStringList>
#include <QJsonObject>

#include "includes/shared_ptr.h"
#include "core/song.h"
#include "subsonicplaylistinfo.h"
#include "subsonicbaserequest.h"

class QNetworkReply;
class NetworkAccessManager;
class SubsonicService;
class SubsonicUrlHandler;
class NetworkTimeouts;

class SubsonicPlaylistRequest : public SubsonicBaseRequest {
  Q_OBJECT

 public:
  explicit SubsonicPlaylistRequest(SubsonicService *service, SubsonicUrlHandler *url_handler, const SharedPtr<NetworkAccessManager> network, QObject *parent = nullptr);
  ~SubsonicPlaylistRequest() override;

  void GetPlaylists();
  void GetPlaylistSongs(const QString &playlist_id, const QString &playlist_name);
  void Reset();

  // Testable JSON parsing helpers (do not touch network).
  QList<SubsonicPlaylistInfo> ParsePlaylistsJson(const QJsonObject &json_object, QString *error);
  SongList ParsePlaylistSongsJson(const QJsonObject &json_object, const QString &playlist_name, QString *error, QString *playlist_name_actual);

 Q_SIGNALS:
  void PlaylistsReceived(const SubsonicPlaylistInfoList &playlists, const QString &error);
  void SongsReceived(const SongList &songs, const QString &playlist_name, const QString &error);

 private Q_SLOTS:
  void PlaylistsReplyReceived(QNetworkReply *reply);
  void PlaylistSongsReplyReceived(QNetworkReply *reply, const QString &playlist_id, const QString &playlist_name);

  void ParseSong(Song &song, const QJsonObject &json_object);

 private:
  void FinishCheck();

  void Error(const QString &error, const QVariant &debug = QVariant()) override;

  SubsonicService *service_;
  SubsonicUrlHandler *url_handler_;
  NetworkTimeouts *timeouts_;

  bool finished_;

  QString playlist_name_requested_;

  QList<SubsonicPlaylistInfo> playlists_;

  SongList songs_;
  QStringList errors_;
  QList<QNetworkReply*> replies_;
};

#endif  // SUBSONICPLAYLISTREQUEST_H
