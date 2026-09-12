/****************************************************************************
** Meta object code from reading C++ file 'scrobblersettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/settings/scrobblersettingspage.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrobblersettingspage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ScrobblerSettingsPage_t {
    uint offsetsAndSizes[20];
    char stringdata0[22];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[30];
    char stringdata5[8];
    char stringdata6[6];
    char stringdata7[19];
    char stringdata8[20];
    char stringdata9[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ScrobblerSettingsPage_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ScrobblerSettingsPage_t qt_meta_stringdata_ScrobblerSettingsPage = {
    {
        QT_MOC_LITERAL(0, 21),  // "ScrobblerSettingsPage"
        QT_MOC_LITERAL(22, 12),  // "LastFM_Login"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 13),  // "LastFM_Logout"
        QT_MOC_LITERAL(50, 29),  // "LastFM_AuthenticationComplete"
        QT_MOC_LITERAL(80, 7),  // "success"
        QT_MOC_LITERAL(88, 5),  // "error"
        QT_MOC_LITERAL(94, 18),  // "ListenBrainz_Login"
        QT_MOC_LITERAL(113, 19),  // "ListenBrainz_Logout"
        QT_MOC_LITERAL(133, 35)   // "ListenBrainz_AuthenticationCo..."
    },
    "ScrobblerSettingsPage",
    "LastFM_Login",
    "",
    "LastFM_Logout",
    "LastFM_AuthenticationComplete",
    "success",
    "error",
    "ListenBrainz_Login",
    "ListenBrainz_Logout",
    "ListenBrainz_AuthenticationComplete"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ScrobblerSettingsPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    2,   64,    2, 0x08,    3 /* Private */,
       4,    1,   69,    2, 0x28,    6 /* Private | MethodCloned */,
       7,    0,   72,    2, 0x08,    8 /* Private */,
       8,    0,   73,    2, 0x08,    9 /* Private */,
       9,    2,   74,    2, 0x08,   10 /* Private */,
       9,    1,   79,    2, 0x28,   13 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScrobblerSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_ScrobblerSettingsPage.offsetsAndSizes,
    qt_meta_data_ScrobblerSettingsPage,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ScrobblerSettingsPage_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScrobblerSettingsPage, std::true_type>,
        // method 'LastFM_Login'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LastFM_Logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LastFM_AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LastFM_AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ListenBrainz_Login'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ListenBrainz_Logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ListenBrainz_AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ListenBrainz_AuthenticationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>
    >,
    nullptr
} };

void ScrobblerSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScrobblerSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LastFM_Login(); break;
        case 1: _t->LastFM_Logout(); break;
        case 2: _t->LastFM_AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->LastFM_AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->ListenBrainz_Login(); break;
        case 5: _t->ListenBrainz_Logout(); break;
        case 6: _t->ListenBrainz_AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->ListenBrainz_AuthenticationComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ScrobblerSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrobblerSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrobblerSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int ScrobblerSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
