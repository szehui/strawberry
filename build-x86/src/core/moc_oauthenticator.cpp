/****************************************************************************
** Meta object code from reading C++ file 'oauthenticator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/oauthenticator.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oauthenticator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_OAuthenticator_t {
    uint offsetsAndSizes[30];
    char stringdata0[15];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[23];
    char stringdata5[8];
    char stringdata6[14];
    char stringdata7[16];
    char stringdata8[16];
    char stringdata9[17];
    char stringdata10[11];
    char stringdata11[27];
    char stringdata12[15];
    char stringdata13[6];
    char stringdata14[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_OAuthenticator_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_OAuthenticator_t qt_meta_stringdata_OAuthenticator = {
    {
        QT_MOC_LITERAL(0, 14),  // "OAuthenticator"
        QT_MOC_LITERAL(15, 5),  // "Error"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 5),  // "error"
        QT_MOC_LITERAL(28, 22),  // "AuthenticationFinished"
        QT_MOC_LITERAL(51, 7),  // "success"
        QT_MOC_LITERAL(59, 13),  // "invalid_grant"
        QT_MOC_LITERAL(73, 15),  // "RedirectArrived"
        QT_MOC_LITERAL(89, 15),  // "HandleSSLErrors"
        QT_MOC_LITERAL(105, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(122, 10),  // "ssl_errors"
        QT_MOC_LITERAL(133, 26),  // "AccessTokenRequestFinished"
        QT_MOC_LITERAL(160, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(175, 5),  // "reply"
        QT_MOC_LITERAL(181, 13)   // "refresh_token"
    },
    "OAuthenticator",
    "Error",
    "",
    "error",
    "AuthenticationFinished",
    "success",
    "invalid_grant",
    "RedirectArrived",
    "HandleSSLErrors",
    "QList<QSslError>",
    "ssl_errors",
    "AccessTokenRequestFinished",
    "QNetworkReply*",
    "reply",
    "refresh_token"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_OAuthenticator[] = {

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
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    3,   59,    2, 0x06,    3 /* Public */,
       4,    2,   66,    2, 0x26,    7 /* Public | MethodCloned */,
       4,    1,   71,    2, 0x26,   10 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   74,    2, 0x08,   12 /* Private */,
       8,    1,   75,    2, 0x08,   13 /* Private */,
      11,    2,   78,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    5,    3,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool,   13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject OAuthenticator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OAuthenticator.offsetsAndSizes,
    qt_meta_data_OAuthenticator,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_OAuthenticator_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OAuthenticator, std::true_type>,
        // method 'Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AuthenticationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'AuthenticationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AuthenticationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'RedirectArrived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HandleSSLErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'AccessTokenRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>
    >,
    nullptr
} };

void OAuthenticator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAuthenticator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->AuthenticationFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 2: _t->AuthenticationFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->AuthenticationFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->RedirectArrived(); break;
        case 5: _t->HandleSSLErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 6: _t->AccessTokenRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OAuthenticator::*)(const QString & );
            if (_t _q_method = &OAuthenticator::Error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OAuthenticator::*)(const bool , const QString & , const bool );
            if (_t _q_method = &OAuthenticator::AuthenticationFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OAuthenticator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OAuthenticator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OAuthenticator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OAuthenticator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OAuthenticator::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OAuthenticator::AuthenticationFinished(const bool _t1, const QString & _t2, const bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
