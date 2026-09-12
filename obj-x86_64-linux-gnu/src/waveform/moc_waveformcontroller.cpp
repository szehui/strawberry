/****************************************************************************
** Meta object code from reading C++ file 'waveformcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/waveform/waveformcontroller.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waveformcontroller.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_WaveformController_t {
    uint offsetsAndSizes[20];
    char stringdata0[19];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[19];
    char stringdata5[5];
    char stringdata6[5];
    char stringdata7[16];
    char stringdata8[11];
    char stringdata9[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WaveformController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_WaveformController_t qt_meta_stringdata_WaveformController = {
    {
        QT_MOC_LITERAL(0, 18),  // "WaveformController"
        QT_MOC_LITERAL(19, 26),  // "CurrentWaveformDataChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 4),  // "data"
        QT_MOC_LITERAL(52, 18),  // "CurrentSongChanged"
        QT_MOC_LITERAL(71, 4),  // "Song"
        QT_MOC_LITERAL(76, 4),  // "song"
        QT_MOC_LITERAL(81, 15),  // "PlaybackStopped"
        QT_MOC_LITERAL(97, 10),  // "SetEnabled"
        QT_MOC_LITERAL(108, 7)   // "enabled"
    },
    "WaveformController",
    "CurrentWaveformDataChanged",
    "",
    "data",
    "CurrentSongChanged",
    "Song",
    "song",
    "PlaybackStopped",
    "SetEnabled",
    "enabled"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_WaveformController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       1,    0,   47,    2, 0x26,    3 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   48,    2, 0x0a,    4 /* Public */,
       7,    0,   51,    2, 0x0a,    6 /* Public */,
       8,    1,   52,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject WaveformController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WaveformController.offsetsAndSizes,
    qt_meta_data_WaveformController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_WaveformController_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WaveformController, std::true_type>,
        // method 'CurrentWaveformDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'CurrentWaveformDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CurrentSongChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'PlaybackStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>
    >,
    nullptr
} };

void WaveformController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WaveformController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->CurrentWaveformDataChanged((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->CurrentWaveformDataChanged(); break;
        case 2: _t->CurrentSongChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 3: _t->PlaybackStopped(); break;
        case 4: _t->SetEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WaveformController::*)(const QByteArray & );
            if (_t _q_method = &WaveformController::CurrentWaveformDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *WaveformController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaveformController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WaveformController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WaveformController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}

// SIGNAL 0
void WaveformController::CurrentWaveformDataChanged(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
