/****************************************************************************
** Meta object code from reading C++ file 'deviceview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/deviceview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DeviceItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DeviceItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DeviceItemDelegate_t qt_meta_stringdata_DeviceItemDelegate = {
    {
        QT_MOC_LITERAL(0, 18)   // "DeviceItemDelegate"
    },
    "DeviceItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DeviceItemDelegate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<CollectionItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_DeviceItemDelegate.offsetsAndSizes,
    qt_meta_data_DeviceItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DeviceItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceItemDelegate, std::true_type>
    >,
    nullptr
} };

void DeviceItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *DeviceItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return CollectionItemDelegate::qt_metacast(_clname);
}

int DeviceItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CollectionItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_DeviceView_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
    char stringdata5[11];
    char stringdata6[5];
    char stringdata7[14];
    char stringdata8[18];
    char stringdata9[9];
    char stringdata10[7];
    char stringdata11[16];
    char stringdata12[12];
    char stringdata13[4];
    char stringdata14[19];
    char stringdata15[15];
    char stringdata16[9];
    char stringdata17[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DeviceView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DeviceView_t qt_meta_stringdata_DeviceView = {
    {
        QT_MOC_LITERAL(0, 10),  // "DeviceView"
        QT_MOC_LITERAL(11, 7),  // "Connect"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 7),  // "Unmount"
        QT_MOC_LITERAL(28, 6),  // "Forget"
        QT_MOC_LITERAL(35, 10),  // "Properties"
        QT_MOC_LITERAL(46, 4),  // "Load"
        QT_MOC_LITERAL(51, 13),  // "AddToPlaylist"
        QT_MOC_LITERAL(65, 17),  // "OpenInNewPlaylist"
        QT_MOC_LITERAL(83, 8),  // "Organize"
        QT_MOC_LITERAL(92, 6),  // "Delete"
        QT_MOC_LITERAL(99, 15),  // "DeviceConnected"
        QT_MOC_LITERAL(115, 11),  // "QModelIndex"
        QT_MOC_LITERAL(127, 3),  // "idx"
        QT_MOC_LITERAL(131, 18),  // "DeviceDisconnected"
        QT_MOC_LITERAL(150, 14),  // "DeleteFinished"
        QT_MOC_LITERAL(165, 8),  // "SongList"
        QT_MOC_LITERAL(174, 17)   // "songs_with_errors"
    },
    "DeviceView",
    "Connect",
    "",
    "Unmount",
    "Forget",
    "Properties",
    "Load",
    "AddToPlaylist",
    "OpenInNewPlaylist",
    "Organize",
    "Delete",
    "DeviceConnected",
    "QModelIndex",
    "idx",
    "DeviceDisconnected",
    "DeleteFinished",
    "SongList",
    "songs_with_errors"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DeviceView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    1,   95,    2, 0x08,   10 /* Private */,
      14,    1,   98,    2, 0x08,   12 /* Private */,
      15,    1,  101,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceView::staticMetaObject = { {
    QMetaObject::SuperData::link<AutoExpandingTreeView::staticMetaObject>(),
    qt_meta_stringdata_DeviceView.offsetsAndSizes,
    qt_meta_data_DeviceView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DeviceView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceView, std::true_type>,
        // method 'Connect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Unmount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Forget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Properties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddToPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenInNewPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Organize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Delete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DeviceConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'DeviceDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'DeleteFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>
    >,
    nullptr
} };

void DeviceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Connect(); break;
        case 1: _t->Unmount(); break;
        case 2: _t->Forget(); break;
        case 3: _t->Properties(); break;
        case 4: _t->Load(); break;
        case 5: _t->AddToPlaylist(); break;
        case 6: _t->OpenInNewPlaylist(); break;
        case 7: _t->Organize(); break;
        case 8: _t->Delete(); break;
        case 9: _t->DeviceConnected((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->DeviceDisconnected((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 11: _t->DeleteFinished((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DeviceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceView.stringdata0))
        return static_cast<void*>(this);
    return AutoExpandingTreeView::qt_metacast(_clname);
}

int DeviceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AutoExpandingTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
