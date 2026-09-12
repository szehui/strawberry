/****************************************************************************
** Meta object code from reading C++ file 'songloaderinserter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/songloaderinserter.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songloaderinserter.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SongLoaderInserter_t {
    uint offsetsAndSizes[28];
    char stringdata0[19];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[16];
    char stringdata5[22];
    char stringdata6[9];
    char stringdata7[6];
    char stringdata8[21];
    char stringdata9[24];
    char stringdata10[25];
    char stringdata11[27];
    char stringdata12[8];
    char stringdata13[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SongLoaderInserter_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SongLoaderInserter_t qt_meta_stringdata_SongLoaderInserter = {
    {
        QT_MOC_LITERAL(0, 18),  // "SongLoaderInserter"
        QT_MOC_LITERAL(19, 5),  // "Error"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 7),  // "message"
        QT_MOC_LITERAL(34, 15),  // "PreloadFinished"
        QT_MOC_LITERAL(50, 21),  // "EffectiveLoadFinished"
        QT_MOC_LITERAL(72, 8),  // "SongList"
        QT_MOC_LITERAL(81, 5),  // "songs"
        QT_MOC_LITERAL(87, 20),  // "DestinationDestroyed"
        QT_MOC_LITERAL(108, 23),  // "AudioCDTracksLoadedSlot"
        QT_MOC_LITERAL(132, 24),  // "AudioCDTracksUpdatedSlot"
        QT_MOC_LITERAL(157, 26),  // "AudioCDLoadingFinishedSlot"
        QT_MOC_LITERAL(184, 7),  // "success"
        QT_MOC_LITERAL(192, 11)   // "InsertSongs"
    },
    "SongLoaderInserter",
    "Error",
    "",
    "message",
    "PreloadFinished",
    "EffectiveLoadFinished",
    "SongList",
    "songs",
    "DestinationDestroyed",
    "AudioCDTracksLoadedSlot",
    "AudioCDTracksUpdatedSlot",
    "AudioCDLoadingFinishedSlot",
    "success",
    "InsertSongs"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SongLoaderInserter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    0,   65,    2, 0x06,    3 /* Public */,
       5,    1,   66,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   69,    2, 0x08,    6 /* Private */,
       9,    0,   70,    2, 0x08,    7 /* Private */,
      10,    0,   71,    2, 0x08,    8 /* Private */,
      11,    1,   72,    2, 0x08,    9 /* Private */,
      13,    0,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SongLoaderInserter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SongLoaderInserter.offsetsAndSizes,
    qt_meta_data_SongLoaderInserter,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SongLoaderInserter_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SongLoaderInserter, std::true_type>,
        // method 'Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'PreloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EffectiveLoadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'DestinationDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AudioCDTracksLoadedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AudioCDTracksUpdatedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AudioCDLoadingFinishedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'InsertSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SongLoaderInserter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongLoaderInserter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->PreloadFinished(); break;
        case 2: _t->EffectiveLoadFinished((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 3: _t->DestinationDestroyed(); break;
        case 4: _t->AudioCDTracksLoadedSlot(); break;
        case 5: _t->AudioCDTracksUpdatedSlot(); break;
        case 6: _t->AudioCDLoadingFinishedSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->InsertSongs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SongLoaderInserter::*)(const QString & );
            if (_t _q_method = &SongLoaderInserter::Error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SongLoaderInserter::*)();
            if (_t _q_method = &SongLoaderInserter::PreloadFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SongLoaderInserter::*)(const SongList & );
            if (_t _q_method = &SongLoaderInserter::EffectiveLoadFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *SongLoaderInserter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongLoaderInserter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongLoaderInserter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongLoaderInserter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SongLoaderInserter::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SongLoaderInserter::PreloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SongLoaderInserter::EffectiveLoadFinished(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
