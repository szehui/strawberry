/****************************************************************************
** Meta object code from reading C++ file 'collectionitemdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/collection/collectionitemdelegate.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collectionitemdelegate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CollectionItemDelegate_t {
    uint offsetsAndSizes[22];
    char stringdata0[23];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[19];
    char stringdata6[5];
    char stringdata7[21];
    char stringdata8[7];
    char stringdata9[12];
    char stringdata10[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CollectionItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CollectionItemDelegate_t qt_meta_stringdata_CollectionItemDelegate = {
    {
        QT_MOC_LITERAL(0, 22),  // "CollectionItemDelegate"
        QT_MOC_LITERAL(23, 9),  // "helpEvent"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 11),  // "QHelpEvent*"
        QT_MOC_LITERAL(46, 5),  // "event"
        QT_MOC_LITERAL(52, 18),  // "QAbstractItemView*"
        QT_MOC_LITERAL(71, 4),  // "view"
        QT_MOC_LITERAL(76, 20),  // "QStyleOptionViewItem"
        QT_MOC_LITERAL(97, 6),  // "option"
        QT_MOC_LITERAL(104, 11),  // "QModelIndex"
        QT_MOC_LITERAL(116, 3)   // "idx"
    },
    "CollectionItemDelegate",
    "helpEvent",
    "",
    "QHelpEvent*",
    "event",
    "QAbstractItemView*",
    "view",
    "QStyleOptionViewItem",
    "option",
    "QModelIndex",
    "idx"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CollectionItemDelegate[] = {

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
       1,    4,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject CollectionItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_CollectionItemDelegate.offsetsAndSizes,
    qt_meta_data_CollectionItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CollectionItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CollectionItemDelegate, std::true_type>,
        // method 'helpEvent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHelpEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemView *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStyleOptionViewItem &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void CollectionItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CollectionItemDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->helpEvent((*reinterpret_cast< std::add_pointer_t<QHelpEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractItemView*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStyleOptionViewItem>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *CollectionItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollectionItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CollectionItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int CollectionItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
