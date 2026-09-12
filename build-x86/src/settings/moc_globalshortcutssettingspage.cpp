/****************************************************************************
** Meta object code from reading C++ file 'globalshortcutssettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/settings/globalshortcutssettingspage.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalshortcutssettingspage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GlobalShortcutsSettingsPage_t {
    uint offsetsAndSizes[18];
    char stringdata0[28];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[5];
    char stringdata6[12];
    char stringdata7[15];
    char stringdata8[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GlobalShortcutsSettingsPage_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GlobalShortcutsSettingsPage_t qt_meta_stringdata_GlobalShortcutsSettingsPage = {
    {
        QT_MOC_LITERAL(0, 27),  // "GlobalShortcutsSettingsPage"
        QT_MOC_LITERAL(28, 22),  // "ShortcutOptionsChanged"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 11),  // "ItemClicked"
        QT_MOC_LITERAL(64, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(81, 4),  // "item"
        QT_MOC_LITERAL(86, 11),  // "NoneClicked"
        QT_MOC_LITERAL(98, 14),  // "DefaultClicked"
        QT_MOC_LITERAL(113, 13)   // "ChangeClicked"
    },
    "GlobalShortcutsSettingsPage",
    "ShortcutOptionsChanged",
    "",
    "ItemClicked",
    "QTreeWidgetItem*",
    "item",
    "NoneClicked",
    "DefaultClicked",
    "ChangeClicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GlobalShortcutsSettingsPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    1,   45,    2, 0x08,    2 /* Private */,
       6,    0,   48,    2, 0x08,    4 /* Private */,
       7,    0,   49,    2, 0x08,    5 /* Private */,
       8,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GlobalShortcutsSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_GlobalShortcutsSettingsPage.offsetsAndSizes,
    qt_meta_data_GlobalShortcutsSettingsPage,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GlobalShortcutsSettingsPage_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GlobalShortcutsSettingsPage, std::true_type>,
        // method 'ShortcutOptionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'NoneClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DefaultClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ChangeClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GlobalShortcutsSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalShortcutsSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ShortcutOptionsChanged(); break;
        case 1: _t->ItemClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 2: _t->NoneClicked(); break;
        case 3: _t->DefaultClicked(); break;
        case 4: _t->ChangeClicked(); break;
        default: ;
        }
    }
}

const QMetaObject *GlobalShortcutsSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalShortcutsSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutsSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int GlobalShortcutsSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
