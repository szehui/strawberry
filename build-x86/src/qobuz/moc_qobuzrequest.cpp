/****************************************************************************
** Meta object code from reading C++ file 'qobuzrequest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/qobuz/qobuzrequest.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qobuzrequest.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QobuzRequest_t {
    uint offsetsAndSizes[72];
    char stringdata0[13];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[8];
    char stringdata5[6];
    char stringdata6[6];
    char stringdata7[13];
    char stringdata8[5];
    char stringdata9[15];
    char stringdata10[4];
    char stringdata11[18];
    char stringdata12[10];
    char stringdata13[4];
    char stringdata14[15];
    char stringdata15[9];
    char stringdata16[21];
    char stringdata17[15];
    char stringdata18[6];
    char stringdata19[16];
    char stringdata20[17];
    char stringdata21[20];
    char stringdata22[15];
    char stringdata23[21];
    char stringdata24[17];
    char stringdata25[19];
    char stringdata26[14];
    char stringdata27[20];
    char stringdata28[16];
    char stringdata29[26];
    char stringdata30[7];
    char stringdata31[24];
    char stringdata32[6];
    char stringdata33[19];
    char stringdata34[10];
    char stringdata35[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QobuzRequest_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QobuzRequest_t qt_meta_stringdata_QobuzRequest = {
    {
        QT_MOC_LITERAL(0, 12),  // "QobuzRequest"
        QT_MOC_LITERAL(13, 7),  // "Results"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 2),  // "id"
        QT_MOC_LITERAL(25, 7),  // "SongMap"
        QT_MOC_LITERAL(33, 5),  // "songs"
        QT_MOC_LITERAL(39, 5),  // "error"
        QT_MOC_LITERAL(45, 12),  // "UpdateStatus"
        QT_MOC_LITERAL(58, 4),  // "text"
        QT_MOC_LITERAL(63, 14),  // "UpdateProgress"
        QT_MOC_LITERAL(78, 3),  // "max"
        QT_MOC_LITERAL(82, 17),  // "StreamURLFinished"
        QT_MOC_LITERAL(100, 9),  // "media_url"
        QT_MOC_LITERAL(110, 3),  // "url"
        QT_MOC_LITERAL(114, 14),  // "Song::FileType"
        QT_MOC_LITERAL(129, 8),  // "filetype"
        QT_MOC_LITERAL(138, 20),  // "ArtistsReplyReceived"
        QT_MOC_LITERAL(159, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(174, 5),  // "reply"
        QT_MOC_LITERAL(180, 15),  // "limit_requested"
        QT_MOC_LITERAL(196, 16),  // "offset_requested"
        QT_MOC_LITERAL(213, 19),  // "AlbumsReplyReceived"
        QT_MOC_LITERAL(233, 14),  // "AlbumsReceived"
        QT_MOC_LITERAL(248, 20),  // "QobuzRequest::Artist"
        QT_MOC_LITERAL(269, 16),  // "artist_requested"
        QT_MOC_LITERAL(286, 18),  // "SongsReplyReceived"
        QT_MOC_LITERAL(305, 13),  // "SongsReceived"
        QT_MOC_LITERAL(319, 19),  // "QobuzRequest::Album"
        QT_MOC_LITERAL(339, 15),  // "album_requested"
        QT_MOC_LITERAL(355, 25),  // "ArtistAlbumsReplyReceived"
        QT_MOC_LITERAL(381, 6),  // "artist"
        QT_MOC_LITERAL(388, 23),  // "AlbumSongsReplyReceived"
        QT_MOC_LITERAL(412, 5),  // "album"
        QT_MOC_LITERAL(418, 18),  // "AlbumCoverReceived"
        QT_MOC_LITERAL(437, 9),  // "cover_url"
        QT_MOC_LITERAL(447, 8)   // "filename"
    },
    "QobuzRequest",
    "Results",
    "",
    "id",
    "SongMap",
    "songs",
    "error",
    "UpdateStatus",
    "text",
    "UpdateProgress",
    "max",
    "StreamURLFinished",
    "media_url",
    "url",
    "Song::FileType",
    "filetype",
    "ArtistsReplyReceived",
    "QNetworkReply*",
    "reply",
    "limit_requested",
    "offset_requested",
    "AlbumsReplyReceived",
    "AlbumsReceived",
    "QobuzRequest::Artist",
    "artist_requested",
    "SongsReplyReceived",
    "SongsReceived",
    "QobuzRequest::Album",
    "album_requested",
    "ArtistAlbumsReplyReceived",
    "artist",
    "AlbumSongsReplyReceived",
    "album",
    "AlbumCoverReceived",
    "cover_url",
    "filename"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QobuzRequest[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   92,    2, 0x06,    1 /* Public */,
       7,    2,   99,    2, 0x06,    5 /* Public */,
       9,    2,  104,    2, 0x06,    8 /* Public */,
      11,    4,  109,    2, 0x06,   11 /* Public */,
      11,    3,  118,    2, 0x26,   16 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    3,  125,    2, 0x08,   20 /* Private */,
      21,    3,  132,    2, 0x08,   24 /* Private */,
      22,    4,  139,    2, 0x08,   28 /* Private */,
      25,    3,  148,    2, 0x08,   33 /* Private */,
      26,    5,  155,    2, 0x08,   37 /* Private */,
      29,    3,  166,    2, 0x08,   43 /* Private */,
      31,    4,  173,    2, 0x08,   47 /* Private */,
      33,    3,  182,    2, 0x08,   52 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::QString,    3,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   10,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl, 0x80000000 | 14, QMetaType::QString,   12,   13,   15,    6,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUrl, 0x80000000 | 14,   12,   13,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int, QMetaType::Int,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int, QMetaType::Int,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 23, QMetaType::Int, QMetaType::Int,   18,   24,   19,   20,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int, QMetaType::Int,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 23, 0x80000000 | 27, QMetaType::Int, QMetaType::Int,   18,   24,   28,   19,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 23, QMetaType::Int,   18,   30,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 23, 0x80000000 | 27, QMetaType::Int,   18,   30,   32,   20,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QUrl, QMetaType::QString,   18,   34,   35,

       0        // eod
};

Q_CONSTINIT const QMetaObject QobuzRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<QobuzBaseRequest::staticMetaObject>(),
    qt_meta_stringdata_QobuzRequest.offsetsAndSizes,
    qt_meta_data_QobuzRequest,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QobuzRequest_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QobuzRequest, std::true_type>,
        // method 'Results'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'StreamURLFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song::FileType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'StreamURLFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song::FileType, std::false_type>,
        // method 'ArtistsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QobuzRequest::Artist &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QobuzRequest::Artist &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QobuzRequest::Album &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ArtistAlbumsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QobuzRequest::Artist &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumSongsReplyReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QobuzRequest::Artist &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QobuzRequest::Album &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumCoverReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QobuzRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QobuzRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Results((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->UpdateStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->UpdateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->StreamURLFinished((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Song::FileType>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 4: _t->StreamURLFinished((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Song::FileType>>(_a[3]))); break;
        case 5: _t->ArtistsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->AlbumsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 7: _t->AlbumsReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QobuzRequest::Artist>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 8: _t->SongsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->SongsReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QobuzRequest::Artist>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QobuzRequest::Album>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 10: _t->ArtistAlbumsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QobuzRequest::Artist>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 11: _t->AlbumSongsReplyReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QobuzRequest::Artist>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QobuzRequest::Album>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 12: _t->AlbumCoverReceived((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QobuzRequest::*)(const int , const SongMap & , const QString & );
            if (_t _q_method = &QobuzRequest::Results; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QobuzRequest::*)(const int , const QString & );
            if (_t _q_method = &QobuzRequest::UpdateStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QobuzRequest::*)(const int , const int );
            if (_t _q_method = &QobuzRequest::UpdateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QobuzRequest::*)(const QUrl & , const QUrl & , const Song::FileType , const QString & );
            if (_t _q_method = &QobuzRequest::StreamURLFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *QobuzRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QobuzRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QobuzRequest.stringdata0))
        return static_cast<void*>(this);
    return QobuzBaseRequest::qt_metacast(_clname);
}

int QobuzRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QobuzBaseRequest::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QobuzRequest::Results(const int _t1, const SongMap & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QobuzRequest::UpdateStatus(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QobuzRequest::UpdateProgress(const int _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QobuzRequest::StreamURLFinished(const QUrl & _t1, const QUrl & _t2, const Song::FileType _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
