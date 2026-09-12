/****************************************************************************
** Meta object code from reading C++ file 'qobuzservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/qobuz/qobuzservice.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qobuzservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QobuzService_t {
    uint offsetsAndSizes[92];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[11];
    char stringdata5[12];
    char stringdata6[11];
    char stringdata7[10];
    char stringdata8[9];
    char stringdata9[20];
    char stringdata10[19];
    char stringdata11[18];
    char stringdata12[13];
    char stringdata13[21];
    char stringdata14[17];
    char stringdata15[11];
    char stringdata16[22];
    char stringdata17[25];
    char stringdata18[15];
    char stringdata19[6];
    char stringdata20[12];
    char stringdata21[23];
    char stringdata22[3];
    char stringdata23[8];
    char stringdata24[6];
    char stringdata25[6];
    char stringdata26[22];
    char stringdata27[21];
    char stringdata28[22];
    char stringdata29[28];
    char stringdata30[5];
    char stringdata31[27];
    char stringdata32[26];
    char stringdata33[30];
    char stringdata34[9];
    char stringdata35[29];
    char stringdata36[28];
    char stringdata37[23];
    char stringdata38[10];
    char stringdata39[23];
    char stringdata40[11];
    char stringdata41[15];
    char stringdata42[9];
    char stringdata43[11];
    char stringdata44[10];
    char stringdata45[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QobuzService_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QobuzService_t qt_meta_stringdata_QobuzService = {
    {
        QT_MOC_LITERAL(0, 12),  // "QobuzService"
        QT_MOC_LITERAL(13, 12),  // "Authenticate"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 6),  // "app_id"
        QT_MOC_LITERAL(34, 10),  // "app_secret"
        QT_MOC_LITERAL(45, 11),  // "private_key"
        QT_MOC_LITERAL(57, 10),  // "GetArtists"
        QT_MOC_LITERAL(68, 9),  // "GetAlbums"
        QT_MOC_LITERAL(78, 8),  // "GetSongs"
        QT_MOC_LITERAL(87, 19),  // "ResetArtistsRequest"
        QT_MOC_LITERAL(107, 18),  // "ResetAlbumsRequest"
        QT_MOC_LITERAL(126, 17),  // "ResetSongsRequest"
        QT_MOC_LITERAL(144, 12),  // "ExitReceived"
        QT_MOC_LITERAL(157, 20),  // "HandleLoginSSLErrors"
        QT_MOC_LITERAL(178, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(195, 10),  // "ssl_errors"
        QT_MOC_LITERAL(206, 21),  // "OAuthRedirectReceived"
        QT_MOC_LITERAL(228, 24),  // "HandleOAuthCallbackReply"
        QT_MOC_LITERAL(253, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(268, 5),  // "reply"
        QT_MOC_LITERAL(274, 11),  // "StartSearch"
        QT_MOC_LITERAL(286, 22),  // "ArtistsResultsReceived"
        QT_MOC_LITERAL(309, 2),  // "id"
        QT_MOC_LITERAL(312, 7),  // "SongMap"
        QT_MOC_LITERAL(320, 5),  // "songs"
        QT_MOC_LITERAL(326, 5),  // "error"
        QT_MOC_LITERAL(332, 21),  // "AlbumsResultsReceived"
        QT_MOC_LITERAL(354, 20),  // "SongsResultsReceived"
        QT_MOC_LITERAL(375, 21),  // "SearchResultsReceived"
        QT_MOC_LITERAL(397, 27),  // "ArtistsUpdateStatusReceived"
        QT_MOC_LITERAL(425, 4),  // "text"
        QT_MOC_LITERAL(430, 26),  // "AlbumsUpdateStatusReceived"
        QT_MOC_LITERAL(457, 25),  // "SongsUpdateStatusReceived"
        QT_MOC_LITERAL(483, 29),  // "ArtistsUpdateProgressReceived"
        QT_MOC_LITERAL(513, 8),  // "progress"
        QT_MOC_LITERAL(522, 28),  // "AlbumsUpdateProgressReceived"
        QT_MOC_LITERAL(551, 27),  // "SongsUpdateProgressReceived"
        QT_MOC_LITERAL(579, 22),  // "HandleStreamURLFailure"
        QT_MOC_LITERAL(602, 9),  // "media_url"
        QT_MOC_LITERAL(612, 22),  // "HandleStreamURLSuccess"
        QT_MOC_LITERAL(635, 10),  // "stream_url"
        QT_MOC_LITERAL(646, 14),  // "Song::FileType"
        QT_MOC_LITERAL(661, 8),  // "filetype"
        QT_MOC_LITERAL(670, 10),  // "samplerate"
        QT_MOC_LITERAL(681, 9),  // "bit_depth"
        QT_MOC_LITERAL(691, 8)   // "duration"
    },
    "QobuzService",
    "Authenticate",
    "",
    "app_id",
    "app_secret",
    "private_key",
    "GetArtists",
    "GetAlbums",
    "GetSongs",
    "ResetArtistsRequest",
    "ResetAlbumsRequest",
    "ResetSongsRequest",
    "ExitReceived",
    "HandleLoginSSLErrors",
    "QList<QSslError>",
    "ssl_errors",
    "OAuthRedirectReceived",
    "HandleOAuthCallbackReply",
    "QNetworkReply*",
    "reply",
    "StartSearch",
    "ArtistsResultsReceived",
    "id",
    "SongMap",
    "songs",
    "error",
    "AlbumsResultsReceived",
    "SongsResultsReceived",
    "SearchResultsReceived",
    "ArtistsUpdateStatusReceived",
    "text",
    "AlbumsUpdateStatusReceived",
    "SongsUpdateStatusReceived",
    "ArtistsUpdateProgressReceived",
    "progress",
    "AlbumsUpdateProgressReceived",
    "SongsUpdateProgressReceived",
    "HandleStreamURLFailure",
    "media_url",
    "HandleStreamURLSuccess",
    "stream_url",
    "Song::FileType",
    "filetype",
    "samplerate",
    "bit_depth",
    "duration"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QobuzService[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  164,    2, 0x0a,    1 /* Public */,
       1,    3,  165,    2, 0x0a,    2 /* Public */,
       6,    0,  172,    2, 0x0a,    6 /* Public */,
       7,    0,  173,    2, 0x0a,    7 /* Public */,
       8,    0,  174,    2, 0x0a,    8 /* Public */,
       9,    0,  175,    2, 0x0a,    9 /* Public */,
      10,    0,  176,    2, 0x0a,   10 /* Public */,
      11,    0,  177,    2, 0x0a,   11 /* Public */,
      12,    0,  178,    2, 0x08,   12 /* Private */,
      13,    1,  179,    2, 0x08,   13 /* Private */,
      16,    0,  182,    2, 0x08,   15 /* Private */,
      17,    1,  183,    2, 0x08,   16 /* Private */,
      20,    0,  186,    2, 0x08,   18 /* Private */,
      21,    3,  187,    2, 0x08,   19 /* Private */,
      26,    3,  194,    2, 0x08,   23 /* Private */,
      27,    3,  201,    2, 0x08,   27 /* Private */,
      28,    3,  208,    2, 0x08,   31 /* Private */,
      29,    2,  215,    2, 0x08,   35 /* Private */,
      31,    2,  220,    2, 0x08,   38 /* Private */,
      32,    2,  225,    2, 0x08,   41 /* Private */,
      33,    2,  230,    2, 0x08,   44 /* Private */,
      35,    2,  235,    2, 0x08,   47 /* Private */,
      36,    2,  240,    2, 0x08,   50 /* Private */,
      37,    3,  245,    2, 0x08,   53 /* Private */,
      39,    7,  252,    2, 0x08,   57 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 23, QMetaType::QString,   22,   24,   25,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 23, QMetaType::QString,   22,   24,   25,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 23, QMetaType::QString,   22,   24,   25,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 23, QMetaType::QString,   22,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   22,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   22,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   22,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   34,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QString,   22,   38,   25,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QUrl, 0x80000000 | 41, QMetaType::Int, QMetaType::Int, QMetaType::LongLong,   22,   38,   40,   42,   43,   44,   45,

       0        // eod
};

Q_CONSTINIT const QMetaObject QobuzService::staticMetaObject = { {
    QMetaObject::SuperData::link<StreamingService::staticMetaObject>(),
    qt_meta_stringdata_QobuzService.offsetsAndSizes,
    qt_meta_data_QobuzService,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QobuzService_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QobuzService, std::true_type>,
        // method 'Authenticate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Authenticate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'GetArtists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetAlbums'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetArtistsRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetAlbumsRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetSongsRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ExitReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HandleLoginSSLErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'OAuthRedirectReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HandleOAuthCallbackReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'StartSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ArtistsResultsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AlbumsResultsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SongsResultsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SearchResultsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ArtistsUpdateStatusReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AlbumsUpdateStatusReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SongsUpdateStatusReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ArtistsUpdateProgressReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumsUpdateProgressReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongsUpdateProgressReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'HandleStreamURLFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'HandleStreamURLSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song::FileType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>
    >,
    nullptr
} };

void QobuzService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QobuzService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Authenticate(); break;
        case 1: _t->Authenticate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->GetArtists(); break;
        case 3: _t->GetAlbums(); break;
        case 4: _t->GetSongs(); break;
        case 5: _t->ResetArtistsRequest(); break;
        case 6: _t->ResetAlbumsRequest(); break;
        case 7: _t->ResetSongsRequest(); break;
        case 8: _t->ExitReceived(); break;
        case 9: _t->HandleLoginSSLErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 10: _t->OAuthRedirectReceived(); break;
        case 11: _t->HandleOAuthCallbackReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 12: _t->StartSearch(); break;
        case 13: _t->ArtistsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->AlbumsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->SongsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->SearchResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 17: _t->ArtistsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->AlbumsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 19: _t->SongsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 20: _t->ArtistsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->AlbumsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 22: _t->SongsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 23: _t->HandleStreamURLFailure((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 24: _t->HandleStreamURLSuccess((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Song::FileType>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[7]))); break;
        default: ;
        }
    }
}

const QMetaObject *QobuzService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QobuzService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QobuzService.stringdata0))
        return static_cast<void*>(this);
    return StreamingService::qt_metacast(_clname);
}

int QobuzService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StreamingService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
