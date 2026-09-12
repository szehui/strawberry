/****************************************************************************
** Meta object code from reading C++ file 'osdbase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/osd/osdbase.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osdbase.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_OSDBase_t {
    uint offsetsAndSizes[56];
    char stringdata0[8];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[7];
    char stringdata7[8];
    char stringdata8[8];
    char stringdata9[16];
    char stringdata10[5];
    char stringdata11[17];
    char stringdata12[14];
    char stringdata13[6];
    char stringdata14[18];
    char stringdata15[29];
    char stringdata16[5];
    char stringdata17[19];
    char stringdata18[30];
    char stringdata19[18];
    char stringdata20[12];
    char stringdata21[18];
    char stringdata22[5];
    char stringdata23[6];
    char stringdata24[6];
    char stringdata25[17];
    char stringdata26[10];
    char stringdata27[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_OSDBase_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_OSDBase_t qt_meta_stringdata_OSDBase = {
    {
        QT_MOC_LITERAL(0, 7),  // "OSDBase"
        QT_MOC_LITERAL(8, 14),  // "ReloadSettings"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 11),  // "SongChanged"
        QT_MOC_LITERAL(36, 4),  // "Song"
        QT_MOC_LITERAL(41, 4),  // "song"
        QT_MOC_LITERAL(46, 6),  // "Paused"
        QT_MOC_LITERAL(53, 7),  // "Resumed"
        QT_MOC_LITERAL(61, 7),  // "Stopped"
        QT_MOC_LITERAL(69, 15),  // "StopAfterToggle"
        QT_MOC_LITERAL(85, 4),  // "stop"
        QT_MOC_LITERAL(90, 16),  // "PlaylistFinished"
        QT_MOC_LITERAL(107, 13),  // "VolumeChanged"
        QT_MOC_LITERAL(121, 5),  // "value"
        QT_MOC_LITERAL(127, 17),  // "RepeatModeChanged"
        QT_MOC_LITERAL(145, 28),  // "PlaylistSequence::RepeatMode"
        QT_MOC_LITERAL(174, 4),  // "mode"
        QT_MOC_LITERAL(179, 18),  // "ShuffleModeChanged"
        QT_MOC_LITERAL(198, 29),  // "PlaylistSequence::ShuffleMode"
        QT_MOC_LITERAL(228, 17),  // "ReshowCurrentSong"
        QT_MOC_LITERAL(246, 11),  // "ShowPreview"
        QT_MOC_LITERAL(258, 17),  // "OSDSettings::Type"
        QT_MOC_LITERAL(276, 4),  // "type"
        QT_MOC_LITERAL(281, 5),  // "line1"
        QT_MOC_LITERAL(287, 5),  // "line2"
        QT_MOC_LITERAL(293, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(310, 9),  // "cover_url"
        QT_MOC_LITERAL(320, 5)   // "image"
    },
    "OSDBase",
    "ReloadSettings",
    "",
    "SongChanged",
    "Song",
    "song",
    "Paused",
    "Resumed",
    "Stopped",
    "StopAfterToggle",
    "stop",
    "PlaylistFinished",
    "VolumeChanged",
    "value",
    "RepeatModeChanged",
    "PlaylistSequence::RepeatMode",
    "mode",
    "ShuffleModeChanged",
    "PlaylistSequence::ShuffleMode",
    "ReshowCurrentSong",
    "ShowPreview",
    "OSDSettings::Type",
    "type",
    "line1",
    "line2",
    "AlbumCoverLoaded",
    "cover_url",
    "image"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_OSDBase[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x0a,    1 /* Public */,
       3,    1,   93,    2, 0x0a,    2 /* Public */,
       6,    0,   96,    2, 0x0a,    4 /* Public */,
       7,    0,   97,    2, 0x0a,    5 /* Public */,
       8,    0,   98,    2, 0x0a,    6 /* Public */,
       9,    1,   99,    2, 0x0a,    7 /* Public */,
      11,    0,  102,    2, 0x0a,    9 /* Public */,
      12,    1,  103,    2, 0x0a,   10 /* Public */,
      14,    1,  106,    2, 0x0a,   12 /* Public */,
      17,    1,  109,    2, 0x0a,   14 /* Public */,
      19,    0,  112,    2, 0x0a,   16 /* Public */,
      20,    4,  113,    2, 0x0a,   17 /* Public */,
      25,    3,  122,    2, 0x0a,   22 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21, QMetaType::QString, QMetaType::QString, 0x80000000 | 4,   22,   23,   24,    5,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QUrl, QMetaType::QImage,    5,   26,   27,

       0        // eod
};

Q_CONSTINIT const QMetaObject OSDBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OSDBase.offsetsAndSizes,
    qt_meta_data_OSDBase,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_OSDBase_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OSDBase, std::true_type>,
        // method 'ReloadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SongChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'Paused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Resumed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Stopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StopAfterToggle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'PlaylistFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'VolumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        // method 'RepeatModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSequence::RepeatMode, std::false_type>,
        // method 'ShuffleModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistSequence::ShuffleMode, std::false_type>,
        // method 'ReshowCurrentSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OSDSettings::Type, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>
    >,
    nullptr
} };

void OSDBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OSDBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->SongChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 2: _t->Paused(); break;
        case 3: _t->Resumed(); break;
        case 4: _t->Stopped(); break;
        case 5: _t->StopAfterToggle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->PlaylistFinished(); break;
        case 7: _t->VolumeChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 8: _t->RepeatModeChanged((*reinterpret_cast< std::add_pointer_t<PlaylistSequence::RepeatMode>>(_a[1]))); break;
        case 9: _t->ShuffleModeChanged((*reinterpret_cast< std::add_pointer_t<PlaylistSequence::ShuffleMode>>(_a[1]))); break;
        case 10: _t->ReshowCurrentSong(); break;
        case 11: _t->ShowPreview((*reinterpret_cast< std::add_pointer_t<OSDSettings::Type>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Song>>(_a[4]))); break;
        case 12: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *OSDBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSDBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSDBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OSDBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
