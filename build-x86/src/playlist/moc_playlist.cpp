/****************************************************************************
** Meta object code from reading C++ file 'playlist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlist.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Playlist_t {
    uint offsetsAndSizes[206];
    char stringdata0[9];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[19];
    char stringdata5[5];
    char stringdata6[9];
    char stringdata7[27];
    char stringdata8[16];
    char stringdata9[12];
    char stringdata10[12];
    char stringdata11[4];
    char stringdata12[14];
    char stringdata13[21];
    char stringdata14[11];
    char stringdata15[16];
    char stringdata16[16];
    char stringdata17[19];
    char stringdata18[8];
    char stringdata19[17];
    char stringdata20[10];
    char stringdata21[17];
    char stringdata22[7];
    char stringdata23[14];
    char stringdata24[11];
    char stringdata25[6];
    char stringdata26[8];
    char stringdata27[13];
    char stringdata28[19];
    char stringdata29[13];
    char stringdata30[10];
    char stringdata31[15];
    char stringdata32[21];
    char stringdata33[28];
    char stringdata34[9];
    char stringdata35[7];
    char stringdata36[3];
    char stringdata37[5];
    char stringdata38[16];
    char stringdata39[2];
    char stringdata40[12];
    char stringdata41[13];
    char stringdata42[7];
    char stringdata43[8];
    char stringdata44[8];
    char stringdata45[14];
    char stringdata46[6];
    char stringdata47[20];
    char stringdata48[12];
    char stringdata49[9];
    char stringdata50[6];
    char stringdata51[6];
    char stringdata52[21];
    char stringdata53[23];
    char stringdata54[8];
    char stringdata55[19];
    char stringdata56[30];
    char stringdata57[13];
    char stringdata58[19];
    char stringdata59[19];
    char stringdata60[10];
    char stringdata61[11];
    char stringdata62[12];
    char stringdata63[5];
    char stringdata64[4];
    char stringdata65[9];
    char stringdata66[8];
    char stringdata67[13];
    char stringdata68[7];
    char stringdata69[23];
    char stringdata70[11];
    char stringdata71[10];
    char stringdata72[22];
    char stringdata73[26];
    char stringdata74[23];
    char stringdata75[17];
    char stringdata76[5];
    char stringdata77[23];
    char stringdata78[7];
    char stringdata79[24];
    char stringdata80[6];
    char stringdata81[4];
    char stringdata82[15];
    char stringdata83[15];
    char stringdata84[11];
    char stringdata85[19];
    char stringdata86[17];
    char stringdata87[18];
    char stringdata88[6];
    char stringdata89[22];
    char stringdata90[16];
    char stringdata91[5];
    char stringdata92[16];
    char stringdata93[18];
    char stringdata94[19];
    char stringdata95[13];
    char stringdata96[6];
    char stringdata97[18];
    char stringdata98[12];
    char stringdata99[18];
    char stringdata100[17];
    char stringdata101[23];
    char stringdata102[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Playlist_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Playlist_t qt_meta_stringdata_Playlist = {
    {
        QT_MOC_LITERAL(0, 8),  // "Playlist"
        QT_MOC_LITERAL(9, 15),  // "RestoreFinished"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 14),  // "PlaylistLoaded"
        QT_MOC_LITERAL(41, 18),  // "CurrentSongChanged"
        QT_MOC_LITERAL(60, 4),  // "Song"
        QT_MOC_LITERAL(65, 8),  // "metadata"
        QT_MOC_LITERAL(74, 26),  // "CurrentSongMetadataChanged"
        QT_MOC_LITERAL(101, 15),  // "EditingFinished"
        QT_MOC_LITERAL(117, 11),  // "playlist_id"
        QT_MOC_LITERAL(129, 11),  // "QModelIndex"
        QT_MOC_LITERAL(141, 3),  // "idx"
        QT_MOC_LITERAL(145, 13),  // "PlayRequested"
        QT_MOC_LITERAL(159, 20),  // "Playlist::AutoScroll"
        QT_MOC_LITERAL(180, 10),  // "autoscroll"
        QT_MOC_LITERAL(191, 15),  // "MaybeAutoscroll"
        QT_MOC_LITERAL(207, 15),  // "PlaylistChanged"
        QT_MOC_LITERAL(223, 18),  // "DynamicModeChanged"
        QT_MOC_LITERAL(242, 7),  // "dynamic"
        QT_MOC_LITERAL(250, 16),  // "SortStateChanged"
        QT_MOC_LITERAL(267, 9),  // "is_sorted"
        QT_MOC_LITERAL(277, 16),  // "Playlist::Column"
        QT_MOC_LITERAL(294, 6),  // "column"
        QT_MOC_LITERAL(301, 13),  // "Qt::SortOrder"
        QT_MOC_LITERAL(315, 10),  // "sort_order"
        QT_MOC_LITERAL(326, 5),  // "Error"
        QT_MOC_LITERAL(332, 7),  // "message"
        QT_MOC_LITERAL(340, 12),  // "QueueChanged"
        QT_MOC_LITERAL(353, 18),  // "PlaylistItemsAdded"
        QT_MOC_LITERAL(372, 12),  // "QList<QUuid>"
        QT_MOC_LITERAL(385, 9),  // "track_ids"
        QT_MOC_LITERAL(395, 14),  // "after_track_id"
        QT_MOC_LITERAL(410, 20),  // "PlaylistItemsRemoved"
        QT_MOC_LITERAL(431, 27),  // "PlaylistItemMetadataChanged"
        QT_MOC_LITERAL(459, 8),  // "track_id"
        QT_MOC_LITERAL(468, 6),  // "Rename"
        QT_MOC_LITERAL(475, 2),  // "id"
        QT_MOC_LITERAL(478, 4),  // "name"
        QT_MOC_LITERAL(483, 15),  // "set_current_row"
        QT_MOC_LITERAL(499, 1),  // "i"
        QT_MOC_LITERAL(501, 11),  // "is_stopping"
        QT_MOC_LITERAL(513, 12),  // "force_inform"
        QT_MOC_LITERAL(526, 6),  // "Paused"
        QT_MOC_LITERAL(533, 7),  // "Playing"
        QT_MOC_LITERAL(541, 7),  // "Stopped"
        QT_MOC_LITERAL(549, 13),  // "IgnoreSorting"
        QT_MOC_LITERAL(563, 5),  // "value"
        QT_MOC_LITERAL(569, 19),  // "ClearStreamMetadata"
        QT_MOC_LITERAL(589, 11),  // "UpdateItems"
        QT_MOC_LITERAL(601, 8),  // "SongList"
        QT_MOC_LITERAL(610, 5),  // "songs"
        QT_MOC_LITERAL(616, 5),  // "Clear"
        QT_MOC_LITERAL(622, 20),  // "RemoveDuplicateSongs"
        QT_MOC_LITERAL(643, 22),  // "RemoveUnavailableSongs"
        QT_MOC_LITERAL(666, 7),  // "Shuffle"
        QT_MOC_LITERAL(674, 18),  // "ShuffleModeChanged"
        QT_MOC_LITERAL(693, 29),  // "PlaylistSequence::ShuffleMode"
        QT_MOC_LITERAL(723, 12),  // "shuffle_mode"
        QT_MOC_LITERAL(736, 18),  // "SetColumnAlignment"
        QT_MOC_LITERAL(755, 18),  // "ColumnAlignmentMap"
        QT_MOC_LITERAL(774, 9),  // "alignment"
        QT_MOC_LITERAL(784, 10),  // "InsertUrls"
        QT_MOC_LITERAL(795, 11),  // "QList<QUrl>"
        QT_MOC_LITERAL(807, 4),  // "urls"
        QT_MOC_LITERAL(812, 3),  // "pos"
        QT_MOC_LITERAL(816, 8),  // "play_now"
        QT_MOC_LITERAL(825, 7),  // "enqueue"
        QT_MOC_LITERAL(833, 12),  // "enqueue_next"
        QT_MOC_LITERAL(846, 6),  // "signal"
        QT_MOC_LITERAL(853, 22),  // "RemoveItemsWithoutUndo"
        QT_MOC_LITERAL(876, 10),  // "QList<int>"
        QT_MOC_LITERAL(887, 9),  // "indicesIn"
        QT_MOC_LITERAL(897, 21),  // "ExpandDynamicPlaylist"
        QT_MOC_LITERAL(919, 25),  // "RepopulateDynamicPlaylist"
        QT_MOC_LITERAL(945, 22),  // "TurnOffDynamicPlaylist"
        QT_MOC_LITERAL(968, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(985, 4),  // "song"
        QT_MOC_LITERAL(990, 22),  // "AlbumCoverLoaderResult"
        QT_MOC_LITERAL(1013, 6),  // "result"
        QT_MOC_LITERAL(1020, 23),  // "TracksAboutToBeDequeued"
        QT_MOC_LITERAL(1044, 5),  // "begin"
        QT_MOC_LITERAL(1050, 3),  // "end"
        QT_MOC_LITERAL(1054, 14),  // "TracksDequeued"
        QT_MOC_LITERAL(1069, 14),  // "TracksEnqueued"
        QT_MOC_LITERAL(1084, 10),  // "parent_idx"
        QT_MOC_LITERAL(1095, 18),  // "QueueLayoutChanged"
        QT_MOC_LITERAL(1114, 16),  // "SaveItemComplete"
        QT_MOC_LITERAL(1131, 17),  // "TagReaderReplyPtr"
        QT_MOC_LITERAL(1149, 5),  // "reply"
        QT_MOC_LITERAL(1155, 21),  // "QPersistentModelIndex"
        QT_MOC_LITERAL(1177, 15),  // "PlaylistItemPtr"
        QT_MOC_LITERAL(1193, 4),  // "item"
        QT_MOC_LITERAL(1198, 15),  // "save_generation"
        QT_MOC_LITERAL(1214, 17),  // "pre_edit_metadata"
        QT_MOC_LITERAL(1232, 18),  // "ReloadItemComplete"
        QT_MOC_LITERAL(1251, 12),  // "new_metadata"
        QT_MOC_LITERAL(1264, 5),  // "saved"
        QT_MOC_LITERAL(1270, 17),  // "fallback_metadata"
        QT_MOC_LITERAL(1288, 11),  // "ItemsLoaded"
        QT_MOC_LITERAL(1300, 17),  // "ForceScheduleSave"
        QT_MOC_LITERAL(1318, 16),  // "ScheduleSaveItem"
        QT_MOC_LITERAL(1335, 22),  // "ScheduleSaveLastPlayed"
        QT_MOC_LITERAL(1358, 4)   // "Save"
    },
    "Playlist",
    "RestoreFinished",
    "",
    "PlaylistLoaded",
    "CurrentSongChanged",
    "Song",
    "metadata",
    "CurrentSongMetadataChanged",
    "EditingFinished",
    "playlist_id",
    "QModelIndex",
    "idx",
    "PlayRequested",
    "Playlist::AutoScroll",
    "autoscroll",
    "MaybeAutoscroll",
    "PlaylistChanged",
    "DynamicModeChanged",
    "dynamic",
    "SortStateChanged",
    "is_sorted",
    "Playlist::Column",
    "column",
    "Qt::SortOrder",
    "sort_order",
    "Error",
    "message",
    "QueueChanged",
    "PlaylistItemsAdded",
    "QList<QUuid>",
    "track_ids",
    "after_track_id",
    "PlaylistItemsRemoved",
    "PlaylistItemMetadataChanged",
    "track_id",
    "Rename",
    "id",
    "name",
    "set_current_row",
    "i",
    "is_stopping",
    "force_inform",
    "Paused",
    "Playing",
    "Stopped",
    "IgnoreSorting",
    "value",
    "ClearStreamMetadata",
    "UpdateItems",
    "SongList",
    "songs",
    "Clear",
    "RemoveDuplicateSongs",
    "RemoveUnavailableSongs",
    "Shuffle",
    "ShuffleModeChanged",
    "PlaylistSequence::ShuffleMode",
    "shuffle_mode",
    "SetColumnAlignment",
    "ColumnAlignmentMap",
    "alignment",
    "InsertUrls",
    "QList<QUrl>",
    "urls",
    "pos",
    "play_now",
    "enqueue",
    "enqueue_next",
    "signal",
    "RemoveItemsWithoutUndo",
    "QList<int>",
    "indicesIn",
    "ExpandDynamicPlaylist",
    "RepopulateDynamicPlaylist",
    "TurnOffDynamicPlaylist",
    "AlbumCoverLoaded",
    "song",
    "AlbumCoverLoaderResult",
    "result",
    "TracksAboutToBeDequeued",
    "begin",
    "end",
    "TracksDequeued",
    "TracksEnqueued",
    "parent_idx",
    "QueueLayoutChanged",
    "SaveItemComplete",
    "TagReaderReplyPtr",
    "reply",
    "QPersistentModelIndex",
    "PlaylistItemPtr",
    "item",
    "save_generation",
    "pre_edit_metadata",
    "ReloadItemComplete",
    "new_metadata",
    "saved",
    "fallback_metadata",
    "ItemsLoaded",
    "ForceScheduleSave",
    "ScheduleSaveItem",
    "ScheduleSaveLastPlayed",
    "Save"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Playlist[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  338,    2, 0x06,    1 /* Public */,
       3,    0,  339,    2, 0x06,    2 /* Public */,
       4,    1,  340,    2, 0x06,    3 /* Public */,
       7,    1,  343,    2, 0x06,    5 /* Public */,
       8,    2,  346,    2, 0x06,    7 /* Public */,
      12,    2,  351,    2, 0x06,   10 /* Public */,
      15,    1,  356,    2, 0x06,   13 /* Public */,
      16,    0,  359,    2, 0x06,   15 /* Public */,
      17,    1,  360,    2, 0x06,   16 /* Public */,
      19,    3,  363,    2, 0x06,   18 /* Public */,
      25,    1,  370,    2, 0x06,   22 /* Public */,
      27,    0,  373,    2, 0x06,   24 /* Public */,
      28,    3,  374,    2, 0x06,   25 /* Public */,
      32,    2,  381,    2, 0x06,   29 /* Public */,
      33,    2,  386,    2, 0x06,   32 /* Public */,
      35,    2,  391,    2, 0x06,   35 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      38,    4,  396,    2, 0x0a,   38 /* Public */,
      38,    3,  405,    2, 0x2a,   43 /* Public | MethodCloned */,
      38,    2,  412,    2, 0x2a,   47 /* Public | MethodCloned */,
      38,    1,  417,    2, 0x2a,   50 /* Public | MethodCloned */,
      42,    0,  420,    2, 0x0a,   52 /* Public */,
      43,    0,  421,    2, 0x0a,   53 /* Public */,
      44,    0,  422,    2, 0x0a,   54 /* Public */,
      45,    1,  423,    2, 0x0a,   55 /* Public */,
      47,    0,  426,    2, 0x0a,   57 /* Public */,
      48,    1,  427,    2, 0x0a,   58 /* Public */,
      51,    0,  430,    2, 0x0a,   60 /* Public */,
      52,    0,  431,    2, 0x0a,   61 /* Public */,
      53,    0,  432,    2, 0x0a,   62 /* Public */,
      54,    0,  433,    2, 0x0a,   63 /* Public */,
      55,    1,  434,    2, 0x0a,   64 /* Public */,
      58,    1,  437,    2, 0x0a,   66 /* Public */,
      61,    6,  440,    2, 0x0a,   68 /* Public */,
      61,    5,  453,    2, 0x2a,   75 /* Public | MethodCloned */,
      61,    4,  464,    2, 0x2a,   81 /* Public | MethodCloned */,
      61,    3,  473,    2, 0x2a,   86 /* Public | MethodCloned */,
      61,    2,  480,    2, 0x2a,   90 /* Public | MethodCloned */,
      61,    1,  485,    2, 0x2a,   93 /* Public | MethodCloned */,
      69,    1,  488,    2, 0x0a,   95 /* Public */,
      72,    0,  491,    2, 0x0a,   97 /* Public */,
      73,    0,  492,    2, 0x0a,   98 /* Public */,
      74,    0,  493,    2, 0x0a,   99 /* Public */,
      75,    2,  494,    2, 0x0a,  100 /* Public */,
      79,    3,  499,    2, 0x08,  103 /* Private */,
      82,    0,  506,    2, 0x08,  107 /* Private */,
      83,    3,  507,    2, 0x08,  108 /* Private */,
      85,    0,  514,    2, 0x08,  112 /* Private */,
      86,    5,  515,    2, 0x08,  113 /* Private */,
      94,    6,  526,    2, 0x08,  119 /* Private */,
      98,    0,  539,    2, 0x08,  126 /* Private */,
      99,    0,  540,    2, 0x08,  127 /* Private */,
     100,    1,  541,    2, 0x08,  128 /* Private */,
     101,    0,  544,    2, 0x08,  130 /* Private */,
     102,    0,  545,    2, 0x08,  131 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 13,   11,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 21, 0x80000000 | 23,   20,   22,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 29, QMetaType::QUuid,    9,   30,   31,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 29,    9,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::QUuid,    9,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   36,   37,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13, QMetaType::Bool, QMetaType::Bool,   39,   14,   40,   41,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13, QMetaType::Bool,   39,   14,   40,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13,   39,   14,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void, 0x80000000 | 62, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   63,   64,   65,   66,   67,   68,
    QMetaType::Void, 0x80000000 | 62, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   63,   64,   65,   66,   67,
    QMetaType::Void, 0x80000000 | 62, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   63,   64,   65,   66,
    QMetaType::Void, 0x80000000 | 62, QMetaType::Int, QMetaType::Bool,   63,   64,   65,
    QMetaType::Void, 0x80000000 | 62, QMetaType::Int,   63,   64,
    QMetaType::Void, 0x80000000 | 62,   63,
    QMetaType::Void, 0x80000000 | 70,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 77,   76,   78,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   80,   81,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   84,   80,   81,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 87, 0x80000000 | 89, 0x80000000 | 90, QMetaType::ULongLong, 0x80000000 | 5,   88,   11,   91,   92,   93,
    QMetaType::Void, 0x80000000 | 89, 0x80000000 | 90, 0x80000000 | 5, QMetaType::Bool, QMetaType::ULongLong, 0x80000000 | 5,   11,   91,   95,   96,   92,   97,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Playlist::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_Playlist.offsetsAndSizes,
    qt_meta_data_Playlist,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Playlist_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Playlist, std::true_type>,
        // method 'RestoreFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlaylistLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CurrentSongChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'CurrentSongMetadataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'EditingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        // method 'PlayRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'MaybeAutoscroll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'PlaylistChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DynamicModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'SortStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::Column, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::SortOrder, std::false_type>,
        // method 'Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'QueueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'Rename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'set_current_row'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'set_current_row'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'set_current_row'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'set_current_row'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'Paused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Playing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Stopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'IgnoreSorting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ClearStreamMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SongList, std::false_type>,
        // method 'Clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveDuplicateSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveUnavailableSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Shuffle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShuffleModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSequence::ShuffleMode, std::false_type>,
        // method 'SetColumnAlignment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ColumnAlignmentMap &, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'InsertUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        // method 'RemoveItemsWithoutUndo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'ExpandDynamicPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RepopulateDynamicPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TurnOffDynamicPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverLoaderResult &, std::false_type>,
        // method 'TracksAboutToBeDequeued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'TracksDequeued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TracksEnqueued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'QueueLayoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveItemComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TagReaderReplyPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPersistentModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<PlaylistItemPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'ReloadItemComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPersistentModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<PlaylistItemPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'ItemsLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ForceScheduleSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScheduleSaveItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistItemPtr &, std::false_type>,
        // method 'ScheduleSaveLastPlayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Playlist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Playlist *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RestoreFinished(); break;
        case 1: _t->PlaylistLoaded(); break;
        case 2: _t->CurrentSongChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 3: _t->CurrentSongMetadataChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 4: _t->EditingFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 5: _t->PlayRequested((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2]))); break;
        case 6: _t->MaybeAutoscroll((*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[1]))); break;
        case 7: _t->PlaylistChanged(); break;
        case 8: _t->DynamicModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->SortStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::Column>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[3]))); break;
        case 10: _t->Error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->QueueChanged(); break;
        case 12: _t->PlaylistItemsAdded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUuid>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[3]))); break;
        case 13: _t->PlaylistItemsRemoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QUuid>>>(_a[2]))); break;
        case 14: _t->PlaylistItemMetadataChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[2]))); break;
        case 15: _t->Rename((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->set_current_row((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 17: _t->set_current_row((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 18: _t->set_current_row((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2]))); break;
        case 19: _t->set_current_row((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->Paused(); break;
        case 21: _t->Playing(); break;
        case 22: _t->Stopped(); break;
        case 23: _t->IgnoreSorting((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->ClearStreamMetadata(); break;
        case 25: _t->UpdateItems((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 26: _t->Clear(); break;
        case 27: _t->RemoveDuplicateSongs(); break;
        case 28: _t->RemoveUnavailableSongs(); break;
        case 29: _t->Shuffle(); break;
        case 30: _t->ShuffleModeChanged((*reinterpret_cast< std::add_pointer_t<PlaylistSequence::ShuffleMode>>(_a[1]))); break;
        case 31: _t->SetColumnAlignment((*reinterpret_cast< std::add_pointer_t<ColumnAlignmentMap>>(_a[1]))); break;
        case 32: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 33: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 34: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 35: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 36: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 37: _t->InsertUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 38: _t->RemoveItemsWithoutUndo((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 39: _t->ExpandDynamicPlaylist(); break;
        case 40: _t->RepopulateDynamicPlaylist(); break;
        case 41: _t->TurnOffDynamicPlaylist(); break;
        case 42: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult>>(_a[2]))); break;
        case 43: _t->TracksAboutToBeDequeued((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 44: _t->TracksDequeued(); break;
        case 45: _t->TracksEnqueued((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 46: _t->QueueLayoutChanged(); break;
        case 47: _t->SaveItemComplete((*reinterpret_cast< std::add_pointer_t<TagReaderReplyPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPersistentModelIndex>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<PlaylistItemPtr>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<Song>>(_a[5]))); break;
        case 48: _t->ReloadItemComplete((*reinterpret_cast< std::add_pointer_t<QPersistentModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<PlaylistItemPtr>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Song>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<Song>>(_a[6]))); break;
        case 49: _t->ItemsLoaded(); break;
        case 50: _t->ForceScheduleSave(); break;
        case 51: _t->ScheduleSaveItem((*reinterpret_cast< std::add_pointer_t<PlaylistItemPtr>>(_a[1]))); break;
        case 52: _t->ScheduleSaveLastPlayed(); break;
        case 53: _t->Save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUuid> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUuid> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ColumnAlignmentMap >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlaylistItemPtr >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlaylistItemPtr >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlaylistItemPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Playlist::*)();
            if (_t _q_method = &Playlist::RestoreFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Playlist::*)();
            if (_t _q_method = &Playlist::PlaylistLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const Song & );
            if (_t _q_method = &Playlist::CurrentSongChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const Song & );
            if (_t _q_method = &Playlist::CurrentSongMetadataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const int , const QModelIndex );
            if (_t _q_method = &Playlist::EditingFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const QModelIndex , const Playlist::AutoScroll );
            if (_t _q_method = &Playlist::PlayRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const Playlist::AutoScroll );
            if (_t _q_method = &Playlist::MaybeAutoscroll; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Playlist::*)();
            if (_t _q_method = &Playlist::PlaylistChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(bool );
            if (_t _q_method = &Playlist::DynamicModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const bool , const Playlist::Column , const Qt::SortOrder );
            if (_t _q_method = &Playlist::SortStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(QString );
            if (_t _q_method = &Playlist::Error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Playlist::*)();
            if (_t _q_method = &Playlist::QueueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const int , const QList<QUuid> & , const QUuid );
            if (_t _q_method = &Playlist::PlaylistItemsAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const int , const QList<QUuid> & );
            if (_t _q_method = &Playlist::PlaylistItemsRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const int , const QUuid );
            if (_t _q_method = &Playlist::PlaylistItemMetadataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const int , const QString & );
            if (_t _q_method = &Playlist::Rename; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
    }
}

const QMetaObject *Playlist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Playlist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Playlist.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Playlist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void Playlist::RestoreFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Playlist::PlaylistLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Playlist::CurrentSongChanged(const Song & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Playlist::CurrentSongMetadataChanged(const Song & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Playlist::EditingFinished(const int _t1, const QModelIndex _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Playlist::PlayRequested(const QModelIndex _t1, const Playlist::AutoScroll _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Playlist::MaybeAutoscroll(const Playlist::AutoScroll _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Playlist::PlaylistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Playlist::DynamicModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Playlist::SortStateChanged(const bool _t1, const Playlist::Column _t2, const Qt::SortOrder _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Playlist::Error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Playlist::QueueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Playlist::PlaylistItemsAdded(const int _t1, const QList<QUuid> & _t2, const QUuid _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Playlist::PlaylistItemsRemoved(const int _t1, const QList<QUuid> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Playlist::PlaylistItemMetadataChanged(const int _t1, const QUuid _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Playlist::Rename(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
