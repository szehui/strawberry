/****************************************************************************
** Meta object code from reading C++ file 'lyricsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/lyrics/lyricsprovider.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lyricsprovider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LyricsProvider_t {
    uint offsetsAndSizes[28];
    char stringdata0[15];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[6];
    char stringdata5[22];
    char stringdata6[22];
    char stringdata7[15];
    char stringdata8[3];
    char stringdata9[20];
    char stringdata10[8];
    char stringdata11[12];
    char stringdata12[20];
    char stringdata13[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LyricsProvider_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LyricsProvider_t qt_meta_stringdata_LyricsProvider = {
    {
        QT_MOC_LITERAL(0, 14),  // "LyricsProvider"
        QT_MOC_LITERAL(15, 22),  // "AuthenticationComplete"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 7),  // "success"
        QT_MOC_LITERAL(47, 5),  // "error"
        QT_MOC_LITERAL(53, 21),  // "AuthenticationSuccess"
        QT_MOC_LITERAL(75, 21),  // "AuthenticationFailure"
        QT_MOC_LITERAL(97, 14),  // "SearchFinished"
        QT_MOC_LITERAL(112, 2),  // "id"
        QT_MOC_LITERAL(115, 19),  // "LyricsSearchResults"
        QT_MOC_LITERAL(135, 7),  // "results"
        QT_MOC_LITERAL(143, 11),  // "StartSearch"
        QT_MOC_LITERAL(155, 19),  // "LyricsSearchRequest"
        QT_MOC_LITERAL(175, 7)   // "request"
    },
    "LyricsProvider",
    "AuthenticationComplete",
    "",
    "success",
    "error",
    "AuthenticationSuccess",
    "AuthenticationFailure",
    "SearchFinished",
    "id",
    "LyricsSearchResults",
    "results",
    "StartSearch",
    "LyricsSearchRequest",
    "request"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LyricsProvider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,
       1,    1,   61,    2, 0x26,    4 /* Public | MethodCloned */,
       5,    0,   64,    2, 0x06,    6 /* Public */,
       6,    1,   65,    2, 0x06,    7 /* Public */,
       7,    2,   68,    2, 0x06,    9 /* Public */,
       7,    1,   73,    2, 0x26,   12 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    2,   76,    2, 0x09,   14 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,    8,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject LyricsProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<HttpBaseRequest::staticMetaObject>(),
    qt_meta_stringdata_LyricsProvider.offsetsAndSizes,
    qt_meta_data_LyricsProvider,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LyricsProvider_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LyricsProvider, std::true_type>,
        // method 'AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'AuthenticationSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AuthenticationFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LyricsSearchResults &, std::false_type>,
        // method 'SearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'StartSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LyricsSearchRequest &, std::false_type>
    >,
    nullptr
} };

void LyricsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LyricsProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->AuthenticationSuccess(); break;
        case 3: _t->AuthenticationFailure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->SearchFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LyricsSearchResults>>(_a[2]))); break;
        case 5: _t->SearchFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->StartSearch((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LyricsSearchRequest>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LyricsSearchResults >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LyricsSearchRequest >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LyricsProvider::*)(const bool , const QString & );
            if (_t _q_method = &LyricsProvider::AuthenticationComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LyricsProvider::*)();
            if (_t _q_method = &LyricsProvider::AuthenticationSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LyricsProvider::*)(const QString & );
            if (_t _q_method = &LyricsProvider::AuthenticationFailure; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LyricsProvider::*)(const int , const LyricsSearchResults & );
            if (_t _q_method = &LyricsProvider::SearchFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *LyricsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LyricsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LyricsProvider.stringdata0))
        return static_cast<void*>(this);
    return HttpBaseRequest::qt_metacast(_clname);
}

int LyricsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpBaseRequest::qt_metacall(_c, _id, _a);
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
void LyricsProvider::AuthenticationComplete(const bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void LyricsProvider::AuthenticationSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LyricsProvider::AuthenticationFailure(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LyricsProvider::SearchFinished(const int _t1, const LyricsSearchResults & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
