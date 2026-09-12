/****************************************************************************
** Meta object code from reading C++ file 'listenbrainzscrobbler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scrobbler/listenbrainzscrobbler.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listenbrainzscrobbler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ListenBrainzScrobbler_t {
    uint offsetsAndSizes[34];
    char stringdata0[22];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[6];
    char stringdata5[11];
    char stringdata6[14];
    char stringdata7[14];
    char stringdata8[32];
    char stringdata9[15];
    char stringdata10[6];
    char stringdata11[24];
    char stringdata12[26];
    char stringdata13[12];
    char stringdata14[20];
    char stringdata15[12];
    char stringdata16[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ListenBrainzScrobbler_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ListenBrainzScrobbler_t qt_meta_stringdata_ListenBrainzScrobbler = {
    {
        QT_MOC_LITERAL(0, 21),  // "ListenBrainzScrobbler"
        QT_MOC_LITERAL(22, 22),  // "AuthenticationComplete"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 7),  // "success"
        QT_MOC_LITERAL(54, 5),  // "error"
        QT_MOC_LITERAL(60, 10),  // "WriteCache"
        QT_MOC_LITERAL(71, 13),  // "OAuthFinished"
        QT_MOC_LITERAL(85, 13),  // "invalid_grant"
        QT_MOC_LITERAL(99, 31),  // "UpdateNowPlayingRequestFinished"
        QT_MOC_LITERAL(131, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(146, 5),  // "reply"
        QT_MOC_LITERAL(152, 23),  // "ScrobbleRequestFinished"
        QT_MOC_LITERAL(176, 25),  // "ScrobblerCacheItemPtrList"
        QT_MOC_LITERAL(202, 11),  // "cache_items"
        QT_MOC_LITERAL(214, 19),  // "LoveRequestFinished"
        QT_MOC_LITERAL(234, 11),  // "LoveRequest"
        QT_MOC_LITERAL(246, 12)   // "love_request"
    },
    "ListenBrainzScrobbler",
    "AuthenticationComplete",
    "",
    "success",
    "error",
    "WriteCache",
    "OAuthFinished",
    "invalid_grant",
    "UpdateNowPlayingRequestFinished",
    "QNetworkReply*",
    "reply",
    "ScrobbleRequestFinished",
    "ScrobblerCacheItemPtrList",
    "cache_items",
    "LoveRequestFinished",
    "LoveRequest",
    "love_request"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ListenBrainzScrobbler[] = {

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
       6,    3,   77,    2, 0x08,    7 /* Private */,
       6,    2,   84,    2, 0x28,   11 /* Private | MethodCloned */,
       6,    1,   89,    2, 0x28,   14 /* Private | MethodCloned */,
       8,    1,   92,    2, 0x08,   16 /* Private */,
      11,    2,   95,    2, 0x08,   18 /* Private */,
      14,    2,  100,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    3,    4,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 12,   10,   13,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 15,   10,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject ListenBrainzScrobbler::staticMetaObject = { {
    QMetaObject::SuperData::link<ScrobblerService::staticMetaObject>(),
    qt_meta_stringdata_ListenBrainzScrobbler.offsetsAndSizes,
    qt_meta_data_ListenBrainzScrobbler,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ListenBrainzScrobbler_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ListenBrainzScrobbler, std::true_type>,
        // method 'AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'WriteCache'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'OAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'OAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'UpdateNowPlayingRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'ScrobbleRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<ScrobblerCacheItemPtrList, std::false_type>,
        // method 'LoveRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LoveRequest, std::false_type>
    >,
    nullptr
} };

void ListenBrainzScrobbler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListenBrainzScrobbler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->WriteCache(); break;
        case 3: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->UpdateNowPlayingRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 7: _t->ScrobbleRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ScrobblerCacheItemPtrList>>(_a[2]))); break;
        case 8: _t->LoveRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LoveRequest>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ScrobblerCacheItemPtrList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ListenBrainzScrobbler::*)(const bool , const QString & );
            if (_t _q_method = &ListenBrainzScrobbler::AuthenticationComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ListenBrainzScrobbler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListenBrainzScrobbler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListenBrainzScrobbler.stringdata0))
        return static_cast<void*>(this);
    return ScrobblerService::qt_metacast(_clname);
}

int ListenBrainzScrobbler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ListenBrainzScrobbler::AuthenticationComplete(const bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
