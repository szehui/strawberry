/****************************************************************************
** Meta object code from reading C++ file 'spotifymetadatarequest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/spotify/spotifymetadatarequest.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spotifymetadatarequest.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SpotifyMetadataRequest_t {
    uint offsetsAndSizes[24];
    char stringdata0[23];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[16];
    char stringdata7[6];
    char stringdata8[22];
    char stringdata9[15];
    char stringdata10[6];
    char stringdata11[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SpotifyMetadataRequest_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SpotifyMetadataRequest_t qt_meta_stringdata_SpotifyMetadataRequest = {
    {
        QT_MOC_LITERAL(0, 22),  // "SpotifyMetadataRequest"
        QT_MOC_LITERAL(23, 16),  // "MetadataReceived"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 8),  // "track_id"
        QT_MOC_LITERAL(50, 4),  // "Song"
        QT_MOC_LITERAL(55, 4),  // "song"
        QT_MOC_LITERAL(60, 15),  // "MetadataFailure"
        QT_MOC_LITERAL(76, 5),  // "error"
        QT_MOC_LITERAL(82, 21),  // "TrackMetadataReceived"
        QT_MOC_LITERAL(104, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(119, 5),  // "reply"
        QT_MOC_LITERAL(125, 22)   // "ArtistMetadataReceived"
    },
    "SpotifyMetadataRequest",
    "MetadataReceived",
    "",
    "track_id",
    "Song",
    "song",
    "MetadataFailure",
    "error",
    "TrackMetadataReceived",
    "QNetworkReply*",
    "reply",
    "ArtistMetadataReceived"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SpotifyMetadataRequest[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    1 /* Public */,
       6,    2,   43,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   48,    2, 0x08,    7 /* Private */,
      11,    2,   53,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,    3,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject SpotifyMetadataRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SpotifyBaseRequest::staticMetaObject>(),
    qt_meta_stringdata_SpotifyMetadataRequest.offsetsAndSizes,
    qt_meta_data_SpotifyMetadataRequest,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SpotifyMetadataRequest_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpotifyMetadataRequest, std::true_type>,
        // method 'MetadataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<Song, std::false_type>,
        // method 'MetadataFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'TrackMetadataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ArtistMetadataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void SpotifyMetadataRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpotifyMetadataRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->MetadataReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Song>>(_a[2]))); break;
        case 1: _t->MetadataFailure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->TrackMetadataReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->ArtistMetadataReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpotifyMetadataRequest::*)(QString , Song );
            if (_t _q_method = &SpotifyMetadataRequest::MetadataReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SpotifyMetadataRequest::*)(QString , QString );
            if (_t _q_method = &SpotifyMetadataRequest::MetadataFailure; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *SpotifyMetadataRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpotifyMetadataRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpotifyMetadataRequest.stringdata0))
        return static_cast<void*>(this);
    return SpotifyBaseRequest::qt_metacast(_clname);
}

int SpotifyMetadataRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SpotifyBaseRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SpotifyMetadataRequest::MetadataReceived(QString _t1, Song _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpotifyMetadataRequest::MetadataFailure(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
