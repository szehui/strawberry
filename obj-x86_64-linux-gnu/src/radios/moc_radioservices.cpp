/****************************************************************************
** Meta object code from reading C++ file 'radioservices.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/radios/radioservices.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radioservices.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_RadioServices_t {
    uint offsetsAndSizes[18];
    char stringdata0[14];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[17];
    char stringdata5[9];
    char stringdata6[23];
    char stringdata7[12];
    char stringdata8[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RadioServices_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RadioServices_t qt_meta_stringdata_RadioServices = {
    {
        QT_MOC_LITERAL(0, 13),  // "RadioServices"
        QT_MOC_LITERAL(14, 14),  // "ServiceDeleted"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 22),  // "GotChannelsFromBackend"
        QT_MOC_LITERAL(53, 16),  // "RadioChannelList"
        QT_MOC_LITERAL(70, 8),  // "channels"
        QT_MOC_LITERAL(79, 22),  // "GotChannelsFromService"
        QT_MOC_LITERAL(102, 11),  // "GetChannels"
        QT_MOC_LITERAL(114, 15)   // "RefreshChannels"
    },
    "RadioServices",
    "ServiceDeleted",
    "",
    "GotChannelsFromBackend",
    "RadioChannelList",
    "channels",
    "GotChannelsFromService",
    "GetChannels",
    "RefreshChannels"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RadioServices[] = {

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
       6,    1,   48,    2, 0x08,    4 /* Private */,
       7,    0,   51,    2, 0x0a,    6 /* Public */,
       8,    0,   52,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RadioServices::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RadioServices.offsetsAndSizes,
    qt_meta_data_RadioServices,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RadioServices_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RadioServices, std::true_type>,
        // method 'ServiceDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GotChannelsFromBackend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const RadioChannelList &, std::false_type>,
        // method 'GotChannelsFromService'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const RadioChannelList &, std::false_type>,
        // method 'GetChannels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RefreshChannels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RadioServices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioServices *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ServiceDeleted(); break;
        case 1: _t->GotChannelsFromBackend((*reinterpret_cast< std::add_pointer_t<RadioChannelList>>(_a[1]))); break;
        case 2: _t->GotChannelsFromService((*reinterpret_cast< std::add_pointer_t<RadioChannelList>>(_a[1]))); break;
        case 3: _t->GetChannels(); break;
        case 4: _t->RefreshChannels(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RadioChannelList >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RadioChannelList >(); break;
            }
            break;
        }
    }
}

const QMetaObject *RadioServices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioServices::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioServices.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RadioServices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
