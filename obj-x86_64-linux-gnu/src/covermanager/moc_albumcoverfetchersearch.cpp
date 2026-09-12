/****************************************************************************
** Meta object code from reading C++ file 'albumcoverfetchersearch.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covermanager/albumcoverfetchersearch.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoverfetchersearch.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AlbumCoverFetcherSearch_t {
    uint offsetsAndSizes[30];
    char stringdata0[24];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[8];
    char stringdata5[18];
    char stringdata6[3];
    char stringdata7[22];
    char stringdata8[7];
    char stringdata9[22];
    char stringdata10[23];
    char stringdata11[27];
    char stringdata12[15];
    char stringdata13[6];
    char stringdata14[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AlbumCoverFetcherSearch_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AlbumCoverFetcherSearch_t qt_meta_stringdata_AlbumCoverFetcherSearch = {
    {
        QT_MOC_LITERAL(0, 23),  // "AlbumCoverFetcherSearch"
        QT_MOC_LITERAL(24, 14),  // "SearchFinished"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 26),  // "CoverProviderSearchResults"
        QT_MOC_LITERAL(67, 7),  // "results"
        QT_MOC_LITERAL(75, 17),  // "AlbumCoverFetched"
        QT_MOC_LITERAL(93, 2),  // "id"
        QT_MOC_LITERAL(96, 21),  // "AlbumCoverImageResult"
        QT_MOC_LITERAL(118, 6),  // "result"
        QT_MOC_LITERAL(125, 21),  // "ProviderSearchResults"
        QT_MOC_LITERAL(147, 22),  // "ProviderSearchFinished"
        QT_MOC_LITERAL(170, 26),  // "ProviderCoverFetchFinished"
        QT_MOC_LITERAL(197, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(212, 5),  // "reply"
        QT_MOC_LITERAL(218, 15)   // "TerminateSearch"
    },
    "AlbumCoverFetcherSearch",
    "SearchFinished",
    "",
    "CoverProviderSearchResults",
    "results",
    "AlbumCoverFetched",
    "id",
    "AlbumCoverImageResult",
    "result",
    "ProviderSearchResults",
    "ProviderSearchFinished",
    "ProviderCoverFetchFinished",
    "QNetworkReply*",
    "reply",
    "TerminateSearch"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AlbumCoverFetcherSearch[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       5,    2,   55,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   60,    2, 0x08,    7 /* Private */,
      10,    2,   65,    2, 0x08,   10 /* Private */,
      11,    1,   70,    2, 0x08,   13 /* Private */,
      14,    0,   73,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 3,    2,    4,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 7,    6,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    6,    4,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AlbumCoverFetcherSearch::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AlbumCoverFetcherSearch.offsetsAndSizes,
    qt_meta_data_AlbumCoverFetcherSearch,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AlbumCoverFetcherSearch_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AlbumCoverFetcherSearch, std::true_type>,
        // method 'SearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CoverProviderSearchResults &, std::false_type>,
        // method 'AlbumCoverFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverImageResult &, std::false_type>,
        // method 'ProviderSearchResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CoverProviderSearchResults &, std::false_type>,
        // method 'ProviderSearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CoverProviderSearchResults &, std::false_type>,
        // method 'ProviderCoverFetchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'TerminateSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AlbumCoverFetcherSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumCoverFetcherSearch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchFinished((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CoverProviderSearchResults>>(_a[2]))); break;
        case 1: _t->AlbumCoverFetched((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverImageResult>>(_a[2]))); break;
        case 2: _t->ProviderSearchResults((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CoverProviderSearchResults>>(_a[2]))); break;
        case 3: _t->ProviderSearchFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CoverProviderSearchResults>>(_a[2]))); break;
        case 4: _t->ProviderCoverFetchFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 5: _t->TerminateSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CoverProviderSearchResults >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AlbumCoverImageResult >(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CoverProviderSearchResults >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlbumCoverFetcherSearch::*)(quint64 , const CoverProviderSearchResults & );
            if (_t _q_method = &AlbumCoverFetcherSearch::SearchFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AlbumCoverFetcherSearch::*)(const quint64 , const AlbumCoverImageResult & );
            if (_t _q_method = &AlbumCoverFetcherSearch::AlbumCoverFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AlbumCoverFetcherSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumCoverFetcherSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverFetcherSearch.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AlbumCoverFetcherSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AlbumCoverFetcherSearch::SearchFinished(quint64 _t1, const CoverProviderSearchResults & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AlbumCoverFetcherSearch::AlbumCoverFetched(const quint64 _t1, const AlbumCoverImageResult & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
