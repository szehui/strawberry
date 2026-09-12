/****************************************************************************
** Meta object code from reading C++ file 'udisks2lister.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/udisks2lister.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udisks2lister.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Udisks2Lister_t {
    uint offsetsAndSizes[28];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[22];
    char stringdata5[19];
    char stringdata6[16];
    char stringdata7[5];
    char stringdata8[24];
    char stringdata9[11];
    char stringdata10[21];
    char stringdata11[13];
    char stringdata12[8];
    char stringdata13[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Udisks2Lister_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Udisks2Lister_t qt_meta_stringdata_Udisks2Lister = {
    {
        QT_MOC_LITERAL(0, 13),  // "Udisks2Lister"
        QT_MOC_LITERAL(14, 13),  // "UnmountDevice"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 2),  // "id"
        QT_MOC_LITERAL(32, 21),  // "UpdateDeviceFreeSpace"
        QT_MOC_LITERAL(54, 18),  // "DBusInterfaceAdded"
        QT_MOC_LITERAL(73, 15),  // "QDBusObjectPath"
        QT_MOC_LITERAL(89, 4),  // "path"
        QT_MOC_LITERAL(94, 23),  // "InterfacesAndProperties"
        QT_MOC_LITERAL(118, 10),  // "interfaces"
        QT_MOC_LITERAL(129, 20),  // "DBusInterfaceRemoved"
        QT_MOC_LITERAL(150, 12),  // "JobCompleted"
        QT_MOC_LITERAL(163, 7),  // "success"
        QT_MOC_LITERAL(171, 7)   // "message"
    },
    "Udisks2Lister",
    "UnmountDevice",
    "",
    "id",
    "UpdateDeviceFreeSpace",
    "DBusInterfaceAdded",
    "QDBusObjectPath",
    "path",
    "InterfacesAndProperties",
    "interfaces",
    "DBusInterfaceRemoved",
    "JobCompleted",
    "success",
    "message"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Udisks2Lister[] = {

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
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       4,    1,   47,    2, 0x0a,    3 /* Public */,
       5,    2,   50,    2, 0x08,    5 /* Private */,
      10,    2,   55,    2, 0x08,    8 /* Private */,
      11,    2,   60,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QStringList,    7,    9,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject Udisks2Lister::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceLister::staticMetaObject>(),
    qt_meta_stringdata_Udisks2Lister.offsetsAndSizes,
    qt_meta_data_Udisks2Lister,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Udisks2Lister_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Udisks2Lister, std::true_type>,
        // method 'UnmountDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdateDeviceFreeSpace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DBusInterfaceAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const InterfacesAndProperties &, std::false_type>,
        // method 'DBusInterfaceRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'JobCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Udisks2Lister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Udisks2Lister *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UnmountDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->UpdateDeviceFreeSpace((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->DBusInterfaceAdded((*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<InterfacesAndProperties>>(_a[2]))); break;
        case 3: _t->DBusInterfaceRemoved((*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 4: _t->JobCompleted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Udisks2Lister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Udisks2Lister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Udisks2Lister.stringdata0))
        return static_cast<void*>(this);
    return DeviceLister::qt_metacast(_clname);
}

int Udisks2Lister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceLister::qt_metacall(_c, _id, _a);
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
