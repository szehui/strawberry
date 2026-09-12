/****************************************************************************
** Meta object code from reading C++ file 'queue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/queue/queue.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'queue.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Queue_t {
    uint offsetsAndSizes[30];
    char stringdata0[6];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[17];
    char stringdata5[6];
    char stringdata6[19];
    char stringdata7[8];
    char stringdata8[18];
    char stringdata9[18];
    char stringdata10[12];
    char stringdata11[9];
    char stringdata12[13];
    char stringdata13[20];
    char stringdata14[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Queue_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Queue_t qt_meta_stringdata_Queue = {
    {
        QT_MOC_LITERAL(0, 5),  // "Queue"
        QT_MOC_LITERAL(6, 18),  // "TotalLengthChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 6),  // "length"
        QT_MOC_LITERAL(33, 16),  // "ItemCountChanged"
        QT_MOC_LITERAL(50, 5),  // "count"
        QT_MOC_LITERAL(56, 18),  // "SummaryTextChanged"
        QT_MOC_LITERAL(75, 7),  // "message"
        QT_MOC_LITERAL(83, 17),  // "UpdateSummaryText"
        QT_MOC_LITERAL(101, 17),  // "SourceDataChanged"
        QT_MOC_LITERAL(119, 11),  // "QModelIndex"
        QT_MOC_LITERAL(131, 8),  // "top_left"
        QT_MOC_LITERAL(140, 12),  // "bottom_right"
        QT_MOC_LITERAL(153, 19),  // "SourceLayoutChanged"
        QT_MOC_LITERAL(173, 17)   // "UpdateTotalLength"
    },
    "Queue",
    "TotalLengthChanged",
    "",
    "length",
    "ItemCountChanged",
    "count",
    "SummaryTextChanged",
    "message",
    "UpdateSummaryText",
    "SourceDataChanged",
    "QModelIndex",
    "top_left",
    "bottom_right",
    "SourceLayoutChanged",
    "UpdateTotalLength"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Queue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    1,   59,    2, 0x06,    3 /* Public */,
       6,    1,   62,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   65,    2, 0x0a,    7 /* Public */,
       9,    2,   66,    2, 0x08,    8 /* Private */,
      13,    0,   71,    2, 0x08,   11 /* Private */,
      14,    0,   72,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Queue::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractProxyModel::staticMetaObject>(),
    qt_meta_stringdata_Queue.offsetsAndSizes,
    qt_meta_data_Queue,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Queue_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Queue, std::true_type>,
        // method 'TotalLengthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        // method 'ItemCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SummaryTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdateSummaryText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SourceDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'SourceLayoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateTotalLength'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Queue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Queue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->TotalLengthChanged((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 1: _t->ItemCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->SummaryTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->UpdateSummaryText(); break;
        case 4: _t->SourceDataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 5: _t->SourceLayoutChanged(); break;
        case 6: _t->UpdateTotalLength(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Queue::*)(const quint64 );
            if (_t _q_method = &Queue::TotalLengthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Queue::*)(const int );
            if (_t _q_method = &Queue::ItemCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Queue::*)(const QString & );
            if (_t _q_method = &Queue::SummaryTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Queue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Queue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Queue.stringdata0))
        return static_cast<void*>(this);
    return QAbstractProxyModel::qt_metacast(_clname);
}

int Queue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
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
void Queue::TotalLengthChanged(const quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Queue::ItemCountChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Queue::SummaryTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
