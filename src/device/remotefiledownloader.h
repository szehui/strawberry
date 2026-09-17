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

#ifndef REMOTEFILEDOWNLOADER_H
#define REMOTEFILEDOWNLOADER_H

#include "config.h"

#include <QObject>
#include <QList>
#include <QString>
#include <QUrl>

#include "includes/shared_ptr.h"

class QNetworkReply;
class NetworkAccessManager;

// Downloads a remote URL to a temporary local file, blocking until done.
// Knows how to resolve the "subsonic://" scheme into an authenticated stream URL
// by reading the Subsonic settings (server URL, username, password, auth method).
class RemoteFileDownloader : public QObject {
  Q_OBJECT

 public:
  explicit RemoteFileDownloader(const SharedPtr<NetworkAccessManager> network, QObject *parent = nullptr);
  ~RemoteFileDownloader() override;

  // Resolves a song URL into a downloadable URL (adds auth for subsonic:// URLs; passes others through).
  // Returns an invalid URL on failure, with error filled in.
  static QUrl ResolveUrl(const QUrl &url, QString *error = nullptr);

  // Downloads url to a uniquely-named file inside the system temp dir.
  // Blocks until finished; caller must be on a thread with a running event loop.
  // On success returns the local filename; on failure returns an empty string and fills error.
  QString DownloadBlocking(const QUrl &url, const QString &suggested_filename, QString *error = nullptr);

 private:
  const SharedPtr<NetworkAccessManager> network_;

  QList<QNetworkReply*> replies_;
};

#endif  // REMOTEFILEDOWNLOADER_H
