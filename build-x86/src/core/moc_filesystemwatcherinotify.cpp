/****************************************************************************
** Meta object code from reading C++ file 'filesystemwatcherinotify.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/filesystemwatcherinotify.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemwatcherinotify.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FileSystemWatcherInotify_t {
    uint offsetsAndSizes[6];
    char stringdata0[25];
    char stringdata1[12];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FileSystemWatcherInotify_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FileSystemWatcherInotify_t qt_meta_stringdata_FileSystemWatcherInotify = {
    {
        QT_MOC_LITERAL(0, 24),  // "FileSystemWatcherInotify"
        QT_MOC_LITERAL(25, 11),  // "InotifyRead"
        QT_MOC_LITERAL(37, 0)   // ""
    },
    "FileSystemWatcherInotify",
    "InotifyRead",
    ""
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FileSystemWatcherInotify[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileSystemWatcherInotify::staticMetaObject = { {
    QMetaObject::SuperData::link<FileSystemWatcherInterface::staticMetaObject>(),
    qt_meta_stringdata_FileSystemWatcherInotify.offsetsAndSizes,
    qt_meta_data_FileSystemWatcherInotify,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FileSystemWatcherInotify_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileSystemWatcherInotify, std::true_type>,
        // method 'InotifyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FileSystemWatcherInotify::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSystemWatcherInotify *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->InotifyRead(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FileSystemWatcherInotify::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSystemWatcherInotify::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystemWatcherInotify.stringdata0))
        return static_cast<void*>(this);
    return FileSystemWatcherInterface::qt_metacast(_clname);
}

int FileSystemWatcherInotify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileSystemWatcherInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
