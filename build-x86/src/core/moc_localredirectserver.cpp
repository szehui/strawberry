/****************************************************************************
** Meta object code from reading C++ file 'localredirectserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/localredirectserver.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'localredirectserver.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LocalRedirectServer_t {
    uint offsetsAndSizes[22];
    char stringdata0[20];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[19];
    char stringdata5[8];
    char stringdata6[18];
    char stringdata7[10];
    char stringdata8[10];
    char stringdata9[13];
    char stringdata10[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LocalRedirectServer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LocalRedirectServer_t qt_meta_stringdata_LocalRedirectServer = {
    {
        QT_MOC_LITERAL(0, 19),  // "LocalRedirectServer"
        QT_MOC_LITERAL(20, 8),  // "Finished"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 13),  // "NewConnection"
        QT_MOC_LITERAL(44, 18),  // "incomingConnection"
        QT_MOC_LITERAL(63, 7),  // "qintptr"
        QT_MOC_LITERAL(71, 17),  // "socket_descriptor"
        QT_MOC_LITERAL(89, 9),  // "Encrypted"
        QT_MOC_LITERAL(99, 9),  // "Connected"
        QT_MOC_LITERAL(109, 12),  // "Disconnected"
        QT_MOC_LITERAL(122, 9)   // "ReadyRead"
    },
    "LocalRedirectServer",
    "Finished",
    "",
    "NewConnection",
    "incomingConnection",
    "qintptr",
    "socket_descriptor",
    "Encrypted",
    "Connected",
    "Disconnected",
    "ReadyRead"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LocalRedirectServer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    1,   58,    2, 0x0a,    3 /* Public */,
       7,    0,   61,    2, 0x0a,    5 /* Public */,
       8,    0,   62,    2, 0x0a,    6 /* Public */,
       9,    0,   63,    2, 0x0a,    7 /* Public */,
      10,    0,   64,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LocalRedirectServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_LocalRedirectServer.offsetsAndSizes,
    qt_meta_data_LocalRedirectServer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LocalRedirectServer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LocalRedirectServer, std::true_type>,
        // method 'Finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incomingConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qintptr, std::false_type>,
        // method 'Encrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LocalRedirectServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalRedirectServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Finished(); break;
        case 1: _t->NewConnection(); break;
        case 2: _t->incomingConnection((*reinterpret_cast< std::add_pointer_t<qintptr>>(_a[1]))); break;
        case 3: _t->Encrypted(); break;
        case 4: _t->Connected(); break;
        case 5: _t->Disconnected(); break;
        case 6: _t->ReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocalRedirectServer::*)();
            if (_t _q_method = &LocalRedirectServer::Finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *LocalRedirectServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalRedirectServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalRedirectServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int LocalRedirectServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LocalRedirectServer::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
