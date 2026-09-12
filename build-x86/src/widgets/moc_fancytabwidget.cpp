/****************************************************************************
** Meta object code from reading C++ file 'fancytabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/fancytabwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fancytabwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FancyTabWidget_t {
    uint offsetsAndSizes[22];
    char stringdata0[15];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[5];
    char stringdata5[18];
    char stringdata6[4];
    char stringdata7[8];
    char stringdata8[16];
    char stringdata9[21];
    char stringdata10[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FancyTabWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FancyTabWidget_t qt_meta_stringdata_FancyTabWidget = {
    {
        QT_MOC_LITERAL(0, 14),  // "FancyTabWidget"
        QT_MOC_LITERAL(15, 11),  // "ModeChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 20),  // "FancyTabWidget::Mode"
        QT_MOC_LITERAL(49, 4),  // "mode"
        QT_MOC_LITERAL(54, 17),  // "CurrentTabChanged"
        QT_MOC_LITERAL(72, 3),  // "idx"
        QT_MOC_LITERAL(76, 7),  // "SetMode"
        QT_MOC_LITERAL(84, 15),  // "SetCurrentIndex"
        QT_MOC_LITERAL(100, 20),  // "TabBarUpdateGeometry"
        QT_MOC_LITERAL(121, 21)   // "CurrentTabChangedSlot"
    },
    "FancyTabWidget",
    "ModeChanged",
    "",
    "FancyTabWidget::Mode",
    "mode",
    "CurrentTabChanged",
    "idx",
    "SetMode",
    "SetCurrentIndex",
    "TabBarUpdateGeometry",
    "CurrentTabChangedSlot"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FancyTabWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       5,    1,   53,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   56,    2, 0x0a,    5 /* Public */,
       8,    1,   59,    2, 0x0a,    7 /* Public */,
       9,    0,   62,    2, 0x08,    9 /* Private */,
      10,    1,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject FancyTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_FancyTabWidget.offsetsAndSizes,
    qt_meta_data_FancyTabWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FancyTabWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FancyTabWidget, std::true_type>,
        // method 'ModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const FancyTabWidget::Mode, std::false_type>,
        // method 'CurrentTabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SetMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const FancyTabWidget::Mode, std::false_type>,
        // method 'SetCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'TabBarUpdateGeometry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CurrentTabChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void FancyTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FancyTabWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ModeChanged((*reinterpret_cast< std::add_pointer_t<FancyTabWidget::Mode>>(_a[1]))); break;
        case 1: _t->CurrentTabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->SetMode((*reinterpret_cast< std::add_pointer_t<FancyTabWidget::Mode>>(_a[1]))); break;
        case 3: _t->SetCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->TabBarUpdateGeometry(); break;
        case 5: _t->CurrentTabChangedSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FancyTabWidget::*)(const FancyTabWidget::Mode );
            if (_t _q_method = &FancyTabWidget::ModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FancyTabWidget::*)(const int );
            if (_t _q_method = &FancyTabWidget::CurrentTabChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *FancyTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FancyTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FancyTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int FancyTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FancyTabWidget::ModeChanged(const FancyTabWidget::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FancyTabWidget::CurrentTabChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
