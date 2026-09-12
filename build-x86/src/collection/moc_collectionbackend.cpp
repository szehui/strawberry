/****************************************************************************
** Meta object code from reading C++ file 'collectionbackend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/collection/collectionbackend.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collectionbackend.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CollectionBackendInterface_t {
    uint offsetsAndSizes[2];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CollectionBackendInterface_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CollectionBackendInterface_t qt_meta_stringdata_CollectionBackendInterface = {
    {
        QT_MOC_LITERAL(0, 26)   // "CollectionBackendInterface"
    },
    "CollectionBackendInterface"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CollectionBackendInterface[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject CollectionBackendInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CollectionBackendInterface.offsetsAndSizes,
    qt_meta_data_CollectionBackendInterface,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CollectionBackendInterface_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CollectionBackendInterface, std::true_type>
    >,
    nullptr
} };

void CollectionBackendInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *CollectionBackendInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollectionBackendInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CollectionBackendInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CollectionBackendInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_CollectionBackend_t {
    uint offsetsAndSizes[184];
    char stringdata0[18];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[4];
    char stringdata5[27];
    char stringdata6[7];
    char stringdata7[17];
    char stringdata8[9];
    char stringdata9[9];
    char stringdata10[6];
    char stringdata11[3];
    char stringdata12[11];
    char stringdata13[13];
    char stringdata14[13];
    char stringdata15[23];
    char stringdata16[10];
    char stringdata17[14];
    char stringdata18[22];
    char stringdata19[6];
    char stringdata20[24];
    char stringdata21[23];
    char stringdata22[19];
    char stringdata23[13];
    char stringdata24[6];
    char stringdata25[6];
    char stringdata26[5];
    char stringdata27[12];
    char stringdata28[16];
    char stringdata29[21];
    char stringdata30[23];
    char stringdata31[22];
    char stringdata32[13];
    char stringdata33[5];
    char stringdata34[16];
    char stringdata35[17];
    char stringdata36[20];
    char stringdata37[8];
    char stringdata38[10];
    char stringdata39[17];
    char stringdata40[12];
    char stringdata41[18];
    char stringdata42[12];
    char stringdata43[4];
    char stringdata44[21];
    char stringdata45[12];
    char stringdata46[19];
    char stringdata47[8];
    char stringdata48[14];
    char stringdata49[25];
    char stringdata50[23];
    char stringdata51[22];
    char stringdata52[6];
    char stringdata53[13];
    char stringdata54[21];
    char stringdata55[11];
    char stringdata56[14];
    char stringdata57[14];
    char stringdata58[10];
    char stringdata59[17];
    char stringdata60[8];
    char stringdata61[3];
    char stringdata62[19];
    char stringdata63[19];
    char stringdata64[9];
    char stringdata65[20];
    char stringdata66[11];
    char stringdata67[8];
    char stringdata68[12];
    char stringdata69[10];
    char stringdata70[16];
    char stringdata71[5];
    char stringdata72[5];
    char stringdata73[10];
    char stringdata74[9];
    char stringdata75[19];
    char stringdata76[28];
    char stringdata77[11];
    char stringdata78[7];
    char stringdata79[6];
    char stringdata80[17];
    char stringdata81[11];
    char stringdata82[16];
    char stringdata83[10];
    char stringdata84[17];
    char stringdata85[7];
    char stringdata86[18];
    char stringdata87[15];
    char stringdata88[13];
    char stringdata89[30];
    char stringdata90[12];
    char stringdata91[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CollectionBackend_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CollectionBackend_t qt_meta_stringdata_CollectionBackend = {
    {
        QT_MOC_LITERAL(0, 17),  // "CollectionBackend"
        QT_MOC_LITERAL(18, 14),  // "DirectoryAdded"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 19),  // "CollectionDirectory"
        QT_MOC_LITERAL(54, 3),  // "dir"
        QT_MOC_LITERAL(58, 26),  // "CollectionSubdirectoryList"
        QT_MOC_LITERAL(85, 6),  // "subdir"
        QT_MOC_LITERAL(92, 16),  // "DirectoryDeleted"
        QT_MOC_LITERAL(109, 8),  // "GotSongs"
        QT_MOC_LITERAL(118, 8),  // "SongList"
        QT_MOC_LITERAL(127, 5),  // "songs"
        QT_MOC_LITERAL(133, 2),  // "id"
        QT_MOC_LITERAL(136, 10),  // "SongsAdded"
        QT_MOC_LITERAL(147, 12),  // "SongsDeleted"
        QT_MOC_LITERAL(160, 12),  // "SongsChanged"
        QT_MOC_LITERAL(173, 22),  // "SongsStatisticsChanged"
        QT_MOC_LITERAL(196, 9),  // "save_tags"
        QT_MOC_LITERAL(206, 13),  // "DatabaseReset"
        QT_MOC_LITERAL(220, 21),  // "TotalSongCountUpdated"
        QT_MOC_LITERAL(242, 5),  // "count"
        QT_MOC_LITERAL(248, 23),  // "TotalArtistCountUpdated"
        QT_MOC_LITERAL(272, 22),  // "TotalAlbumCountUpdated"
        QT_MOC_LITERAL(295, 18),  // "SongsRatingChanged"
        QT_MOC_LITERAL(314, 12),  // "ExitFinished"
        QT_MOC_LITERAL(327, 5),  // "Error"
        QT_MOC_LITERAL(333, 5),  // "error"
        QT_MOC_LITERAL(339, 4),  // "Exit"
        QT_MOC_LITERAL(344, 11),  // "GetAllSongs"
        QT_MOC_LITERAL(356, 15),  // "LoadDirectories"
        QT_MOC_LITERAL(372, 20),  // "UpdateTotalSongCount"
        QT_MOC_LITERAL(393, 22),  // "UpdateTotalArtistCount"
        QT_MOC_LITERAL(416, 21),  // "UpdateTotalAlbumCount"
        QT_MOC_LITERAL(438, 12),  // "AddDirectory"
        QT_MOC_LITERAL(451, 4),  // "path"
        QT_MOC_LITERAL(456, 15),  // "RemoveDirectory"
        QT_MOC_LITERAL(472, 16),  // "AddOrUpdateSongs"
        QT_MOC_LITERAL(489, 19),  // "UpdateSongsBySongID"
        QT_MOC_LITERAL(509, 7),  // "SongMap"
        QT_MOC_LITERAL(517, 9),  // "new_songs"
        QT_MOC_LITERAL(527, 16),  // "UpdateMTimesOnly"
        QT_MOC_LITERAL(544, 11),  // "DeleteSongs"
        QT_MOC_LITERAL(556, 17),  // "DeleteSongsByUrls"
        QT_MOC_LITERAL(574, 11),  // "QList<QUrl>"
        QT_MOC_LITERAL(586, 3),  // "url"
        QT_MOC_LITERAL(590, 20),  // "MarkSongsUnavailable"
        QT_MOC_LITERAL(611, 11),  // "unavailable"
        QT_MOC_LITERAL(623, 18),  // "AddOrUpdateSubdirs"
        QT_MOC_LITERAL(642, 7),  // "subdirs"
        QT_MOC_LITERAL(650, 13),  // "DeleteSubdirs"
        QT_MOC_LITERAL(664, 24),  // "CompilationsNeedUpdating"
        QT_MOC_LITERAL(689, 22),  // "UpdateEmbeddedAlbumArt"
        QT_MOC_LITERAL(712, 21),  // "effective_albumartist"
        QT_MOC_LITERAL(734, 5),  // "album"
        QT_MOC_LITERAL(740, 12),  // "art_embedded"
        QT_MOC_LITERAL(753, 20),  // "UpdateManualAlbumArt"
        QT_MOC_LITERAL(774, 10),  // "art_manual"
        QT_MOC_LITERAL(785, 13),  // "UnsetAlbumArt"
        QT_MOC_LITERAL(799, 13),  // "ClearAlbumArt"
        QT_MOC_LITERAL(813, 9),  // "art_unset"
        QT_MOC_LITERAL(823, 16),  // "ForceCompilation"
        QT_MOC_LITERAL(840, 7),  // "artists"
        QT_MOC_LITERAL(848, 2),  // "on"
        QT_MOC_LITERAL(851, 18),  // "IncrementPlayCount"
        QT_MOC_LITERAL(870, 18),  // "IncrementSkipCount"
        QT_MOC_LITERAL(889, 8),  // "progress"
        QT_MOC_LITERAL(898, 19),  // "ResetPlayStatistics"
        QT_MOC_LITERAL(918, 10),  // "QList<int>"
        QT_MOC_LITERAL(929, 7),  // "id_list"
        QT_MOC_LITERAL(937, 11),  // "id_str_list"
        QT_MOC_LITERAL(949, 9),  // "DeleteAll"
        QT_MOC_LITERAL(959, 15),  // "SongPathChanged"
        QT_MOC_LITERAL(975, 4),  // "Song"
        QT_MOC_LITERAL(980, 4),  // "song"
        QT_MOC_LITERAL(985, 9),  // "QFileInfo"
        QT_MOC_LITERAL(995, 8),  // "new_file"
        QT_MOC_LITERAL(1004, 18),  // "std::optional<int>"
        QT_MOC_LITERAL(1023, 27),  // "new_collection_directory_id"
        QT_MOC_LITERAL(1051, 10),  // "GetSongsBy"
        QT_MOC_LITERAL(1062, 6),  // "artist"
        QT_MOC_LITERAL(1069, 5),  // "title"
        QT_MOC_LITERAL(1075, 16),  // "UpdateLastPlayed"
        QT_MOC_LITERAL(1092, 10),  // "lastplayed"
        QT_MOC_LITERAL(1103, 15),  // "UpdatePlayCount"
        QT_MOC_LITERAL(1119, 9),  // "playcount"
        QT_MOC_LITERAL(1129, 16),  // "UpdateSongRating"
        QT_MOC_LITERAL(1146, 6),  // "rating"
        QT_MOC_LITERAL(1153, 17),  // "UpdateSongsRating"
        QT_MOC_LITERAL(1171, 14),  // "UpdateLastSeen"
        QT_MOC_LITERAL(1186, 12),  // "directory_id"
        QT_MOC_LITERAL(1199, 29),  // "expire_unavailable_songs_days"
        QT_MOC_LITERAL(1229, 11),  // "ExpireSongs"
        QT_MOC_LITERAL(1241, 6)   // "parent"
    },
    "CollectionBackend",
    "DirectoryAdded",
    "",
    "CollectionDirectory",
    "dir",
    "CollectionSubdirectoryList",
    "subdir",
    "DirectoryDeleted",
    "GotSongs",
    "SongList",
    "songs",
    "id",
    "SongsAdded",
    "SongsDeleted",
    "SongsChanged",
    "SongsStatisticsChanged",
    "save_tags",
    "DatabaseReset",
    "TotalSongCountUpdated",
    "count",
    "TotalArtistCountUpdated",
    "TotalAlbumCountUpdated",
    "SongsRatingChanged",
    "ExitFinished",
    "Error",
    "error",
    "Exit",
    "GetAllSongs",
    "LoadDirectories",
    "UpdateTotalSongCount",
    "UpdateTotalArtistCount",
    "UpdateTotalAlbumCount",
    "AddDirectory",
    "path",
    "RemoveDirectory",
    "AddOrUpdateSongs",
    "UpdateSongsBySongID",
    "SongMap",
    "new_songs",
    "UpdateMTimesOnly",
    "DeleteSongs",
    "DeleteSongsByUrls",
    "QList<QUrl>",
    "url",
    "MarkSongsUnavailable",
    "unavailable",
    "AddOrUpdateSubdirs",
    "subdirs",
    "DeleteSubdirs",
    "CompilationsNeedUpdating",
    "UpdateEmbeddedAlbumArt",
    "effective_albumartist",
    "album",
    "art_embedded",
    "UpdateManualAlbumArt",
    "art_manual",
    "UnsetAlbumArt",
    "ClearAlbumArt",
    "art_unset",
    "ForceCompilation",
    "artists",
    "on",
    "IncrementPlayCount",
    "IncrementSkipCount",
    "progress",
    "ResetPlayStatistics",
    "QList<int>",
    "id_list",
    "id_str_list",
    "DeleteAll",
    "SongPathChanged",
    "Song",
    "song",
    "QFileInfo",
    "new_file",
    "std::optional<int>",
    "new_collection_directory_id",
    "GetSongsBy",
    "artist",
    "title",
    "UpdateLastPlayed",
    "lastplayed",
    "UpdatePlayCount",
    "playcount",
    "UpdateSongRating",
    "rating",
    "UpdateSongsRating",
    "UpdateLastSeen",
    "directory_id",
    "expire_unavailable_songs_days",
    "ExpireSongs",
    "parent"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CollectionBackend[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,  587, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  356,    2, 0x06,    1 /* Public */,
       7,    1,  361,    2, 0x06,    4 /* Public */,
       8,    2,  364,    2, 0x06,    6 /* Public */,
      12,    1,  369,    2, 0x06,    9 /* Public */,
      13,    1,  372,    2, 0x06,   11 /* Public */,
      14,    1,  375,    2, 0x06,   13 /* Public */,
      15,    2,  378,    2, 0x06,   15 /* Public */,
      15,    1,  383,    2, 0x26,   18 /* Public | MethodCloned */,
      17,    0,  386,    2, 0x06,   20 /* Public */,
      18,    1,  387,    2, 0x06,   21 /* Public */,
      20,    1,  390,    2, 0x06,   23 /* Public */,
      21,    1,  393,    2, 0x06,   25 /* Public */,
      22,    2,  396,    2, 0x06,   27 /* Public */,
      23,    0,  401,    2, 0x06,   30 /* Public */,
      24,    1,  402,    2, 0x06,   31 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      26,    0,  405,    2, 0x0a,   33 /* Public */,
      27,    1,  406,    2, 0x0a,   34 /* Public */,
      28,    0,  409,    2, 0x0a,   36 /* Public */,
      29,    0,  410,    2, 0x0a,   37 /* Public */,
      30,    0,  411,    2, 0x0a,   38 /* Public */,
      31,    0,  412,    2, 0x0a,   39 /* Public */,
      32,    1,  413,    2, 0x0a,   40 /* Public */,
      34,    1,  416,    2, 0x0a,   42 /* Public */,
      35,    1,  419,    2, 0x0a,   44 /* Public */,
      36,    1,  422,    2, 0x0a,   46 /* Public */,
      39,    1,  425,    2, 0x0a,   48 /* Public */,
      40,    1,  428,    2, 0x0a,   50 /* Public */,
      41,    1,  431,    2, 0x0a,   52 /* Public */,
      44,    2,  434,    2, 0x0a,   54 /* Public */,
      44,    1,  439,    2, 0x2a,   57 /* Public | MethodCloned */,
      46,    1,  442,    2, 0x0a,   59 /* Public */,
      48,    1,  445,    2, 0x0a,   61 /* Public */,
      49,    0,  448,    2, 0x0a,   63 /* Public */,
      50,    3,  449,    2, 0x0a,   64 /* Public */,
      54,    3,  456,    2, 0x0a,   68 /* Public */,
      56,    2,  463,    2, 0x0a,   72 /* Public */,
      57,    3,  468,    2, 0x0a,   75 /* Public */,
      59,    3,  475,    2, 0x0a,   79 /* Public */,
      62,    1,  482,    2, 0x0a,   83 /* Public */,
      63,    2,  485,    2, 0x0a,   85 /* Public */,
      65,    2,  490,    2, 0x0a,   88 /* Public */,
      65,    1,  495,    2, 0x2a,   91 /* Public | MethodCloned */,
      65,    2,  498,    2, 0x0a,   93 /* Public */,
      65,    1,  503,    2, 0x2a,   96 /* Public | MethodCloned */,
      65,    1,  506,    2, 0x0a,   98 /* Public */,
      69,    0,  509,    2, 0x0a,  100 /* Public */,
      70,    3,  510,    2, 0x0a,  101 /* Public */,
      77,    3,  517,    2, 0x0a,  105 /* Public */,
      80,    4,  524,    2, 0x0a,  109 /* Public */,
      82,    4,  533,    2, 0x0a,  114 /* Public */,
      82,    3,  542,    2, 0x2a,  119 /* Public | MethodCloned */,
      84,    3,  549,    2, 0x0a,  123 /* Public */,
      84,    2,  556,    2, 0x2a,  127 /* Public | MethodCloned */,
      86,    3,  561,    2, 0x0a,  130 /* Public */,
      86,    2,  568,    2, 0x2a,  134 /* Public | MethodCloned */,
      87,    2,  573,    2, 0x0a,  137 /* Public */,
      90,    2,  578,    2, 0x0a,  140 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   11,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   16,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   45,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 5,   47,
    QMetaType::Void, 0x80000000 | 5,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   51,   52,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl,   51,   52,   55,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   51,   52,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   51,   52,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::Bool,   52,   60,   61,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   11,   64,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   16,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 66, QMetaType::Bool,   67,   16,
    QMetaType::Void, 0x80000000 | 66,   67,
    QMetaType::Bool, QMetaType::QStringList,   68,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 71, 0x80000000 | 73, 0x80000000 | 75,   72,   74,   76,
    0x80000000 | 9, QMetaType::QString, QMetaType::QString, QMetaType::QString,   78,   52,   79,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,   78,   52,   79,   81,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   78,   79,   83,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   78,   79,   83,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Bool,   11,   85,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   11,   85,
    QMetaType::Void, 0x80000000 | 66, QMetaType::Float, QMetaType::Bool,   67,   85,   16,
    QMetaType::Void, 0x80000000 | 66, QMetaType::Float,   67,   85,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   88,   89,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   88,   89,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,   91,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,  583,    2, 0x0e,  143 /* Public */,
       0,    0,  586,    2, 0x2e,  144 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject CollectionBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<CollectionBackendInterface::staticMetaObject>(),
    qt_meta_stringdata_CollectionBackend.offsetsAndSizes,
    qt_meta_data_CollectionBackend,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CollectionBackend_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CollectionBackend, std::true_type>,
        // method 'DirectoryAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionDirectory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectoryList &, std::false_type>,
        // method 'DirectoryDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionDirectory &, std::false_type>,
        // method 'GotSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongsAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsStatisticsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SongsStatisticsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'DatabaseReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TotalSongCountUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'TotalArtistCountUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'TotalAlbumCountUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongsRatingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ExitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetAllSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'LoadDirectories'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateTotalSongCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateTotalArtistCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateTotalAlbumCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'RemoveDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionDirectory &, std::false_type>,
        // method 'AddOrUpdateSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'UpdateSongsBySongID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        // method 'UpdateMTimesOnly'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'DeleteSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'DeleteSongsByUrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        // method 'MarkSongsUnavailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'MarkSongsUnavailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'AddOrUpdateSubdirs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectoryList &, std::false_type>,
        // method 'DeleteSubdirs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectoryList &, std::false_type>,
        // method 'CompilationsNeedUpdating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateEmbeddedAlbumArt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'UpdateManualAlbumArt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'UnsetAlbumArt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ClearAlbumArt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ForceCompilation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'IncrementPlayCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'IncrementSkipCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'ResetPlayStatistics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ResetPlayStatistics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ResetPlayStatistics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ResetPlayStatistics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'ResetPlayStatistics'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'DeleteAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SongPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFileInfo &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::optional<int>, std::false_type>,
        // method 'GetSongsBy'
        QtPrivate::TypeAndForceComplete<SongList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdateLastPlayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>,
        // method 'UpdatePlayCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'UpdatePlayCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'UpdateSongRating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'UpdateSongRating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'UpdateSongsRating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'UpdateSongsRating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'UpdateLastSeen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ExpireSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // constructor 'CollectionBackend'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void CollectionBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { CollectionBackend *_r = new CollectionBackend((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { CollectionBackend *_r = new CollectionBackend();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CollectionBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DirectoryAdded((*reinterpret_cast< std::add_pointer_t<CollectionDirectory>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CollectionSubdirectoryList>>(_a[2]))); break;
        case 1: _t->DirectoryDeleted((*reinterpret_cast< std::add_pointer_t<CollectionDirectory>>(_a[1]))); break;
        case 2: _t->GotSongs((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->SongsAdded((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 4: _t->SongsDeleted((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 5: _t->SongsChanged((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 6: _t->SongsStatisticsChanged((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->SongsStatisticsChanged((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 8: _t->DatabaseReset(); break;
        case 9: _t->TotalSongCountUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->TotalArtistCountUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->TotalAlbumCountUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->SongsRatingChanged((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 13: _t->ExitFinished(); break;
        case 14: _t->Error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->Exit(); break;
        case 16: _t->GetAllSongs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->LoadDirectories(); break;
        case 18: _t->UpdateTotalSongCount(); break;
        case 19: _t->UpdateTotalArtistCount(); break;
        case 20: _t->UpdateTotalAlbumCount(); break;
        case 21: _t->AddDirectory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->RemoveDirectory((*reinterpret_cast< std::add_pointer_t<CollectionDirectory>>(_a[1]))); break;
        case 23: _t->AddOrUpdateSongs((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 24: _t->UpdateSongsBySongID((*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[1]))); break;
        case 25: _t->UpdateMTimesOnly((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 26: _t->DeleteSongs((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 27: _t->DeleteSongsByUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 28: _t->MarkSongsUnavailable((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 29: _t->MarkSongsUnavailable((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 30: _t->AddOrUpdateSubdirs((*reinterpret_cast< std::add_pointer_t<CollectionSubdirectoryList>>(_a[1]))); break;
        case 31: _t->DeleteSubdirs((*reinterpret_cast< std::add_pointer_t<CollectionSubdirectoryList>>(_a[1]))); break;
        case 32: _t->CompilationsNeedUpdating(); break;
        case 33: _t->UpdateEmbeddedAlbumArt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 34: _t->UpdateManualAlbumArt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3]))); break;
        case 35: _t->UnsetAlbumArt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 36: _t->ClearAlbumArt((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 37: _t->ForceCompilation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 38: _t->IncrementPlayCount((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->IncrementSkipCount((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 40: _t->ResetPlayStatistics((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 41: _t->ResetPlayStatistics((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 42: _t->ResetPlayStatistics((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 43: _t->ResetPlayStatistics((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 44: { bool _r = _t->ResetPlayStatistics((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->DeleteAll(); break;
        case 46: _t->SongPathChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFileInfo>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::optional<int>>>(_a[3]))); break;
        case 47: { SongList _r = _t->GetSongsBy((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< SongList*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->UpdateLastPlayed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[4]))); break;
        case 49: _t->UpdatePlayCount((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 50: _t->UpdatePlayCount((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 51: _t->UpdateSongRating((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 52: _t->UpdateSongRating((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 53: _t->UpdateSongsRating((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 54: _t->UpdateSongsRating((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 55: _t->UpdateLastSeen((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 56: _t->ExpireSongs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionDirectory >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectoryList >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionDirectory >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionDirectory >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectoryList >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectoryList >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 54:
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
            using _t = void (CollectionBackend::*)(const CollectionDirectory & , const CollectionSubdirectoryList & );
            if (_t _q_method = &CollectionBackend::DirectoryAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const CollectionDirectory & );
            if (_t _q_method = &CollectionBackend::DirectoryDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const SongList & , const int );
            if (_t _q_method = &CollectionBackend::GotSongs; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const SongList & );
            if (_t _q_method = &CollectionBackend::SongsAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const SongList & );
            if (_t _q_method = &CollectionBackend::SongsDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const SongList & );
            if (_t _q_method = &CollectionBackend::SongsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const SongList & , const bool );
            if (_t _q_method = &CollectionBackend::SongsStatisticsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)();
            if (_t _q_method = &CollectionBackend::DatabaseReset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const int );
            if (_t _q_method = &CollectionBackend::TotalSongCountUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const int );
            if (_t _q_method = &CollectionBackend::TotalArtistCountUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const int );
            if (_t _q_method = &CollectionBackend::TotalAlbumCountUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const SongList & , const bool );
            if (_t _q_method = &CollectionBackend::SongsRatingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)();
            if (_t _q_method = &CollectionBackend::ExitFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CollectionBackend::*)(const QString & );
            if (_t _q_method = &CollectionBackend::Error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject *CollectionBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollectionBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CollectionBackend.stringdata0))
        return static_cast<void*>(this);
    return CollectionBackendInterface::qt_metacast(_clname);
}

int CollectionBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CollectionBackendInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void CollectionBackend::DirectoryAdded(const CollectionDirectory & _t1, const CollectionSubdirectoryList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CollectionBackend::DirectoryDeleted(const CollectionDirectory & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CollectionBackend::GotSongs(const SongList & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CollectionBackend::SongsAdded(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CollectionBackend::SongsDeleted(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CollectionBackend::SongsChanged(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CollectionBackend::SongsStatisticsChanged(const SongList & _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 8
void CollectionBackend::DatabaseReset()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void CollectionBackend::TotalSongCountUpdated(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CollectionBackend::TotalArtistCountUpdated(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CollectionBackend::TotalAlbumCountUpdated(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CollectionBackend::SongsRatingChanged(const SongList & _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CollectionBackend::ExitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void CollectionBackend::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
