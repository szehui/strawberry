/****************************************************************************
** Meta object code from reading C++ file 'equalizer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/equalizer/equalizer.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'equalizer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Equalizer_t {
    uint offsetsAndSizes[44];
    char stringdata0[10];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[21];
    char stringdata5[8];
    char stringdata6[24];
    char stringdata7[27];
    char stringdata8[7];
    char stringdata9[11];
    char stringdata10[11];
    char stringdata11[33];
    char stringdata12[27];
    char stringdata13[6];
    char stringdata14[28];
    char stringdata15[31];
    char stringdata16[14];
    char stringdata17[5];
    char stringdata18[6];
    char stringdata19[11];
    char stringdata20[10];
    char stringdata21[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Equalizer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Equalizer_t qt_meta_stringdata_Equalizer = {
    {
        QT_MOC_LITERAL(0, 9),  // "Equalizer"
        QT_MOC_LITERAL(10, 28),  // "StereoBalancerEnabledChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 7),  // "enabled"
        QT_MOC_LITERAL(48, 20),  // "StereoBalanceChanged"
        QT_MOC_LITERAL(69, 7),  // "balance"
        QT_MOC_LITERAL(77, 23),  // "EqualizerEnabledChanged"
        QT_MOC_LITERAL(101, 26),  // "EqualizerParametersChanged"
        QT_MOC_LITERAL(128, 6),  // "preamp"
        QT_MOC_LITERAL(135, 10),  // "QList<int>"
        QT_MOC_LITERAL(146, 10),  // "band_gains"
        QT_MOC_LITERAL(157, 32),  // "StereoBalancerEnabledChangedSlot"
        QT_MOC_LITERAL(190, 26),  // "StereoBalanceSliderChanged"
        QT_MOC_LITERAL(217, 5),  // "value"
        QT_MOC_LITERAL(223, 27),  // "EqualizerEnabledChangedSlot"
        QT_MOC_LITERAL(251, 30),  // "EqualizerParametersChangedSlot"
        QT_MOC_LITERAL(282, 13),  // "PresetChanged"
        QT_MOC_LITERAL(296, 4),  // "name"
        QT_MOC_LITERAL(301, 5),  // "index"
        QT_MOC_LITERAL(307, 10),  // "SavePreset"
        QT_MOC_LITERAL(318, 9),  // "DelPreset"
        QT_MOC_LITERAL(328, 4)   // "Save"
    },
    "Equalizer",
    "StereoBalancerEnabledChanged",
    "",
    "enabled",
    "StereoBalanceChanged",
    "balance",
    "EqualizerEnabledChanged",
    "EqualizerParametersChanged",
    "preamp",
    "QList<int>",
    "band_gains",
    "StereoBalancerEnabledChangedSlot",
    "StereoBalanceSliderChanged",
    "value",
    "EqualizerEnabledChangedSlot",
    "EqualizerParametersChangedSlot",
    "PresetChanged",
    "name",
    "index",
    "SavePreset",
    "DelPreset",
    "Save"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Equalizer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,
       4,    1,   95,    2, 0x06,    3 /* Public */,
       6,    1,   98,    2, 0x06,    5 /* Public */,
       7,    2,  101,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,  106,    2, 0x08,   10 /* Private */,
      12,    1,  109,    2, 0x08,   12 /* Private */,
      14,    1,  112,    2, 0x08,   14 /* Private */,
      15,    0,  115,    2, 0x08,   16 /* Private */,
      16,    1,  116,    2, 0x08,   17 /* Private */,
      16,    1,  119,    2, 0x08,   19 /* Private */,
      19,    0,  122,    2, 0x08,   21 /* Private */,
      20,    0,  123,    2, 0x08,   22 /* Private */,
      21,    0,  124,    2, 0x08,   23 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Equalizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Equalizer.offsetsAndSizes,
    qt_meta_data_Equalizer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Equalizer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Equalizer, std::true_type>,
        // method 'StereoBalancerEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'StereoBalanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'EqualizerEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'EqualizerParametersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'StereoBalancerEnabledChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'StereoBalanceSliderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'EqualizerEnabledChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'EqualizerParametersChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PresetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'PresetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SavePreset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DelPreset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Equalizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Equalizer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StereoBalancerEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->StereoBalanceChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->EqualizerEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->EqualizerParametersChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[2]))); break;
        case 4: _t->StereoBalancerEnabledChangedSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->StereoBalanceSliderChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->EqualizerEnabledChangedSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->EqualizerParametersChangedSlot(); break;
        case 8: _t->PresetChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->PresetChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->SavePreset(); break;
        case 11: _t->DelPreset(); break;
        case 12: _t->Save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Equalizer::*)(const bool );
            if (_t _q_method = &Equalizer::StereoBalancerEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Equalizer::*)(const float );
            if (_t _q_method = &Equalizer::StereoBalanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Equalizer::*)(const bool );
            if (_t _q_method = &Equalizer::EqualizerEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Equalizer::*)(const int , const QList<int> & );
            if (_t _q_method = &Equalizer::EqualizerParametersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Equalizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Equalizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Equalizer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Equalizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Equalizer::StereoBalancerEnabledChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Equalizer::StereoBalanceChanged(const float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Equalizer::EqualizerEnabledChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Equalizer::EqualizerParametersChanged(const int _t1, const QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
