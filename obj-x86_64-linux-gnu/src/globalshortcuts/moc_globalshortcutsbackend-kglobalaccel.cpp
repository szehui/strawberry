/****************************************************************************
** Meta object code from reading C++ file 'globalshortcutsbackend-kglobalaccel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/globalshortcuts/globalshortcutsbackend-kglobalaccel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalshortcutsbackend-kglobalaccel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GlobalShortcutsBackendKGlobalAccel_t {
    uint offsetsAndSizes[18];
    char stringdata0[35];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[8];
    char stringdata5[22];
    char stringdata6[17];
    char stringdata7[16];
    char stringdata8[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GlobalShortcutsBackendKGlobalAccel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GlobalShortcutsBackendKGlobalAccel_t qt_meta_stringdata_GlobalShortcutsBackendKGlobalAccel = {
    {
        QT_MOC_LITERAL(0, 34),  // "GlobalShortcutsBackendKGlobal..."
        QT_MOC_LITERAL(35, 16),  // "RegisterFinished"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 24),  // "QDBusPendingCallWatcher*"
        QT_MOC_LITERAL(78, 7),  // "watcher"
        QT_MOC_LITERAL(86, 21),  // "GlobalShortcutPressed"
        QT_MOC_LITERAL(108, 16),  // "component_unique"
        QT_MOC_LITERAL(125, 15),  // "shortcut_unique"
        QT_MOC_LITERAL(141, 9)   // "timestamp"
    },
    "GlobalShortcutsBackendKGlobalAccel",
    "RegisterFinished",
    "",
    "QDBusPendingCallWatcher*",
    "watcher",
    "GlobalShortcutPressed",
    "component_unique",
    "shortcut_unique",
    "timestamp"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GlobalShortcutsBackendKGlobalAccel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    1 /* Private */,
       5,    3,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    6,    7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject GlobalShortcutsBackendKGlobalAccel::staticMetaObject = { {
    QMetaObject::SuperData::link<GlobalShortcutsBackend::staticMetaObject>(),
    qt_meta_stringdata_GlobalShortcutsBackendKGlobalAccel.offsetsAndSizes,
    qt_meta_data_GlobalShortcutsBackendKGlobalAccel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GlobalShortcutsBackendKGlobalAccel_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GlobalShortcutsBackendKGlobalAccel, std::true_type>,
        // method 'RegisterFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDBusPendingCallWatcher *, std::false_type>,
        // method 'GlobalShortcutPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>
    >,
    nullptr
} };

void GlobalShortcutsBackendKGlobalAccel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalShortcutsBackendKGlobalAccel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RegisterFinished((*reinterpret_cast< std::add_pointer_t<QDBusPendingCallWatcher*>>(_a[1]))); break;
        case 1: _t->GlobalShortcutPressed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *GlobalShortcutsBackendKGlobalAccel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalShortcutsBackendKGlobalAccel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutsBackendKGlobalAccel.stringdata0))
        return static_cast<void*>(this);
    return GlobalShortcutsBackend::qt_metacast(_clname);
}

int GlobalShortcutsBackendKGlobalAccel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GlobalShortcutsBackend::qt_metacall(_c, _id, _a);
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
