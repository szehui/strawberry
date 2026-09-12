/****************************************************************************
** Meta object code from reading C++ file 'subsonicplaylistrequest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/subsonic/subsonicplaylistrequest.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subsonicplaylistrequest.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SubsonicPlaylistRequest_t {
    uint offsetsAndSizes[38];
    char stringdata0[24];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[10];
    char stringdata5[6];
    char stringdata6[14];
    char stringdata7[9];
    char stringdata8[6];
    char stringdata9[14];
    char stringdata10[23];
    char stringdata11[15];
    char stringdata12[6];
    char stringdata13[27];
    char stringdata14[12];
    char stringdata15[10];
    char stringdata16[6];
    char stringdata17[5];
    char stringdata18[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SubsonicPlaylistRequest_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SubsonicPlaylistRequest_t qt_meta_stringdata_SubsonicPlaylistRequest = {
    {
        QT_MOC_LITERAL(0, 23),  // "SubsonicPlaylistRequest"
        QT_MOC_LITERAL(24, 17),  // "PlaylistsReceived"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 24),  // "SubsonicPlaylistInfoList"
        QT_MOC_LITERAL(68, 9),  // "playlists"
        QT_MOC_LITERAL(78, 5),  // "error"
        QT_MOC_LITERAL(84, 13),  // "SongsReceived"
        QT_MOC_LITERAL(98, 8),  // "SongList"
        QT_MOC_LITERAL(107, 5),  // "songs"
        QT_MOC_LITERAL(113, 13),  // "playlist_name"
        QT_MOC_LITERAL(127, 22),  // "PlaylistsReplyReceived"
        QT_MOC_LITERAL(150, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(165, 5),  // "reply"
        QT_MOC_LITERAL(171, 26),  // "PlaylistSongsReplyReceived"
        QT_MOC_LITERAL(198, 11),  // "playlist_id"
        QT_MOC_LITERAL(210, 9),  // "ParseSong"
        QT_MOC_LITERAL(220, 5),  // "Song&"
        QT_MOC_LITERAL(226, 4),  // "song"
        QT_MOC_LITERAL(231, 11)   // "json_object"
    },
    "SubsonicPlaylistRequest",
    "PlaylistsReceived",
    "",
    "SubsonicPlaylistInfoList",
    "playlists",
    "error",
    "SongsReceived",
    "SongList",
    "songs",
    "playlist_name",
    "PlaylistsReplyReceived",
    "QNetworkReply*",
    "reply",
    "PlaylistSongsReplyReceived",
    "playlist_id",
    "ParseSong",
    "Song&",
    "song",
    "json_object"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SubsonicPlaylistRequest[] = {

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
       1,    2,   44,    2, 0x06,    1 /* Public */,
       6,    3,   49,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   56,    2, 0x08,    8 /* Private */,
      13,    3,   59,    2, 0x08,   10 /* Private */,
      15,    2,   66,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::QString,    8,    9,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString, QMetaType::QString,   12,   14,    9,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QJsonObject,   17,   18,

       0        // eod
};

Q_CONSTINIT const QMetaObject SubsonicPlaylistRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SubsonicBaseRequest::staticMetaObject>(),
    qt_meta_stringdata_SubsonicPlaylistRequest.offsetsAndSizes,
    qt_meta_data_SubsonicPlaylistRequest,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SubsonicPlaylistRequest_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SubsonicPlaylistRequest, std::true_type>,
        // method 'PlaylistsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SubsonicPlaylistInfoList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SongsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'PlaylistsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'PlaylistSongsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ParseSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>
    >,
    nullptr
} };

void SubsonicPlaylistRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubsonicPlaylistRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PlaylistsReceived((*reinterpret_cast< std::add_pointer_t<SubsonicPlaylistInfoList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->SongsReceived((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->PlaylistsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 3: _t->PlaylistSongsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->ParseSong((*reinterpret_cast< std::add_pointer_t<Song&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SubsonicPlaylistRequest::*)(const SubsonicPlaylistInfoList & , const QString & );
            if (_t _q_method = &SubsonicPlaylistRequest::PlaylistsReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SubsonicPlaylistRequest::*)(const SongList & , const QString & , const QString & );
            if (_t _q_method = &SubsonicPlaylistRequest::SongsReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *SubsonicPlaylistRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubsonicPlaylistRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubsonicPlaylistRequest.stringdata0))
        return static_cast<void*>(this);
    return SubsonicBaseRequest::qt_metacast(_clname);
}

int SubsonicPlaylistRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubsonicBaseRequest::qt_metacall(_c, _id, _a);
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
void SubsonicPlaylistRequest::PlaylistsReceived(const SubsonicPlaylistInfoList & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SubsonicPlaylistRequest::SongsReceived(const SongList & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
