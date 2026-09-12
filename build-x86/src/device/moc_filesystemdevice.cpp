/****************************************************************************
** Meta object code from reading C++ file 'filesystemdevice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/filesystemdevice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemdevice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FilesystemDevice_t {
    uint offsetsAndSizes[42];
    char stringdata0[17];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[4];
    char stringdata5[14];
    char stringdata6[7];
    char stringdata7[10];
    char stringdata8[15];
    char stringdata9[15];
    char stringdata10[23];
    char stringdata11[13];
    char stringdata12[20];
    char stringdata13[9];
    char stringdata14[27];
    char stringdata15[17];
    char stringdata16[28];
    char stringdata17[18];
    char stringdata18[12];
    char stringdata19[11];
    char stringdata20[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FilesystemDevice_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FilesystemDevice_t qt_meta_stringdata_FilesystemDevice = {
    {
        QT_MOC_LITERAL(0, 16),  // "FilesystemDevice"
        QT_MOC_LITERAL(17, 5),  // "Close"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 12),  // "ExitFinished"
        QT_MOC_LITERAL(37, 3),  // "url"
        QT_MOC_LITERAL(41, 13),  // "DeviceLister*"
        QT_MOC_LITERAL(55, 6),  // "lister"
        QT_MOC_LITERAL(62, 9),  // "unique_id"
        QT_MOC_LITERAL(72, 14),  // "DeviceManager*"
        QT_MOC_LITERAL(87, 14),  // "device_manager"
        QT_MOC_LITERAL(102, 22),  // "SharedPtr<TaskManager>"
        QT_MOC_LITERAL(125, 12),  // "task_manager"
        QT_MOC_LITERAL(138, 19),  // "SharedPtr<Database>"
        QT_MOC_LITERAL(158, 8),  // "database"
        QT_MOC_LITERAL(167, 26),  // "SharedPtr<TagReaderClient>"
        QT_MOC_LITERAL(194, 16),  // "tagreader_client"
        QT_MOC_LITERAL(211, 27),  // "SharedPtr<AlbumCoverLoader>"
        QT_MOC_LITERAL(239, 17),  // "albumcover_loader"
        QT_MOC_LITERAL(257, 11),  // "database_id"
        QT_MOC_LITERAL(269, 10),  // "first_time"
        QT_MOC_LITERAL(280, 6)   // "parent"
    },
    "FilesystemDevice",
    "Close",
    "",
    "ExitFinished",
    "url",
    "DeviceLister*",
    "lister",
    "unique_id",
    "DeviceManager*",
    "device_manager",
    "SharedPtr<TaskManager>",
    "task_manager",
    "SharedPtr<Database>",
    "database",
    "SharedPtr<TagReaderClient>",
    "tagreader_client",
    "SharedPtr<AlbumCoverLoader>",
    "albumcover_loader",
    "database_id",
    "first_time",
    "parent"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FilesystemDevice[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   72, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 5, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16, QMetaType::Int, QMetaType::Bool, QMetaType::QObjectStar,    4,    6,    7,    9,   11,   13,   15,   17,   18,   19,   20,
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 5, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16, QMetaType::Int, QMetaType::Bool,    4,    6,    7,    9,   11,   13,   15,   17,   18,   19,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,   11,   28,    2, 0x0e,    3 /* Public */,
       0,   10,   51,    2, 0x2e,   14 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject FilesystemDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<ConnectedDevice::staticMetaObject>(),
    qt_meta_stringdata_FilesystemDevice.offsetsAndSizes,
    qt_meta_data_FilesystemDevice,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FilesystemDevice_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FilesystemDevice, std::true_type>,
        // method 'Close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ExitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // constructor 'FilesystemDevice'
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<DeviceLister *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<DeviceManager *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<TaskManager>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<Database>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<TagReaderClient>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<AlbumCoverLoader>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'FilesystemDevice'
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<DeviceLister *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<DeviceManager *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<TaskManager>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<Database>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<TagReaderClient>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<AlbumCoverLoader>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>
    >,
    nullptr
} };

void FilesystemDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { FilesystemDevice *_r = new FilesystemDevice((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DeviceLister*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<DeviceManager*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TaskManager>>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<Database>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TagReaderClient>>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<AlbumCoverLoader>>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[11])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { FilesystemDevice *_r = new FilesystemDevice((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DeviceLister*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<DeviceManager*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TaskManager>>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<Database>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TagReaderClient>>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<AlbumCoverLoader>>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[10])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilesystemDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Close(); break;
        case 1: _t->ExitFinished(); break;
        default: ;
        }
    }
}

const QMetaObject *FilesystemDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilesystemDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilesystemDevice.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FilesystemMusicStorage"))
        return static_cast< FilesystemMusicStorage*>(this);
    return ConnectedDevice::qt_metacast(_clname);
}

int FilesystemDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
