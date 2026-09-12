/****************************************************************************
** Meta object code from reading C++ file 'qtsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/systemtrayicon/qtsystemtrayicon.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtsystemtrayicon.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SystemTrayIcon_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[12];
    char stringdata5[13];
    char stringdata6[10];
    char stringdata7[14];
    char stringdata8[9];
    char stringdata9[10];
    char stringdata10[8];
    char stringdata11[34];
    char stringdata12[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SystemTrayIcon_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SystemTrayIcon_t qt_meta_stringdata_SystemTrayIcon = {
    {
        QT_MOC_LITERAL(0, 14),  // "SystemTrayIcon"
        QT_MOC_LITERAL(15, 12),  // "ChangeVolume"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 5),  // "delta"
        QT_MOC_LITERAL(35, 11),  // "SeekForward"
        QT_MOC_LITERAL(47, 12),  // "SeekBackward"
        QT_MOC_LITERAL(60, 9),  // "NextTrack"
        QT_MOC_LITERAL(70, 13),  // "PreviousTrack"
        QT_MOC_LITERAL(84, 8),  // "ShowHide"
        QT_MOC_LITERAL(93, 9),  // "PlayPause"
        QT_MOC_LITERAL(103, 7),  // "Clicked"
        QT_MOC_LITERAL(111, 33),  // "QSystemTrayIcon::ActivationRe..."
        QT_MOC_LITERAL(145, 17)   // "activation_reason"
    },
    "SystemTrayIcon",
    "ChangeVolume",
    "",
    "delta",
    "SeekForward",
    "SeekBackward",
    "NextTrack",
    "PreviousTrack",
    "ShowHide",
    "PlayPause",
    "Clicked",
    "QSystemTrayIcon::ActivationReason",
    "activation_reason"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SystemTrayIcon[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    0,   65,    2, 0x06,    3 /* Public */,
       5,    0,   66,    2, 0x06,    4 /* Public */,
       6,    0,   67,    2, 0x06,    5 /* Public */,
       7,    0,   68,    2, 0x06,    6 /* Public */,
       8,    0,   69,    2, 0x06,    7 /* Public */,
       9,    0,   70,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject SystemTrayIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QSystemTrayIcon::staticMetaObject>(),
    qt_meta_stringdata_SystemTrayIcon.offsetsAndSizes,
    qt_meta_data_SystemTrayIcon,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SystemTrayIcon_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SystemTrayIcon, std::true_type>,
        // method 'ChangeVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SeekForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SeekBackward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NextTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PreviousTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowHide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSystemTrayIcon::ActivationReason, std::false_type>
    >,
    nullptr
} };

void SystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemTrayIcon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ChangeVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->SeekForward(); break;
        case 2: _t->SeekBackward(); break;
        case 3: _t->NextTrack(); break;
        case 4: _t->PreviousTrack(); break;
        case 5: _t->ShowHide(); break;
        case 6: _t->PlayPause(); break;
        case 7: _t->Clicked((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemTrayIcon::*)(const int );
            if (_t _q_method = &SystemTrayIcon::ChangeVolume; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (_t _q_method = &SystemTrayIcon::SeekForward; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (_t _q_method = &SystemTrayIcon::SeekBackward; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (_t _q_method = &SystemTrayIcon::NextTrack; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (_t _q_method = &SystemTrayIcon::PreviousTrack; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (_t _q_method = &SystemTrayIcon::ShowHide; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (_t _q_method = &SystemTrayIcon::PlayPause; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *SystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTrayIcon.stringdata0))
        return static_cast<void*>(this);
    return QSystemTrayIcon::qt_metacast(_clname);
}

int SystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SystemTrayIcon::ChangeVolume(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemTrayIcon::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SystemTrayIcon::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SystemTrayIcon::NextTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SystemTrayIcon::PreviousTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SystemTrayIcon::ShowHide()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SystemTrayIcon::PlayPause()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
