/****************************************************************************
** Meta object code from reading C++ file 'backendsettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/settings/backendsettingspage.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backendsettingspage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BackendSettingsPage_t {
    uint offsetsAndSizes[32];
    char stringdata0[20];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[23];
    char stringdata5[20];
    char stringdata6[16];
    char stringdata7[6];
    char stringdata8[22];
    char stringdata9[26];
    char stringdata10[28];
    char stringdata11[8];
    char stringdata12[32];
    char stringdata13[29];
    char stringdata14[21];
    char stringdata15[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BackendSettingsPage_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BackendSettingsPage_t qt_meta_stringdata_BackendSettingsPage = {
    {
        QT_MOC_LITERAL(0, 19),  // "BackendSettingsPage"
        QT_MOC_LITERAL(20, 13),  // "OutputChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 5),  // "index"
        QT_MOC_LITERAL(41, 22),  // "DeviceSelectionChanged"
        QT_MOC_LITERAL(64, 19),  // "DeviceStringChanged"
        QT_MOC_LITERAL(84, 15),  // "RgPreampChanged"
        QT_MOC_LITERAL(100, 5),  // "value"
        QT_MOC_LITERAL(106, 21),  // "RgFallbackGainChanged"
        QT_MOC_LITERAL(128, 25),  // "EbuR128TargetLevelChanged"
        QT_MOC_LITERAL(154, 27),  // "radiobutton_alsa_hw_clicked"
        QT_MOC_LITERAL(182, 7),  // "checked"
        QT_MOC_LITERAL(190, 31),  // "radiobutton_alsa_plughw_clicked"
        QT_MOC_LITERAL(222, 28),  // "radiobutton_alsa_pcm_clicked"
        QT_MOC_LITERAL(251, 20),  // "FadingOptionsChanged"
        QT_MOC_LITERAL(272, 14)   // "BufferDefaults"
    },
    "BackendSettingsPage",
    "OutputChanged",
    "",
    "index",
    "DeviceSelectionChanged",
    "DeviceStringChanged",
    "RgPreampChanged",
    "value",
    "RgFallbackGainChanged",
    "EbuR128TargetLevelChanged",
    "radiobutton_alsa_hw_clicked",
    "checked",
    "radiobutton_alsa_plughw_clicked",
    "radiobutton_alsa_pcm_clicked",
    "FadingOptionsChanged",
    "BufferDefaults"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BackendSettingsPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x08,    1 /* Private */,
       4,    1,   83,    2, 0x08,    3 /* Private */,
       5,    0,   86,    2, 0x08,    5 /* Private */,
       6,    1,   87,    2, 0x08,    6 /* Private */,
       8,    1,   90,    2, 0x08,    8 /* Private */,
       9,    1,   93,    2, 0x08,   10 /* Private */,
      10,    1,   96,    2, 0x08,   12 /* Private */,
      12,    1,   99,    2, 0x08,   14 /* Private */,
      13,    1,  102,    2, 0x08,   16 /* Private */,
      14,    0,  105,    2, 0x08,   18 /* Private */,
      15,    0,  106,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BackendSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_BackendSettingsPage.offsetsAndSizes,
    qt_meta_data_BackendSettingsPage,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BackendSettingsPage_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BackendSettingsPage, std::true_type>,
        // method 'OutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'DeviceSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'DeviceStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RgPreampChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'RgFallbackGainChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'EbuR128TargetLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'radiobutton_alsa_hw_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'radiobutton_alsa_plughw_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'radiobutton_alsa_pcm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'FadingOptionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BufferDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BackendSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackendSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OutputChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->DeviceSelectionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->DeviceStringChanged(); break;
        case 3: _t->RgPreampChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->RgFallbackGainChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->EbuR128TargetLevelChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->radiobutton_alsa_hw_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->radiobutton_alsa_plughw_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->radiobutton_alsa_pcm_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->FadingOptionsChanged(); break;
        case 10: _t->BufferDefaults(); break;
        default: ;
        }
    }
}

const QMetaObject *BackendSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackendSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackendSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int BackendSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
