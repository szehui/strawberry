/****************************************************************************
** Meta object code from reading C++ file 'globalshortcutsbackend-x11.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/globalshortcuts/globalshortcutsbackend-x11.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalshortcutsbackend-x11.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GlobalShortcutsBackendX11_t {
    uint offsetsAndSizes[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GlobalShortcutsBackendX11_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GlobalShortcutsBackendX11_t qt_meta_stringdata_GlobalShortcutsBackendX11 = {
    {
        QT_MOC_LITERAL(0, 25)   // "GlobalShortcutsBackendX11"
    },
    "GlobalShortcutsBackendX11"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GlobalShortcutsBackendX11[] = {

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

Q_CONSTINIT const QMetaObject GlobalShortcutsBackendX11::staticMetaObject = { {
    QMetaObject::SuperData::link<GlobalShortcutsBackend::staticMetaObject>(),
    qt_meta_stringdata_GlobalShortcutsBackendX11.offsetsAndSizes,
    qt_meta_data_GlobalShortcutsBackendX11,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GlobalShortcutsBackendX11_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GlobalShortcutsBackendX11, std::true_type>
    >,
    nullptr
} };

void GlobalShortcutsBackendX11::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GlobalShortcutsBackendX11::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalShortcutsBackendX11::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutsBackendX11.stringdata0))
        return static_cast<void*>(this);
    return GlobalShortcutsBackend::qt_metacast(_clname);
}

int GlobalShortcutsBackendX11::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GlobalShortcutsBackend::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
