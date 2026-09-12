/****************************************************************************
** Meta object code from reading C++ file 'groupediconview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/groupediconview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupediconview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GroupedIconView_t {
    uint offsetsAndSizes[24];
    char stringdata0[16];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[20];
    char stringdata5[18];
    char stringdata6[18];
    char stringdata7[12];
    char stringdata8[15];
    char stringdata9[14];
    char stringdata10[12];
    char stringdata11[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GroupedIconView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GroupedIconView_t qt_meta_stringdata_GroupedIconView = {
    {
        QT_MOC_LITERAL(0, 15),  // "GroupedIconView"
        QT_MOC_LITERAL(16, 20),  // "HeaderSpacingChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5),  // "value"
        QT_MOC_LITERAL(44, 19),  // "HeaderIndentChanged"
        QT_MOC_LITERAL(64, 17),  // "ItemIndentChanged"
        QT_MOC_LITERAL(82, 17),  // "HeaderTextChanged"
        QT_MOC_LITERAL(100, 11),  // "LayoutItems"
        QT_MOC_LITERAL(112, 14),  // "header_spacing"
        QT_MOC_LITERAL(127, 13),  // "header_indent"
        QT_MOC_LITERAL(141, 11),  // "item_indent"
        QT_MOC_LITERAL(153, 11)   // "header_text"
    },
    "GroupedIconView",
    "HeaderSpacingChanged",
    "",
    "value",
    "HeaderIndentChanged",
    "ItemIndentChanged",
    "HeaderTextChanged",
    "LayoutItems",
    "header_spacing",
    "header_indent",
    "item_indent",
    "header_text"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GroupedIconView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   57, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    5 /* Public */,
       4,    1,   47,    2, 0x06,    7 /* Public */,
       5,    1,   50,    2, 0x06,    9 /* Public */,
       6,    1,   53,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   56,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00015003, uint(0), 0,
       9, QMetaType::Int, 0x00015003, uint(1), 0,
      10, QMetaType::Int, 0x00015003, uint(2), 0,
      11, QMetaType::QString, 0x00015003, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject GroupedIconView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_GroupedIconView.offsetsAndSizes,
    qt_meta_data_GroupedIconView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GroupedIconView_t,
        // property 'header_spacing'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'header_indent'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'item_indent'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'header_text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GroupedIconView, std::true_type>,
        // method 'HeaderSpacingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'HeaderIndentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ItemIndentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'HeaderTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LayoutItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GroupedIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupedIconView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->HeaderSpacingChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->HeaderIndentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->ItemIndentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->HeaderTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->LayoutItems(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GroupedIconView::*)(const int );
            if (_t _q_method = &GroupedIconView::HeaderSpacingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GroupedIconView::*)(const int );
            if (_t _q_method = &GroupedIconView::HeaderIndentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GroupedIconView::*)(const int );
            if (_t _q_method = &GroupedIconView::ItemIndentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GroupedIconView::*)(const QString & );
            if (_t _q_method = &GroupedIconView::HeaderTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GroupedIconView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->header_spacing(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->header_indent(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->item_indent(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->header_text(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GroupedIconView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_header_spacing(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->set_header_indent(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->set_item_indent(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->set_header_text(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *GroupedIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupedIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupedIconView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int GroupedIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void GroupedIconView::HeaderSpacingChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroupedIconView::HeaderIndentChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GroupedIconView::ItemIndentChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GroupedIconView::HeaderTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
