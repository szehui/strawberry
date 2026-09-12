/****************************************************************************
** Meta object code from reading C++ file 'collectionmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/collection/collectionmodel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collectionmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CollectionModel_t {
    uint offsetsAndSizes[112];
    char stringdata0[16];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[24];
    char stringdata5[23];
    char stringdata6[16];
    char stringdata7[26];
    char stringdata8[2];
    char stringdata9[28];
    char stringdata10[14];
    char stringdata11[36];
    char stringdata12[12];
    char stringdata13[16];
    char stringdata14[15];
    char stringdata15[19];
    char stringdata16[18];
    char stringdata17[17];
    char stringdata18[9];
    char stringdata19[6];
    char stringdata20[12];
    char stringdata21[19];
    char stringdata22[14];
    char stringdata23[14];
    char stringdata24[14];
    char stringdata25[30];
    char stringdata26[17];
    char stringdata27[3];
    char stringdata28[23];
    char stringdata29[7];
    char stringdata30[26];
    char stringdata31[28];
    char stringdata32[27];
    char stringdata33[8];
    char stringdata34[5];
    char stringdata35[12];
    char stringdata36[7];
    char stringdata37[6];
    char stringdata38[10];
    char stringdata39[10];
    char stringdata40[14];
    char stringdata41[18];
    char stringdata42[22];
    char stringdata43[5];
    char stringdata44[5];
    char stringdata45[13];
    char stringdata46[6];
    char stringdata47[9];
    char stringdata48[10];
    char stringdata49[9];
    char stringdata50[9];
    char stringdata51[7];
    char stringdata52[11];
    char stringdata53[9];
    char stringdata54[8];
    char stringdata55[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CollectionModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CollectionModel_t qt_meta_stringdata_CollectionModel = {
    {
        QT_MOC_LITERAL(0, 15),  // "CollectionModel"
        QT_MOC_LITERAL(16, 21),  // "TotalSongCountUpdated"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 5),  // "count"
        QT_MOC_LITERAL(45, 23),  // "TotalArtistCountUpdated"
        QT_MOC_LITERAL(69, 22),  // "TotalAlbumCountUpdated"
        QT_MOC_LITERAL(92, 15),  // "GroupingChanged"
        QT_MOC_LITERAL(108, 25),  // "CollectionModel::Grouping"
        QT_MOC_LITERAL(134, 1),  // "g"
        QT_MOC_LITERAL(136, 27),  // "separate_albums_by_grouping"
        QT_MOC_LITERAL(164, 13),  // "SetFilterMode"
        QT_MOC_LITERAL(178, 35),  // "CollectionFilterOptions::Filt..."
        QT_MOC_LITERAL(214, 11),  // "filter_mode"
        QT_MOC_LITERAL(226, 15),  // "SetFilterMaxAge"
        QT_MOC_LITERAL(242, 14),  // "filter_max_age"
        QT_MOC_LITERAL(257, 18),  // "SetFilterMinRating"
        QT_MOC_LITERAL(276, 17),  // "filter_min_rating"
        QT_MOC_LITERAL(294, 16),  // "AddReAddOrUpdate"
        QT_MOC_LITERAL(311, 8),  // "SongList"
        QT_MOC_LITERAL(320, 5),  // "songs"
        QT_MOC_LITERAL(326, 11),  // "RemoveSongs"
        QT_MOC_LITERAL(338, 18),  // "ClearIconDiskCache"
        QT_MOC_LITERAL(357, 13),  // "ResetInternal"
        QT_MOC_LITERAL(371, 13),  // "ScheduleReset"
        QT_MOC_LITERAL(385, 13),  // "ProcessUpdate"
        QT_MOC_LITERAL(399, 29),  // "LoadSongsFromSqlAsyncFinished"
        QT_MOC_LITERAL(429, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(446, 2),  // "id"
        QT_MOC_LITERAL(449, 22),  // "AlbumCoverLoaderResult"
        QT_MOC_LITERAL(472, 6),  // "result"
        QT_MOC_LITERAL(479, 25),  // "TotalSongCountUpdatedSlot"
        QT_MOC_LITERAL(505, 27),  // "TotalArtistCountUpdatedSlot"
        QT_MOC_LITERAL(533, 26),  // "TotalAlbumCountUpdatedSlot"
        QT_MOC_LITERAL(560, 7),  // "GroupBy"
        QT_MOC_LITERAL(568, 4),  // "None"
        QT_MOC_LITERAL(573, 11),  // "AlbumArtist"
        QT_MOC_LITERAL(585, 6),  // "Artist"
        QT_MOC_LITERAL(592, 5),  // "Album"
        QT_MOC_LITERAL(598, 9),  // "AlbumDisc"
        QT_MOC_LITERAL(608, 9),  // "YearAlbum"
        QT_MOC_LITERAL(618, 13),  // "YearAlbumDisc"
        QT_MOC_LITERAL(632, 17),  // "OriginalYearAlbum"
        QT_MOC_LITERAL(650, 21),  // "OriginalYearAlbumDisc"
        QT_MOC_LITERAL(672, 4),  // "Disc"
        QT_MOC_LITERAL(677, 4),  // "Year"
        QT_MOC_LITERAL(682, 12),  // "OriginalYear"
        QT_MOC_LITERAL(695, 5),  // "Genre"
        QT_MOC_LITERAL(701, 8),  // "Composer"
        QT_MOC_LITERAL(710, 9),  // "Performer"
        QT_MOC_LITERAL(720, 8),  // "Grouping"
        QT_MOC_LITERAL(729, 8),  // "FileType"
        QT_MOC_LITERAL(738, 6),  // "Format"
        QT_MOC_LITERAL(745, 10),  // "Samplerate"
        QT_MOC_LITERAL(756, 8),  // "Bitdepth"
        QT_MOC_LITERAL(765, 7),  // "Bitrate"
        QT_MOC_LITERAL(773, 12)   // "GroupByCount"
    },
    "CollectionModel",
    "TotalSongCountUpdated",
    "",
    "count",
    "TotalArtistCountUpdated",
    "TotalAlbumCountUpdated",
    "GroupingChanged",
    "CollectionModel::Grouping",
    "g",
    "separate_albums_by_grouping",
    "SetFilterMode",
    "CollectionFilterOptions::FilterMode",
    "filter_mode",
    "SetFilterMaxAge",
    "filter_max_age",
    "SetFilterMinRating",
    "filter_min_rating",
    "AddReAddOrUpdate",
    "SongList",
    "songs",
    "RemoveSongs",
    "ClearIconDiskCache",
    "ResetInternal",
    "ScheduleReset",
    "ProcessUpdate",
    "LoadSongsFromSqlAsyncFinished",
    "AlbumCoverLoaded",
    "id",
    "AlbumCoverLoaderResult",
    "result",
    "TotalSongCountUpdatedSlot",
    "TotalArtistCountUpdatedSlot",
    "TotalAlbumCountUpdatedSlot",
    "GroupBy",
    "None",
    "AlbumArtist",
    "Artist",
    "Album",
    "AlbumDisc",
    "YearAlbum",
    "YearAlbumDisc",
    "OriginalYearAlbum",
    "OriginalYearAlbumDisc",
    "Disc",
    "Year",
    "OriginalYear",
    "Genre",
    "Composer",
    "Performer",
    "Grouping",
    "FileType",
    "Format",
    "Samplerate",
    "Bitdepth",
    "Bitrate",
    "GroupByCount"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CollectionModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       1,  170, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       4,    1,  125,    2, 0x06,    3 /* Public */,
       5,    1,  128,    2, 0x06,    5 /* Public */,
       6,    2,  131,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  136,    2, 0x0a,   10 /* Public */,
      13,    1,  139,    2, 0x0a,   12 /* Public */,
      15,    1,  142,    2, 0x0a,   14 /* Public */,
      17,    1,  145,    2, 0x0a,   16 /* Public */,
      20,    1,  148,    2, 0x0a,   18 /* Public */,
      21,    0,  151,    2, 0x0a,   20 /* Public */,
      22,    0,  152,    2, 0x08,   21 /* Private */,
      23,    0,  153,    2, 0x08,   22 /* Private */,
      24,    0,  154,    2, 0x08,   23 /* Private */,
      25,    0,  155,    2, 0x08,   24 /* Private */,
      26,    2,  156,    2, 0x08,   25 /* Private */,
      30,    1,  161,    2, 0x08,   28 /* Private */,
      31,    1,  164,    2, 0x08,   30 /* Private */,
      32,    1,  167,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 28,   27,   29,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // enums: name, alias, flags, count, data
      33,   33, 0x2,   22,  175,

 // enum data: key, value
      34, uint(CollectionModel::GroupBy::None),
      35, uint(CollectionModel::GroupBy::AlbumArtist),
      36, uint(CollectionModel::GroupBy::Artist),
      37, uint(CollectionModel::GroupBy::Album),
      38, uint(CollectionModel::GroupBy::AlbumDisc),
      39, uint(CollectionModel::GroupBy::YearAlbum),
      40, uint(CollectionModel::GroupBy::YearAlbumDisc),
      41, uint(CollectionModel::GroupBy::OriginalYearAlbum),
      42, uint(CollectionModel::GroupBy::OriginalYearAlbumDisc),
      43, uint(CollectionModel::GroupBy::Disc),
      44, uint(CollectionModel::GroupBy::Year),
      45, uint(CollectionModel::GroupBy::OriginalYear),
      46, uint(CollectionModel::GroupBy::Genre),
      47, uint(CollectionModel::GroupBy::Composer),
      48, uint(CollectionModel::GroupBy::Performer),
      49, uint(CollectionModel::GroupBy::Grouping),
      50, uint(CollectionModel::GroupBy::FileType),
      51, uint(CollectionModel::GroupBy::Format),
      52, uint(CollectionModel::GroupBy::Samplerate),
      53, uint(CollectionModel::GroupBy::Bitdepth),
      54, uint(CollectionModel::GroupBy::Bitrate),
      55, uint(CollectionModel::GroupBy::GroupByCount),

       0        // eod
};

Q_CONSTINIT const QMetaObject CollectionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleTreeModel<CollectionItem>::staticMetaObject>(),
    qt_meta_stringdata_CollectionModel.offsetsAndSizes,
    qt_meta_data_CollectionModel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CollectionModel_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CollectionModel, std::true_type>,
        // method 'TotalSongCountUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'TotalArtistCountUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'TotalAlbumCountUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'GroupingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionModel::Grouping, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SetFilterMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CollectionFilterOptions::FilterMode, std::false_type>,
        // method 'SetFilterMaxAge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SetFilterMinRating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'AddReAddOrUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'RemoveSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'ClearIconDiskCache'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetInternal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScheduleReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ProcessUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadSongsFromSqlAsyncFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverLoaderResult &, std::false_type>,
        // method 'TotalSongCountUpdatedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'TotalArtistCountUpdatedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'TotalAlbumCountUpdatedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void CollectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CollectionModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->TotalSongCountUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->TotalArtistCountUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->TotalAlbumCountUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->GroupingChanged((*reinterpret_cast< std::add_pointer_t<CollectionModel::Grouping>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->SetFilterMode((*reinterpret_cast< std::add_pointer_t<CollectionFilterOptions::FilterMode>>(_a[1]))); break;
        case 5: _t->SetFilterMaxAge((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->SetFilterMinRating((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 7: _t->AddReAddOrUpdate((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 8: _t->RemoveSongs((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 9: _t->ClearIconDiskCache(); break;
        case 10: _t->ResetInternal(); break;
        case 11: _t->ScheduleReset(); break;
        case 12: _t->ProcessUpdate(); break;
        case 13: _t->LoadSongsFromSqlAsyncFinished(); break;
        case 14: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult>>(_a[2]))); break;
        case 15: _t->TotalSongCountUpdatedSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->TotalArtistCountUpdatedSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->TotalAlbumCountUpdatedSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CollectionModel::Grouping >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CollectionModel::*)(const int );
            if (_t _q_method = &CollectionModel::TotalSongCountUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CollectionModel::*)(const int );
            if (_t _q_method = &CollectionModel::TotalArtistCountUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CollectionModel::*)(const int );
            if (_t _q_method = &CollectionModel::TotalAlbumCountUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CollectionModel::*)(const CollectionModel::Grouping , const bool );
            if (_t _q_method = &CollectionModel::GroupingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *CollectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CollectionModel.stringdata0))
        return static_cast<void*>(this);
    return SimpleTreeModel<CollectionItem>::qt_metacast(_clname);
}

int CollectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleTreeModel<CollectionItem>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void CollectionModel::TotalSongCountUpdated(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CollectionModel::TotalArtistCountUpdated(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CollectionModel::TotalAlbumCountUpdated(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CollectionModel::GroupingChanged(const CollectionModel::Grouping _t1, const bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
