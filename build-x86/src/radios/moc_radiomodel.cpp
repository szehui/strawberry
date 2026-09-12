/****************************************************************************
** Meta object code from reading C++ file 'radiomodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/radios/radiomodel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radiomodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_RadioModel_t {
    uint offsetsAndSizes[12];
    char stringdata0[11];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[23];
    char stringdata5[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RadioModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RadioModel_t qt_meta_stringdata_RadioModel = {
    {
        QT_MOC_LITERAL(0, 10),  // "RadioModel"
        QT_MOC_LITERAL(11, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 2),  // "id"
        QT_MOC_LITERAL(32, 22),  // "AlbumCoverLoaderResult"
        QT_MOC_LITERAL(55, 6)   // "result"
    },
    "RadioModel",
    "AlbumCoverLoaded",
    "",
    "id",
    "AlbumCoverLoaderResult",
    "result"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RadioModel[] = {

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
       1,    2,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 4,    3,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject RadioModel::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleTreeModel<RadioItem>::staticMetaObject>(),
    qt_meta_stringdata_RadioModel.offsetsAndSizes,
    qt_meta_data_RadioModel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RadioModel_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RadioModel, std::true_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverLoaderResult &, std::false_type>
    >,
    nullptr
} };

void RadioModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *RadioModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioModel.stringdata0))
        return static_cast<void*>(this);
    return SimpleTreeModel<RadioItem>::qt_metacast(_clname);
}

int RadioModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleTreeModel<RadioItem>::qt_metacall(_c, _id, _a);
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
