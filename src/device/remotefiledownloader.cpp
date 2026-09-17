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

#include <QEventLoop>
#include <QRegularExpression>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QTemporaryFile>
#include <QFile>
#include <QDir>
#include <QSettings>

#include "core/networkaccessmanager.h"
#include "core/logging.h"
#include "core/standardpaths.h"
#include "subsonic/subsonicbaserequest.h"
#include "constants/subsonicsettings.h"
#include "remotefiledownloader.h"

using namespace Qt::Literals::StringLiterals;

namespace {
constexpr int kDownloadTimeoutMs = 300000;  // 5 min for large FLAC over LAN
}

RemoteFileDownloader::RemoteFileDownloader(const SharedPtr<NetworkAccessManager> network, QObject *parent)
    : QObject(parent), network_(network) {}

RemoteFileDownloader::~RemoteFileDownloader() {

  while (!replies_.isEmpty()) {
    QNetworkReply *reply = replies_.takeFirst();
    QObject::disconnect(reply, nullptr, this, nullptr);
    if (reply->isRunning()) reply->abort();
    reply->deleteLater();
  }

}

QUrl RemoteFileDownloader::ResolveUrl(const QUrl &url, QString *error) {

  if (url.scheme() != QLatin1String(SubsonicSettings::kSettingsGroup)) {
    return url;  // Not a scheme we know - return unchanged and let the caller handle it.
  }

  // Read the Subsonic settings (same place SubsonicService::ReloadSettings does).
  QSettings s;
  s.beginGroup(QLatin1String(SubsonicSettings::kSettingsGroup));
  const QUrl server_url = s.value(QLatin1String(SubsonicSettings::kUrl)).toUrl();
  const QString username = s.value(QLatin1String(SubsonicSettings::kUsername)).toString();
  const QByteArray password_b64 = s.value(QLatin1String(SubsonicSettings::kPassword)).toByteArray();
  const int auth_method_int = s.value(QLatin1String(SubsonicSettings::kAuthMethod), 0).toInt();
  s.endGroup();

  if (!server_url.isValid()) {
    if (error) *error = u"Subsonic server URL is invalid"_s;
    return QUrl();
  }
  if (username.isEmpty() || password_b64.isEmpty()) {
    if (error) *error = u"Missing Subsonic username or password"_s;
    return QUrl();
  }

  const QString password = QString::fromUtf8(QByteArray::fromBase64(password_b64));
  const SubsonicSettings::AuthMethod auth_method = static_cast<SubsonicSettings::AuthMethod>(auth_method_int);

  using Param = QPair<QString, QString>;
  using ParamList = QList<Param>;

  // Build the authenticated stream URL: the URL path is the song id.
  const QUrl resolved = SubsonicBaseRequest::CreateUrl(server_url, auth_method, username, password, u"stream"_s, ParamList() << Param(u"id"_s, url.path()));
  return resolved;

}

QString RemoteFileDownloader::DownloadBlocking(const QUrl &url, const QString &suggested_filename, QString *error) {

  if (!url.isValid()) {
    if (error) *error = u"Invalid URL"_s;
    return QString();
  }

  const QString temp_dir = StandardPaths::WritableLocation(StandardPaths::StandardLocation::TempLocation);
  if (!QDir(temp_dir).exists()) QDir().mkpath(temp_dir);

  QString safe_name = suggested_filename;
  safe_name.replace(QRegularExpression(u"[^A-Za-z0-9._-]"_s), u"_"_s);  // sanitize
  if (safe_name.isEmpty()) safe_name = u"song"_s;
  if (safe_name.size() > 80) safe_name = safe_name.right(80);

  QTemporaryFile temp_file(temp_dir + u"/strawberry-dl-XXXXXX-"_s + safe_name);
  temp_file.setAutoRemove(true);
  if (!temp_file.open()) {
    if (error) *error = u"Could not create temporary file in "_s + temp_dir;
    return QString();
  }
  const QString filename = temp_file.fileName();
  temp_file.close();

  qLog(Info) << "RemoteFileDownloader: downloading" << url.toString(QUrl::ComponentFormattingOption::PrettyDecoded) << "to" << filename;

  QNetworkRequest request(url);
  request.setAttribute(QNetworkRequest::RedirectPolicyAttribute, QNetworkRequest::NoLessSafeRedirectPolicy);
  request.setTransferTimeout(kDownloadTimeoutMs);

  QNetworkReply *reply = network_->get(request);
  replies_ << reply;

  QEventLoop loop;
  QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
  QObject::connect(reply, &QNetworkReply::errorOccurred, &loop, [&](QNetworkReply::NetworkError) { loop.quit(); });

  loop.exec();

  const bool ok = (reply->error() == QNetworkReply::NoError);
  const QByteArray data = ok ? reply->readAll() : QByteArray();
  if (!ok && error) *error = reply->errorString();

  replies_.removeAll(reply);
  const QUrl final_url = reply->url();
  reply->deleteLater();
  Q_UNUSED(final_url);

  if (!ok || data.isEmpty()) {
    if (error && error->isEmpty()) *error = u"No data received"_s;
    qLog(Error) << "RemoteFileDownloader: download failed" << *error;
    return QString();
  }

  QFile file(filename);
  if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
    if (error) *error = u"Could not write to temporary file "_s + filename;
    return QString();
  }
  if (file.write(data) != data.size()) {
    if (error) *error = u"Short write to temporary file "_s + filename;
    file.close();
    return QString();
  }
  file.close();

  return filename;

}
