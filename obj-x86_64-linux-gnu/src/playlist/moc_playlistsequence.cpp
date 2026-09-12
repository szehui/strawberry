/****************************************************************************
** Meta object code from reading C++ file 'playlistsequence.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistsequence.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistsequence.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlaylistSequence_t {
    uint offsetsAndSizes[30];
    char stringdata0[17];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[5];
    char stringdata5[19];
    char stringdata6[30];
    char stringdata7[14];
    char stringdata8[15];
    char stringdata9[17];
    char stringdata10[16];
    char stringdata11[22];
    char stringdata12[9];
    char stringdata13[7];
    char stringdata14[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaylistSequence_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaylistSequence_t qt_meta_stringdata_PlaylistSequence = {
    {
        QT_MOC_LITERAL(0, 16),  // "PlaylistSequence"
        QT_MOC_LITERAL(17, 17),  // "RepeatModeChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 28),  // "PlaylistSequence::RepeatMode"
        QT_MOC_LITERAL(65, 4),  // "mode"
        QT_MOC_LITERAL(70, 18),  // "ShuffleModeChanged"
        QT_MOC_LITERAL(89, 29),  // "PlaylistSequence::ShuffleMode"
        QT_MOC_LITERAL(119, 13),  // "SetRepeatMode"
        QT_MOC_LITERAL(133, 14),  // "SetShuffleMode"
        QT_MOC_LITERAL(148, 16),  // "CycleShuffleMode"
        QT_MOC_LITERAL(165, 15),  // "CycleRepeatMode"
        QT_MOC_LITERAL(181, 21),  // "RepeatActionTriggered"
        QT_MOC_LITERAL(203, 8),  // "QAction*"
        QT_MOC_LITERAL(212, 6),  // "action"
        QT_MOC_LITERAL(219, 22)   // "ShuffleActionTriggered"
    },
    "PlaylistSequence",
    "RepeatModeChanged",
    "",
    "PlaylistSequence::RepeatMode",
    "mode",
    "ShuffleModeChanged",
    "PlaylistSequence::ShuffleMode",
    "SetRepeatMode",
    "SetShuffleMode",
    "CycleShuffleMode",
    "CycleRepeatMode",
    "RepeatActionTriggered",
    "QAction*",
    "action",
    "ShuffleActionTriggered"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaylistSequence[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    1,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    2, 0x0a,    5 /* Public */,
       8,    1,   71,    2, 0x0a,    7 /* Public */,
       9,    0,   74,    2, 0x0a,    9 /* Public */,
      10,    0,   75,    2, 0x0a,   10 /* Public */,
      11,    1,   76,    2, 0x08,   11 /* Private */,
      14,    1,   79,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistSequence::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PlaylistSequence.offsetsAndSizes,
    qt_meta_data_PlaylistSequence,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaylistSequence_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistSequence, std::true_type>,
        // method 'RepeatModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSequence::RepeatMode, std::false_type>,
        // method 'ShuffleModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSequence::ShuffleMode, std::false_type>,
        // method 'SetRepeatMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSequence::RepeatMode, std::false_type>,
        // method 'SetShuffleMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSequence::ShuffleMode, std::false_type>,
        // method 'CycleShuffleMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CycleRepeatMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RepeatActionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'ShuffleActionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>
    >,
    nullptr
} };

void PlaylistSequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistSequence *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RepeatModeChanged((*reinterpret_cast< std::add_pointer_t<PlaylistSequence::RepeatMode>>(_a[1]))); break;
        case 1: _t->ShuffleModeChanged((*reinterpret_cast< std::add_pointer_t<PlaylistSequence::ShuffleMode>>(_a[1]))); break;
        case 2: _t->SetRepeatMode((*reinterpret_cast< std::add_pointer_t<PlaylistSequence::RepeatMode>>(_a[1]))); break;
        case 3: _t->SetShuffleMode((*reinterpret_cast< std::add_pointer_t<PlaylistSequence::ShuffleMode>>(_a[1]))); break;
        case 4: _t->CycleShuffleMode(); break;
        case 5: _t->CycleRepeatMode(); break;
        case 6: _t->RepeatActionTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 7: _t->ShuffleActionTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaylistSequence::*)(const PlaylistSequence::RepeatMode );
            if (_t _q_method = &PlaylistSequence::RepeatModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaylistSequence::*)(const PlaylistSequence::ShuffleMode );
            if (_t _q_method = &PlaylistSequence::ShuffleModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *PlaylistSequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistSequence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistSequence.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlaylistSequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
    return _id;
}

// SIGNAL 0
void PlaylistSequence::RepeatModeChanged(const PlaylistSequence::RepeatMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistSequence::ShuffleModeChanged(const PlaylistSequence::ShuffleMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
