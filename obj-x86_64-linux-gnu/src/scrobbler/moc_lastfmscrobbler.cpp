/****************************************************************************
** Meta object code from reading C++ file 'lastfmscrobbler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scrobbler/lastfmscrobbler.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lastfmscrobbler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LastFMScrobbler_t {
    uint offsetsAndSizes[36];
    char stringdata0[16];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[6];
    char stringdata5[11];
    char stringdata6[16];
    char stringdata7[26];
    char stringdata8[15];
    char stringdata9[6];
    char stringdata10[32];
    char stringdata11[24];
    char stringdata12[26];
    char stringdata13[12];
    char stringdata14[30];
    char stringdata15[22];
    char stringdata16[11];
    char stringdata17[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LastFMScrobbler_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LastFMScrobbler_t qt_meta_stringdata_LastFMScrobbler = {
    {
        QT_MOC_LITERAL(0, 15),  // "LastFMScrobbler"
        QT_MOC_LITERAL(16, 22),  // "AuthenticationComplete"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 7),  // "success"
        QT_MOC_LITERAL(48, 5),  // "error"
        QT_MOC_LITERAL(54, 10),  // "WriteCache"
        QT_MOC_LITERAL(65, 15),  // "RedirectArrived"
        QT_MOC_LITERAL(81, 25),  // "AuthenticateReplyFinished"
        QT_MOC_LITERAL(107, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(122, 5),  // "reply"
        QT_MOC_LITERAL(128, 31),  // "UpdateNowPlayingRequestFinished"
        QT_MOC_LITERAL(160, 23),  // "ScrobbleRequestFinished"
        QT_MOC_LITERAL(184, 25),  // "ScrobblerCacheItemPtrList"
        QT_MOC_LITERAL(210, 11),  // "cache_items"
        QT_MOC_LITERAL(222, 29),  // "SingleScrobbleRequestFinished"
        QT_MOC_LITERAL(252, 21),  // "ScrobblerCacheItemPtr"
        QT_MOC_LITERAL(274, 10),  // "cache_item"
        QT_MOC_LITERAL(285, 19)   // "LoveRequestFinished"
    },
    "LastFMScrobbler",
    "AuthenticationComplete",
    "",
    "success",
    "error",
    "WriteCache",
    "RedirectArrived",
    "AuthenticateReplyFinished",
    "QNetworkReply*",
    "reply",
    "UpdateNowPlayingRequestFinished",
    "ScrobbleRequestFinished",
    "ScrobblerCacheItemPtrList",
    "cache_items",
    "SingleScrobbleRequestFinished",
    "ScrobblerCacheItemPtr",
    "cache_item",
    "LoveRequestFinished"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LastFMScrobbler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x06,    1 /* Public */,
       1,    1,   73,    2, 0x26,    4 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   76,    2, 0x0a,    6 /* Public */,
       6,    0,   77,    2, 0x08,    7 /* Private */,
       7,    1,   78,    2, 0x08,    8 /* Private */,
      10,    1,   81,    2, 0x08,   10 /* Private */,
      11,    2,   84,    2, 0x08,   12 /* Private */,
      14,    2,   89,    2, 0x08,   15 /* Private */,
      17,    1,   94,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 12,    9,   13,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 15,    9,   16,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject LastFMScrobbler::staticMetaObject = { {
    QMetaObject::SuperData::link<ScrobblerService::staticMetaObject>(),
    qt_meta_stringdata_LastFMScrobbler.offsetsAndSizes,
    qt_meta_data_LastFMScrobbler,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LastFMScrobbler_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LastFMScrobbler, std::true_type>,
        // method 'AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'WriteCache'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RedirectArrived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AuthenticateReplyFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'UpdateNowPlayingRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'ScrobbleRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<ScrobblerCacheItemPtrList, std::false_type>,
        // method 'SingleScrobbleRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<ScrobblerCacheItemPtr, std::false_type>,
        // method 'LoveRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>
    >,
    nullptr
} };

void LastFMScrobbler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LastFMScrobbler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->WriteCache(); break;
        case 3: _t->RedirectArrived(); break;
        case 4: _t->AuthenticateReplyFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 5: _t->UpdateNowPlayingRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 6: _t->ScrobbleRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ScrobblerCacheItemPtrList>>(_a[2]))); break;
        case 7: _t->SingleScrobbleRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ScrobblerCacheItemPtr>>(_a[2]))); break;
        case 8: _t->LoveRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ScrobblerCacheItemPtrList >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ScrobblerCacheItemPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LastFMScrobbler::*)(const bool , const QString & );
            if (_t _q_method = &LastFMScrobbler::AuthenticationComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *LastFMScrobbler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LastFMScrobbler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LastFMScrobbler.stringdata0))
        return static_cast<void*>(this);
    return ScrobblerService::qt_metacast(_clname);
}

int LastFMScrobbler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrobblerService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void LastFMScrobbler::AuthenticationComplete(const bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
