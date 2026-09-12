/****************************************************************************
** Meta object code from reading C++ file 'albumcoverfetcher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covermanager/albumcoverfetcher.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoverfetcher.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AlbumCoverFetcher_t {
    uint offsetsAndSizes[30];
    char stringdata0[18];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[22];
    char stringdata5[7];
    char stringdata6[22];
    char stringdata7[11];
    char stringdata8[15];
    char stringdata9[27];
    char stringdata10[8];
    char stringdata11[21];
    char stringdata12[3];
    char stringdata13[19];
    char stringdata14[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AlbumCoverFetcher_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AlbumCoverFetcher_t qt_meta_stringdata_AlbumCoverFetcher = {
    {
        QT_MOC_LITERAL(0, 17),  // "AlbumCoverFetcher"
        QT_MOC_LITERAL(18, 17),  // "AlbumCoverFetched"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 10),  // "request_id"
        QT_MOC_LITERAL(48, 21),  // "AlbumCoverImageResult"
        QT_MOC_LITERAL(70, 6),  // "result"
        QT_MOC_LITERAL(77, 21),  // "CoverSearchStatistics"
        QT_MOC_LITERAL(99, 10),  // "statistics"
        QT_MOC_LITERAL(110, 14),  // "SearchFinished"
        QT_MOC_LITERAL(125, 26),  // "CoverProviderSearchResults"
        QT_MOC_LITERAL(152, 7),  // "results"
        QT_MOC_LITERAL(160, 20),  // "SingleSearchFinished"
        QT_MOC_LITERAL(181, 2),  // "id"
        QT_MOC_LITERAL(184, 18),  // "SingleCoverFetched"
        QT_MOC_LITERAL(203, 13)   // "StartRequests"
    },
    "AlbumCoverFetcher",
    "AlbumCoverFetched",
    "",
    "request_id",
    "AlbumCoverImageResult",
    "result",
    "CoverSearchStatistics",
    "statistics",
    "SearchFinished",
    "CoverProviderSearchResults",
    "results",
    "SingleSearchFinished",
    "id",
    "SingleCoverFetched",
    "StartRequests"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AlbumCoverFetcher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   44,    2, 0x06,    1 /* Public */,
       8,    3,   51,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    2,   58,    2, 0x08,    9 /* Private */,
      13,    2,   63,    2, 0x08,   12 /* Private */,
      14,    0,   68,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 9, 0x80000000 | 6,    3,   10,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 9,   12,   10,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 4,   12,    5,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AlbumCoverFetcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AlbumCoverFetcher.offsetsAndSizes,
    qt_meta_data_AlbumCoverFetcher,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AlbumCoverFetcher_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AlbumCoverFetcher, std::true_type>,
        // method 'AlbumCoverFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverImageResult &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CoverSearchStatistics &, std::false_type>,
        // method 'SearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CoverProviderSearchResults &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CoverSearchStatistics &, std::false_type>,
        // method 'SingleSearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CoverProviderSearchResults &, std::false_type>,
        // method 'SingleCoverFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverImageResult &, std::false_type>,
        // method 'StartRequests'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AlbumCoverFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumCoverFetcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AlbumCoverFetched((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverImageResult>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<CoverSearchStatistics>>(_a[3]))); break;
        case 1: _t->SearchFinished((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CoverProviderSearchResults>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<CoverSearchStatistics>>(_a[3]))); break;
        case 2: _t->SingleSearchFinished((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CoverProviderSearchResults>>(_a[2]))); break;
        case 3: _t->SingleCoverFetched((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverImageResult>>(_a[2]))); break;
        case 4: _t->StartRequests(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AlbumCoverImageResult >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CoverProviderSearchResults >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CoverProviderSearchResults >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AlbumCoverImageResult >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlbumCoverFetcher::*)(const quint64 , const AlbumCoverImageResult & , const CoverSearchStatistics & );
            if (_t _q_method = &AlbumCoverFetcher::AlbumCoverFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AlbumCoverFetcher::*)(const quint64 , const CoverProviderSearchResults & , const CoverSearchStatistics & );
            if (_t _q_method = &AlbumCoverFetcher::SearchFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AlbumCoverFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumCoverFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverFetcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AlbumCoverFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AlbumCoverFetcher::AlbumCoverFetched(const quint64 _t1, const AlbumCoverImageResult & _t2, const CoverSearchStatistics & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AlbumCoverFetcher::SearchFinished(const quint64 _t1, const CoverProviderSearchResults & _t2, const CoverSearchStatistics & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
