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

#include "gtest_include.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QString>
#include <QList>

#include "core/song.h"
#include "subsonic/subsonicplaylistinfo.h"
#include "subsonic/subsonicplaylistrequest.h"

using namespace Qt::Literals::StringLiterals;

namespace {

QJsonObject Parse(const char *json) {
  QJsonParseError parse_error;
  QJsonDocument doc = QJsonDocument::fromJson(QByteArray(json), &parse_error);
  EXPECT_EQ(parse_error.error, QJsonParseError::NoError);
  // Mimic SubsonicBaseRequest::ParseJsonObject: unwrap the "subsonic-response" envelope,
  // since the parse helpers expect the inner object (as on the real call path).
  return doc[u"subsonic-response"_s].toObject();
}

class SubsonicPlaylistRequestTest : public ::testing::Test {
 protected:
  // We construct a minimal request object with null service/handler per test, which is safe
  // because the parse helpers do not touch network members.
  void SetUp() override {}
};

TEST_F(SubsonicPlaylistRequestTest, GetPlaylistsHappyPath) {

  const QJsonObject json = Parse(R"json(
    {
      "subsonic-response": {
        "status": "ok",
        "playlists": {
          "playlist": [
            {"id": "1", "name": "Favorites", "owner": "admin", "songCount": 3, "comment": "my favs"},
            {"id": "2", "name": "Road trip", "owner": "admin", "songCount": 10}
          ]
        }
      }
    }
  )json");

  QString error;
  QList<SubsonicPlaylistInfo> playlists;

  // ParsePlaylistsJson is a non-static member but uses no members other than errors_ (purely local),
  // so calling through a "reinterpreted" instance is avoided by making this test a friend usage pattern:
  // Instead we construct a minimal object with null service/handler which is safe for playlist parsing.
  SubsonicPlaylistRequest request(nullptr, nullptr, SharedPtr<NetworkAccessManager>());
  playlists = request.ParsePlaylistsJson(json, &error);

  ASSERT_EQ(playlists.size(), 2);
  EXPECT_EQ(QString::fromStdString("1"), playlists[0].id);
  EXPECT_EQ(u"Favorites"_s, playlists[0].name);
  EXPECT_EQ(u"admin"_s, playlists[0].owner);
  EXPECT_EQ(3, playlists[0].song_count);
  EXPECT_EQ(10, playlists[1].song_count);
  EXPECT_TRUE(error.isEmpty());

}

TEST_F(SubsonicPlaylistRequestTest, GetPlaylistsEmptyList) {

  // An object with "playlists" but no "playlist" array is malformed (Navidrome always sends the array,
  // even when empty), so this surfaces an error rather than an empty list.
  const QJsonObject json = Parse(R"json({"subsonic-response": {"status": "ok", "playlists": {}}})json");

  QString error;
  SubsonicPlaylistRequest request(nullptr, nullptr, SharedPtr<NetworkAccessManager>());
  const QList<SubsonicPlaylistInfo> playlists = request.ParsePlaylistsJson(json, &error);

  EXPECT_EQ(playlists.size(), 0);
  EXPECT_FALSE(error.isEmpty());

}

TEST_F(SubsonicPlaylistRequestTest, GetPlaylistsEmptyArray) {

  // The proper empty case: "playlists" object with an empty "playlist" array.
  const QJsonObject json = Parse(R"json({"subsonic-response": {"status": "ok", "playlists": {"playlist": []}}})json");

  QString error;
  SubsonicPlaylistRequest request(nullptr, nullptr, SharedPtr<NetworkAccessManager>());
  const QList<SubsonicPlaylistInfo> playlists = request.ParsePlaylistsJson(json, &error);

  EXPECT_EQ(playlists.size(), 0);
  EXPECT_TRUE(error.isEmpty());

}

TEST_F(SubsonicPlaylistRequestTest, GetPlaylistsSkipsMalformedEntries) {

  const QJsonObject json = Parse(R"json(
    {
      "subsonic-response": {
        "status": "ok",
        "playlists": {
          "playlist": [
            {"name": "No id"},
            {"id": "5", "name": "Valid"},
            42
          ]
        }
      }
    }
  )json");

  QString error;
  SubsonicPlaylistRequest request(nullptr, nullptr, SharedPtr<NetworkAccessManager>());
  const QList<SubsonicPlaylistInfo> playlists = request.ParsePlaylistsJson(json, &error);

  ASSERT_EQ(playlists.size(), 1);
  EXPECT_EQ(u"Valid"_s, playlists[0].name);
  EXPECT_FALSE(error.isEmpty());

}

TEST_F(SubsonicPlaylistRequestTest, GetPlaylistSongsHappyPath) {

  const QJsonObject json = Parse(R"json(
    {
      "subsonic-response": {
        "status": "ok",
        "playlist": {
          "id": "2",
          "name": "Road trip",
          "entry": [
            {"id": "a1", "title": "Song One", "artist": "Artist", "album": "Album", "duration": 120, "bitRate": 320, "contentType": "audio/mpeg", "suffix": "mp3"},
            {"id": "a2", "title": "Song Two", "artist": "Artist", "album": "Album", "duration": 200, "contentType": "audio/ogg", "suffix": "ogg"},
            {"id": "a3", "title": "Song Three", "duration": 30}
          ]
        }
      }
    }
  )json");

  QString error, name_actual;
  SubsonicPlaylistRequest request(nullptr, nullptr, SharedPtr<NetworkAccessManager>());
  const SongList songs = request.ParsePlaylistSongsJson(json, u"Road trip"_s, &error, &name_actual);

  EXPECT_EQ(3, songs.size());
  EXPECT_EQ(u"Road trip"_s, name_actual);
  EXPECT_TRUE(error.isEmpty());
  EXPECT_EQ(u"Song One"_s, songs[0].title());
  EXPECT_TRUE(songs[0].is_valid());
  EXPECT_EQ(Song::Source::Subsonic, songs[0].source());

}

TEST_F(SubsonicPlaylistRequestTest, GetPlaylistSongsSkipsInvalidEntries) {

  const QJsonObject json = Parse(R"json(
    {
      "subsonic-response": {
        "status": "ok",
        "playlist": {
          "id": "2",
          "name": "Broken",
          "entry": [
            {"title": "No id"},
            {"id": "b1", "title": "Good song"}
          ]
        }
      }
    }
  )json");

  QString error, name_actual;
  SubsonicPlaylistRequest request(nullptr, nullptr, SharedPtr<NetworkAccessManager>());
  const SongList songs = request.ParsePlaylistSongsJson(json, u"Broken"_s, &error, &name_actual);

  ASSERT_EQ(1, songs.size());
  EXPECT_EQ(u"Good song"_s, songs[0].title());
  EXPECT_FALSE(error.isEmpty());

}

TEST_F(SubsonicPlaylistRequestTest, GetPlaylistSongsEmptyPlaylist) {

  const QJsonObject json = Parse(R"json(
    {"subsonic-response": {"status": "ok", "playlist": {"id": "3", "name": "Empty"}}}
  )json");

  QString error, name_actual;
  SubsonicPlaylistRequest request(nullptr, nullptr, SharedPtr<NetworkAccessManager>());
  const SongList songs = request.ParsePlaylistSongsJson(json, u"Empty"_s, &error, &name_actual);

  EXPECT_EQ(0, songs.size());
  EXPECT_TRUE(error.isEmpty());

}

TEST_F(SubsonicPlaylistRequestTest, ErrorObjectSurfacesError) {

  const QJsonObject json = Parse(R"json(
    {"subsonic-response": {"status": "failed", "error": {"code": 40, "message": "Wrong username or password."}}}
  )json");

  // The error object (no playlists key) should surface an error.
  QString error;
  SubsonicPlaylistRequest request(nullptr, nullptr, SharedPtr<NetworkAccessManager>());
  const QList<SubsonicPlaylistInfo> playlists = request.ParsePlaylistsJson(json, &error);

  EXPECT_EQ(0, playlists.size());
  EXPECT_FALSE(error.isEmpty());

}

}
