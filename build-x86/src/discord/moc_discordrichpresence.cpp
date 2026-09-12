/****************************************************************************
** Meta object code from reading C++ file 'discordrichpresence.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/discord/discordrichpresence.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discordrichpresence.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DiscordRichPresence_t {
    uint offsetsAndSizes[20];
    char stringdata0[20];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[6];
    char stringdata5[19];
    char stringdata6[5];
    char stringdata7[5];
    char stringdata8[7];
    char stringdata9[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DiscordRichPresence_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DiscordRichPresence_t qt_meta_stringdata_DiscordRichPresence = {
    {
        QT_MOC_LITERAL(0, 19),  // "DiscordRichPresence"
        QT_MOC_LITERAL(20, 18),  // "EngineStateChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 17),  // "EngineBase::State"
        QT_MOC_LITERAL(58, 5),  // "state"
        QT_MOC_LITERAL(64, 18),  // "CurrentSongChanged"
        QT_MOC_LITERAL(83, 4),  // "Song"
        QT_MOC_LITERAL(88, 4),  // "song"
        QT_MOC_LITERAL(93, 6),  // "Seeked"
        QT_MOC_LITERAL(100, 17)   // "seek_microseconds"
    },
    "DiscordRichPresence",
    "EngineStateChanged",
    "",
    "EngineBase::State",
    "state",
    "CurrentSongChanged",
    "Song",
    "song",
    "Seeked",
    "seek_microseconds"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DiscordRichPresence[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       5,    1,   35,    2, 0x08,    3 /* Private */,
       8,    1,   38,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::LongLong,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject DiscordRichPresence::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DiscordRichPresence.offsetsAndSizes,
    qt_meta_data_DiscordRichPresence,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DiscordRichPresence_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DiscordRichPresence, std::true_type>,
        // method 'EngineStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EngineBase::State, std::false_type>,
        // method 'CurrentSongChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'Seeked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>
    >,
    nullptr
} };

void DiscordRichPresence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscordRichPresence *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->EngineStateChanged((*reinterpret_cast< std::add_pointer_t<EngineBase::State>>(_a[1]))); break;
        case 1: _t->CurrentSongChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 2: _t->Seeked((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DiscordRichPresence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiscordRichPresence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiscordRichPresence.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DiscordRichPresence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
