/****************************************************************************
** Meta object code from reading C++ file 'subsonicrequest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/subsonic/subsonicrequest.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subsonicrequest.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SubsonicRequest_t {
    uint offsetsAndSizes[48];
    char stringdata0[16];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[5];
    char stringdata8[19];
    char stringdata9[4];
    char stringdata10[15];
    char stringdata11[9];
    char stringdata12[20];
    char stringdata13[15];
    char stringdata14[6];
    char stringdata15[17];
    char stringdata16[15];
    char stringdata17[24];
    char stringdata18[10];
    char stringdata19[9];
    char stringdata20[13];
    char stringdata21[19];
    char stringdata22[35];
    char stringdata23[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SubsonicRequest_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SubsonicRequest_t qt_meta_stringdata_SubsonicRequest = {
    {
        QT_MOC_LITERAL(0, 15),  // "SubsonicRequest"
        QT_MOC_LITERAL(16, 7),  // "Results"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 7),  // "SongMap"
        QT_MOC_LITERAL(33, 5),  // "songs"
        QT_MOC_LITERAL(39, 5),  // "error"
        QT_MOC_LITERAL(45, 12),  // "UpdateStatus"
        QT_MOC_LITERAL(58, 4),  // "text"
        QT_MOC_LITERAL(63, 18),  // "ProgressSetMaximum"
        QT_MOC_LITERAL(82, 3),  // "max"
        QT_MOC_LITERAL(86, 14),  // "UpdateProgress"
        QT_MOC_LITERAL(101, 8),  // "progress"
        QT_MOC_LITERAL(110, 19),  // "AlbumsReplyReceived"
        QT_MOC_LITERAL(130, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(145, 5),  // "reply"
        QT_MOC_LITERAL(151, 16),  // "offset_requested"
        QT_MOC_LITERAL(168, 14),  // "size_requested"
        QT_MOC_LITERAL(183, 23),  // "AlbumSongsReplyReceived"
        QT_MOC_LITERAL(207, 9),  // "artist_id"
        QT_MOC_LITERAL(217, 8),  // "album_id"
        QT_MOC_LITERAL(226, 12),  // "album_artist"
        QT_MOC_LITERAL(239, 18),  // "AlbumCoverReceived"
        QT_MOC_LITERAL(258, 34),  // "SubsonicRequest::AlbumCoverRe..."
        QT_MOC_LITERAL(293, 7)   // "request"
    },
    "SubsonicRequest",
    "Results",
    "",
    "SongMap",
    "songs",
    "error",
    "UpdateStatus",
    "text",
    "ProgressSetMaximum",
    "max",
    "UpdateProgress",
    "progress",
    "AlbumsReplyReceived",
    "QNetworkReply*",
    "reply",
    "offset_requested",
    "size_requested",
    "AlbumSongsReplyReceived",
    "artist_id",
    "album_id",
    "album_artist",
    "AlbumCoverReceived",
    "SubsonicRequest::AlbumCoverRequest",
    "request"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SubsonicRequest[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,
       6,    1,   61,    2, 0x06,    4 /* Public */,
       8,    1,   64,    2, 0x06,    6 /* Public */,
      10,    1,   67,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    3,   70,    2, 0x08,   10 /* Private */,
      17,    4,   77,    2, 0x08,   14 /* Private */,
      21,    2,   86,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 22,   14,   23,

       0        // eod
};

Q_CONSTINIT const QMetaObject SubsonicRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SubsonicBaseRequest::staticMetaObject>(),
    qt_meta_stringdata_SubsonicRequest.offsetsAndSizes,
    qt_meta_data_SubsonicRequest,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SubsonicRequest_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SubsonicRequest, std::true_type>,
        // method 'Results'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ProgressSetMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'UpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumSongsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AlbumCoverReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SubsonicRequest::AlbumCoverRequest &, std::false_type>
    >,
    nullptr
} };

void SubsonicRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubsonicRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Results((*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->UpdateStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->ProgressSetMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->UpdateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->AlbumsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->AlbumSongsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 6: _t->AlbumCoverReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SubsonicRequest::AlbumCoverRequest>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SubsonicRequest::*)(const SongMap & , const QString & );
            if (_t _q_method = &SubsonicRequest::Results; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SubsonicRequest::*)(const QString & );
            if (_t _q_method = &SubsonicRequest::UpdateStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SubsonicRequest::*)(const int );
            if (_t _q_method = &SubsonicRequest::ProgressSetMaximum; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SubsonicRequest::*)(const int );
            if (_t _q_method = &SubsonicRequest::UpdateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *SubsonicRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubsonicRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubsonicRequest.stringdata0))
        return static_cast<void*>(this);
    return SubsonicBaseRequest::qt_metacast(_clname);
}

int SubsonicRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SubsonicBaseRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SubsonicRequest::Results(const SongMap & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SubsonicRequest::UpdateStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SubsonicRequest::ProgressSetMaximum(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SubsonicRequest::UpdateProgress(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
