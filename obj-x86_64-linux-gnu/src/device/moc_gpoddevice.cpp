/****************************************************************************
** Meta object code from reading C++ file 'gpoddevice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/gpoddevice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpoddevice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GPodDevice_t {
    uint offsetsAndSizes[50];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[3];
    char stringdata5[8];
    char stringdata6[12];
    char stringdata7[8];
    char stringdata8[4];
    char stringdata9[14];
    char stringdata10[7];
    char stringdata11[10];
    char stringdata12[15];
    char stringdata13[15];
    char stringdata14[23];
    char stringdata15[13];
    char stringdata16[20];
    char stringdata17[9];
    char stringdata18[27];
    char stringdata19[17];
    char stringdata20[28];
    char stringdata21[18];
    char stringdata22[12];
    char stringdata23[11];
    char stringdata24[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GPodDevice_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GPodDevice_t qt_meta_stringdata_GPodDevice = {
    {
        QT_MOC_LITERAL(0, 10),  // "GPodDevice"
        QT_MOC_LITERAL(11, 12),  // "LoadFinished"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 14),  // "Itdb_iTunesDB*"
        QT_MOC_LITERAL(40, 2),  // "db"
        QT_MOC_LITERAL(43, 7),  // "success"
        QT_MOC_LITERAL(51, 11),  // "LoaderError"
        QT_MOC_LITERAL(63, 7),  // "message"
        QT_MOC_LITERAL(71, 3),  // "url"
        QT_MOC_LITERAL(75, 13),  // "DeviceLister*"
        QT_MOC_LITERAL(89, 6),  // "lister"
        QT_MOC_LITERAL(96, 9),  // "unique_id"
        QT_MOC_LITERAL(106, 14),  // "DeviceManager*"
        QT_MOC_LITERAL(121, 14),  // "device_manager"
        QT_MOC_LITERAL(136, 22),  // "SharedPtr<TaskManager>"
        QT_MOC_LITERAL(159, 12),  // "task_manager"
        QT_MOC_LITERAL(172, 19),  // "SharedPtr<Database>"
        QT_MOC_LITERAL(192, 8),  // "database"
        QT_MOC_LITERAL(201, 26),  // "SharedPtr<TagReaderClient>"
        QT_MOC_LITERAL(228, 16),  // "tagreader_client"
        QT_MOC_LITERAL(245, 27),  // "SharedPtr<AlbumCoverLoader>"
        QT_MOC_LITERAL(273, 17),  // "albumcover_loader"
        QT_MOC_LITERAL(291, 11),  // "database_id"
        QT_MOC_LITERAL(303, 10),  // "first_time"
        QT_MOC_LITERAL(314, 6)   // "parent"
    },
    "GPodDevice",
    "LoadFinished",
    "",
    "Itdb_iTunesDB*",
    "db",
    "success",
    "LoaderError",
    "message",
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

Q_CONSTINIT static const uint qt_meta_data_GPodDevice[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   78, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x09,    1 /* Protected */,
       6,    1,   31,    2, 0x09,    4 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 9, QMetaType::QString, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20, QMetaType::Int, QMetaType::Bool, QMetaType::QObjectStar,    8,   10,   11,   13,   15,   17,   19,   21,   22,   23,   24,
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 9, QMetaType::QString, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20, QMetaType::Int, QMetaType::Bool,    8,   10,   11,   13,   15,   17,   19,   21,   22,   23,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,   11,   34,    2, 0x0e,    6 /* Public */,
       0,   10,   57,    2, 0x2e,   17 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject GPodDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<ConnectedDevice::staticMetaObject>(),
    qt_meta_stringdata_GPodDevice.offsetsAndSizes,
    qt_meta_data_GPodDevice,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GPodDevice_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GPodDevice, std::true_type>,
        // method 'LoadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Itdb_iTunesDB *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'LoaderError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // constructor 'GPodDevice'
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
        // constructor 'GPodDevice'
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

void GPodDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { GPodDevice *_r = new GPodDevice((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DeviceLister*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<DeviceManager*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TaskManager>>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<Database>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TagReaderClient>>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<AlbumCoverLoader>>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[11])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { GPodDevice *_r = new GPodDevice((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DeviceLister*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<DeviceManager*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TaskManager>>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<Database>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TagReaderClient>>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<AlbumCoverLoader>>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[10])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPodDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoadFinished((*reinterpret_cast< std::add_pointer_t<Itdb_iTunesDB*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->LoaderError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *GPodDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPodDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPodDevice.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MusicStorage"))
        return static_cast< MusicStorage*>(this);
    return ConnectedDevice::qt_metacast(_clname);
}

int GPodDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
