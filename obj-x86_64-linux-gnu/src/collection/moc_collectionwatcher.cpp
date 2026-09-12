/****************************************************************************
** Meta object code from reading C++ file 'collectionwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/collection/collectionwatcher.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collectionwatcher.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CollectionWatcher_t {
    uint offsetsAndSizes[88];
    char stringdata0[18];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[6];
    char stringdata5[18];
    char stringdata6[13];
    char stringdata7[17];
    char stringdata8[12];
    char stringdata9[13];
    char stringdata10[18];
    char stringdata11[27];
    char stringdata12[8];
    char stringdata13[20];
    char stringdata14[15];
    char stringdata15[25];
    char stringdata16[15];
    char stringdata17[13];
    char stringdata18[30];
    char stringdata19[13];
    char stringdata20[12];
    char stringdata21[8];
    char stringdata22[13];
    char stringdata23[20];
    char stringdata24[4];
    char stringdata25[16];
    char stringdata26[16];
    char stringdata27[6];
    char stringdata28[15];
    char stringdata29[5];
    char stringdata30[17];
    char stringdata31[7];
    char stringdata32[21];
    char stringdata33[19];
    char stringdata34[12];
    char stringdata35[15];
    char stringdata36[17];
    char stringdata37[5];
    char stringdata38[23];
    char stringdata39[12];
    char stringdata40[36];
    char stringdata41[2];
    char stringdata42[20];
    char stringdata43[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CollectionWatcher_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CollectionWatcher_t qt_meta_stringdata_CollectionWatcher = {
    {
        QT_MOC_LITERAL(0, 17),  // "CollectionWatcher"
        QT_MOC_LITERAL(18, 17),  // "NewOrUpdatedSongs"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 8),  // "SongList"
        QT_MOC_LITERAL(46, 5),  // "songs"
        QT_MOC_LITERAL(52, 17),  // "SongsMTimeUpdated"
        QT_MOC_LITERAL(70, 12),  // "SongsDeleted"
        QT_MOC_LITERAL(83, 16),  // "SongsUnavailable"
        QT_MOC_LITERAL(100, 11),  // "unavailable"
        QT_MOC_LITERAL(112, 12),  // "SongsReadded"
        QT_MOC_LITERAL(125, 17),  // "SubdirsDiscovered"
        QT_MOC_LITERAL(143, 26),  // "CollectionSubdirectoryList"
        QT_MOC_LITERAL(170, 7),  // "subdirs"
        QT_MOC_LITERAL(178, 19),  // "SubdirsMTimeUpdated"
        QT_MOC_LITERAL(198, 14),  // "SubdirsDeleted"
        QT_MOC_LITERAL(213, 24),  // "CompilationsNeedUpdating"
        QT_MOC_LITERAL(238, 14),  // "UpdateLastSeen"
        QT_MOC_LITERAL(253, 12),  // "directory_id"
        QT_MOC_LITERAL(266, 29),  // "expire_unavailable_songs_days"
        QT_MOC_LITERAL(296, 12),  // "ExitFinished"
        QT_MOC_LITERAL(309, 11),  // "ScanStarted"
        QT_MOC_LITERAL(321, 7),  // "task_id"
        QT_MOC_LITERAL(329, 12),  // "AddDirectory"
        QT_MOC_LITERAL(342, 19),  // "CollectionDirectory"
        QT_MOC_LITERAL(362, 3),  // "dir"
        QT_MOC_LITERAL(366, 15),  // "RemoveDirectory"
        QT_MOC_LITERAL(382, 15),  // "SetRescanPaused"
        QT_MOC_LITERAL(398, 5),  // "pause"
        QT_MOC_LITERAL(404, 14),  // "ReloadSettings"
        QT_MOC_LITERAL(419, 4),  // "Exit"
        QT_MOC_LITERAL(424, 16),  // "DirectoryChanged"
        QT_MOC_LITERAL(441, 6),  // "subdir"
        QT_MOC_LITERAL(448, 20),  // "IncrementalScanCheck"
        QT_MOC_LITERAL(469, 18),  // "IncrementalScanNow"
        QT_MOC_LITERAL(488, 11),  // "FullScanNow"
        QT_MOC_LITERAL(500, 14),  // "RescanPathsNow"
        QT_MOC_LITERAL(515, 16),  // "ScanSubdirectory"
        QT_MOC_LITERAL(532, 4),  // "path"
        QT_MOC_LITERAL(537, 22),  // "CollectionSubdirectory"
        QT_MOC_LITERAL(560, 11),  // "files_count"
        QT_MOC_LITERAL(572, 35),  // "CollectionWatcher::ScanTransa..."
        QT_MOC_LITERAL(608, 1),  // "t"
        QT_MOC_LITERAL(610, 19),  // "force_noincremental"
        QT_MOC_LITERAL(630, 11)   // "RescanSongs"
    },
    "CollectionWatcher",
    "NewOrUpdatedSongs",
    "",
    "SongList",
    "songs",
    "SongsMTimeUpdated",
    "SongsDeleted",
    "SongsUnavailable",
    "unavailable",
    "SongsReadded",
    "SubdirsDiscovered",
    "CollectionSubdirectoryList",
    "subdirs",
    "SubdirsMTimeUpdated",
    "SubdirsDeleted",
    "CompilationsNeedUpdating",
    "UpdateLastSeen",
    "directory_id",
    "expire_unavailable_songs_days",
    "ExitFinished",
    "ScanStarted",
    "task_id",
    "AddDirectory",
    "CollectionDirectory",
    "dir",
    "RemoveDirectory",
    "SetRescanPaused",
    "pause",
    "ReloadSettings",
    "Exit",
    "DirectoryChanged",
    "subdir",
    "IncrementalScanCheck",
    "IncrementalScanNow",
    "FullScanNow",
    "RescanPathsNow",
    "ScanSubdirectory",
    "path",
    "CollectionSubdirectory",
    "files_count",
    "CollectionWatcher::ScanTransaction*",
    "t",
    "force_noincremental",
    "RescanSongs"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CollectionWatcher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  176,    2, 0x06,    1 /* Public */,
       5,    1,  179,    2, 0x06,    3 /* Public */,
       6,    1,  182,    2, 0x06,    5 /* Public */,
       7,    2,  185,    2, 0x06,    7 /* Public */,
       7,    1,  190,    2, 0x26,   10 /* Public | MethodCloned */,
       9,    2,  193,    2, 0x06,   12 /* Public */,
       9,    1,  198,    2, 0x26,   15 /* Public | MethodCloned */,
      10,    1,  201,    2, 0x06,   17 /* Public */,
      13,    1,  204,    2, 0x06,   19 /* Public */,
      14,    1,  207,    2, 0x06,   21 /* Public */,
      15,    0,  210,    2, 0x06,   23 /* Public */,
      16,    2,  211,    2, 0x06,   24 /* Public */,
      19,    0,  216,    2, 0x06,   27 /* Public */,
      20,    1,  217,    2, 0x06,   28 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      22,    2,  220,    2, 0x0a,   30 /* Public */,
      25,    1,  225,    2, 0x0a,   33 /* Public */,
      26,    1,  228,    2, 0x0a,   35 /* Public */,
      28,    0,  231,    2, 0x08,   37 /* Private */,
      29,    0,  232,    2, 0x08,   38 /* Private */,
      30,    1,  233,    2, 0x08,   39 /* Private */,
      32,    0,  236,    2, 0x08,   41 /* Private */,
      33,    0,  237,    2, 0x08,   42 /* Private */,
      34,    0,  238,    2, 0x08,   43 /* Private */,
      35,    0,  239,    2, 0x08,   44 /* Private */,
      36,    6,  240,    2, 0x08,   45 /* Private */,
      36,    5,  253,    2, 0x28,   52 /* Private | MethodCloned */,
      43,    1,  264,    2, 0x08,   58 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 11,   24,   12,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString, 0x80000000 | 38, QMetaType::ULongLong, 0x80000000 | 40, QMetaType::Bool,   24,   37,   31,   39,   41,   42,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString, 0x80000000 | 38, QMetaType::ULongLong, 0x80000000 | 40,   24,   37,   31,   39,   41,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject CollectionWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CollectionWatcher.offsetsAndSizes,
    qt_meta_data_CollectionWatcher,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CollectionWatcher_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CollectionWatcher, std::true_type>,
        // method 'NewOrUpdatedSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsMTimeUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsUnavailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SongsUnavailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsReadded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SongsReadded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SubdirsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectoryList &, std::false_type>,
        // method 'SubdirsMTimeUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectoryList &, std::false_type>,
        // method 'SubdirsDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectoryList &, std::false_type>,
        // method 'CompilationsNeedUpdating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateLastSeen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ExitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScanStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AddDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionDirectory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectoryList &, std::false_type>,
        // method 'RemoveDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionDirectory &, std::false_type>,
        // method 'SetRescanPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ReloadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DirectoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'IncrementalScanCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'IncrementalScanNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FullScanNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RescanPathsNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScanSubdirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionDirectory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<CollectionWatcher::ScanTransaction *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ScanSubdirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionDirectory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionSubdirectory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<CollectionWatcher::ScanTransaction *, std::false_type>,
        // method 'RescanSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>
    >,
    nullptr
} };

void CollectionWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CollectionWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NewOrUpdatedSongs((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 1: _t->SongsMTimeUpdated((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 2: _t->SongsDeleted((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 3: _t->SongsUnavailable((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->SongsUnavailable((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 5: _t->SongsReadded((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->SongsReadded((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 7: _t->SubdirsDiscovered((*reinterpret_cast< std::add_pointer_t<CollectionSubdirectoryList>>(_a[1]))); break;
        case 8: _t->SubdirsMTimeUpdated((*reinterpret_cast< std::add_pointer_t<CollectionSubdirectoryList>>(_a[1]))); break;
        case 9: _t->SubdirsDeleted((*reinterpret_cast< std::add_pointer_t<CollectionSubdirectoryList>>(_a[1]))); break;
        case 10: _t->CompilationsNeedUpdating(); break;
        case 11: _t->UpdateLastSeen((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->ExitFinished(); break;
        case 13: _t->ScanStarted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->AddDirectory((*reinterpret_cast< std::add_pointer_t<CollectionDirectory>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CollectionSubdirectoryList>>(_a[2]))); break;
        case 15: _t->RemoveDirectory((*reinterpret_cast< std::add_pointer_t<CollectionDirectory>>(_a[1]))); break;
        case 16: _t->SetRescanPaused((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->ReloadSettings(); break;
        case 18: _t->Exit(); break;
        case 19: _t->DirectoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->IncrementalScanCheck(); break;
        case 21: _t->IncrementalScanNow(); break;
        case 22: _t->FullScanNow(); break;
        case 23: _t->RescanPathsNow(); break;
        case 24: _t->ScanSubdirectory((*reinterpret_cast< std::add_pointer_t<CollectionDirectory>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<CollectionSubdirectory>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<CollectionWatcher::ScanTransaction*>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 25: _t->ScanSubdirectory((*reinterpret_cast< std::add_pointer_t<CollectionDirectory>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<CollectionSubdirectory>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<CollectionWatcher::ScanTransaction*>>(_a[5]))); break;
        case 26: _t->RescanSongs((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectoryList >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectoryList >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectoryList >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionDirectory >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectoryList >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionDirectory >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionDirectory >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectory >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionDirectory >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionSubdirectory >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CollectionWatcher::*)(const SongList & );
            if (_t _q_method = &CollectionWatcher::NewOrUpdatedSongs; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const SongList & );
            if (_t _q_method = &CollectionWatcher::SongsMTimeUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const SongList & );
            if (_t _q_method = &CollectionWatcher::SongsDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const SongList & , const bool );
            if (_t _q_method = &CollectionWatcher::SongsUnavailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const SongList & , const bool );
            if (_t _q_method = &CollectionWatcher::SongsReadded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const CollectionSubdirectoryList & );
            if (_t _q_method = &CollectionWatcher::SubdirsDiscovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const CollectionSubdirectoryList & );
            if (_t _q_method = &CollectionWatcher::SubdirsMTimeUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const CollectionSubdirectoryList & );
            if (_t _q_method = &CollectionWatcher::SubdirsDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)();
            if (_t _q_method = &CollectionWatcher::CompilationsNeedUpdating; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const int , const int );
            if (_t _q_method = &CollectionWatcher::UpdateLastSeen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)();
            if (_t _q_method = &CollectionWatcher::ExitFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CollectionWatcher::*)(const int );
            if (_t _q_method = &CollectionWatcher::ScanStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject *CollectionWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollectionWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CollectionWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CollectionWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void CollectionWatcher::NewOrUpdatedSongs(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CollectionWatcher::SongsMTimeUpdated(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CollectionWatcher::SongsDeleted(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CollectionWatcher::SongsUnavailable(const SongList & _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void CollectionWatcher::SongsReadded(const SongList & _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void CollectionWatcher::SubdirsDiscovered(const CollectionSubdirectoryList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CollectionWatcher::SubdirsMTimeUpdated(const CollectionSubdirectoryList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CollectionWatcher::SubdirsDeleted(const CollectionSubdirectoryList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CollectionWatcher::CompilationsNeedUpdating()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void CollectionWatcher::UpdateLastSeen(const int _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CollectionWatcher::ExitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void CollectionWatcher::ScanStarted(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
