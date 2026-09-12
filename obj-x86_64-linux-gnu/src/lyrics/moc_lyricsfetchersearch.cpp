/****************************************************************************
** Meta object code from reading C++ file 'lyricsfetchersearch.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/lyrics/lyricsfetchersearch.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lyricsfetchersearch.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LyricsFetcherSearch_t {
    uint offsetsAndSizes[24];
    char stringdata0[20];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[20];
    char stringdata5[8];
    char stringdata6[14];
    char stringdata7[9];
    char stringdata8[7];
    char stringdata9[23];
    char stringdata10[13];
    char stringdata11[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LyricsFetcherSearch_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LyricsFetcherSearch_t qt_meta_stringdata_LyricsFetcherSearch = {
    {
        QT_MOC_LITERAL(0, 19),  // "LyricsFetcherSearch"
        QT_MOC_LITERAL(20, 14),  // "SearchFinished"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 2),  // "id"
        QT_MOC_LITERAL(39, 19),  // "LyricsSearchResults"
        QT_MOC_LITERAL(59, 7),  // "results"
        QT_MOC_LITERAL(67, 13),  // "LyricsFetched"
        QT_MOC_LITERAL(81, 8),  // "provider"
        QT_MOC_LITERAL(90, 6),  // "lyrics"
        QT_MOC_LITERAL(97, 22),  // "ProviderSearchFinished"
        QT_MOC_LITERAL(120, 12),  // "EarlyTimeout"
        QT_MOC_LITERAL(133, 13)   // "SearchTimeout"
    },
    "LyricsFetcherSearch",
    "SearchFinished",
    "",
    "id",
    "LyricsSearchResults",
    "results",
    "LyricsFetched",
    "provider",
    "lyrics",
    "ProviderSearchFinished",
    "EarlyTimeout",
    "SearchTimeout"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LyricsFetcherSearch[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,
       6,    3,   61,    2, 0x06,    4 /* Public */,
       6,    2,   68,    2, 0x26,    8 /* Public | MethodCloned */,
       6,    1,   73,    2, 0x26,   11 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   76,    2, 0x08,   13 /* Private */,
      10,    0,   81,    2, 0x08,   16 /* Private */,
      11,    0,   82,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,    3,    7,    8,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::ULongLong,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LyricsFetcherSearch::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LyricsFetcherSearch.offsetsAndSizes,
    qt_meta_data_LyricsFetcherSearch,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LyricsFetcherSearch_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LyricsFetcherSearch, std::true_type>,
        // method 'SearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LyricsSearchResults &, std::false_type>,
        // method 'LyricsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LyricsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LyricsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        // method 'ProviderSearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LyricsSearchResults &, std::false_type>,
        // method 'EarlyTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SearchTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LyricsFetcherSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LyricsFetcherSearch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchFinished((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LyricsSearchResults>>(_a[2]))); break;
        case 1: _t->LyricsFetched((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->LyricsFetched((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->LyricsFetched((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 4: _t->ProviderSearchFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LyricsSearchResults>>(_a[2]))); break;
        case 5: _t->EarlyTimeout(); break;
        case 6: _t->SearchTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LyricsSearchResults >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LyricsSearchResults >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LyricsFetcherSearch::*)(const quint64 , const LyricsSearchResults & );
            if (_t _q_method = &LyricsFetcherSearch::SearchFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LyricsFetcherSearch::*)(const quint64 , const QString & , const QString & );
            if (_t _q_method = &LyricsFetcherSearch::LyricsFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *LyricsFetcherSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LyricsFetcherSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LyricsFetcherSearch.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LyricsFetcherSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LyricsFetcherSearch::SearchFinished(const quint64 _t1, const LyricsSearchResults & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LyricsFetcherSearch::LyricsFetched(const quint64 _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
