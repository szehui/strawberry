/****************************************************************************
** Meta object code from reading C++ file 'spotifyservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/spotify/spotifyservice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spotifyservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SpotifyService_t {
    uint offsetsAndSizes[74];
    char stringdata0[15];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[13];
    char stringdata5[13];
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
    char stringdata29[34];
    char stringdata30[4];
    char stringdata31[33];
    char stringdata32[32];
    char stringdata33[30];
    char stringdata34[9];
    char stringdata35[29];
    char stringdata36[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SpotifyService_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SpotifyService_t qt_meta_stringdata_SpotifyService = {
    {
        QT_MOC_LITERAL(0, 14),  // "SpotifyService"
        QT_MOC_LITERAL(15, 24),  // "UpdateSpotifyAccessToken"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 12),  // "access_token"
        QT_MOC_LITERAL(54, 12),  // "Authenticate"
        QT_MOC_LITERAL(67, 12),  // "ClearSession"
        QT_MOC_LITERAL(80, 10),  // "GetArtists"
        QT_MOC_LITERAL(91, 9),  // "GetAlbums"
        QT_MOC_LITERAL(101, 8),  // "GetSongs"
        QT_MOC_LITERAL(110, 19),  // "ResetArtistsRequest"
        QT_MOC_LITERAL(130, 18),  // "ResetAlbumsRequest"
        QT_MOC_LITERAL(149, 17),  // "ResetSongsRequest"
        QT_MOC_LITERAL(167, 12),  // "ExitReceived"
        QT_MOC_LITERAL(180, 13),  // "OAuthFinished"
        QT_MOC_LITERAL(194, 7),  // "success"
        QT_MOC_LITERAL(202, 5),  // "error"
        QT_MOC_LITERAL(208, 13),  // "invalid_grant"
        QT_MOC_LITERAL(222, 11),  // "StartSearch"
        QT_MOC_LITERAL(234, 22),  // "ArtistsResultsReceived"
        QT_MOC_LITERAL(257, 2),  // "id"
        QT_MOC_LITERAL(260, 7),  // "SongMap"
        QT_MOC_LITERAL(268, 5),  // "songs"
        QT_MOC_LITERAL(274, 21),  // "AlbumsResultsReceived"
        QT_MOC_LITERAL(296, 20),  // "SongsResultsReceived"
        QT_MOC_LITERAL(317, 21),  // "SearchResultsReceived"
        QT_MOC_LITERAL(339, 27),  // "ArtistsUpdateStatusReceived"
        QT_MOC_LITERAL(367, 4),  // "text"
        QT_MOC_LITERAL(372, 26),  // "AlbumsUpdateStatusReceived"
        QT_MOC_LITERAL(399, 25),  // "SongsUpdateStatusReceived"
        QT_MOC_LITERAL(425, 33),  // "ArtistsProgressSetMaximumRece..."
        QT_MOC_LITERAL(459, 3),  // "max"
        QT_MOC_LITERAL(463, 32),  // "AlbumsProgressSetMaximumReceived"
        QT_MOC_LITERAL(496, 31),  // "SongsProgressSetMaximumReceived"
        QT_MOC_LITERAL(528, 29),  // "ArtistsUpdateProgressReceived"
        QT_MOC_LITERAL(558, 8),  // "progress"
        QT_MOC_LITERAL(567, 28),  // "AlbumsUpdateProgressReceived"
        QT_MOC_LITERAL(596, 27)   // "SongsUpdateProgressReceived"
    },
    "SpotifyService",
    "UpdateSpotifyAccessToken",
    "",
    "access_token",
    "Authenticate",
    "ClearSession",
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
    "ArtistsProgressSetMaximumReceived",
    "max",
    "AlbumsProgressSetMaximumReceived",
    "SongsProgressSetMaximumReceived",
    "ArtistsUpdateProgressReceived",
    "progress",
    "AlbumsUpdateProgressReceived",
    "SongsUpdateProgressReceived"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SpotifyService[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  176,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  179,    2, 0x0a,    3 /* Public */,
       5,    0,  180,    2, 0x0a,    4 /* Public */,
       6,    0,  181,    2, 0x0a,    5 /* Public */,
       7,    0,  182,    2, 0x0a,    6 /* Public */,
       8,    0,  183,    2, 0x0a,    7 /* Public */,
       9,    0,  184,    2, 0x0a,    8 /* Public */,
      10,    0,  185,    2, 0x0a,    9 /* Public */,
      11,    0,  186,    2, 0x0a,   10 /* Public */,
      12,    0,  187,    2, 0x08,   11 /* Private */,
      13,    3,  188,    2, 0x08,   12 /* Private */,
      13,    2,  195,    2, 0x28,   16 /* Private | MethodCloned */,
      13,    1,  200,    2, 0x28,   19 /* Private | MethodCloned */,
      17,    0,  203,    2, 0x08,   21 /* Private */,
      18,    3,  204,    2, 0x08,   22 /* Private */,
      22,    3,  211,    2, 0x08,   26 /* Private */,
      23,    3,  218,    2, 0x08,   30 /* Private */,
      24,    3,  225,    2, 0x08,   34 /* Private */,
      25,    2,  232,    2, 0x08,   38 /* Private */,
      27,    2,  237,    2, 0x08,   41 /* Private */,
      28,    2,  242,    2, 0x08,   44 /* Private */,
      29,    2,  247,    2, 0x08,   47 /* Private */,
      31,    2,  252,    2, 0x08,   50 /* Private */,
      32,    2,  257,    2, 0x08,   53 /* Private */,
      33,    2,  262,    2, 0x08,   56 /* Private */,
      35,    2,  267,    2, 0x08,   59 /* Private */,
      36,    2,  272,    2, 0x08,   62 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   14,   15,   16,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::Bool,   14,
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
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   34,

       0        // eod
};

Q_CONSTINIT const QMetaObject SpotifyService::staticMetaObject = { {
    QMetaObject::SuperData::link<StreamingService::staticMetaObject>(),
    qt_meta_stringdata_SpotifyService.offsetsAndSizes,
    qt_meta_data_SpotifyService,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SpotifyService_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpotifyService, std::true_type>,
        // method 'UpdateSpotifyAccessToken'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Authenticate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ClearSession'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'OAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
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
        // method 'ArtistsProgressSetMaximumReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'AlbumsProgressSetMaximumReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongsProgressSetMaximumReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void SpotifyService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpotifyService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateSpotifyAccessToken((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->Authenticate(); break;
        case 2: _t->ClearSession(); break;
        case 3: _t->GetArtists(); break;
        case 4: _t->GetAlbums(); break;
        case 5: _t->GetSongs(); break;
        case 6: _t->ResetArtistsRequest(); break;
        case 7: _t->ResetAlbumsRequest(); break;
        case 8: _t->ResetSongsRequest(); break;
        case 9: _t->ExitReceived(); break;
        case 10: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 11: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->StartSearch(); break;
        case 14: _t->ArtistsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->AlbumsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->SongsResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 17: _t->SearchResultsReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 18: _t->ArtistsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 19: _t->AlbumsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 20: _t->SongsUpdateStatusReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 21: _t->ArtistsProgressSetMaximumReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 22: _t->AlbumsProgressSetMaximumReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 23: _t->SongsProgressSetMaximumReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 24: _t->ArtistsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 25: _t->AlbumsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 26: _t->SongsUpdateProgressReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpotifyService::*)(const QString & );
            if (_t _q_method = &SpotifyService::UpdateSpotifyAccessToken; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SpotifyService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpotifyService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpotifyService.stringdata0))
        return static_cast<void*>(this);
    return StreamingService::qt_metacast(_clname);
}

int SpotifyService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StreamingService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void SpotifyService::UpdateSpotifyAccessToken(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
