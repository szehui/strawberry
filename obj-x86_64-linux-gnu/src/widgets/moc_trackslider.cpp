/****************************************************************************
** Meta object code from reading C++ file 'trackslider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/trackslider.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackslider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TrackSlider_t {
    uint offsetsAndSizes[38];
    char stringdata0[12];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[20];
    char stringdata5[12];
    char stringdata6[13];
    char stringdata7[5];
    char stringdata8[9];
    char stringdata9[9];
    char stringdata10[8];
    char stringdata11[6];
    char stringdata12[11];
    char stringdata13[11];
    char stringdata14[9];
    char stringdata15[5];
    char stringdata16[4];
    char stringdata17[18];
    char stringdata18[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TrackSlider_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TrackSlider_t qt_meta_stringdata_TrackSlider = {
    {
        QT_MOC_LITERAL(0, 11),  // "TrackSlider"
        QT_MOC_LITERAL(12, 12),  // "ValueChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 5),  // "value"
        QT_MOC_LITERAL(32, 19),  // "ValueChangedSeconds"
        QT_MOC_LITERAL(52, 11),  // "SeekForward"
        QT_MOC_LITERAL(64, 12),  // "SeekBackward"
        QT_MOC_LITERAL(77, 4),  // "Next"
        QT_MOC_LITERAL(82, 8),  // "Previous"
        QT_MOC_LITERAL(91, 8),  // "SetValue"
        QT_MOC_LITERAL(100, 7),  // "elapsed"
        QT_MOC_LITERAL(108, 5),  // "total"
        QT_MOC_LITERAL(114, 10),  // "SetStopped"
        QT_MOC_LITERAL(125, 10),  // "SetCanSeek"
        QT_MOC_LITERAL(136, 8),  // "can_seek"
        QT_MOC_LITERAL(145, 4),  // "Seek"
        QT_MOC_LITERAL(150, 3),  // "gap"
        QT_MOC_LITERAL(154, 17),  // "ValueMaybeChanged"
        QT_MOC_LITERAL(172, 17)   // "ToggleTimeDisplay"
    },
    "TrackSlider",
    "ValueChanged",
    "",
    "value",
    "ValueChangedSeconds",
    "SeekForward",
    "SeekBackward",
    "Next",
    "Previous",
    "SetValue",
    "elapsed",
    "total",
    "SetStopped",
    "SetCanSeek",
    "can_seek",
    "Seek",
    "gap",
    "ValueMaybeChanged",
    "ToggleTimeDisplay"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TrackSlider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       4,    1,   89,    2, 0x06,    3 /* Public */,
       5,    0,   92,    2, 0x06,    5 /* Public */,
       6,    0,   93,    2, 0x06,    6 /* Public */,
       7,    0,   94,    2, 0x06,    7 /* Public */,
       8,    0,   95,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   96,    2, 0x0a,    9 /* Public */,
      12,    0,  101,    2, 0x0a,   12 /* Public */,
      13,    1,  102,    2, 0x0a,   13 /* Public */,
      15,    1,  105,    2, 0x0a,   15 /* Public */,
      17,    1,  108,    2, 0x08,   17 /* Private */,
      18,    0,  111,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TrackSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TrackSlider.offsetsAndSizes,
    qt_meta_data_TrackSlider,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TrackSlider_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TrackSlider, std::true_type>,
        // method 'ValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ValueChangedSeconds'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        // method 'SeekForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SeekBackward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Previous'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SetStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetCanSeek'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'Seek'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ValueMaybeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ToggleTimeDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TrackSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->ValueChangedSeconds((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 2: _t->SeekForward(); break;
        case 3: _t->SeekBackward(); break;
        case 4: _t->Next(); break;
        case 5: _t->Previous(); break;
        case 6: _t->SetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->SetStopped(); break;
        case 8: _t->SetCanSeek((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->Seek((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->ValueMaybeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->ToggleTimeDisplay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackSlider::*)(const int );
            if (_t _q_method = &TrackSlider::ValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)(const quint64 );
            if (_t _q_method = &TrackSlider::ValueChangedSeconds; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)();
            if (_t _q_method = &TrackSlider::SeekForward; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)();
            if (_t _q_method = &TrackSlider::SeekBackward; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)();
            if (_t _q_method = &TrackSlider::Next; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)();
            if (_t _q_method = &TrackSlider::Previous; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *TrackSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackSlider.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TrackSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TrackSlider::ValueChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrackSlider::ValueChangedSeconds(const quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TrackSlider::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TrackSlider::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TrackSlider::Next()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TrackSlider::Previous()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
