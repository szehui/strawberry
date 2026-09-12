/****************************************************************************
** Meta object code from reading C++ file 'loginstatewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/loginstatewidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginstatewidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LoginStateWidget_t {
    uint offsetsAndSizes[34];
    char stringdata0[17];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[24];
    char stringdata6[6];
    char stringdata7[13];
    char stringdata8[18];
    char stringdata9[19];
    char stringdata10[5];
    char stringdata11[22];
    char stringdata12[8];
    char stringdata13[11];
    char stringdata14[8];
    char stringdata15[7];
    char stringdata16[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LoginStateWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LoginStateWidget_t qt_meta_stringdata_LoginStateWidget = {
    {
        QT_MOC_LITERAL(0, 16),  // "LoginStateWidget"
        QT_MOC_LITERAL(17, 13),  // "LogoutClicked"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 12),  // "LoginClicked"
        QT_MOC_LITERAL(45, 11),  // "SetLoggedIn"
        QT_MOC_LITERAL(57, 23),  // "LoginStateWidget::State"
        QT_MOC_LITERAL(81, 5),  // "state"
        QT_MOC_LITERAL(87, 12),  // "account_name"
        QT_MOC_LITERAL(100, 17),  // "HideLoggedInState"
        QT_MOC_LITERAL(118, 18),  // "SetAccountTypeText"
        QT_MOC_LITERAL(137, 4),  // "text"
        QT_MOC_LITERAL(142, 21),  // "SetAccountTypeVisible"
        QT_MOC_LITERAL(164, 7),  // "visible"
        QT_MOC_LITERAL(172, 10),  // "SetExpires"
        QT_MOC_LITERAL(183, 7),  // "expires"
        QT_MOC_LITERAL(191, 6),  // "Logout"
        QT_MOC_LITERAL(198, 24)   // "FocusLastCredentialField"
    },
    "LoginStateWidget",
    "LogoutClicked",
    "",
    "LoginClicked",
    "SetLoggedIn",
    "LoginStateWidget::State",
    "state",
    "account_name",
    "HideLoggedInState",
    "SetAccountTypeText",
    "text",
    "SetAccountTypeVisible",
    "visible",
    "SetExpires",
    "expires",
    "Logout",
    "FocusLastCredentialField"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LoginStateWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   76,    2, 0x0a,    3 /* Public */,
       4,    1,   81,    2, 0x2a,    6 /* Public | MethodCloned */,
       8,    0,   84,    2, 0x0a,    8 /* Public */,
       9,    1,   85,    2, 0x0a,    9 /* Public */,
      11,    1,   88,    2, 0x0a,   11 /* Public */,
      13,    1,   91,    2, 0x0a,   13 /* Public */,
      15,    0,   94,    2, 0x08,   15 /* Private */,
      16,    0,   95,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QDate,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LoginStateWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LoginStateWidget.offsetsAndSizes,
    qt_meta_data_LoginStateWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LoginStateWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoginStateWidget, std::true_type>,
        // method 'LogoutClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoginClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetLoggedIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LoginStateWidget::State, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SetLoggedIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LoginStateWidget::State, std::false_type>,
        // method 'HideLoggedInState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetAccountTypeText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SetAccountTypeVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SetExpires'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate, std::false_type>,
        // method 'Logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FocusLastCredentialField'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LoginStateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginStateWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LogoutClicked(); break;
        case 1: _t->LoginClicked(); break;
        case 2: _t->SetLoggedIn((*reinterpret_cast< std::add_pointer_t<LoginStateWidget::State>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->SetLoggedIn((*reinterpret_cast< std::add_pointer_t<LoginStateWidget::State>>(_a[1]))); break;
        case 4: _t->HideLoggedInState(); break;
        case 5: _t->SetAccountTypeText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->SetAccountTypeVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->SetExpires((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 8: _t->Logout(); break;
        case 9: _t->FocusLastCredentialField(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginStateWidget::*)();
            if (_t _q_method = &LoginStateWidget::LogoutClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginStateWidget::*)();
            if (_t _q_method = &LoginStateWidget::LoginClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *LoginStateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginStateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginStateWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoginStateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LoginStateWidget::LogoutClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginStateWidget::LoginClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
