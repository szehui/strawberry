CREATE TABLE IF NOT EXISTS navidrome_playlist_links (
  local_playlist_id INTEGER NOT NULL,
  remote_playlist_id TEXT NOT NULL,
  remote_playlist_name TEXT NOT NULL,
  last_synced INTEGER NOT NULL DEFAULT 0,
  PRIMARY KEY (local_playlist_id, remote_playlist_id)
);

UPDATE schema_version SET version=30;
