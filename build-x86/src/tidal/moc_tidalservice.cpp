/****************************************************************************
** Meta object code from reading C++ file 'tidalservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tidal/tidalservice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tidalservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TidalService_t {
    uint offsetsAndSizes[84];
    char stringdata0[13];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[25];
    char stringdata5[4];
    char stringdata6[11];
    char stringdata7[10];
    char stringdata8[9];
    char stringdata9[20];
    char stringdata10[19];
    char stringdata11[18];
    char stringdata12[13];
    char stringdata13[14];
    char stringdata14[8];
    char stringdata15[6];
    char stringdata16[14];
    char stringdata17[12];
    char stringdata18[23];
    char stringdata19[3];
    char stringdata20[8];
    char stringdata21[6];
    char stringdata22[22];
    char stringdata23[21];
    char stringdata24[22];
    char stringdata25[28];
    char stringdata26[5];
    char stringdata27[27];
    char stringdata28[26];
    char stringdata29[30];
    char stringdata30[9];
    char stringdata31[29];
    char stringdata32[28];
    char stringdata33[23];
    char stringdata34[10];
    char stringdata35[23];
    char stringdata36[11];
    char stringdata37[15];
    char stringdata38[9];
    char stringdata39[11];
    char stringdata40[10];
    char stringdata41[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TidalService_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TidalService_t qt_meta_stringdata_TidalService = {
    {
        QT_MOC_LITERAL(0, 12),  // "TidalService"
        QT_MOC_LITERAL(13, 18),  // "StartAuthorization"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 9),  // "client_id"
        QT_MOC_LITERAL(43, 24),  // "AuthorizationUrlReceived"
        QT_MOC_LITERAL(68, 3),  // "url"
        QT_MOC_LITERAL(72, 10),  // "GetArtists"
        QT_MOC_LITERAL(83, 9),  // "GetAlbums"
        QT_MOC_LITERAL(93, 8),  // "GetSongs"
        QT_MOC_LITERAL(102, 19),  // "ResetArtistsRequest"
        QT_MOC_LITERAL(122, 18),  // "ResetAlbumsRequest"
        QT_MOC_LITERAL(141, 17),  // "ResetSongsRequest"
        QT_MOC_LITERAL(159, 12),  // "ExitReceived"
        QT_MOC_LITERAL(172, 13),  // "OAuthFinished"
        QT_MOC_LITERAL(186, 7),  // "success"
        QT_MOC_LITERAL(194, 5),  // "error"
        QT_MOC_LITERAL(200, 13),  // "invalid_grant"
        QT_MOC_LITERAL(214, 11),  // "StartSearch"
        QT_MOC_LITERAL(226, 22),  // "ArtistsResultsReceived"
        QT_MOC_LITERAL(249, 2),  // "id"
        QT_MOC_LITERAL(252, 7),  // "SongMap"
        QT_MOC_LITERAL(260, 5),  // "songs"
        QT_MOC_LITERAL(266, 21),  // "AlbumsResultsReceived"
        QT_MOC_LITERAL(288, 20),  // "SongsResultsReceived"
        QT_MOC_LITERAL(309, 21),  // "SearchResultsReceived"
        QT_MOC_LITERAL(331, 27),  // "ArtistsUpdateStatusReceived"
        QT_MOC_LITERAL(359, 4),  // "text"
        QT_MOC_LITERAL(364, 26),  // "AlbumsUpdateStatusReceived"
        QT_MOC_LITERAL(391, 25),  // "SongsUpdateStatusReceived"
        QT_MOC_LITERAL(417, 29),  // "ArtistsUpdateProgressReceived"
        QT_MOC_LITERAL(447, 8),  // "progress"
        QT_MOC_LITERAL(456, 28),  // "AlbumsUpdateProgressReceived"
        QT_MOC_LITERAL(485, 27),  // "SongsUpdateProgressReceived"
        QT_MOC_LITERAL(513, 22),  // "HandleStreamURLFailure"
        QT_MOC_LITERAL(536, 9),  // "media_url"
        QT_MOC_LITERAL(546, 22),  // "HandleStreamURLSuccess"
        QT_MOC_LITERAL(569, 10),  // "stream_url"
        QT_MOC_LITERAL(580, 14),  // "Song::FileType"
        QT_MOC_LITERAL(595, 8),  // "filetype"
        QT_MOC_LITERAL(604, 10),  // "samplerate"
        QT_MOC_LITERAL(615, 9),  // "bit_depth"
        QT_MOC_LITERAL(625, 8)   // "duration"
    },
    "TidalService",
    "StartAuthorization",
    "",
    "client_id",
    "AuthorizationUrlReceived",
    "url",
    "GetArtists",
    "GetAlbums",
    "GetSongs",
    "ResetArtistsRequest",
    "ResetAlbumsRequest",
    "ResetSongsRequest",
    "ExitReceived",
    "OAuthFinished",
    "success",
    "error",
    "invalid_grant",
    "StartSearch",
    "ArtistsResultsReceived",
    "id",
    "SongMap",
    "songs",
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

Q_CONSTINIT static const uint qt_meta_data_TidalService[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  158,    2, 0x0a,    1 /* Public */,
       4,    1,  161,    2, 0x0a,    3 /* Public */,
       6,    0,  164,    2, 0x0a,    5 /* Public */,
       7,    0,  165,    2, 0x0a,    6 /* Public */,
       8,    0,  166,    2, 0x0a,    7 /* Public */,
       9,    0,  167,    2, 0x0a,    8 /* Public */,
      10,    0,  168,    2, 0x0a,    9 /* Public */,
      11,    0,  169,    2, 0x0a,   10 /* Public */,
      12,    0,  170,    2, 0x08,   11 /* Private */,
      13,    3,  171,    2, 0x08,   12 /* Private */,
      13,    2,  178,    2, 0x28,   16 /* Private | MethodCloned */,
      17,    0,  183,    2, 0x08,   19 /* Private */,
      18,    3,  184,    2, 0x08,   20 /* Private */,
      22,    3,  191,    2, 0x08,   24 /* Private */,
      23,    3,  198,    2, 0x08,   28 /* Private */,
      24,    3,  205,    2, 0x08,   32 /* Private */,
      25,    2,  212,    2, 0x08,   36 /* Private */,
      27,    2,  217,    2, 0x08,   39 /* Private */,
      28,    2,  222,    2, 0x08,   42 /* Private */,
      29,    2,  227,    2, 0x08,   45 /* Private */,
      31,    2,  232,    2, 0x08,   48 /* Private */,
      32,    2,  237,    2, 0x08,   51 /* Private */,
      33,    3,  242,    2, 0x08,   54 /* Private */,
      35,    7,  249,    2, 0x08,   58 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   14,   15,   16,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20, QMetaType::QString,   19,   21,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20, QMetaType::QString,   19,   21,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20, QMetaType::QString,   19,   21,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20, QMetaType::QString,   19,   21,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   30,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QString,   19,   34,   15,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QUrl, 0x80000000 | 37, QMetaType::Int, QMetaType::Int, QMetaType::LongLong,   19,   34,   36,   38,   39,   40,   41,

       0        // eod
};

Q_CONSTINIT const QMetaObject TidalService::staticMetaObject = { {
    QMetaObject::SuperData::link<StreamingService::staticMetaObject>(),
    qt_meta_stringdata_TidalService.offsetsAndSizes,
    qt_meta_data_TidalService,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TidalService_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TidalService, std::true_type>,
        // method 'StartAuthorization'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AuthorizationUrlReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
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
        // method 'OAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'OAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
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

void TidalService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TidalService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StartAuthorization((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->AuthorizationUrlReceived((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 2: _t->GetArtists(); break;
        case 3: _t->GetAlbums(); break;
        case 4: _t->GetSongs(); break;
        case 5: _t->ResetArtistsRequest(); break;
        case 6: _t->ResetAlbumsRequest(); break;
        case 7: _t->ResetSongsRequest(); break;
        case 8: _t->ExitReceived(); break;
        case 9: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 10: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->StartSearch(); break;
        case 12: _t->ArtistsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 13: _t->AlbumsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->SongsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->SearchResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->ArtistsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->AlbumsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->SongsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 19: _t->ArtistsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 20: _t->AlbumsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->SongsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 22: _t->HandleStreamURLFailure((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 23: _t->HandleStreamURLSuccess((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Song::FileType>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[7]))); break;
        default: ;
        }
    }
}

const QMetaObject *TidalService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TidalService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TidalService.stringdata0))
        return static_cast<void*>(this);
    return StreamingService::qt_metacast(_clname);
}

int TidalService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StreamingService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
