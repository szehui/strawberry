# Navidrome (Subsonic) Playlists in Strawberry — Implementation Plan

> **For Hermes:** Use subagent-driven-development skill to implement this plan task-by-task.

**Goal:** Let the user browse the playlists that exist on their Navidrome server (via its Subsonic-compatible API), import them into Strawberry's existing Playlists interface, and sync an imported playlist's audio tracks onto an iPod Classic — one-way, Navidrome as source of truth.

**Architecture:** New `SubsonicPlaylistRequest` class (mirrors existing `SubsonicRequest` fetch pattern) talks to `getPlaylists` / `getPlaylist` endpoints. A `SubsonicPlaylistManager` on `SubsonicService` exposes the list; `PlaylistListContainer` gains an "Import from Navidrome" action that fetches each playlist's songs (as `Song`s with `subsonic://` URLs) and calls `PlaylistManager::New(name, songs)`. iPod sync reuses the existing `OrganizeDialog` → `MusicStorage::CopyJob.playlist_` → `GPodDevice` playlist path, extended to download streaming tracks to a temp dir before handing them to the copy pipeline.

**Tech Stack:** C++17, Qt 6.4+ (QNetworkAccessManager, QJson*), existing Strawberry `Subsonic` module, libgpod (already integrated), GTest for parsing tests.

---

## Requirements (confirmed by user)

1. **Browse** playlists that exist on Navidrome. (Only browsing — no create/edit.)
2. Playlists appear in the **existing Playlists interface** (left sidebar), i.e. imported as native Strawberry playlists.
3. **Sync imported playlists to iPod Classic** (libgpod path).
4. Sync direction: **one-way**, Navidrome → iPod, re-sync overwrites the iPod playlist of the same name.
5. Downloads for iPod sync: **temp dir, deleted after each sync** (accepts re-downloading).
6. Auth: username/password (Subsonic MD5-salt / hex auth — already implemented, reuse).
7. Smart playlists: Naivdrome's smart playlists are NOT exposed over the Subsonic API (`getPlaylists` only returns regular playlists). v1 handles whatever the API returns; smart-playlist support would need Navidrome's proprietary API and is out of scope for v1.

## Current context / key codebase facts

- Navidrome speaks the Subsonic REST API at `<server>/rest/<endpoint>.view`. Strawberry already auths and parses JSON against this in `src/subsonic/`.
- **No playlist calls exist today** — `grep getPlaylists` on the Subsonic side is empty. This is a greenfield addition inside `src/subsonic/`.
- `Song` objects for Subsonic get a `Song::Source::Subsonic` source and a `subsonic://<id>` URL; playback resolves via `SubsonicUrlHandler::StartLoading` → `rest/stream.view?id=...`.
- `SubsonicBaseRequest::CreateUrl(resource_name, params)` handles auth/hash/URL-building for any endpoint — a playlist fetcher only needs to call it with `u"getPlaylists"` / `u"getPlaylist"`.
- `MainWindow::PlaylistCopyToDevice` (src/core/mainwindow.cpp:3034) builds a `SongList` from the current playlist but **skips non-local songs** (`!song.url().isLocalFile()` → `continue`). This is the blocker for streaming tracks and must change.
- `OrganizeDialog::SetPlaylist(name)` (src/organize/organizedialog.cpp:458) sets the playlist name that flows into `Organize` → `CopyJob.playlist_`.
- `GPodDevice::CopyToStorage` (src/device/gpoddevice.cpp:270-282) already creates the iPod playlist by name and appends the track. **No gpod changes needed.**
- `MusicStorage::CopyJob` has the `playlist_` field already (src/core/musicstorage.h:74).
- Subsonic songs stream; they never exist as files, so iPod copy needs a real file at `job.source_`.

---

## Proposed approach

### Phase 1 — Subsonic playlist retrieval (backend)

**Task 1: Add playlist data plumbing to `SubsonicBaseRequest`/service headers**

Files:
- Create: `src/subsonic/subsonicplaylistrequest.h`
- Create: `src/subsonic/subsonicplaylistrequest.cpp`
- Modify: `src/CMakeLists.txt` — register both files next to the subsonic block (follow the existing `optional_source(HAVE_SUBSONIC ...)` pattern — search for `subsonicrequest.cpp` to find the block).

Interface:

```cpp
class SubsonicPlaylistRequest : public SubsonicBaseRequest {
  Q_OBJECT
 public:
  struct PlaylistInfo {
    QString id;
    QString name;
    QString owner;
    int song_count;
    bool owner_is_user;  // playlist.owner == username()
  };
  explicit SubsonicPlaylistRequest(SubsonicService *service, SubsonicUrlHandler *url_handler, const SharedPtr<NetworkAccessManager> network, QObject *parent = nullptr);

  void GetPlaylists();   // emits PlaylistsReceived()
  void GetPlaylistSongs(const QString &playlist_id);  // emits SongsReceived(SongList, name, error)

 Q_SIGNALS:
  void PlaylistsReceived(const QList<PlaylistInfo> &playlists, const QString &error);
  void SongsReceived(const SongList &songs, const QString &playlist_name, const QString &error);

 private:
  // One-shot request pattern like SubsonicService::songs_request_: no queue needed,
  // playlists are a single getPlaylists call; getPlaylist is a single call per playlist.
  QList<QNetworkReply*> replies_;
  ...
};
```

Parsing (this is the part worth testing):
- `getPlaylists` reply → `subsonic-response` → `playlists` (object) → `playlist` (array of {id, name, songCount, owner, ...}). Name vs owner checks mirror `SubsonicRequest::AlbumsReplyReceived` defensive style: emit `Error(...)` and skip entries rather than fail the whole list.
- `getPlaylist?id=<id>` reply → `subsonic-response` → `playlist` (object) → `entry` (array of song objects). Each entry parses with the SAME schema as `SubsonicRequest::ParseSong` (id/title/artist/album/duration/size/suffix/...). **Refactor `ParseSong` into `SubsonicBaseRequest`** (it only depends on the supplied JSON + cover/created params) so both request classes share it — keeps `getPlaylist` song parsing identical to album parsing.
- The playlist entry has no `albumId`/`album` in some servers; when absent, leave those fields empty rather than erroring (match Navidrome behavior: it does include them, but be defensive like other parsers).

**Task 2: Wire `SubsonicPlaylistRequest` into `SubsonicService`**

Files:
- Modify: `src/subsonic/subsonicservice.h` — add `SubsonicPlaylistRequestPtr playlist_request_;`, `void GetPlaylists();`, `void GetPlaylistSongs(const QString &playlist_id);` and pass-through getters. Add signals forwarding `PlaylistsReceived`/`SongsReceived` to the UI layer.
- Modify: `src/subsonic/subsonicservice.cpp` — lazy-create the request like `songs_request_` (new instance per fetch, delete on completion — see `ResetSongsRequest` precedent).

**Task 3: Unit tests for JSON parsing**

Files:
- Create: `tests/src/subsonicplaylistrequest_test.cpp`
- Modify: `tests/CMakeLists.txt` — add `add_test_file(subsonicplaylistrequest_test.cpp false)`.

Test cases (static/feed-parser tests, no network — keep `lyrics_live_tests` precedent in mind; these should be offline):
- `getPlaylists` happy path: 2 playlists parsed with id/name/owner/songCount.
- Empty playlist list → no results, no error.
- Malformed entry (missing id) → skipped, no error, others still parsed.
- `getPlaylist` happy path: 3 entries parsed into valid `Song`s with source Subsonic, correct ids.
- Entry missing required fields → error recorded, valid entries retained.
- Auth/HTTP error JSON (`subsonic-response.error.code/message`) → error surfaced with message.

Verification:

```bash
cmake -S /home/sze/strawberry -B /home/sze/strawberry/build
cmake --build /home/sze/strawberry/build --target subsonicplaylistrequest_test --parallel
/home/sze/strawberry/build/tests/subsonicplaylistrequest_test
# Expected: all tests pass
```

Commit: `SubsonicPlaylistRequest: add getPlaylists and getPlaylist support`

---

### Phase 2 — UI: import into the existing Playlists interface

**Task 4: "Import from Navidrome" dialog listing server playlists**

Files:
- Create: `src/subsonic/subsonicplaylistimportdialog.h`
- Create: `src/subsonic/subsonicplaylistimportdialog.cpp`
- Create: `src/subsonic/subsonicplaylistimportdialog.ui`
- Modify: `src/CMakeLists.txt` — add to the same subsonic block + `qt_wrap_ui` if used by other .ui files in that block (check how `streaming` .ui files are wired).

Dialog behavior:
- `QListWidget` (or QTreeWidget) of playlists from `getPlaylists` with columns: name, # songs, owner (mark **(mine)** when `owner == username_`).
- Multi-select: checkboxes (default checked for user-owned playlists only).
- Buttons: "Import selected" / Close.
- On confirm, iterates the selected playlist ids, calls `service->GetPlaylistSongs(id)` for each, aggregates results, and emits a single signal per imported playlist:

```cpp
Q_SIGNALS:
  void ImportPlaylist(const QString &name, const SongList &songs);
```

- Errors per playlist are collected and shown in a summary label (don't abort remaining imports).

**Task 5: Hook the import into the Playlists sidebar**

Files:
- Modify: `src/playlist/playlistlistcontainer.h` / `.cpp` — add `ImportFromSubsonicClicked()` private slot; inside only `#ifdef HAVE_SUBSONIC`.
- Modify: `src/playlist/playlistlistcontainer.cpp` — in `contextMenuEvent`, when the service is configured, append a context-menu item `tr("Import from Subsonic server...")`. Also wire app_->streaming_services() acquisition — pass `Application` accessor through `Init()` or fetch the singleton the same way other top-level widgets do (follow how `PlaylistListContainer` already receives collaborators via `Init()`; best to extend `Init()` signature — one-touch change, update the call site in `src/core/mainwindow.cpp:517`).

Implementation of import handler:

```cpp
void PlaylistListContainer::SubsonicPlaylistImported(const QString &name, const SongList &songs) {
  // Native playlist with subsonic:// items; PlaylistManager handles stream URLs fine.
  playlist_manager_->New(name, songs);
}
```

- `PlaylistManager::New` (`src/playlist/playlistmanager.cpp`, line ~98 in header) accepts arbitrary `SongList`; `StreamPlaylistItem`/`StreamServicePlaylistItem` handle non-local sources, so `subsonic://` items land as playable playlist rows. Verify by clicking one and confirming playback via `SubsonicUrlHandler`.

Verification (manual):

```bash
cmake --build /home/sze/strawberry/build --parallel
./build/strawberry
# Settings → Subsonic: enter server URL + credentials; Save
# In Playlists sidebar: right-click → "Import from Subsonic server..."
# Confirm dialog lists your Navidrome playlists; import one; it appears in sidebar
# Double-click a track → it streams and plays
```

Commit: `Subsonic: import Navidrome playlists into playlist list`

---

### Phase 3 — iPod sync for Navidrome playlist

**Task 6: Allow streaming songs in Copy to Device**

Files:
- Modify: `src/core/mainwindow.cpp` `PlaylistCopyToDevice()` (line ~3034): remove/loosen the `song.url().isLocalFile()` filter. Keep the `song.is_valid()` check. For Subsonic songs, set a marker on the job so the organize step knows it must download first — see Task 7 mechanism.
- Verify `OrganizeDialog::SetSongs` doesn't itself filter non-local songs (check `src/organize/organizedialog.cpp` — if it drops them, the filter must move to per-job download handling rather than being removed here).
- Modify: `src/organize/organize.cpp` — in the copy loop, for songs where `url_` isn't a local file AND source is Subsonic, first perform a blocking download of `rest/stream.view?id=<song_id>` to a `QTemporaryDir` file, then point `job.source_` at that file. Download helper goes in `SubsonicService` or a small new `SubsonicDownloader` class so the organize task doesn't own network logic:

```cpp
// subsonicdownloader.h
class SubsonicDownloader : public QObject {
  // Synchronous download with QEventLoop (organize runs on its own thread — acceptable here;
  // note thread affinity in code comment). Returns local file path or empty + error.
  QString DownloadToTempDir(const Song &song, QString &error_text);
};
```

- Delete-all after sync: `Organize` destructor / finish path removes the temp dir it created (track `QTemporaryDir *temp_dir_` member; delete in `Finish()`).

Verification:

```bash
# Manual: with an iPod mounted and Navidrome reachable:
# 1. Import a playlist (Phase 2)
# 2. Select the playlist → Copy to device...
# 3. Choose the iPod as destination; confirm files stream to temp, then copy
# 4. Eject; on the iPod, Music→Playlists shows the playlist name with all tracks
```

**Task 7: One-way re-sync (overwrite iPod playlist)**

Current behavior when a playlist with the same name already exists: `gpoddevice.cpp:271-282` looks up by name and **appends** — re-syncing after Navidrome changes would duplicate tracks. Fix inside the gpod path:
- Modify: `src/device/gpoddevice.cpp` — when `job.playlist_` names an EXISTING playlist and an env-of-record flag is set (or simply: when the incoming track is the first of a batch — the `Organize` class can pass `job.options.flags` or a new `CopyJob` bool `playlist_replace_` — add the field to `MusicStorage::CopyJob`), clear the existing playlist first: `itdb_playlist_remove_tracks(playlist)` (libgpod function to empty a playlist) before re-adding.
- Modify: `src/core/musicstorage.h` — add `bool playlist_replace_;` defaulted `false` to `CopyJob` (keeps all other call sites untouched).
- Modify: `src/organize/organize.cpp` — set `job.playlist_replace_ = true` when the copy originates from the Navidrome-import re-sync UI entry point (Task 8), false otherwise (regular "Copy to device" keeps append semantics? — see Open Question 2; default proposal: replace whenever the job's playlist name matches an existing iPod playlist AND the flag is set by the sync flow).

**Task 8: Sync button + change detection (lightweight)**

Files:
- Modify: `src/playlist/playlistlistcontainer.cpp` — for playlists imported from Subsonic (track imported-from-server provenance — simplest: remember names in a `Settings` group `subsonic_playlists` with last-synced song-count/hash), add a context action `tr("Sync to device...")` that:
  1. Re-fetches `getPlaylist?id=...` and compares against the last-synced hash (difference only matters for display/prompt, not for correctness).
  2. Calls the same download+copy flow but with `playlist_replace_ = true` for that playlist name only.
- Because sync is one-way and overwrite-per-name, no merge/diff bookkeeping on the iPod side is needed beyond the name.

Verification: manual — modify the playlist on Navidrome, hit Sync in Strawberry, verify the iPod playlist updates to match.

Commit: `Organize: support copying streaming tracks to devices with playlist replace`

---

## Files likely to change (summary)

| Phase | Create | Modify |
|---|---|---|
| 1 | `src/subsonic/subsonicplaylistrequest.{h,cpp}`, `tests/src/subsonicplaylistrequest_test.cpp` | `src/CMakeLists.txt`, `src/subsonic/subsonicservice.{h,cpp}`, `src/subsonic/subsonicbaserequest.{h,cpp}` (ParseSong hoist), `src/subsonic/subsonicrequest.cpp` (dedupe), `tests/CMakeLists.txt` |
| 2 | `src/subsonic/subsonicplaylistimportdialog.{h,cpp,ui}` | `src/playlist/playlistlistcontainer.{h,cpp}`, `src/core/mainwindow.cpp` (Init call site) |
| 3 | `src/subsonic/subsonicdownloader.{h,cpp}` | `src/core/mainwindow.cpp`, `src/core/musicstorage.h`, `src/organize/organize.cpp`, `src/device/gpoddevice.cpp` |

## Risks and tradeoffs

- **Temp-download sync is slow** for big playlists (whole file streams to disk then to iPod). Accepted by user.
- **ItunesDB write safety**: itdb writes happen in `FinishCopy` (already on a job thread); the new playlist-clear path must run under the same `db_busy_` mutex as CopyToStorage — note this when editing gpoddevice.cpp.
- **`getPlaylist` missing album metadata**: `Song::is_valid()` likely requires title; `ParseSong` treats missing `albumId`/`album`/`artist` as empty strings, which sorts/looks odd but plays. Acceptable.
- **Navidrome quirks**: Navidrome returns string ids everywhere (unlike some Subsonic numeric ids), but the parser already handles both string and int id forms — reuse that.
- **Concurrent downloads**: implement serial downloads first (simpler, avoids server load); parallelism is a later optimization.
- **Smart playlists**: not exposed via Subsonic API; if the user later wants them, a second fetch layer hitting Navidrome's `/api/smartplaylist` endpoints would be a separate feature.

## Open questions (to resolve during implementation, not blocking)

1. **Auth method for download URL**: streaming uses the same MD5/hex auth as other calls — no new auth needed. Confirmed by design.
2. **Replace-vs-append semantics for regular (non-sync) copies of a playlist with an existing name**: defaulting to replace-when-flagged (sync flow) and append-when-not. If user complains, revisit.
3. **Where download progress shows**: v1 uses the existing Organize task progress bar; a separate per-file progress lives in the TaskManager already — reuse it.

## Validation checklist (end-to-end)

- [ ] Unit tests: `subsonicplaylistrequest_test` passes.
- [ ] `cmake --build build --target build_tests` builds all tests; `ctest -V` green in `build/`.
- [ ] Full build `cmake --build build --parallel` succeeds with `-DBUILD_WERROR=ON`.
- [ ] clang-format on all touched files (repo `.clang-format`).
- [ ] Manual: import playlist → appears in sidebar → plays from it.
- [ ] Manual: iPod Classic mounted → sync imported playlist → tracks present, playlist present, no duplicate entries after re-sync.
- [ ] Manual: after changing the Navidrome playlist, re-sync replaces (no dupes).
