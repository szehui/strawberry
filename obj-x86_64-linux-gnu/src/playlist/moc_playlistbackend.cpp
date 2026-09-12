/****************************************************************************
** Meta object code from reading C++ file 'playlistbackend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistbackend.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistbackend.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlaylistBackend_t {
    uint offsetsAndSizes[40];
    char stringdata0[16];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[13];
    char stringdata5[12];
    char stringdata6[25];
    char stringdata7[6];
    char stringdata8[12];
    char stringdata9[21];
    char stringdata10[8];
    char stringdata11[18];
    char stringdata12[23];
    char stringdata13[20];
    char stringdata14[9];
    char stringdata15[27];
    char stringdata16[17];
    char stringdata17[29];
    char stringdata18[19];
    char stringdata19[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaylistBackend_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaylistBackend_t qt_meta_stringdata_PlaylistBackend = {
    {
        QT_MOC_LITERAL(0, 15),  // "PlaylistBackend"
        QT_MOC_LITERAL(16, 12),  // "ExitFinished"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 4),  // "Exit"
        QT_MOC_LITERAL(35, 12),  // "SavePlaylist"
        QT_MOC_LITERAL(48, 11),  // "playlist_id"
        QT_MOC_LITERAL(60, 24),  // "PlaylistItemSaveDataList"
        QT_MOC_LITERAL(85, 5),  // "items"
        QT_MOC_LITERAL(91, 11),  // "last_played"
        QT_MOC_LITERAL(103, 20),  // "PlaylistGeneratorPtr"
        QT_MOC_LITERAL(124, 7),  // "dynamic"
        QT_MOC_LITERAL(132, 17),  // "SavePlaylistItems"
        QT_MOC_LITERAL(150, 22),  // "SavePlaylistLastPlayed"
        QT_MOC_LITERAL(173, 19),  // "SharedPtr<Database>"
        QT_MOC_LITERAL(193, 8),  // "database"
        QT_MOC_LITERAL(202, 26),  // "SharedPtr<TagReaderClient>"
        QT_MOC_LITERAL(229, 16),  // "tagreader_client"
        QT_MOC_LITERAL(246, 28),  // "SharedPtr<CollectionBackend>"
        QT_MOC_LITERAL(275, 18),  // "collection_backend"
        QT_MOC_LITERAL(294, 6)   // "parent"
    },
    "PlaylistBackend",
    "ExitFinished",
    "",
    "Exit",
    "SavePlaylist",
    "playlist_id",
    "PlaylistItemSaveDataList",
    "items",
    "last_played",
    "PlaylistGeneratorPtr",
    "dynamic",
    "SavePlaylistItems",
    "SavePlaylistLastPlayed",
    "SharedPtr<Database>",
    "database",
    "SharedPtr<TagReaderClient>",
    "tagreader_client",
    "SharedPtr<CollectionBackend>",
    "collection_backend",
    "parent"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaylistBackend[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   81, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    4,   46,    2, 0x0a,    3 /* Public */,
      11,    2,   55,    2, 0x0a,    8 /* Public */,
      12,    2,   60,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 9,    5,    7,    8,   10,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    8,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 17, QMetaType::QObjectStar,   14,   16,   18,   19,
    0x80000000 | 2, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 17,   14,   16,   18,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    4,   65,    2, 0x0e,   14 /* Public */,
       0,    3,   74,    2, 0x2e,   18 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlaylistBackend.offsetsAndSizes,
    qt_meta_data_PlaylistBackend,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaylistBackend_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistBackend, std::true_type>,
        // method 'ExitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SavePlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistItemSaveDataList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<PlaylistGeneratorPtr, std::false_type>,
        // method 'SavePlaylistItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlaylistItemSaveDataList &, std::false_type>,
        // method 'SavePlaylistLastPlayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // constructor 'PlaylistBackend'
        QtPrivate::TypeAndForceComplete<const SharedPtr<Database>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<TagReaderClient>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<CollectionBackend>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'PlaylistBackend'
        QtPrivate::TypeAndForceComplete<const SharedPtr<Database>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<TagReaderClient>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharedPtr<CollectionBackend>, std::false_type>
    >,
    nullptr
} };

void PlaylistBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { PlaylistBackend *_r = new PlaylistBackend((*reinterpret_cast< std::add_pointer_t<SharedPtr<Database>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TagReaderClient>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<CollectionBackend>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { PlaylistBackend *_r = new PlaylistBackend((*reinterpret_cast< std::add_pointer_t<SharedPtr<Database>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<TagReaderClient>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<SharedPtr<CollectionBackend>>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ExitFinished(); break;
        case 1: _t->Exit(); break;
        case 2: _t->SavePlaylist((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<PlaylistItemSaveDataList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<PlaylistGeneratorPtr>>(_a[4]))); break;
        case 3: _t->SavePlaylistItems((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<PlaylistItemSaveDataList>>(_a[2]))); break;
        case 4: _t->SavePlaylistLastPlayed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlaylistItemSaveDataList >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PlaylistItemSaveDataList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaylistBackend::*)();
            if (_t _q_method = &PlaylistBackend::ExitFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PlaylistBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistBackend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlaylistBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PlaylistBackend::ExitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
