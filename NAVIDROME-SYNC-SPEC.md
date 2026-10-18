# Navidrome Playlist Sync — Implementation Spec

## Goal

Enable batch sync of playlists from a Navidrome (Subsonic-compatible) server down into Strawberry's local playlist database. Re-syncs update in place without creating duplicates. The Subsonic API layer (`SubsonicPlaylistRequest`, `SubsonicService`) is already complete — this spec covers the remaining playlist-manager and UI layers.

## Architecture Overview

```
User clicks "Sync"
        │
        ▼
 MainWindow::SyncNavidromePlaylists()
        │
        ├─► SubsonicService::GetPlaylists()  ─── already exists
        │
        ▼
 MainWindow::NavidromePlaylistsReceived()
        │
        ├─ For each remote playlist:
        │     ├─ Look up local playlist by nav_id (via PlaylistBackend)
        │     ├─ If not found → PlaylistManager::New(name, songs, special_type)
        │     └─ If found → update in place (clear + re-insert items)
        │
        ▼
 MainWindow::NavidromeSyncFinished()  ──► show summary
```

## 1. Schema Change

### New table: `navidrome_playlist_links`

Maps a local Strawberry playlist to a remote Navidrome playlist.

```sql
CREATE TABLE IF NOT EXISTS navidrome_playlist_links (
  local_playlist_id INTEGER NOT NULL,   -- ROWID in playlists table
  remote_playlist_id TEXT NOT NULL,     -- Navidrome playlist ID
  remote_playlist_name TEXT NOT NULL,   -- cached name for display
  last_synced INTEGER NOT NULL DEFAULT 0, -- unix timestamp
  PRIMARY KEY (local_playlist_id, remote_playlist_id)
);
```

**File**: `data/schema/schema-24.sql` (next available number)

**Rationale**: Using a dedicated mapping table rather than overloading `special_type` on the `playlists` table keeps concerns separate and allows for cleaner queries (e.g., "delete all remote links for local playlist X").

## 2. PlaylistBackend Additions

**File**: `src/playlist/playlistbackend.h` / `playlistbackend.cpp`

### New methods

```cpp
// Create a link between a local playlist and a remote Navidrome playlist
void LinkNavidromePlaylist(const int local_playlist_id, const QString &remote_playlist_id, const QString &remote_playlist_name);

// Remove the link for a given local playlist (e.g., when user unsyncs)
void UnlinkNavidromePlaylist(const int local_playlist_id);

// Get the remote playlist ID for a local playlist, or empty QString if not synced
QString GetNavidromePlaylistId(const int local_playlist_id);

// Get all local playlists linked to Navidrome (for sync-all)
QList<QPair<int, QString>> GetNavidromeLinkedPlaylists();  // (local_id, remote_id)

// Update the last_synced timestamp
void UpdateNavidromeLastSynced(const int local_playlist_id);
```

### Implementation notes

- All methods use `database_->Connect()` + `database_->Mutex()` like the rest of the backend.
- `LinkNavidromePlaylist` uses `INSERT OR REPLACE` (SQLite upsert).

## 3. PlaylistManager Additions

**File**: `src/playlist/playlistmanager.h` / `playlistmanager.cpp`

### New method

```cpp
// Sync songs into an existing playlist (clear + re-insert)
// If the playlist was not linked, creates the link.
void SyncPlaylistFromNavidrome(const int local_playlist_id, const QString &remote_playlist_id, const QString &remote_playlist_name, const SongList &songs);
```

### Implementation notes

- Clears existing items via `playlist_backend_->SavePlaylistItems(id, {})` or equivalent.
- Inserts new songs via `InsertSongs(id, songs)`.
- Calls `playlist_backend_->LinkNavidromePlaylist(...)` to maintain the mapping.
- Emits appropriate signals so the UI refreshes.

## 4. MainWindow UI Wiring

**File**: `src/core/mainwindow.cpp` / `mainwindow.h`

### New slots

```cpp
void SyncNavidromePlaylists();
void NavidromePlaylistsReceived(const SubsonicPlaylistInfoList &playlists, const QString &error);
void NavidromePlaylistSongsReceived(const SongList &songs, const QString &playlist_name, const QString &error);
```

### Signal connections (around line 824, near existing subsonic connections)

```cpp
QObject::connect(&*subsonicservice, &SubsonicService::PlaylistsReceived, this, &MainWindow::NavidromePlaylistsReceived);
QObject::connect(&*subsonicservice, &SubsonicService::PlaylistSongsReceived, this, &MainWindow::NavidromePlaylistSongsReceived);
```

### SyncNavidromePlaylists() flow

```cpp
void MainWindow::SyncNavidromePlaylists() {

  if (SubsonicServicePtr subsonicservice = app_->streaming_services()->Service<SubsonicService>()) {
    subsonicservice->GetPlaylists();
  }

}
```

### NavidromePlaylistsReceived() flow

```cpp
void MainWindow::NavidromePlaylistsReceived(const SubsonicPlaylistInfoList &playlists, const QString &error) {

  if (!error.isEmpty()) {
    QMessageBox::warning(this, tr("Error"), tr("Failed to get playlists from Navidrome server: %1").arg(error));
    return;
  }

  if (playlists.isEmpty()) {
    QMessageBox::information(this, tr("Sync Navidrome playlists"), tr("There are no playlists on the Navidrome server."));
    return;
  }

  // TODO: Show a progress dialog (QProgressDialog)
  // For each playlist, fetch songs and sync
  for (const SubsonicPlaylistInfo &playlist : playlists) {
    if (SubsonicServicePtr subsonicservice = app_->streaming_services()->Service<SubsonicService>()) {
      subsonicservice->GetPlaylistSongs(playlist.id, playlist.name);
    }
  }

}
```

### NavidromePlaylistSongsReceived() flow

```cpp
void MainWindow::NavidromePlaylistSongsReceived(const SongList &songs, const QString &playlist_name, const QString &error) {

  if (!error.isEmpty()) {
    qLog(Error) << "Failed to sync Navidrome playlist" << playlist_name << error;
    return;
  }

  PlaylistBackend *playlist_backend = app_->playlist_backend().get();

  // Find local playlist by matching the remote playlist name
  // We need the remote ID — pass it through or look it up
  // Option A: Track pending sync state in a member variable
  // Option B: Use the existing PlaylistManager to find by name

  // Simple approach: try to find a local playlist with the same name
  const QList<int> ids = app_->playlist_manager()->playlist_ids();
  int local_id = -1;
  for (int id : ids) {
    if (app_->playlist_manager()->playlist_name(id) == playlist_name) {
      local_id = id;
      break;
    }
  }

  if (local_id == -1) {
    // No existing local playlist with this name — create new one
    app_->playlist_manager()->New(playlist_name, songs, QStringLiteral("navidrome"));
  } else {
    // Update existing playlist in place
    // TODO: Call SyncPlaylistFromNavidrome (once implemented)
  }

}
```

## 5. UI Trigger Points

### Option A: Button in the main window toolbar/menu

Add a menu action **Tools → Sync Navidrome Playlists** that calls `SyncNavidromePlaylists()`.

### Option B: Button in the Subsonic/streaming settings page

Add a "Sync all playlists" button next to the existing "Import" button in the Subsonic settings tab.

**Recommendation**: Option B is more discoverable — users already go to the Subsonic settings to configure their server.

## 6. State Tracking

`MainWindow` needs to track which remote playlist each `GetPlaylistSongs` request corresponds to. Add a member:

```cpp
// In mainwindow.h:
QHash<QString, QString> navidrome_sync_pending_;  // remote_id → remote_name
int navidrome_sync_total_ = 0;
int navidrome_sync_completed_ = 0;
```

When calling `GetPlaylistSongs`, store the mapping. In `NavidromePlaylistSongsReceived`, look up the remote ID from the pending map to pass to the backend for linking.

## 7. Conflict Handling

### Same name, different remote ID

If a local playlist has the same name but a different `remote_playlist_id` in `navidrome_playlist_links`, treat it as a new playlist. Append a suffix: `"<name> (Navidrome)"`.

### Remote playlist deleted on server

On sync, check if any locally-linked playlists have no corresponding remote playlist. Optionally offer to remove the local playlist or just leave it (user's choice). For v1, leave them — don't delete user data without explicit action.

### Local playlist has been modified since last sync

We overwrite unconditionally — the remote is the source of truth during a sync. This matches user expectation for "sync down".

## 8. Error Aggregation

Collect per-playlist errors in a `QStringList`. After all playlists are processed, show a summary dialog if any errors occurred:

```
Some playlists failed to sync:
  • "Rock Mix": Network timeout
  "Synced 5 of 7 playlists."
```

## 9. Build Integration

### CMakeLists.txt

No new source files needed if we add methods to existing classes. If we create a new helper class (e.g., `NavidromePlaylistSyncer`), add:

```cmake
optional_source(HAVE_SUBSONIC
  SOURCES
    src/subsonic/subsonicservice.cpp
    src/subsonic/subsonicplaylistrequest.cpp
    ...
  HEADERS
    src/subsonic/subsonicservice.h
    src/subsonic/subsonicplaylistrequest.h
    ...
)
```

### tests/CMakeLists.txt

If we extract the sync logic into a testable class (e.g., `NavidromePlaylistSyncer` with pure sync/mapping logic), add a test file:

```cmake
add_test_file(navidrome_playlist_syncer_test test_gui_main)
```

## 10. Migration Path for Existing Playlists

Users who previously imported playlists via `ImportSubsonicPlaylist()` have local playlists with no link. On first sync:

1. The sync code checks for name matches.
2. If a local playlist name matches a remote playlist name, auto-link it.
3. If no match, create a new playlist (old one remains as-is).

No data migration needed in the DB schema — the new table starts empty.

## 11. Future Enhancements (Out of Scope for v1)

- **Auto-sync on startup**: setting to trigger sync automatically when Strawberry starts.
- **Sync interval**: periodic background sync.
- **Bi-directional sync**: push local playlist changes back to Navidrome via `createPlaylist` / `updatePlaylist` Subsonic API calls.
- **Per-playlist sync toggle**: allow users to selectively enable/disable sync for individual playlists.
- **Conflict resolution UI**: if local playlist has changes since last sync, prompt user before overwriting.

## 12. Files to Create/Modify

| File | Change |
|------|--------|
| `data/schema/schema-24.sql` | New — `navidrome_playlist_links` table |
| `src/core/database.cpp` | Register new table in table list |
| `src/playlist/playlistbackend.h` | Add 5 method declarations |
| `src/playlist/playlistbackend.cpp` | Implement 5 methods |
| `src/playlist/playlistmanager.h` | Add `SyncPlaylistFromNavidrome` declaration |
| `src/playlist/playlistmanager.cpp` | Implement sync method |
| `src/core/mainwindow.h` | Add slots + state members |
| `src/core/mainwindow.cpp` | Implement sync logic + UI wiring |
| `src/settings/dialogs/subsonicsettingspage.ui` | Add "Sync all playlists" button (optional) |
| `src/settings/dialogs/subsonicsettingspage.cpp` | Wire button to sync trigger |

## 13. Testing Strategy

- **Unit test**: `NavidromePlaylistSyncer` mapping logic (link creation, lookup, conflict detection) — no network needed.
- **Integration test**: `SubsonicPlaylistRequest` already has 8/8 tests. Add a test for the sync orchestration in `MainWindow` (or extract to testable helper).
- **Manual test**: configure Navidrome server, sync playlists, verify local playlists created, re-sync, verify no duplicates.
