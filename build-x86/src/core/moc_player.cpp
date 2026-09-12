/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/player.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Player_t {
    uint offsetsAndSizes[140];
    char stringdata0[7];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[11];
    char stringdata5[19];
    char stringdata6[16];
    char stringdata7[7];
    char stringdata8[6];
    char stringdata9[6];
    char stringdata10[15];
    char stringdata11[29];
    char stringdata12[7];
    char stringdata13[21];
    char stringdata14[11];
    char stringdata15[10];
    char stringdata16[13];
    char stringdata17[10];
    char stringdata18[16];
    char stringdata19[18];
    char stringdata20[5];
    char stringdata21[9];
    char stringdata22[13];
    char stringdata23[14];
    char stringdata24[20];
    char stringdata25[6];
    char stringdata26[20];
    char stringdata27[7];
    char stringdata28[10];
    char stringdata29[9];
    char stringdata30[11];
    char stringdata31[7];
    char stringdata32[8];
    char stringdata33[12];
    char stringdata34[13];
    char stringdata35[23];
    char stringdata36[5];
    char stringdata37[9];
    char stringdata38[5];
    char stringdata39[6];
    char stringdata40[5];
    char stringdata41[11];
    char stringdata42[17];
    char stringdata43[5];
    char stringdata44[14];
    char stringdata45[11];
    char stringdata46[8];
    char stringdata47[16];
    char stringdata48[21];
    char stringdata49[21];
    char stringdata50[12];
    char stringdata51[12];
    char stringdata52[19];
    char stringdata53[18];
    char stringdata54[23];
    char stringdata55[15];
    char stringdata56[16];
    char stringdata57[16];
    char stringdata58[11];
    char stringdata59[9];
    char stringdata60[13];
    char stringdata61[13];
    char stringdata62[21];
    char stringdata63[11];
    char stringdata64[19];
    char stringdata65[4];
    char stringdata66[21];
    char stringdata67[17];
    char stringdata68[23];
    char stringdata69[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Player_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
        QT_MOC_LITERAL(0, 6),  // "Player"
        QT_MOC_LITERAL(7, 14),  // "ReloadSettings"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 10),  // "LoadVolume"
        QT_MOC_LITERAL(34, 10),  // "SaveVolume"
        QT_MOC_LITERAL(45, 18),  // "SavePlaybackStatus"
        QT_MOC_LITERAL(64, 15),  // "PlaylistsLoaded"
        QT_MOC_LITERAL(80, 6),  // "PlayAt"
        QT_MOC_LITERAL(87, 5),  // "index"
        QT_MOC_LITERAL(93, 5),  // "pause"
        QT_MOC_LITERAL(99, 14),  // "offset_nanosec"
        QT_MOC_LITERAL(114, 28),  // "EngineBase::TrackChangeFlags"
        QT_MOC_LITERAL(143, 6),  // "change"
        QT_MOC_LITERAL(150, 20),  // "Playlist::AutoScroll"
        QT_MOC_LITERAL(171, 10),  // "autoscroll"
        QT_MOC_LITERAL(182, 9),  // "reshuffle"
        QT_MOC_LITERAL(192, 12),  // "force_inform"
        QT_MOC_LITERAL(205, 9),  // "PlayPause"
        QT_MOC_LITERAL(215, 15),  // "PlayPauseHelper"
        QT_MOC_LITERAL(231, 17),  // "RestartOrPrevious"
        QT_MOC_LITERAL(249, 4),  // "Next"
        QT_MOC_LITERAL(254, 8),  // "Previous"
        QT_MOC_LITERAL(263, 12),  // "PlayPlaylist"
        QT_MOC_LITERAL(276, 13),  // "playlist_name"
        QT_MOC_LITERAL(290, 19),  // "SetVolumeFromSlider"
        QT_MOC_LITERAL(310, 5),  // "value"
        QT_MOC_LITERAL(316, 19),  // "SetVolumeFromEngine"
        QT_MOC_LITERAL(336, 6),  // "volume"
        QT_MOC_LITERAL(343, 9),  // "SetVolume"
        QT_MOC_LITERAL(353, 8),  // "VolumeUp"
        QT_MOC_LITERAL(362, 10),  // "VolumeDown"
        QT_MOC_LITERAL(373, 6),  // "SeekTo"
        QT_MOC_LITERAL(380, 7),  // "seconds"
        QT_MOC_LITERAL(388, 11),  // "SeekForward"
        QT_MOC_LITERAL(400, 12),  // "SeekBackward"
        QT_MOC_LITERAL(413, 22),  // "CurrentMetadataChanged"
        QT_MOC_LITERAL(436, 4),  // "Song"
        QT_MOC_LITERAL(441, 8),  // "metadata"
        QT_MOC_LITERAL(450, 4),  // "Mute"
        QT_MOC_LITERAL(455, 5),  // "Pause"
        QT_MOC_LITERAL(461, 4),  // "Stop"
        QT_MOC_LITERAL(466, 10),  // "stop_after"
        QT_MOC_LITERAL(477, 16),  // "StopAfterCurrent"
        QT_MOC_LITERAL(494, 4),  // "Play"
        QT_MOC_LITERAL(499, 13),  // "PlayWithPause"
        QT_MOC_LITERAL(513, 10),  // "PlayHelper"
        QT_MOC_LITERAL(524, 7),  // "ShowOSD"
        QT_MOC_LITERAL(532, 15),  // "TogglePrettyOSD"
        QT_MOC_LITERAL(548, 20),  // "HandleAuthentication"
        QT_MOC_LITERAL(569, 20),  // "UrlHandlerRegistered"
        QT_MOC_LITERAL(590, 11),  // "UrlHandler*"
        QT_MOC_LITERAL(602, 11),  // "url_handler"
        QT_MOC_LITERAL(614, 18),  // "EngineStateChanged"
        QT_MOC_LITERAL(633, 17),  // "EngineBase::State"
        QT_MOC_LITERAL(651, 22),  // "EngineMetadataReceived"
        QT_MOC_LITERAL(674, 14),  // "EngineMetadata"
        QT_MOC_LITERAL(689, 15),  // "engine_metadata"
        QT_MOC_LITERAL(705, 15),  // "TrackAboutToEnd"
        QT_MOC_LITERAL(721, 10),  // "TrackEnded"
        QT_MOC_LITERAL(732, 8),  // "NextItem"
        QT_MOC_LITERAL(741, 12),  // "PreviousItem"
        QT_MOC_LITERAL(754, 12),  // "NextInternal"
        QT_MOC_LITERAL(767, 20),  // "PlayPlaylistInternal"
        QT_MOC_LITERAL(788, 10),  // "FatalError"
        QT_MOC_LITERAL(799, 18),  // "ValidSongRequested"
        QT_MOC_LITERAL(818, 3),  // "url"
        QT_MOC_LITERAL(822, 20),  // "InvalidSongRequested"
        QT_MOC_LITERAL(843, 16),  // "HandleLoadResult"
        QT_MOC_LITERAL(860, 22),  // "UrlHandler::LoadResult"
        QT_MOC_LITERAL(883, 6)   // "result"
    },
    "Player",
    "ReloadSettings",
    "",
    "LoadVolume",
    "SaveVolume",
    "SavePlaybackStatus",
    "PlaylistsLoaded",
    "PlayAt",
    "index",
    "pause",
    "offset_nanosec",
    "EngineBase::TrackChangeFlags",
    "change",
    "Playlist::AutoScroll",
    "autoscroll",
    "reshuffle",
    "force_inform",
    "PlayPause",
    "PlayPauseHelper",
    "RestartOrPrevious",
    "Next",
    "Previous",
    "PlayPlaylist",
    "playlist_name",
    "SetVolumeFromSlider",
    "value",
    "SetVolumeFromEngine",
    "volume",
    "SetVolume",
    "VolumeUp",
    "VolumeDown",
    "SeekTo",
    "seconds",
    "SeekForward",
    "SeekBackward",
    "CurrentMetadataChanged",
    "Song",
    "metadata",
    "Mute",
    "Pause",
    "Stop",
    "stop_after",
    "StopAfterCurrent",
    "Play",
    "PlayWithPause",
    "PlayHelper",
    "ShowOSD",
    "TogglePrettyOSD",
    "HandleAuthentication",
    "UrlHandlerRegistered",
    "UrlHandler*",
    "url_handler",
    "EngineStateChanged",
    "EngineBase::State",
    "EngineMetadataReceived",
    "EngineMetadata",
    "engine_metadata",
    "TrackAboutToEnd",
    "TrackEnded",
    "NextItem",
    "PreviousItem",
    "NextInternal",
    "PlayPlaylistInternal",
    "FatalError",
    "ValidSongRequested",
    "url",
    "InvalidSongRequested",
    "HandleLoadResult",
    "UrlHandler::LoadResult",
    "result"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Player[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  308,    2, 0x0a,    1 /* Public */,
       3,    0,  309,    2, 0x0a,    2 /* Public */,
       4,    0,  310,    2, 0x0a,    3 /* Public */,
       5,    0,  311,    2, 0x0a,    4 /* Public */,
       6,    0,  312,    2, 0x0a,    5 /* Public */,
       7,    7,  313,    2, 0x0a,    6 /* Public */,
       7,    6,  328,    2, 0x2a,   14 /* Public | MethodCloned */,
      17,    2,  341,    2, 0x0a,   21 /* Public */,
      17,    1,  346,    2, 0x2a,   24 /* Public | MethodCloned */,
      17,    0,  349,    2, 0x2a,   26 /* Public | MethodCloned */,
      18,    0,  350,    2, 0x0a,   27 /* Public */,
      19,    0,  351,    2, 0x0a,   28 /* Public */,
      20,    0,  352,    2, 0x0a,   29 /* Public */,
      21,    0,  353,    2, 0x0a,   30 /* Public */,
      22,    1,  354,    2, 0x0a,   31 /* Public */,
      24,    1,  357,    2, 0x0a,   33 /* Public */,
      26,    1,  360,    2, 0x0a,   35 /* Public */,
      28,    1,  363,    2, 0x0a,   37 /* Public */,
      29,    0,  366,    2, 0x0a,   39 /* Public */,
      30,    0,  367,    2, 0x0a,   40 /* Public */,
      31,    1,  368,    2, 0x0a,   41 /* Public */,
      33,    0,  371,    2, 0x0a,   43 /* Public */,
      34,    0,  372,    2, 0x0a,   44 /* Public */,
      35,    1,  373,    2, 0x0a,   45 /* Public */,
      38,    0,  376,    2, 0x0a,   47 /* Public */,
      39,    0,  377,    2, 0x0a,   48 /* Public */,
      40,    1,  378,    2, 0x0a,   49 /* Public */,
      40,    0,  381,    2, 0x2a,   51 /* Public | MethodCloned */,
      42,    0,  382,    2, 0x0a,   52 /* Public */,
      43,    1,  383,    2, 0x0a,   53 /* Public */,
      43,    0,  386,    2, 0x2a,   55 /* Public | MethodCloned */,
      44,    1,  387,    2, 0x0a,   56 /* Public */,
      45,    0,  390,    2, 0x0a,   58 /* Public */,
      46,    0,  391,    2, 0x0a,   59 /* Public */,
      47,    0,  392,    2, 0x0a,   60 /* Public */,
      48,    0,  393,    2, 0x0a,   61 /* Public */,
      49,    1,  394,    2, 0x108,   62 /* Private | MethodIsConst  */,
      52,    1,  397,    2, 0x08,   64 /* Private */,
      54,    1,  400,    2, 0x08,   66 /* Private */,
      57,    0,  403,    2, 0x08,   68 /* Private */,
      58,    0,  404,    2, 0x08,   69 /* Private */,
      59,    2,  405,    2, 0x08,   70 /* Private */,
      60,    1,  410,    2, 0x08,   73 /* Private */,
      61,    2,  413,    2, 0x08,   75 /* Private */,
      62,    3,  418,    2, 0x08,   78 /* Private */,
      63,    0,  425,    2, 0x08,   82 /* Private */,
      64,    1,  426,    2, 0x08,   83 /* Private */,
      66,    1,  429,    2, 0x08,   85 /* Private */,
      67,    1,  432,    2, 0x08,   87 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::ULongLong, 0x80000000 | 11, 0x80000000 | 13, QMetaType::Bool, QMetaType::Bool,    8,    9,   10,   12,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::ULongLong, 0x80000000 | 11, 0x80000000 | 13, QMetaType::Bool,    8,    9,   10,   12,   14,   15,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 13,   10,   14,
    QMetaType::Void, QMetaType::ULongLong,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::UInt,   27,
    QMetaType::Void, QMetaType::UInt,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 53,    2,
    QMetaType::Void, 0x80000000 | 55,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,    2,   14,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, QMetaType::QString,    2,   14,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   65,
    QMetaType::Void, QMetaType::QUrl,   65,
    QMetaType::Void, 0x80000000 | 68,   69,

       0        // eod
};

Q_CONSTINIT const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<PlayerInterface::staticMetaObject>(),
    qt_meta_stringdata_Player.offsetsAndSizes,
    qt_meta_data_Player,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Player_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Player, std::true_type>,
        // method 'ReloadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SavePlaybackStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlaylistsLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlayAt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<EngineBase::TrackChangeFlags, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'PlayAt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<EngineBase::TrackChangeFlags, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlayPauseHelper'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RestartOrPrevious'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Previous'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlayPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SetVolumeFromSlider'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SetVolumeFromEngine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        // method 'SetVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        // method 'VolumeUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'VolumeDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SeekTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        // method 'SeekForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SeekBackward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CurrentMetadataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'Mute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Pause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'Stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StopAfterCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        // method 'Play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlayWithPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        // method 'PlayHelper'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowOSD'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TogglePrettyOSD'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HandleAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UrlHandlerRegistered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UrlHandler *, std::false_type>,
        // method 'EngineStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EngineBase::State, std::false_type>,
        // method 'EngineMetadataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EngineMetadata &, std::false_type>,
        // method 'TrackAboutToEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TrackEnded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NextItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EngineBase::TrackChangeFlags, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'PreviousItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EngineBase::TrackChangeFlags, std::false_type>,
        // method 'NextInternal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EngineBase::TrackChangeFlags, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'PlayPlaylistInternal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EngineBase::TrackChangeFlags, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'FatalError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ValidSongRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'InvalidSongRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'HandleLoadResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const UrlHandler::LoadResult &, std::false_type>
    >,
    nullptr
} };

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->LoadVolume(); break;
        case 2: _t->SaveVolume(); break;
        case 3: _t->SavePlaybackStatus(); break;
        case 4: _t->PlaylistsLoaded(); break;
        case 5: _t->PlayAt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<EngineBase::TrackChangeFlags>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 6: _t->PlayAt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<EngineBase::TrackChangeFlags>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 7: _t->PlayPause((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2]))); break;
        case 8: _t->PlayPause((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 9: _t->PlayPause(); break;
        case 10: _t->PlayPauseHelper(); break;
        case 11: _t->RestartOrPrevious(); break;
        case 12: _t->Next(); break;
        case 13: _t->Previous(); break;
        case 14: _t->PlayPlaylist((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->SetVolumeFromSlider((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->SetVolumeFromEngine((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 17: _t->SetVolume((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 18: _t->VolumeUp(); break;
        case 19: _t->VolumeDown(); break;
        case 20: _t->SeekTo((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 21: _t->SeekForward(); break;
        case 22: _t->SeekBackward(); break;
        case 23: _t->CurrentMetadataChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 24: _t->Mute(); break;
        case 25: _t->Pause(); break;
        case 26: _t->Stop((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->Stop(); break;
        case 28: _t->StopAfterCurrent(); break;
        case 29: _t->Play((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 30: _t->Play(); break;
        case 31: _t->PlayWithPause((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 32: _t->PlayHelper(); break;
        case 33: _t->ShowOSD(); break;
        case 34: _t->TogglePrettyOSD(); break;
        case 35: _t->HandleAuthentication(); break;
        case 36: _t->UrlHandlerRegistered((*reinterpret_cast< std::add_pointer_t<UrlHandler*>>(_a[1]))); break;
        case 37: _t->EngineStateChanged((*reinterpret_cast< std::add_pointer_t<EngineBase::State>>(_a[1]))); break;
        case 38: _t->EngineMetadataReceived((*reinterpret_cast< std::add_pointer_t<EngineMetadata>>(_a[1]))); break;
        case 39: _t->TrackAboutToEnd(); break;
        case 40: _t->TrackEnded(); break;
        case 41: _t->NextItem((*reinterpret_cast< std::add_pointer_t<EngineBase::TrackChangeFlags>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2]))); break;
        case 42: _t->PreviousItem((*reinterpret_cast< std::add_pointer_t<EngineBase::TrackChangeFlags>>(_a[1]))); break;
        case 43: _t->NextInternal((*reinterpret_cast< std::add_pointer_t<EngineBase::TrackChangeFlags>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2]))); break;
        case 44: _t->PlayPlaylistInternal((*reinterpret_cast< std::add_pointer_t<EngineBase::TrackChangeFlags>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 45: _t->FatalError(); break;
        case 46: _t->ValidSongRequested((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 47: _t->InvalidSongRequested((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 48: _t->HandleLoadResult((*reinterpret_cast< std::add_pointer_t<UrlHandler::LoadResult>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Player.stringdata0))
        return static_cast<void*>(this);
    return PlayerInterface::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlayerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 49;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
