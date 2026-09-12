/****************************************************************************
** Meta object code from reading C++ file 'playlistmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistmanager.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlaylistManager_t {
    uint offsetsAndSizes[134];
    char stringdata0[16];
    char stringdata1[4];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[9];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[5];
    char stringdata8[9];
    char stringdata9[5];
    char stringdata10[3];
    char stringdata11[14];
    char stringdata12[27];
    char stringdata13[10];
    char stringdata14[11];
    char stringdata15[7];
    char stringdata16[9];
    char stringdata17[9];
    char stringdata18[9];
    char stringdata19[7];
    char stringdata20[6];
    char stringdata21[5];
    char stringdata22[20];
    char stringdata23[11];
    char stringdata24[4];
    char stringdata25[19];
    char stringdata26[18];
    char stringdata27[19];
    char stringdata28[17];
    char stringdata29[15];
    char stringdata30[10];
    char stringdata31[17];
    char stringdata32[13];
    char stringdata33[15];
    char stringdata34[24];
    char stringdata35[25];
    char stringdata36[27];
    char stringdata37[4];
    char stringdata38[6];
    char stringdata39[11];
    char stringdata40[12];
    char stringdata41[5];
    char stringdata42[4];
    char stringdata43[9];
    char stringdata44[8];
    char stringdata45[7];
    char stringdata46[12];
    char stringdata47[23];
    char stringdata48[8];
    char stringdata49[18];
    char stringdata50[18];
    char stringdata51[21];
    char stringdata52[10];
    char stringdata53[7];
    char stringdata54[6];
    char stringdata55[16];
    char stringdata56[7];
    char stringdata57[17];
    char stringdata58[17];
    char stringdata59[17];
    char stringdata60[16];
    char stringdata61[17];
    char stringdata62[22];
    char stringdata63[18];
    char stringdata64[22];
    char stringdata65[27];
    char stringdata66[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaylistManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaylistManager_t qt_meta_stringdata_PlaylistManager = {
    {
        QT_MOC_LITERAL(0, 15),  // "PlaylistManager"
        QT_MOC_LITERAL(16, 3),  // "New"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 4),  // "name"
        QT_MOC_LITERAL(26, 8),  // "SongList"
        QT_MOC_LITERAL(35, 5),  // "songs"
        QT_MOC_LITERAL(41, 12),  // "special_type"
        QT_MOC_LITERAL(54, 4),  // "Load"
        QT_MOC_LITERAL(59, 8),  // "filename"
        QT_MOC_LITERAL(68, 4),  // "Save"
        QT_MOC_LITERAL(73, 2),  // "id"
        QT_MOC_LITERAL(76, 13),  // "playlist_name"
        QT_MOC_LITERAL(90, 26),  // "PlaylistSettings::PathType"
        QT_MOC_LITERAL(117, 9),  // "path_type"
        QT_MOC_LITERAL(127, 10),  // "SaveWithUI"
        QT_MOC_LITERAL(138, 6),  // "Rename"
        QT_MOC_LITERAL(145, 8),  // "new_name"
        QT_MOC_LITERAL(154, 8),  // "Favorite"
        QT_MOC_LITERAL(163, 8),  // "favorite"
        QT_MOC_LITERAL(172, 6),  // "Delete"
        QT_MOC_LITERAL(179, 5),  // "Close"
        QT_MOC_LITERAL(185, 4),  // "Open"
        QT_MOC_LITERAL(190, 19),  // "ChangePlaylistOrder"
        QT_MOC_LITERAL(210, 10),  // "QList<int>"
        QT_MOC_LITERAL(221, 3),  // "ids"
        QT_MOC_LITERAL(225, 18),  // "SetCurrentPlaylist"
        QT_MOC_LITERAL(244, 17),  // "SetActivePlaylist"
        QT_MOC_LITERAL(262, 18),  // "SetActiveToCurrent"
        QT_MOC_LITERAL(281, 16),  // "SelectionChanged"
        QT_MOC_LITERAL(298, 14),  // "QItemSelection"
        QT_MOC_LITERAL(313, 9),  // "selection"
        QT_MOC_LITERAL(323, 16),  // "SetCurrentOrOpen"
        QT_MOC_LITERAL(340, 12),  // "ClearCurrent"
        QT_MOC_LITERAL(353, 14),  // "ShuffleCurrent"
        QT_MOC_LITERAL(368, 23),  // "RemoveDuplicatesCurrent"
        QT_MOC_LITERAL(392, 24),  // "RemoveUnavailableCurrent"
        QT_MOC_LITERAL(417, 26),  // "SongChangeRequestProcessed"
        QT_MOC_LITERAL(444, 3),  // "url"
        QT_MOC_LITERAL(448, 5),  // "valid"
        QT_MOC_LITERAL(454, 10),  // "InsertUrls"
        QT_MOC_LITERAL(465, 11),  // "QList<QUrl>"
        QT_MOC_LITERAL(477, 4),  // "urls"
        QT_MOC_LITERAL(482, 3),  // "pos"
        QT_MOC_LITERAL(486, 8),  // "play_now"
        QT_MOC_LITERAL(495, 7),  // "enqueue"
        QT_MOC_LITERAL(503, 6),  // "signal"
        QT_MOC_LITERAL(510, 11),  // "InsertSongs"
        QT_MOC_LITERAL(522, 22),  // "RemoveItemsWithoutUndo"
        QT_MOC_LITERAL(545, 7),  // "indices"
        QT_MOC_LITERAL(553, 17),  // "RemoveCurrentSong"
        QT_MOC_LITERAL(571, 17),  // "PlaySmartPlaylist"
        QT_MOC_LITERAL(589, 20),  // "PlaylistGeneratorPtr"
        QT_MOC_LITERAL(610, 9),  // "generator"
        QT_MOC_LITERAL(620, 6),  // "as_new"
        QT_MOC_LITERAL(627, 5),  // "clear"
        QT_MOC_LITERAL(633, 15),  // "RateCurrentSong"
        QT_MOC_LITERAL(649, 6),  // "rating"
        QT_MOC_LITERAL(656, 16),  // "RateCurrentSong2"
        QT_MOC_LITERAL(673, 16),  // "SaveAllPlaylists"
        QT_MOC_LITERAL(690, 16),  // "SetActivePlaying"
        QT_MOC_LITERAL(707, 15),  // "SetActivePaused"
        QT_MOC_LITERAL(723, 16),  // "SetActiveStopped"
        QT_MOC_LITERAL(740, 21),  // "OneOfPlaylistsChanged"
        QT_MOC_LITERAL(762, 17),  // "UpdateSummaryText"
        QT_MOC_LITERAL(780, 21),  // "UpdateCollectionSongs"
        QT_MOC_LITERAL(802, 26),  // "ItemsLoadedForSavePlaylist"
        QT_MOC_LITERAL(829, 14)   // "PlaylistLoaded"
    },
    "PlaylistManager",
    "New",
    "",
    "name",
    "SongList",
    "songs",
    "special_type",
    "Load",
    "filename",
    "Save",
    "id",
    "playlist_name",
    "PlaylistSettings::PathType",
    "path_type",
    "SaveWithUI",
    "Rename",
    "new_name",
    "Favorite",
    "favorite",
    "Delete",
    "Close",
    "Open",
    "ChangePlaylistOrder",
    "QList<int>",
    "ids",
    "SetCurrentPlaylist",
    "SetActivePlaylist",
    "SetActiveToCurrent",
    "SelectionChanged",
    "QItemSelection",
    "selection",
    "SetCurrentOrOpen",
    "ClearCurrent",
    "ShuffleCurrent",
    "RemoveDuplicatesCurrent",
    "RemoveUnavailableCurrent",
    "SongChangeRequestProcessed",
    "url",
    "valid",
    "InsertUrls",
    "QList<QUrl>",
    "urls",
    "pos",
    "play_now",
    "enqueue",
    "signal",
    "InsertSongs",
    "RemoveItemsWithoutUndo",
    "indices",
    "RemoveCurrentSong",
    "PlaySmartPlaylist",
    "PlaylistGeneratorPtr",
    "generator",
    "as_new",
    "clear",
    "RateCurrentSong",
    "rating",
    "RateCurrentSong2",
    "SaveAllPlaylists",
    "SetActivePlaying",
    "SetActivePaused",
    "SetActiveStopped",
    "OneOfPlaylistsChanged",
    "UpdateSummaryText",
    "UpdateCollectionSongs",
    "ItemsLoadedForSavePlaylist",
    "PlaylistLoaded"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaylistManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,  290,    2, 0x0a,    1 /* Public */,
       1,    2,  297,    2, 0x2a,    5 /* Public | MethodCloned */,
       1,    1,  302,    2, 0x2a,    8 /* Public | MethodCloned */,
       7,    1,  305,    2, 0x0a,   10 /* Public */,
       9,    4,  308,    2, 0x0a,   12 /* Public */,
      14,    2,  317,    2, 0x0a,   17 /* Public */,
      15,    2,  322,    2, 0x0a,   20 /* Public */,
      17,    2,  327,    2, 0x0a,   23 /* Public */,
      19,    1,  332,    2, 0x0a,   26 /* Public */,
      20,    1,  335,    2, 0x0a,   28 /* Public */,
      21,    1,  338,    2, 0x0a,   30 /* Public */,
      22,    1,  341,    2, 0x0a,   32 /* Public */,
      25,    1,  344,    2, 0x0a,   34 /* Public */,
      26,    1,  347,    2, 0x0a,   36 /* Public */,
      27,    0,  350,    2, 0x0a,   38 /* Public */,
      28,    1,  351,    2, 0x0a,   39 /* Public */,
      31,    1,  354,    2, 0x0a,   41 /* Public */,
      32,    0,  357,    2, 0x0a,   43 /* Public */,
      33,    0,  358,    2, 0x0a,   44 /* Public */,
      34,    0,  359,    2, 0x0a,   45 /* Public */,
      35,    0,  360,    2, 0x0a,   46 /* Public */,
      36,    2,  361,    2, 0x0a,   47 /* Public */,
      39,    6,  366,    2, 0x0a,   50 /* Public */,
      39,    5,  379,    2, 0x2a,   57 /* Public | MethodCloned */,
      39,    4,  390,    2, 0x2a,   63 /* Public | MethodCloned */,
      39,    3,  399,    2, 0x2a,   68 /* Public | MethodCloned */,
      39,    2,  406,    2, 0x2a,   72 /* Public | MethodCloned */,
      46,    6,  411,    2, 0x0a,   75 /* Public */,
      46,    5,  424,    2, 0x2a,   82 /* Public | MethodCloned */,
      46,    4,  435,    2, 0x2a,   88 /* Public | MethodCloned */,
      46,    3,  444,    2, 0x2a,   93 /* Public | MethodCloned */,
      46,    2,  451,    2, 0x2a,   97 /* Public | MethodCloned */,
      47,    2,  456,    2, 0x0a,  100 /* Public */,
      49,    0,  461,    2, 0x10a,  103 /* Public | MethodIsConst  */,
      50,    3,  462,    2, 0x0a,  104 /* Public */,
      55,    1,  469,    2, 0x0a,  108 /* Public */,
      57,    1,  472,    2, 0x0a,  110 /* Public */,
      58,    0,  475,    2, 0x0a,  112 /* Public */,
      59,    0,  476,    2, 0x0a,  113 /* Public */,
      60,    0,  477,    2, 0x0a,  114 /* Public */,
      61,    0,  478,    2, 0x0a,  115 /* Public */,
      62,    0,  479,    2, 0x08,  116 /* Private */,
      63,    0,  480,    2, 0x08,  117 /* Private */,
      64,    1,  481,    2, 0x08,  118 /* Private */,
      65,    4,  484,    2, 0x08,  120 /* Private */,
      66,    0,  493,    2, 0x08,  125 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::QString,    3,    5,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 12,   10,   11,    8,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   10,   18,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Bool, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,   37,   38,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 40, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   10,   41,   42,   43,   44,   45,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 40, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   10,   41,   42,   43,   44,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 40, QMetaType::Int, QMetaType::Bool,   10,   41,   42,   43,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 40, QMetaType::Int,   10,   41,   42,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 40,   10,   41,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   10,    5,   42,   43,   44,   45,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   10,    5,   42,   43,   44,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int, QMetaType::Bool,   10,    5,   42,   43,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int,   10,    5,   42,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,   10,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 23,   10,   48,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51, QMetaType::Bool, QMetaType::Bool,   52,   53,   54,
    QMetaType::Void, QMetaType::Float,   56,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::QString, 0x80000000 | 12,   11,    5,    8,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistManager::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistManagerInterface::staticMetaObject>(),
    qt_meta_stringdata_PlaylistManager.offsetsAndSizes,
    qt_meta_data_PlaylistManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaylistManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistManager, std::true_type>,
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
        // method 'SaveWithUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Rename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Favorite'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
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
        // method 'SetCurrentOrOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ClearCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShuffleCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveDuplicatesCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveUnavailableCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SongChangeRequestProcessed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        // method 'InsertSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'InsertSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'RemoveItemsWithoutUndo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'RemoveCurrentSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlaySmartPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PlaylistGeneratorPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'RateCurrentSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'RateCurrentSong2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SaveAllPlaylists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetActivePlaying'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetActivePaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetActiveStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OneOfPlaylistsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateSummaryText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateCollectionSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'ItemsLoadedForSavePlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSettings::PathType, std::false_type>,
        // method 'PlaylistLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PlaylistManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->New((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->New((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2]))); break;
        case 2: _t->New((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->Load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->Save((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<PlaylistSettings::PathType>>(_a[4]))); break;
        case 5: _t->SaveWithUI((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->Rename((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->Favorite((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->Delete((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: { bool _r = _t->Close((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->Open((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->ChangePlaylistOrder((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 12: _t->SetCurrentPlaylist((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->SetActivePlaylist((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->SetActiveToCurrent(); break;
        case 15: _t->SelectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 16: _t->SetCurrentOrOpen((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->ClearCurrent(); break;
        case 18: _t->ShuffleCurrent(); break;
        case 19: _t->RemoveDuplicatesCurrent(); break;
        case 20: _t->RemoveUnavailableCurrent(); break;
        case 21: _t->SongChangeRequestProcessed((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 22: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 23: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 24: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 25: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 26: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[2]))); break;
        case 27: _t->InsertSongs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 28: _t->InsertSongs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 29: _t->InsertSongs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 30: _t->InsertSongs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 31: _t->InsertSongs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2]))); break;
        case 32: _t->RemoveItemsWithoutUndo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[2]))); break;
        case 33: _t->RemoveCurrentSong(); break;
        case 34: _t->PlaySmartPlaylist((*reinterpret_cast< std::add_pointer_t<PlaylistGeneratorPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 35: _t->RateCurrentSong((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 36: _t->RateCurrentSong2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->SaveAllPlaylists(); break;
        case 38: _t->SetActivePlaying(); break;
        case 39: _t->SetActivePaused(); break;
        case 40: _t->SetActiveStopped(); break;
        case 41: _t->OneOfPlaylistsChanged(); break;
        case 42: _t->UpdateSummaryText(); break;
        case 43: _t->UpdateCollectionSongs((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 44: _t->ItemsLoadedForSavePlaylist((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<PlaylistSettings::PathType>>(_a[4]))); break;
        case 45: _t->PlaylistLoaded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *PlaylistManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistManager.stringdata0))
        return static_cast<void*>(this);
    return PlaylistManagerInterface::qt_metacast(_clname);
}

int PlaylistManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistManagerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
