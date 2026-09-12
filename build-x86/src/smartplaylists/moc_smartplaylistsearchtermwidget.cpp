/****************************************************************************
** Meta object code from reading C++ file 'smartplaylistsearchtermwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/smartplaylists/smartplaylistsearchtermwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartplaylistsearchtermwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SmartPlaylistSearchTermWidget_t {
    uint offsetsAndSizes[28];
    char stringdata0[30];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[22];
    char stringdata5[8];
    char stringdata6[8];
    char stringdata7[13];
    char stringdata8[6];
    char stringdata9[10];
    char stringdata10[4];
    char stringdata11[21];
    char stringdata12[5];
    char stringdata13[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SmartPlaylistSearchTermWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SmartPlaylistSearchTermWidget_t qt_meta_stringdata_SmartPlaylistSearchTermWidget = {
    {
        QT_MOC_LITERAL(0, 29),  // "SmartPlaylistSearchTermWidget"
        QT_MOC_LITERAL(30, 7),  // "Clicked"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 13),  // "RemoveClicked"
        QT_MOC_LITERAL(53, 21),  // "OverlayOpacityChanged"
        QT_MOC_LITERAL(75, 7),  // "opacity"
        QT_MOC_LITERAL(83, 7),  // "Changed"
        QT_MOC_LITERAL(91, 12),  // "FieldChanged"
        QT_MOC_LITERAL(104, 5),  // "index"
        QT_MOC_LITERAL(110, 9),  // "OpChanged"
        QT_MOC_LITERAL(120, 3),  // "idx"
        QT_MOC_LITERAL(124, 20),  // "RelativeValueChanged"
        QT_MOC_LITERAL(145, 4),  // "Grab"
        QT_MOC_LITERAL(150, 15)   // "overlay_opacity"
    },
    "SmartPlaylistSearchTermWidget",
    "Clicked",
    "",
    "RemoveClicked",
    "OverlayOpacityChanged",
    "opacity",
    "Changed",
    "FieldChanged",
    "index",
    "OpChanged",
    "idx",
    "RelativeValueChanged",
    "Grab",
    "overlay_opacity"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SmartPlaylistSearchTermWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    2 /* Public */,
       3,    0,   63,    2, 0x06,    3 /* Public */,
       4,    1,   64,    2, 0x06,    4 /* Public */,
       6,    0,   67,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    2, 0x08,    7 /* Private */,
       9,    1,   71,    2, 0x08,    9 /* Private */,
      11,    0,   74,    2, 0x08,   11 /* Private */,
      12,    0,   75,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Float, 0x00015003, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SmartPlaylistSearchTermWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SmartPlaylistSearchTermWidget.offsetsAndSizes,
    qt_meta_data_SmartPlaylistSearchTermWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SmartPlaylistSearchTermWidget_t,
        // property 'overlay_opacity'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SmartPlaylistSearchTermWidget, std::true_type>,
        // method 'Clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OverlayOpacityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FieldChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'OpChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'RelativeValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Grab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SmartPlaylistSearchTermWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SmartPlaylistSearchTermWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Clicked(); break;
        case 1: _t->RemoveClicked(); break;
        case 2: _t->OverlayOpacityChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->Changed(); break;
        case 4: _t->FieldChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->OpChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->RelativeValueChanged(); break;
        case 7: _t->Grab(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SmartPlaylistSearchTermWidget::*)();
            if (_t _q_method = &SmartPlaylistSearchTermWidget::Clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SmartPlaylistSearchTermWidget::*)();
            if (_t _q_method = &SmartPlaylistSearchTermWidget::RemoveClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SmartPlaylistSearchTermWidget::*)(const float );
            if (_t _q_method = &SmartPlaylistSearchTermWidget::OverlayOpacityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SmartPlaylistSearchTermWidget::*)();
            if (_t _q_method = &SmartPlaylistSearchTermWidget::Changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SmartPlaylistSearchTermWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->overlay_opacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SmartPlaylistSearchTermWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_overlay_opacity(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *SmartPlaylistSearchTermWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartPlaylistSearchTermWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SmartPlaylistSearchTermWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SmartPlaylistSearchTermWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SmartPlaylistSearchTermWidget::Clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SmartPlaylistSearchTermWidget::RemoveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SmartPlaylistSearchTermWidget::OverlayOpacityChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SmartPlaylistSearchTermWidget::Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
