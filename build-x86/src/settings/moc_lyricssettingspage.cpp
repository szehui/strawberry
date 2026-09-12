/****************************************************************************
** Meta object code from reading C++ file 'lyricssettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/settings/lyricssettingspage.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lyricssettingspage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LyricsSettingsPage_t {
    uint offsetsAndSizes[34];
    char stringdata0[19];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[21];
    char stringdata7[12];
    char stringdata8[5];
    char stringdata9[16];
    char stringdata10[18];
    char stringdata11[20];
    char stringdata12[14];
    char stringdata13[22];
    char stringdata14[22];
    char stringdata15[6];
    char stringdata16[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LyricsSettingsPage_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LyricsSettingsPage_t qt_meta_stringdata_LyricsSettingsPage = {
    {
        QT_MOC_LITERAL(0, 18),  // "LyricsSettingsPage"
        QT_MOC_LITERAL(19, 18),  // "CurrentItemChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(56, 12),  // "item_current"
        QT_MOC_LITERAL(69, 13),  // "item_previous"
        QT_MOC_LITERAL(83, 20),  // "ItemSelectionChanged"
        QT_MOC_LITERAL(104, 11),  // "ItemChanged"
        QT_MOC_LITERAL(116, 4),  // "item"
        QT_MOC_LITERAL(121, 15),  // "ProvidersMoveUp"
        QT_MOC_LITERAL(137, 17),  // "ProvidersMoveDown"
        QT_MOC_LITERAL(155, 19),  // "AuthenticateClicked"
        QT_MOC_LITERAL(175, 13),  // "LogoutClicked"
        QT_MOC_LITERAL(189, 21),  // "AuthenticationSuccess"
        QT_MOC_LITERAL(211, 21),  // "AuthenticationFailure"
        QT_MOC_LITERAL(233, 5),  // "error"
        QT_MOC_LITERAL(239, 20)   // "CredentialsUiChanged"
    },
    "LyricsSettingsPage",
    "CurrentItemChanged",
    "",
    "QListWidgetItem*",
    "item_current",
    "item_previous",
    "ItemSelectionChanged",
    "ItemChanged",
    "item",
    "ProvidersMoveUp",
    "ProvidersMoveDown",
    "AuthenticateClicked",
    "LogoutClicked",
    "AuthenticationSuccess",
    "AuthenticationFailure",
    "error",
    "CredentialsUiChanged"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LyricsSettingsPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x08,    1 /* Private */,
       6,    0,   79,    2, 0x08,    4 /* Private */,
       7,    1,   80,    2, 0x08,    5 /* Private */,
       9,    0,   83,    2, 0x08,    7 /* Private */,
      10,    0,   84,    2, 0x08,    8 /* Private */,
      11,    0,   85,    2, 0x08,    9 /* Private */,
      12,    0,   86,    2, 0x08,   10 /* Private */,
      13,    0,   87,    2, 0x08,   11 /* Private */,
      14,    1,   88,    2, 0x08,   12 /* Private */,
      16,    0,   91,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LyricsSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_LyricsSettingsPage.offsetsAndSizes,
    qt_meta_data_LyricsSettingsPage,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LyricsSettingsPage_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LyricsSettingsPage, std::true_type>,
        // method 'CurrentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'ItemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'ProvidersMoveUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ProvidersMoveDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AuthenticateClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LogoutClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AuthenticationSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AuthenticationFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'CredentialsUiChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LyricsSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LyricsSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->CurrentItemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        case 1: _t->ItemSelectionChanged(); break;
        case 2: _t->ItemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 3: _t->ProvidersMoveUp(); break;
        case 4: _t->ProvidersMoveDown(); break;
        case 5: _t->AuthenticateClicked(); break;
        case 6: _t->LogoutClicked(); break;
        case 7: _t->AuthenticationSuccess(); break;
        case 8: _t->AuthenticationFailure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->CredentialsUiChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *LyricsSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LyricsSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LyricsSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int LyricsSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
