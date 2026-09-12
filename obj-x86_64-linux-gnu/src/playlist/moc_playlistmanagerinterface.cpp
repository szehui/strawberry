/****************************************************************************
** Meta object code from reading C++ file 'playlistmanagerinterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistmanagerinterface.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistmanagerinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_PlaylistManagerInterface_t {
    uint offsetsAndSizes[156];
    char stringdata0[25];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[14];
    char stringdata5[3];
    char stringdata6[5];
    char stringdata7[9];
    char stringdata8[16];
    char stringdata9[15];
    char stringdata10[16];
    char stringdata11[9];
    char stringdata12[18];
    char stringdata13[15];
    char stringdata14[10];
    char stringdata15[13];
    char stringdata16[16];
    char stringdata17[14];
    char stringdata18[6];
    char stringdata19[8];
    char stringdata20[19];
    char stringdata21[8];
    char stringdata22[19];
    char stringdata23[5];
    char stringdata24[5];
    char stringdata25[27];
    char stringdata26[16];
    char stringdata27[9];
    char stringdata28[16];
    char stringdata29[12];
    char stringdata30[12];
    char stringdata31[4];
    char stringdata32[14];
    char stringdata33[21];
    char stringdata34[11];
    char stringdata35[19];
    char stringdata36[13];
    char stringdata37[10];
    char stringdata38[15];
    char stringdata39[21];
    char stringdata40[28];
    char stringdata41[9];
    char stringdata42[4];
    char stringdata43[9];
    char stringdata44[6];
    char stringdata45[13];
    char stringdata46[5];
    char stringdata47[9];
    char stringdata48[5];
    char stringdata49[14];
    char stringdata50[27];
    char stringdata51[10];
    char stringdata52[7];
    char stringdata53[7];
    char stringdata54[6];
    char stringdata55[5];
    char stringdata56[20];
    char stringdata57[11];
    char stringdata58[4];
    char stringdata59[27];
    char stringdata60[4];
    char stringdata61[6];
    char stringdata62[19];
    char stringdata63[18];
    char stringdata64[19];
    char stringdata65[17];
    char stringdata66[15];
    char stringdata67[10];
    char stringdata68[13];
    char stringdata69[15];
    char stringdata70[24];
    char stringdata71[25];
    char stringdata72[17];
    char stringdata73[16];
    char stringdata74[17];
    char stringdata75[16];
    char stringdata76[7];
    char stringdata77[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaylistManagerInterface_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaylistManagerInterface_t qt_meta_stringdata_PlaylistManagerInterface = {
    {
        QT_MOC_LITERAL(0, 24),  // "PlaylistManagerInterface"
        QT_MOC_LITERAL(25, 26),  // "PlaylistManagerInitialized"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 18),  // "AllPlaylistsLoaded"
        QT_MOC_LITERAL(72, 13),  // "PlaylistAdded"
        QT_MOC_LITERAL(86, 2),  // "id"
        QT_MOC_LITERAL(89, 4),  // "name"
        QT_MOC_LITERAL(94, 8),  // "favorite"
        QT_MOC_LITERAL(103, 15),  // "PlaylistDeleted"
        QT_MOC_LITERAL(119, 14),  // "PlaylistClosed"
        QT_MOC_LITERAL(134, 15),  // "PlaylistRenamed"
        QT_MOC_LITERAL(150, 8),  // "new_name"
        QT_MOC_LITERAL(159, 17),  // "PlaylistFavorited"
        QT_MOC_LITERAL(177, 14),  // "CurrentChanged"
        QT_MOC_LITERAL(192, 9),  // "Playlist*"
        QT_MOC_LITERAL(202, 12),  // "new_playlist"
        QT_MOC_LITERAL(215, 15),  // "scroll_position"
        QT_MOC_LITERAL(231, 13),  // "ActiveChanged"
        QT_MOC_LITERAL(245, 5),  // "Error"
        QT_MOC_LITERAL(251, 7),  // "message"
        QT_MOC_LITERAL(259, 18),  // "SummaryTextChanged"
        QT_MOC_LITERAL(278, 7),  // "summary"
        QT_MOC_LITERAL(286, 18),  // "CurrentSongChanged"
        QT_MOC_LITERAL(305, 4),  // "Song"
        QT_MOC_LITERAL(310, 4),  // "song"
        QT_MOC_LITERAL(315, 26),  // "CurrentSongMetadataChanged"
        QT_MOC_LITERAL(342, 15),  // "PlaylistChanged"
        QT_MOC_LITERAL(358, 8),  // "playlist"
        QT_MOC_LITERAL(367, 15),  // "EditingFinished"
        QT_MOC_LITERAL(383, 11),  // "playlist_id"
        QT_MOC_LITERAL(395, 11),  // "QModelIndex"
        QT_MOC_LITERAL(407, 3),  // "idx"
        QT_MOC_LITERAL(411, 13),  // "PlayRequested"
        QT_MOC_LITERAL(425, 20),  // "Playlist::AutoScroll"
        QT_MOC_LITERAL(446, 10),  // "autoscroll"
        QT_MOC_LITERAL(457, 18),  // "PlaylistItemsAdded"
        QT_MOC_LITERAL(476, 12),  // "QList<QUuid>"
        QT_MOC_LITERAL(489, 9),  // "track_ids"
        QT_MOC_LITERAL(499, 14),  // "after_track_id"
        QT_MOC_LITERAL(514, 20),  // "PlaylistItemsRemoved"
        QT_MOC_LITERAL(535, 27),  // "PlaylistItemMetadataChanged"
        QT_MOC_LITERAL(563, 8),  // "track_id"
        QT_MOC_LITERAL(572, 3),  // "New"
        QT_MOC_LITERAL(576, 8),  // "SongList"
        QT_MOC_LITERAL(585, 5),  // "songs"
        QT_MOC_LITERAL(591, 12),  // "special_type"
        QT_MOC_LITERAL(604, 4),  // "Load"
        QT_MOC_LITERAL(609, 8),  // "filename"
        QT_MOC_LITERAL(618, 4),  // "Save"
        QT_MOC_LITERAL(623, 13),  // "playlist_name"
        QT_MOC_LITERAL(637, 26),  // "PlaylistSettings::PathType"
        QT_MOC_LITERAL(664, 9),  // "path_type"
        QT_MOC_LITERAL(674, 6),  // "Rename"
        QT_MOC_LITERAL(681, 6),  // "Delete"
        QT_MOC_LITERAL(688, 5),  // "Close"
        QT_MOC_LITERAL(694, 4),  // "Open"
        QT_MOC_LITERAL(699, 19),  // "ChangePlaylistOrder"
        QT_MOC_LITERAL(719, 10),  // "QList<int>"
        QT_MOC_LITERAL(730, 3),  // "ids"
        QT_MOC_LITERAL(734, 26),  // "SongChangeRequestProcessed"
        QT_MOC_LITERAL(761, 3),  // "url"
        QT_MOC_LITERAL(765, 5),  // "valid"
        QT_MOC_LITERAL(771, 18),  // "SetCurrentPlaylist"
        QT_MOC_LITERAL(790, 17),  // "SetActivePlaylist"
        QT_MOC_LITERAL(808, 18),  // "SetActiveToCurrent"
        QT_MOC_LITERAL(827, 16),  // "SelectionChanged"
        QT_MOC_LITERAL(844, 14),  // "QItemSelection"
        QT_MOC_LITERAL(859, 9),  // "selection"
        QT_MOC_LITERAL(869, 12),  // "ClearCurrent"
        QT_MOC_LITERAL(882, 14),  // "ShuffleCurrent"
        QT_MOC_LITERAL(897, 23),  // "RemoveDuplicatesCurrent"
        QT_MOC_LITERAL(921, 24),  // "RemoveUnavailableCurrent"
        QT_MOC_LITERAL(946, 16),  // "SetActivePlaying"
        QT_MOC_LITERAL(963, 15),  // "SetActivePaused"
        QT_MOC_LITERAL(979, 16),  // "SetActiveStopped"
        QT_MOC_LITERAL(996, 15),  // "RateCurrentSong"
        QT_MOC_LITERAL(1012, 6),  // "rating"
        QT_MOC_LITERAL(1019, 16)   // "RateCurrentSong2"
    },
    "PlaylistManagerInterface",
    "PlaylistManagerInitialized",
    "",
    "AllPlaylistsLoaded",
    "PlaylistAdded",
    "id",
    "name",
    "favorite",
    "PlaylistDeleted",
    "PlaylistClosed",
    "PlaylistRenamed",
    "new_name",
    "PlaylistFavorited",
    "CurrentChanged",
    "Playlist*",
    "new_playlist",
    "scroll_position",
    "ActiveChanged",
    "Error",
    "message",
    "SummaryTextChanged",
    "summary",
    "CurrentSongChanged",
    "Song",
    "song",
    "CurrentSongMetadataChanged",
    "PlaylistChanged",
    "playlist",
    "EditingFinished",
    "playlist_id",
    "QModelIndex",
    "idx",
    "PlayRequested",
    "Playlist::AutoScroll",
    "autoscroll",
    "PlaylistItemsAdded",
    "QList<QUuid>",
    "track_ids",
    "after_track_id",
    "PlaylistItemsRemoved",
    "PlaylistItemMetadataChanged",
    "track_id",
    "New",
    "SongList",
    "songs",
    "special_type",
    "Load",
    "filename",
    "Save",
    "playlist_name",
    "PlaylistSettings::PathType",
    "path_type",
    "Rename",
    "Delete",
    "Close",
    "Open",
    "ChangePlaylistOrder",
    "QList<int>",
    "ids",
    "SongChangeRequestProcessed",
    "url",
    "valid",
    "SetCurrentPlaylist",
    "SetActivePlaylist",
    "SetActiveToCurrent",
    "SelectionChanged",
    "QItemSelection",
    "selection",
    "ClearCurrent",
    "ShuffleCurrent",
    "RemoveDuplicatesCurrent",
    "RemoveUnavailableCurrent",
    "SetActivePlaying",
    "SetActivePaused",
    "SetActiveStopped",
    "RateCurrentSong",
    "rating",
    "RateCurrentSong2"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaylistManagerInterface[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  278,    2, 0x06,    1 /* Public */,
       3,    0,  279,    2, 0x06,    2 /* Public */,
       4,    3,  280,    2, 0x06,    3 /* Public */,
       8,    1,  287,    2, 0x06,    7 /* Public */,
       9,    1,  290,    2, 0x06,    9 /* Public */,
      10,    2,  293,    2, 0x06,   11 /* Public */,
      12,    2,  298,    2, 0x06,   14 /* Public */,
      13,    2,  303,    2, 0x06,   17 /* Public */,
      13,    1,  308,    2, 0x26,   20 /* Public | MethodCloned */,
      17,    1,  311,    2, 0x06,   22 /* Public */,
      18,    1,  314,    2, 0x06,   24 /* Public */,
      20,    1,  317,    2, 0x06,   26 /* Public */,
      22,    1,  320,    2, 0x06,   28 /* Public */,
      25,    1,  323,    2, 0x06,   30 /* Public */,
      26,    1,  326,    2, 0x06,   32 /* Public */,
      28,    2,  329,    2, 0x06,   34 /* Public */,
      32,    2,  334,    2, 0x06,   37 /* Public */,
      35,    3,  339,    2, 0x06,   40 /* Public */,
      39,    2,  346,    2, 0x06,   44 /* Public */,
      40,    2,  351,    2, 0x06,   47 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      42,    3,  356,    2, 0x0a,   50 /* Public */,
      42,    2,  363,    2, 0x2a,   54 /* Public | MethodCloned */,
      42,    1,  368,    2, 0x2a,   57 /* Public | MethodCloned */,
      46,    1,  371,    2, 0x0a,   59 /* Public */,
      48,    4,  374,    2, 0x0a,   61 /* Public */,
      52,    2,  383,    2, 0x0a,   66 /* Public */,
      53,    1,  388,    2, 0x0a,   69 /* Public */,
      54,    1,  391,    2, 0x0a,   71 /* Public */,
      55,    1,  394,    2, 0x0a,   73 /* Public */,
      56,    1,  397,    2, 0x0a,   75 /* Public */,
      59,    2,  400,    2, 0x0a,   77 /* Public */,
      62,    1,  405,    2, 0x0a,   80 /* Public */,
      63,    1,  408,    2, 0x0a,   82 /* Public */,
      64,    0,  411,    2, 0x0a,   84 /* Public */,
      65,    1,  412,    2, 0x0a,   85 /* Public */,
      68,    0,  415,    2, 0x0a,   87 /* Public */,
      69,    0,  416,    2, 0x0a,   88 /* Public */,
      70,    0,  417,    2, 0x0a,   89 /* Public */,
      71,    0,  418,    2, 0x0a,   90 /* Public */,
      72,    0,  419,    2, 0x0a,   91 /* Public */,
      73,    0,  420,    2, 0x0a,   92 /* Public */,
      74,    0,  421,    2, 0x0a,   93 /* Public */,
      75,    1,  422,    2, 0x0a,   94 /* Public */,
      77,    1,  425,    2, 0x0a,   96 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,    7,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 14,   27,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 30,   29,   31,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 33,   31,   34,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 36, QMetaType::QUuid,   29,   37,   38,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 36,   29,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::QUuid,   29,   41,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43, QMetaType::QString,    6,   44,   45,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,    6,   44,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 50,    5,   49,   47,   51,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,   11,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,   60,   61,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 66,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   76,
    QMetaType::Void, QMetaType::Int,   76,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistManagerInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlaylistManagerInterface.offsetsAndSizes,
    qt_meta_data_PlaylistManagerInterface,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaylistManagerInterface_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistManagerInterface, std::true_type>,
        // method 'PlaylistManagerInitialized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AllPlaylistsLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlaylistAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'PlaylistDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'PlaylistClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'PlaylistRenamed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'PlaylistFavorited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'CurrentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Playlist *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'CurrentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Playlist *, std::false_type>,
        // method 'ActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Playlist *, std::false_type>,
        // method 'Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SummaryTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'CurrentSongChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'CurrentSongMetadataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'PlaylistChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Playlist *, std::false_type>,
        // method 'EditingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        // method 'PlayRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'PlaylistItemsAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUuid> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUuid, std::false_type>,
        // method 'PlaylistItemsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUuid> &, std::false_type>,
        // method 'PlaylistItemMetadataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUuid, std::false_type>,
        // method 'New'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'New'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'New'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSettings::PathType, std::false_type>,
        // method 'Rename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Delete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'Close'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'Open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ChangePlaylistOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'SongChangeRequestProcessed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SetCurrentPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SetActivePlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SetActiveToCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'ClearCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShuffleCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveDuplicatesCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveUnavailableCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetActivePlaying'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetActivePaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetActiveStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RateCurrentSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'RateCurrentSong2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void PlaylistManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistManagerInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PlaylistManagerInitialized(); break;
        case 1: _t->AllPlaylistsLoaded(); break;
        case 2: _t->PlaylistAdded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 3: _t->PlaylistDeleted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->PlaylistClosed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->PlaylistRenamed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->PlaylistFavorited((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->CurrentChanged((*reinterpret_cast< std::add_pointer_t<Playlist*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->CurrentChanged((*reinterpret_cast< std::add_pointer_t<Playlist*>>(_a[1]))); break;
        case 9: _t->ActiveChanged((*reinterpret_cast< std::add_pointer_t<Playlist*>>(_a[1]))); break;
        case 10: _t->Error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->SummaryTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->CurrentSongChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 13: _t->CurrentSongMetadataChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 14: _t->PlaylistChanged((*reinterpret_cast< std::add_pointer_t<Playlist*>>(_a[1]))); break;
        case 15: _t->EditingFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 16: _t->PlayRequested((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2]))); break;
        case 17: _t->PlaylistItemsAdded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUuid>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[3]))); break;
        case 18: _t->PlaylistItemsRemoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUuid>>>(_a[2]))); break;
        case 19: _t->PlaylistItemMetadataChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[2]))); break;
        case 20: _t->New((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 21: _t->New((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2]))); break;
        case 22: _t->New((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->Load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->Save((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<PlaylistSettings::PathType>>(_a[4]))); break;
        case 25: _t->Rename((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 26: _t->Delete((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: { bool _r = _t->Close((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->Open((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->ChangePlaylistOrder((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 30: _t->SongChangeRequestProcessed((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 31: _t->SetCurrentPlaylist((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->SetActivePlaylist((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->SetActiveToCurrent(); break;
        case 34: _t->SelectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 35: _t->ClearCurrent(); break;
        case 36: _t->ShuffleCurrent(); break;
        case 37: _t->RemoveDuplicatesCurrent(); break;
        case 38: _t->RemoveUnavailableCurrent(); break;
        case 39: _t->SetActivePlaying(); break;
        case 40: _t->SetActivePaused(); break;
        case 41: _t->SetActiveStopped(); break;
        case 42: _t->RateCurrentSong((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 43: _t->RateCurrentSong2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Playlist* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Playlist* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Playlist* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Playlist* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUuid> >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUuid> >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaylistManagerInterface::*)();
            if (_t _q_method = &PlaylistManagerInterface::PlaylistManagerInitialized; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)();
            if (_t _q_method = &PlaylistManagerInterface::AllPlaylistsLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int , const QString & , const bool );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int , const QString & );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistRenamed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int , const bool );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistFavorited; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(Playlist * , const int );
            if (_t _q_method = &PlaylistManagerInterface::CurrentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(Playlist * );
            if (_t _q_method = &PlaylistManagerInterface::ActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const QString & );
            if (_t _q_method = &PlaylistManagerInterface::Error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const QString & );
            if (_t _q_method = &PlaylistManagerInterface::SummaryTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const Song & );
            if (_t _q_method = &PlaylistManagerInterface::CurrentSongChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const Song & );
            if (_t _q_method = &PlaylistManagerInterface::CurrentSongMetadataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(Playlist * );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int , const QModelIndex );
            if (_t _q_method = &PlaylistManagerInterface::EditingFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const QModelIndex , const Playlist::AutoScroll );
            if (_t _q_method = &PlaylistManagerInterface::PlayRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int , const QList<QUuid> & , const QUuid );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistItemsAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int , const QList<QUuid> & );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistItemsRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const int , const QUuid );
            if (_t _q_method = &PlaylistManagerInterface::PlaylistItemMetadataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
    }
}

const QMetaObject *PlaylistManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistManagerInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlaylistManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void PlaylistManagerInterface::PlaylistManagerInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlaylistManagerInterface::AllPlaylistsLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlaylistManagerInterface::PlaylistAdded(const int _t1, const QString & _t2, const bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistManagerInterface::PlaylistDeleted(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlaylistManagerInterface::PlaylistClosed(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlaylistManagerInterface::PlaylistRenamed(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlaylistManagerInterface::PlaylistFavorited(const int _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlaylistManagerInterface::CurrentChanged(Playlist * _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 9
void PlaylistManagerInterface::ActiveChanged(Playlist * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PlaylistManagerInterface::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PlaylistManagerInterface::SummaryTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PlaylistManagerInterface::CurrentSongChanged(const Song & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PlaylistManagerInterface::CurrentSongMetadataChanged(const Song & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PlaylistManagerInterface::PlaylistChanged(Playlist * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void PlaylistManagerInterface::EditingFinished(const int _t1, const QModelIndex _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PlaylistManagerInterface::PlayRequested(const QModelIndex _t1, const Playlist::AutoScroll _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PlaylistManagerInterface::PlaylistItemsAdded(const int _t1, const QList<QUuid> & _t2, const QUuid _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PlaylistManagerInterface::PlaylistItemsRemoved(const int _t1, const QList<QUuid> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void PlaylistManagerInterface::PlaylistItemMetadataChanged(const int _t1, const QUuid _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
