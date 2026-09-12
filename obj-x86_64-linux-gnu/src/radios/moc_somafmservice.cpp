/****************************************************************************
** Meta object code from reading C++ file 'somafmservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/radios/somafmservice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'somafmservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SomaFMService_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[15];
    char stringdata5[6];
    char stringdata6[8];
    char stringdata7[19];
    char stringdata8[13];
    char stringdata9[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SomaFMService_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SomaFMService_t qt_meta_stringdata_SomaFMService = {
    {
        QT_MOC_LITERAL(0, 13),  // "SomaFMService"
        QT_MOC_LITERAL(14, 11),  // "GetChannels"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 16),  // "GetChannelsReply"
        QT_MOC_LITERAL(44, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(59, 5),  // "reply"
        QT_MOC_LITERAL(65, 7),  // "task_id"
        QT_MOC_LITERAL(73, 18),  // "GetStreamUrlsReply"
        QT_MOC_LITERAL(92, 12),  // "RadioChannel"
        QT_MOC_LITERAL(105, 7)   // "channel"
    },
    "SomaFMService",
    "GetChannels",
    "",
    "GetChannelsReply",
    "QNetworkReply*",
    "reply",
    "task_id",
    "GetStreamUrlsReply",
    "RadioChannel",
    "channel"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SomaFMService[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    2,   33,    2, 0x08,    2 /* Private */,
       7,    3,   38,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, 0x80000000 | 8,    5,    6,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject SomaFMService::staticMetaObject = { {
    QMetaObject::SuperData::link<RadioService::staticMetaObject>(),
    qt_meta_stringdata_SomaFMService.offsetsAndSizes,
    qt_meta_data_SomaFMService,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SomaFMService_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SomaFMService, std::true_type>,
        // method 'GetChannels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetChannelsReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'GetStreamUrlsReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<RadioChannel, std::false_type>
    >,
    nullptr
} };

void SomaFMService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SomaFMService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->GetChannels(); break;
        case 1: _t->GetChannelsReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->GetStreamUrlsReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<RadioChannel>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RadioChannel >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SomaFMService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SomaFMService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SomaFMService.stringdata0))
        return static_cast<void*>(this);
    return RadioService::qt_metacast(_clname);
}

int SomaFMService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RadioService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
