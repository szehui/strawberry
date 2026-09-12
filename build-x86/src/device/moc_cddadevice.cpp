/****************************************************************************
** Meta object code from reading C++ file 'cddadevice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/cddadevice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cddadevice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CDDADevice_t {
    uint offsetsAndSizes[50];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[6];
    char stringdata5[17];
    char stringdata6[12];
    char stringdata7[20];
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
    uint(sizeof(qt_meta_stringdata_CDDADevice_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CDDADevice_t qt_meta_stringdata_CDDADevice = {
    {
        QT_MOC_LITERAL(0, 10),  // "CDDADevice"
        QT_MOC_LITERAL(11, 15),  // "SongsDiscovered"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 8),  // "SongList"
        QT_MOC_LITERAL(37, 5),  // "songs"
        QT_MOC_LITERAL(43, 16),  // "CheckDiscChanged"
        QT_MOC_LITERAL(60, 11),  // "SongsLoaded"
        QT_MOC_LITERAL(72, 19),  // "SongLoadingFinished"
        QT_MOC_LITERAL(92, 3),  // "url"
        QT_MOC_LITERAL(96, 13),  // "DeviceLister*"
        QT_MOC_LITERAL(110, 6),  // "lister"
        QT_MOC_LITERAL(117, 9),  // "unique_id"
        QT_MOC_LITERAL(127, 14),  // "DeviceManager*"
        QT_MOC_LITERAL(142, 14),  // "device_manager"
        QT_MOC_LITERAL(157, 22),  // "SharedPtr<TaskManager>"
        QT_MOC_LITERAL(180, 12),  // "task_manager"
        QT_MOC_LITERAL(193, 19),  // "SharedPtr<Database>"
        QT_MOC_LITERAL(213, 8),  // "database"
        QT_MOC_LITERAL(222, 26),  // "SharedPtr<TagReaderClient>"
        QT_MOC_LITERAL(249, 16),  // "tagreader_client"
        QT_MOC_LITERAL(266, 27),  // "SharedPtr<AlbumCoverLoader>"
        QT_MOC_LITERAL(294, 17),  // "albumcover_loader"
        QT_MOC_LITERAL(312, 11),  // "database_id"
        QT_MOC_LITERAL(324, 10),  // "first_time"
        QT_MOC_LITERAL(335, 6)   // "parent"
    },
    "CDDADevice",
    "SongsDiscovered",
    "",
    "SongList",
    "songs",
    "CheckDiscChanged",
    "SongsLoaded",
    "SongLoadingFinished",
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

Q_CONSTINIT static const uint qt_meta_data_CDDADevice[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   97, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x08,    3 /* Private */,
       6,    1,   48,    2, 0x08,    4 /* Private */,
       6,    0,   51,    2, 0x28,    6 /* Private | MethodCloned */,
       7,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 9, QMetaType::QString, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20, QMetaType::Int, QMetaType::Bool, QMetaType::QObjectStar,    8,   10,   11,   13,   15,   17,   19,   21,   22,   23,   24,
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 9, QMetaType::QString, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20, QMetaType::Int, QMetaType::Bool,    8,   10,   11,   13,   15,   17,   19,   21,   22,   23,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,   11,   53,    2, 0x0e,    8 /* Public */,
       0,   10,   76,    2, 0x2e,   19 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject CDDADevice::staticMetaObject = { {
    QMetaObject::SuperData::link<ConnectedDevice::staticMetaObject>(),
    qt_meta_stringdata_CDDADevice.offsetsAndSizes,
    qt_meta_data_CDDADevice,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CDDADevice_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CDDADevice, std::true_type>,
        // method 'SongsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'CheckDiscChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SongsLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SongLoadingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // constructor 'CDDADevice'
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
        // constructor 'CDDADevice'
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

void CDDADevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { CDDADevice *_r = new CDDADevice((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DeviceLister*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<DeviceManager*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TaskManager>>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<Database>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TagReaderClient>>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<AlbumCoverLoader>>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[11])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { CDDADevice *_r = new CDDADevice((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DeviceLister*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<DeviceManager*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TaskManager>>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<Database>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TagReaderClient>>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<AlbumCoverLoader>>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[10])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDDADevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SongsDiscovered((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 1: _t->CheckDiscChanged(); break;
        case 2: _t->SongsLoaded((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 3: _t->SongsLoaded(); break;
        case 4: _t->SongLoadingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDDADevice::*)(const SongList & );
            if (_t _q_method = &CDDADevice::SongsDiscovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *CDDADevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDDADevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CDDADevice.stringdata0))
        return static_cast<void*>(this);
    return ConnectedDevice::qt_metacast(_clname);
}

int CDDADevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CDDADevice::SongsDiscovered(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
