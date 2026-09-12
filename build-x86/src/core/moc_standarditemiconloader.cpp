/****************************************************************************
** Meta object code from reading C++ file 'standarditemiconloader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/standarditemiconloader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'standarditemiconloader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_StandardItemIconLoader_t {
    uint offsetsAndSizes[24];
    char stringdata0[23];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[23];
    char stringdata5[7];
    char stringdata6[21];
    char stringdata7[12];
    char stringdata8[7];
    char stringdata9[6];
    char stringdata10[4];
    char stringdata11[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_StandardItemIconLoader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_StandardItemIconLoader_t qt_meta_stringdata_StandardItemIconLoader = {
    {
        QT_MOC_LITERAL(0, 22),  // "StandardItemIconLoader"
        QT_MOC_LITERAL(23, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 2),  // "id"
        QT_MOC_LITERAL(44, 22),  // "AlbumCoverLoaderResult"
        QT_MOC_LITERAL(67, 6),  // "result"
        QT_MOC_LITERAL(74, 20),  // "RowsAboutToBeRemoved"
        QT_MOC_LITERAL(95, 11),  // "QModelIndex"
        QT_MOC_LITERAL(107, 6),  // "parent"
        QT_MOC_LITERAL(114, 5),  // "begin"
        QT_MOC_LITERAL(120, 3),  // "end"
        QT_MOC_LITERAL(124, 10)   // "ModelReset"
    },
    "StandardItemIconLoader",
    "AlbumCoverLoaded",
    "",
    "id",
    "AlbumCoverLoaderResult",
    "result",
    "RowsAboutToBeRemoved",
    "QModelIndex",
    "parent",
    "begin",
    "end",
    "ModelReset"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_StandardItemIconLoader[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       6,    3,   37,    2, 0x08,    4 /* Private */,
      11,    0,   44,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject StandardItemIconLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StandardItemIconLoader.offsetsAndSizes,
    qt_meta_data_StandardItemIconLoader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_StandardItemIconLoader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StandardItemIconLoader, std::true_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverLoaderResult &, std::false_type>,
        // method 'RowsAboutToBeRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ModelReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void StandardItemIconLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StandardItemIconLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult>>(_a[2]))); break;
        case 1: _t->RowsAboutToBeRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->ModelReset(); break;
        default: ;
        }
    }
}

const QMetaObject *StandardItemIconLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StandardItemIconLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StandardItemIconLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StandardItemIconLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
