/****************************************************************************
** Meta object code from reading C++ file 'devicelister.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/devicelister.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicelister.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DeviceLister_t {
    uint offsetsAndSizes[32];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[14];
    char stringdata7[11];
    char stringdata8[8];
    char stringdata9[13];
    char stringdata10[22];
    char stringdata11[9];
    char stringdata12[12];
    char stringdata13[14];
    char stringdata14[5];
    char stringdata15[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DeviceLister_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DeviceLister_t qt_meta_stringdata_DeviceLister = {
    {
        QT_MOC_LITERAL(0, 12),  // "DeviceLister"
        QT_MOC_LITERAL(13, 11),  // "DeviceAdded"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 2),  // "id"
        QT_MOC_LITERAL(29, 13),  // "DeviceRemoved"
        QT_MOC_LITERAL(43, 13),  // "DeviceChanged"
        QT_MOC_LITERAL(57, 13),  // "DeviceMounted"
        QT_MOC_LITERAL(71, 10),  // "request_id"
        QT_MOC_LITERAL(82, 7),  // "success"
        QT_MOC_LITERAL(90, 12),  // "ExitFinished"
        QT_MOC_LITERAL(103, 21),  // "UpdateDeviceFreeSpace"
        QT_MOC_LITERAL(125, 8),  // "ShutDown"
        QT_MOC_LITERAL(134, 11),  // "MountDevice"
        QT_MOC_LITERAL(146, 13),  // "UnmountDevice"
        QT_MOC_LITERAL(160, 4),  // "Exit"
        QT_MOC_LITERAL(165, 13)   // "ThreadStarted"
    },
    "DeviceLister",
    "DeviceAdded",
    "",
    "id",
    "DeviceRemoved",
    "DeviceChanged",
    "DeviceMounted",
    "request_id",
    "success",
    "ExitFinished",
    "UpdateDeviceFreeSpace",
    "ShutDown",
    "MountDevice",
    "UnmountDevice",
    "Exit",
    "ThreadStarted"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DeviceLister[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       4,    1,   83,    2, 0x06,    3 /* Public */,
       5,    1,   86,    2, 0x06,    5 /* Public */,
       6,    3,   89,    2, 0x06,    7 /* Public */,
       9,    0,   96,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   97,    2, 0x0a,   12 /* Public */,
      11,    0,  100,    2, 0x0a,   14 /* Public */,
      12,    2,  101,    2, 0x0a,   15 /* Public */,
      13,    1,  106,    2, 0x0a,   18 /* Public */,
      14,    0,  109,    2, 0x0a,   20 /* Public */,
      15,    0,  110,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    3,    7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    7,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceLister::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceLister.offsetsAndSizes,
    qt_meta_data_DeviceLister,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DeviceLister_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceLister, std::true_type>,
        // method 'DeviceAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DeviceRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DeviceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DeviceMounted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ExitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateDeviceFreeSpace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ShutDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MountDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'UnmountDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ThreadStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DeviceLister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceLister *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DeviceAdded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->DeviceRemoved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->DeviceChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->DeviceMounted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->ExitFinished(); break;
        case 5: _t->UpdateDeviceFreeSpace((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->ShutDown(); break;
        case 7: _t->MountDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->UnmountDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->Exit(); break;
        case 10: _t->ThreadStarted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceLister::*)(const QString & );
            if (_t _q_method = &DeviceLister::DeviceAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceLister::*)(const QString & );
            if (_t _q_method = &DeviceLister::DeviceRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceLister::*)(const QString & );
            if (_t _q_method = &DeviceLister::DeviceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceLister::*)(const QString & , const int , const bool );
            if (_t _q_method = &DeviceLister::DeviceMounted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceLister::*)();
            if (_t _q_method = &DeviceLister::ExitFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *DeviceLister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceLister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceLister.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceLister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DeviceLister::DeviceAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceLister::DeviceRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceLister::DeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceLister::DeviceMounted(const QString & _t1, const int _t2, const bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceLister::ExitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
