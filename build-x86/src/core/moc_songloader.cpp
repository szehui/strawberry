/****************************************************************************
** Meta object code from reading C++ file 'songloader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/songloader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songloader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SongLoader_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[23];
    char stringdata5[8];
    char stringdata6[19];
    char stringdata7[16];
    char stringdata8[8];
    char stringdata9[13];
    char stringdata10[12];
    char stringdata11[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SongLoader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SongLoader_t qt_meta_stringdata_SongLoader = {
    {
        QT_MOC_LITERAL(0, 10),  // "SongLoader"
        QT_MOC_LITERAL(11, 19),  // "AudioCDTracksLoaded"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 20),  // "AudioCDTracksUpdated"
        QT_MOC_LITERAL(53, 22),  // "AudioCDLoadingFinished"
        QT_MOC_LITERAL(76, 7),  // "success"
        QT_MOC_LITERAL(84, 18),  // "LoadRemoteFinished"
        QT_MOC_LITERAL(103, 15),  // "ScheduleTimeout"
        QT_MOC_LITERAL(119, 7),  // "Timeout"
        QT_MOC_LITERAL(127, 12),  // "StopTypefind"
        QT_MOC_LITERAL(140, 11),  // "ParserError"
        QT_MOC_LITERAL(152, 5)   // "error"
    },
    "SongLoader",
    "AudioCDTracksLoaded",
    "",
    "AudioCDTracksUpdated",
    "AudioCDLoadingFinished",
    "success",
    "LoadRemoteFinished",
    "ScheduleTimeout",
    "Timeout",
    "StopTypefind",
    "ParserError",
    "error"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SongLoader[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    1,   64,    2, 0x06,    3 /* Public */,
       6,    0,   67,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   68,    2, 0x08,    6 /* Private */,
       8,    0,   69,    2, 0x08,    7 /* Private */,
       9,    0,   70,    2, 0x08,    8 /* Private */,
      10,    1,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject SongLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SongLoader.offsetsAndSizes,
    qt_meta_data_SongLoader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SongLoader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SongLoader, std::true_type>,
        // method 'AudioCDTracksLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AudioCDTracksUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AudioCDLoadingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'LoadRemoteFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScheduleTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StopTypefind'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ParserError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void SongLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AudioCDTracksLoaded(); break;
        case 1: _t->AudioCDTracksUpdated(); break;
        case 2: _t->AudioCDLoadingFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->LoadRemoteFinished(); break;
        case 4: _t->ScheduleTimeout(); break;
        case 5: _t->Timeout(); break;
        case 6: _t->StopTypefind(); break;
        case 7: _t->ParserError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SongLoader::*)();
            if (_t _q_method = &SongLoader::AudioCDTracksLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SongLoader::*)();
            if (_t _q_method = &SongLoader::AudioCDTracksUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SongLoader::*)(const bool );
            if (_t _q_method = &SongLoader::AudioCDLoadingFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SongLoader::*)();
            if (_t _q_method = &SongLoader::LoadRemoteFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *SongLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SongLoader::AudioCDTracksLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SongLoader::AudioCDTracksUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SongLoader::AudioCDLoadingFinished(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SongLoader::LoadRemoteFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
