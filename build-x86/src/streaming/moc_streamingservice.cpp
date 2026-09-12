/****************************************************************************
** Meta object code from reading C++ file 'streamingservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/streaming/streamingservice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamingservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_StreamingService_t {
    uint offsetsAndSizes[142];
    char stringdata0[17];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[14];
    char stringdata5[21];
    char stringdata6[10];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[13];
    char stringdata10[13];
    char stringdata11[6];
    char stringdata12[14];
    char stringdata13[8];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[13];
    char stringdata17[16];
    char stringdata18[8];
    char stringdata19[8];
    char stringdata20[6];
    char stringdata21[13];
    char stringdata22[5];
    char stringdata23[19];
    char stringdata24[4];
    char stringdata25[15];
    char stringdata26[15];
    char stringdata27[20];
    char stringdata28[26];
    char stringdata29[22];
    char stringdata30[14];
    char stringdata31[19];
    char stringdata32[25];
    char stringdata33[21];
    char stringdata34[13];
    char stringdata35[18];
    char stringdata36[24];
    char stringdata37[20];
    char stringdata38[14];
    char stringdata39[3];
    char stringdata40[19];
    char stringdata41[25];
    char stringdata42[21];
    char stringdata43[11];
    char stringdata44[9];
    char stringdata45[10];
    char stringdata46[9];
    char stringdata47[14];
    char stringdata48[13];
    char stringdata49[18];
    char stringdata50[17];
    char stringdata51[17];
    char stringdata52[10];
    char stringdata53[17];
    char stringdata54[11];
    char stringdata55[15];
    char stringdata56[9];
    char stringdata57[11];
    char stringdata58[10];
    char stringdata59[9];
    char stringdata60[25];
    char stringdata61[19];
    char stringdata62[13];
    char stringdata63[7];
    char stringdata64[10];
    char stringdata65[11];
    char stringdata66[10];
    char stringdata67[9];
    char stringdata68[20];
    char stringdata69[19];
    char stringdata70[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_StreamingService_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_StreamingService_t qt_meta_stringdata_StreamingService = {
    {
        QT_MOC_LITERAL(0, 16),  // "StreamingService"
        QT_MOC_LITERAL(17, 12),  // "ExitFinished"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 12),  // "RequestLogin"
        QT_MOC_LITERAL(44, 13),  // "RequestLogout"
        QT_MOC_LITERAL(58, 20),  // "LoginWithCredentials"
        QT_MOC_LITERAL(79, 9),  // "api_token"
        QT_MOC_LITERAL(89, 8),  // "username"
        QT_MOC_LITERAL(98, 8),  // "password"
        QT_MOC_LITERAL(107, 12),  // "LoginSuccess"
        QT_MOC_LITERAL(120, 12),  // "LoginFailure"
        QT_MOC_LITERAL(133, 5),  // "error"
        QT_MOC_LITERAL(139, 13),  // "LoginFinished"
        QT_MOC_LITERAL(153, 7),  // "success"
        QT_MOC_LITERAL(161, 11),  // "TestSuccess"
        QT_MOC_LITERAL(173, 11),  // "TestFailure"
        QT_MOC_LITERAL(185, 12),  // "TestComplete"
        QT_MOC_LITERAL(198, 15),  // "ShowErrorDialog"
        QT_MOC_LITERAL(214, 7),  // "Results"
        QT_MOC_LITERAL(222, 7),  // "SongMap"
        QT_MOC_LITERAL(230, 5),  // "songs"
        QT_MOC_LITERAL(236, 12),  // "UpdateStatus"
        QT_MOC_LITERAL(249, 4),  // "text"
        QT_MOC_LITERAL(254, 18),  // "ProgressSetMaximum"
        QT_MOC_LITERAL(273, 3),  // "max"
        QT_MOC_LITERAL(277, 14),  // "UpdateProgress"
        QT_MOC_LITERAL(292, 14),  // "ArtistsResults"
        QT_MOC_LITERAL(307, 19),  // "ArtistsUpdateStatus"
        QT_MOC_LITERAL(327, 25),  // "ArtistsProgressSetMaximum"
        QT_MOC_LITERAL(353, 21),  // "ArtistsUpdateProgress"
        QT_MOC_LITERAL(375, 13),  // "AlbumsResults"
        QT_MOC_LITERAL(389, 18),  // "AlbumsUpdateStatus"
        QT_MOC_LITERAL(408, 24),  // "AlbumsProgressSetMaximum"
        QT_MOC_LITERAL(433, 20),  // "AlbumsUpdateProgress"
        QT_MOC_LITERAL(454, 12),  // "SongsResults"
        QT_MOC_LITERAL(467, 17),  // "SongsUpdateStatus"
        QT_MOC_LITERAL(485, 23),  // "SongsProgressSetMaximum"
        QT_MOC_LITERAL(509, 19),  // "SongsUpdateProgress"
        QT_MOC_LITERAL(529, 13),  // "SearchResults"
        QT_MOC_LITERAL(543, 2),  // "id"
        QT_MOC_LITERAL(546, 18),  // "SearchUpdateStatus"
        QT_MOC_LITERAL(565, 24),  // "SearchProgressSetMaximum"
        QT_MOC_LITERAL(590, 20),  // "SearchUpdateProgress"
        QT_MOC_LITERAL(611, 10),  // "AddArtists"
        QT_MOC_LITERAL(622, 8),  // "SongList"
        QT_MOC_LITERAL(631, 9),  // "AddAlbums"
        QT_MOC_LITERAL(641, 8),  // "AddSongs"
        QT_MOC_LITERAL(650, 13),  // "RemoveArtists"
        QT_MOC_LITERAL(664, 12),  // "RemoveAlbums"
        QT_MOC_LITERAL(677, 17),  // "RemoveSongsByList"
        QT_MOC_LITERAL(695, 16),  // "RemoveSongsByMap"
        QT_MOC_LITERAL(712, 16),  // "StreamURLFailure"
        QT_MOC_LITERAL(729, 9),  // "media_url"
        QT_MOC_LITERAL(739, 16),  // "StreamURLSuccess"
        QT_MOC_LITERAL(756, 10),  // "stream_url"
        QT_MOC_LITERAL(767, 14),  // "Song::FileType"
        QT_MOC_LITERAL(782, 8),  // "filetype"
        QT_MOC_LITERAL(791, 10),  // "samplerate"
        QT_MOC_LITERAL(802, 9),  // "bit_depth"
        QT_MOC_LITERAL(812, 8),  // "duration"
        QT_MOC_LITERAL(821, 24),  // "StreamURLRequestFinished"
        QT_MOC_LITERAL(846, 18),  // "OpenSettingsDialog"
        QT_MOC_LITERAL(865, 12),  // "Song::Source"
        QT_MOC_LITERAL(878, 6),  // "source"
        QT_MOC_LITERAL(885, 9),  // "Configure"
        QT_MOC_LITERAL(895, 10),  // "GetArtists"
        QT_MOC_LITERAL(906, 9),  // "GetAlbums"
        QT_MOC_LITERAL(916, 8),  // "GetSongs"
        QT_MOC_LITERAL(925, 19),  // "ResetArtistsRequest"
        QT_MOC_LITERAL(945, 18),  // "ResetAlbumsRequest"
        QT_MOC_LITERAL(964, 17)   // "ResetSongsRequest"
    },
    "StreamingService",
    "ExitFinished",
    "",
    "RequestLogin",
    "RequestLogout",
    "LoginWithCredentials",
    "api_token",
    "username",
    "password",
    "LoginSuccess",
    "LoginFailure",
    "error",
    "LoginFinished",
    "success",
    "TestSuccess",
    "TestFailure",
    "TestComplete",
    "ShowErrorDialog",
    "Results",
    "SongMap",
    "songs",
    "UpdateStatus",
    "text",
    "ProgressSetMaximum",
    "max",
    "UpdateProgress",
    "ArtistsResults",
    "ArtistsUpdateStatus",
    "ArtistsProgressSetMaximum",
    "ArtistsUpdateProgress",
    "AlbumsResults",
    "AlbumsUpdateStatus",
    "AlbumsProgressSetMaximum",
    "AlbumsUpdateProgress",
    "SongsResults",
    "SongsUpdateStatus",
    "SongsProgressSetMaximum",
    "SongsUpdateProgress",
    "SearchResults",
    "id",
    "SearchUpdateStatus",
    "SearchProgressSetMaximum",
    "SearchUpdateProgress",
    "AddArtists",
    "SongList",
    "AddAlbums",
    "AddSongs",
    "RemoveArtists",
    "RemoveAlbums",
    "RemoveSongsByList",
    "RemoveSongsByMap",
    "StreamURLFailure",
    "media_url",
    "StreamURLSuccess",
    "stream_url",
    "Song::FileType",
    "filetype",
    "samplerate",
    "bit_depth",
    "duration",
    "StreamURLRequestFinished",
    "OpenSettingsDialog",
    "Song::Source",
    "source",
    "Configure",
    "GetArtists",
    "GetAlbums",
    "GetSongs",
    "ResetArtistsRequest",
    "ResetAlbumsRequest",
    "ResetSongsRequest"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_StreamingService[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      45,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  326,    2, 0x06,    1 /* Public */,
       3,    0,  327,    2, 0x06,    2 /* Public */,
       4,    0,  328,    2, 0x06,    3 /* Public */,
       5,    3,  329,    2, 0x06,    4 /* Public */,
       9,    0,  336,    2, 0x06,    8 /* Public */,
      10,    1,  337,    2, 0x06,    9 /* Public */,
      12,    2,  340,    2, 0x06,   11 /* Public */,
      12,    1,  345,    2, 0x26,   14 /* Public | MethodCloned */,
      14,    0,  348,    2, 0x06,   16 /* Public */,
      15,    1,  349,    2, 0x06,   17 /* Public */,
      16,    2,  352,    2, 0x06,   19 /* Public */,
      16,    1,  357,    2, 0x26,   22 /* Public | MethodCloned */,
      17,    1,  360,    2, 0x06,   24 /* Public */,
      18,    2,  363,    2, 0x06,   26 /* Public */,
      21,    1,  368,    2, 0x06,   29 /* Public */,
      23,    1,  371,    2, 0x06,   31 /* Public */,
      25,    1,  374,    2, 0x06,   33 /* Public */,
      26,    2,  377,    2, 0x06,   35 /* Public */,
      27,    1,  382,    2, 0x06,   38 /* Public */,
      28,    1,  385,    2, 0x06,   40 /* Public */,
      29,    1,  388,    2, 0x06,   42 /* Public */,
      30,    2,  391,    2, 0x06,   44 /* Public */,
      31,    1,  396,    2, 0x06,   47 /* Public */,
      32,    1,  399,    2, 0x06,   49 /* Public */,
      33,    1,  402,    2, 0x06,   51 /* Public */,
      34,    2,  405,    2, 0x06,   53 /* Public */,
      35,    1,  410,    2, 0x06,   56 /* Public */,
      36,    1,  413,    2, 0x06,   58 /* Public */,
      37,    1,  416,    2, 0x06,   60 /* Public */,
      38,    3,  419,    2, 0x06,   62 /* Public */,
      40,    2,  426,    2, 0x06,   66 /* Public */,
      41,    2,  431,    2, 0x06,   69 /* Public */,
      42,    2,  436,    2, 0x06,   72 /* Public */,
      43,    1,  441,    2, 0x06,   75 /* Public */,
      45,    1,  444,    2, 0x06,   77 /* Public */,
      46,    1,  447,    2, 0x06,   79 /* Public */,
      47,    1,  450,    2, 0x06,   81 /* Public */,
      48,    1,  453,    2, 0x06,   83 /* Public */,
      49,    1,  456,    2, 0x06,   85 /* Public */,
      50,    1,  459,    2, 0x06,   87 /* Public */,
      51,    3,  462,    2, 0x06,   89 /* Public */,
      53,    7,  469,    2, 0x06,   93 /* Public */,
      60,    5,  484,    2, 0x06,  101 /* Public */,
      60,    4,  495,    2, 0x26,  107 /* Public | MethodCloned */,
      61,    1,  504,    2, 0x06,  112 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      64,    0,  507,    2, 0x0a,  114 /* Public */,
      65,    0,  508,    2, 0x0a,  115 /* Public */,
      66,    0,  509,    2, 0x0a,  116 /* Public */,
      67,    0,  510,    2, 0x0a,  117 /* Public */,
      68,    0,  511,    2, 0x0a,  118 /* Public */,
      69,    0,  512,    2, 0x0a,  119 /* Public */,
      70,    0,  513,    2, 0x0a,  120 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   13,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   13,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   11,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   11,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   11,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   11,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 19, QMetaType::QString,   39,   20,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   39,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   39,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   39,   24,
    QMetaType::Void, 0x80000000 | 44,   20,
    QMetaType::Void, 0x80000000 | 44,   20,
    QMetaType::Void, 0x80000000 | 44,   20,
    QMetaType::Void, 0x80000000 | 44,   20,
    QMetaType::Void, 0x80000000 | 44,   20,
    QMetaType::Void, 0x80000000 | 44,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QString,   39,   52,   11,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QUrl, 0x80000000 | 55, QMetaType::Int, QMetaType::Int, QMetaType::LongLong,   39,   52,   54,   56,   57,   58,   59,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::Bool, QMetaType::QUrl, QMetaType::QString,   39,   52,   13,   54,   11,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::Bool, QMetaType::QUrl,   39,   52,   13,   54,
    QMetaType::Void, 0x80000000 | 62,   63,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject StreamingService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StreamingService.offsetsAndSizes,
    qt_meta_data_StreamingService,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_StreamingService_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StreamingService, std::true_type>,
        // method 'ExitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RequestLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RequestLogout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoginWithCredentials'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LoginSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoginFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LoginFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LoginFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'TestSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TestFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'TestComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'TestComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ShowErrorDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Results'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ProgressSetMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'UpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ArtistsResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ArtistsUpdateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ArtistsProgressSetMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ArtistsUpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumsResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AlbumsUpdateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AlbumsProgressSetMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumsUpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongsResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SongsUpdateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SongsProgressSetMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongsUpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SearchResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SearchUpdateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SearchProgressSetMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SearchUpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AddArtists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'AddAlbums'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'AddSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'RemoveArtists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'RemoveAlbums'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'RemoveSongsByList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'RemoveSongsByMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        // method 'StreamURLFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'StreamURLSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song::FileType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>,
        // method 'StreamURLRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'StreamURLRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'OpenSettingsDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song::Source, std::false_type>,
        // method 'Configure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetArtists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetAlbums'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetArtistsRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetAlbumsRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetSongsRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void StreamingService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StreamingService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ExitFinished(); break;
        case 1: _t->RequestLogin(); break;
        case 2: _t->RequestLogout(); break;
        case 3: _t->LoginWithCredentials((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->LoginSuccess(); break;
        case 5: _t->LoginFailure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->LoginFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->LoginFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->TestSuccess(); break;
        case 9: _t->TestFailure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->TestComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->TestComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->ShowErrorDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->Results((*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->UpdateStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->ProgressSetMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->UpdateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->ArtistsResults((*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->ArtistsUpdateStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->ArtistsProgressSetMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->ArtistsUpdateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->AlbumsResults((*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 22: _t->AlbumsUpdateStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->AlbumsProgressSetMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->AlbumsUpdateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->SongsResults((*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 26: _t->SongsUpdateStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->SongsProgressSetMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->SongsUpdateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->SearchResults((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 30: _t->SearchUpdateStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 31: _t->SearchProgressSetMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 32: _t->SearchUpdateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 33: _t->AddArtists((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 34: _t->AddAlbums((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 35: _t->AddSongs((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 36: _t->RemoveArtists((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 37: _t->RemoveAlbums((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 38: _t->RemoveSongsByList((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 39: _t->RemoveSongsByMap((*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[1]))); break;
        case 40: _t->StreamURLFailure((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 41: _t->StreamURLSuccess((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Song::FileType>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[7]))); break;
        case 42: _t->StreamURLRequestFinished((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 43: _t->StreamURLRequestFinished((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[4]))); break;
        case 44: _t->OpenSettingsDialog((*reinterpret_cast< std::add_pointer_t<Song::Source>>(_a[1]))); break;
        case 45: _t->Configure(); break;
        case 46: _t->GetArtists(); break;
        case 47: _t->GetAlbums(); break;
        case 48: _t->GetSongs(); break;
        case 49: _t->ResetArtistsRequest(); break;
        case 50: _t->ResetAlbumsRequest(); break;
        case 51: _t->ResetSongsRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StreamingService::*)();
            if (_t _q_method = &StreamingService::ExitFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)();
            if (_t _q_method = &StreamingService::RequestLogin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)();
            if (_t _q_method = &StreamingService::RequestLogout; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const QString & , const QString & , const QString & );
            if (_t _q_method = &StreamingService::LoginWithCredentials; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)();
            if (_t _q_method = &StreamingService::LoginSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const QString & );
            if (_t _q_method = &StreamingService::LoginFailure; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const bool , const QString & );
            if (_t _q_method = &StreamingService::LoginFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)();
            if (_t _q_method = &StreamingService::TestSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const QString & );
            if (_t _q_method = &StreamingService::TestFailure; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const bool , const QString & );
            if (_t _q_method = &StreamingService::TestComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const QString & );
            if (_t _q_method = &StreamingService::ShowErrorDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongMap & , const QString & );
            if (_t _q_method = &StreamingService::Results; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const QString & );
            if (_t _q_method = &StreamingService::UpdateStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int );
            if (_t _q_method = &StreamingService::ProgressSetMaximum; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int );
            if (_t _q_method = &StreamingService::UpdateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongMap & , const QString & );
            if (_t _q_method = &StreamingService::ArtistsResults; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const QString & );
            if (_t _q_method = &StreamingService::ArtistsUpdateStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int );
            if (_t _q_method = &StreamingService::ArtistsProgressSetMaximum; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int );
            if (_t _q_method = &StreamingService::ArtistsUpdateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongMap & , const QString & );
            if (_t _q_method = &StreamingService::AlbumsResults; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const QString & );
            if (_t _q_method = &StreamingService::AlbumsUpdateStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int );
            if (_t _q_method = &StreamingService::AlbumsProgressSetMaximum; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int );
            if (_t _q_method = &StreamingService::AlbumsUpdateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongMap & , const QString & );
            if (_t _q_method = &StreamingService::SongsResults; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const QString & );
            if (_t _q_method = &StreamingService::SongsUpdateStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int );
            if (_t _q_method = &StreamingService::SongsProgressSetMaximum; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int );
            if (_t _q_method = &StreamingService::SongsUpdateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int , const SongMap & , const QString & );
            if (_t _q_method = &StreamingService::SearchResults; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int , const QString & );
            if (_t _q_method = &StreamingService::SearchUpdateStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int , const int );
            if (_t _q_method = &StreamingService::SearchProgressSetMaximum; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const int , const int );
            if (_t _q_method = &StreamingService::SearchUpdateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongList & );
            if (_t _q_method = &StreamingService::AddArtists; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongList & );
            if (_t _q_method = &StreamingService::AddAlbums; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongList & );
            if (_t _q_method = &StreamingService::AddSongs; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongList & );
            if (_t _q_method = &StreamingService::RemoveArtists; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongList & );
            if (_t _q_method = &StreamingService::RemoveAlbums; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongList & );
            if (_t _q_method = &StreamingService::RemoveSongsByList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const SongMap & );
            if (_t _q_method = &StreamingService::RemoveSongsByMap; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const uint , const QUrl & , const QString & );
            if (_t _q_method = &StreamingService::StreamURLFailure; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const uint , const QUrl & , const QUrl & , const Song::FileType , const int , const int , const qint64 );
            if (_t _q_method = &StreamingService::StreamURLSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const uint , const QUrl & , const bool , const QUrl & , const QString & );
            if (_t _q_method = &StreamingService::StreamURLRequestFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (StreamingService::*)(const Song::Source );
            if (_t _q_method = &StreamingService::OpenSettingsDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 44;
                return;
            }
        }
    }
}

const QMetaObject *StreamingService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamingService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamingService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StreamingService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void StreamingService::ExitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StreamingService::RequestLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void StreamingService::RequestLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void StreamingService::LoginWithCredentials(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StreamingService::LoginSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void StreamingService::LoginFailure(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StreamingService::LoginFinished(const bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 8
void StreamingService::TestSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void StreamingService::TestFailure(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StreamingService::TestComplete(const bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 12
void StreamingService::ShowErrorDialog(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void StreamingService::Results(const SongMap & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void StreamingService::UpdateStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void StreamingService::ProgressSetMaximum(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void StreamingService::UpdateProgress(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void StreamingService::ArtistsResults(const SongMap & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void StreamingService::ArtistsUpdateStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void StreamingService::ArtistsProgressSetMaximum(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void StreamingService::ArtistsUpdateProgress(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void StreamingService::AlbumsResults(const SongMap & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void StreamingService::AlbumsUpdateStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void StreamingService::AlbumsProgressSetMaximum(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void StreamingService::AlbumsUpdateProgress(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void StreamingService::SongsResults(const SongMap & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void StreamingService::SongsUpdateStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void StreamingService::SongsProgressSetMaximum(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void StreamingService::SongsUpdateProgress(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void StreamingService::SearchResults(const int _t1, const SongMap & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void StreamingService::SearchUpdateStatus(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void StreamingService::SearchProgressSetMaximum(const int _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void StreamingService::SearchUpdateProgress(const int _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void StreamingService::AddArtists(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void StreamingService::AddAlbums(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void StreamingService::AddSongs(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void StreamingService::RemoveArtists(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void StreamingService::RemoveAlbums(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void StreamingService::RemoveSongsByList(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void StreamingService::RemoveSongsByMap(const SongMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void StreamingService::StreamURLFailure(const uint _t1, const QUrl & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void StreamingService::StreamURLSuccess(const uint _t1, const QUrl & _t2, const QUrl & _t3, const Song::FileType _t4, const int _t5, const int _t6, const qint64 _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void StreamingService::StreamURLRequestFinished(const uint _t1, const QUrl & _t2, const bool _t3, const QUrl & _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 44
void StreamingService::OpenSettingsDialog(const Song::Source _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
