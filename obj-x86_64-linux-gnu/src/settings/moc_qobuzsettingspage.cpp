/****************************************************************************
** Meta object code from reading C++ file 'qobuzsettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/settings/qobuzsettingspage.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qobuzsettingspage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QobuzSettingsPage_t {
    uint offsetsAndSizes[30];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[13];
    char stringdata6[15];
    char stringdata7[27];
    char stringdata8[22];
    char stringdata9[7];
    char stringdata10[11];
    char stringdata11[13];
    char stringdata12[12];
    char stringdata13[25];
    char stringdata14[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QobuzSettingsPage_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QobuzSettingsPage_t qt_meta_stringdata_QobuzSettingsPage = {
    {
        QT_MOC_LITERAL(0, 17),  // "QobuzSettingsPage"
        QT_MOC_LITERAL(18, 12),  // "LoginClicked"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 13),  // "LogoutClicked"
        QT_MOC_LITERAL(46, 12),  // "LoginSuccess"
        QT_MOC_LITERAL(59, 12),  // "LoginFailure"
        QT_MOC_LITERAL(72, 14),  // "failure_reason"
        QT_MOC_LITERAL(87, 26),  // "FetchApiCredentialsClicked"
        QT_MOC_LITERAL(114, 21),  // "ApiCredentialsFetched"
        QT_MOC_LITERAL(136, 6),  // "app_id"
        QT_MOC_LITERAL(143, 10),  // "app_secret"
        QT_MOC_LITERAL(154, 12),  // "login_app_id"
        QT_MOC_LITERAL(167, 11),  // "private_key"
        QT_MOC_LITERAL(179, 24),  // "ApiCredentialsFetchError"
        QT_MOC_LITERAL(204, 5)   // "error"
    },
    "QobuzSettingsPage",
    "LoginClicked",
    "",
    "LogoutClicked",
    "LoginSuccess",
    "LoginFailure",
    "failure_reason",
    "FetchApiCredentialsClicked",
    "ApiCredentialsFetched",
    "app_id",
    "app_secret",
    "login_app_id",
    "private_key",
    "ApiCredentialsFetchError",
    "error"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QobuzSettingsPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    1,   59,    2, 0x08,    4 /* Private */,
       7,    0,   62,    2, 0x08,    6 /* Private */,
       8,    4,   63,    2, 0x08,    7 /* Private */,
      13,    1,   72,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject QobuzSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_QobuzSettingsPage.offsetsAndSizes,
    qt_meta_data_QobuzSettingsPage,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QobuzSettingsPage_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QobuzSettingsPage, std::true_type>,
        // method 'LoginClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LogoutClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoginSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoginFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'FetchApiCredentialsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ApiCredentialsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ApiCredentialsFetchError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QobuzSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QobuzSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoginClicked(); break;
        case 1: _t->LogoutClicked(); break;
        case 2: _t->LoginSuccess(); break;
        case 3: _t->LoginFailure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->FetchApiCredentialsClicked(); break;
        case 5: _t->ApiCredentialsFetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 6: _t->ApiCredentialsFetchError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QobuzSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QobuzSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QobuzSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int QobuzSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
