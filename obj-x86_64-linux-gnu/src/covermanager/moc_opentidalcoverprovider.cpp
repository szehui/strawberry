/****************************************************************************
** Meta object code from reading C++ file 'opentidalcoverprovider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covermanager/opentidalcoverprovider.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opentidalcoverprovider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_OpenTidalCoverProvider_t {
    uint offsetsAndSizes[36];
    char stringdata0[23];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[6];
    char stringdata5[14];
    char stringdata6[14];
    char stringdata7[18];
    char stringdata8[15];
    char stringdata9[6];
    char stringdata10[41];
    char stringdata11[15];
    char stringdata12[22];
    char stringdata13[45];
    char stringdata14[19];
    char stringdata15[19];
    char stringdata16[42];
    char stringdata17[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_OpenTidalCoverProvider_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_OpenTidalCoverProvider_t qt_meta_stringdata_OpenTidalCoverProvider = {
    {
        QT_MOC_LITERAL(0, 22),  // "OpenTidalCoverProvider"
        QT_MOC_LITERAL(23, 13),  // "OAuthFinished"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 7),  // "success"
        QT_MOC_LITERAL(46, 5),  // "error"
        QT_MOC_LITERAL(52, 13),  // "invalid_grant"
        QT_MOC_LITERAL(66, 13),  // "FlushRequests"
        QT_MOC_LITERAL(80, 17),  // "HandleSearchReply"
        QT_MOC_LITERAL(98, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(113, 5),  // "reply"
        QT_MOC_LITERAL(119, 40),  // "OpenTidalCoverProvider::Searc..."
        QT_MOC_LITERAL(160, 14),  // "search_request"
        QT_MOC_LITERAL(175, 21),  // "HandleAlbumCoverReply"
        QT_MOC_LITERAL(197, 44),  // "OpenTidalCoverProvider::Album..."
        QT_MOC_LITERAL(242, 18),  // "albumcover_request"
        QT_MOC_LITERAL(261, 18),  // "HandleArtworkReply"
        QT_MOC_LITERAL(280, 41),  // "OpenTidalCoverProvider::Artwo..."
        QT_MOC_LITERAL(322, 15)   // "artwork_request"
    },
    "OpenTidalCoverProvider",
    "OAuthFinished",
    "",
    "success",
    "error",
    "invalid_grant",
    "FlushRequests",
    "HandleSearchReply",
    "QNetworkReply*",
    "reply",
    "OpenTidalCoverProvider::SearchRequestPtr",
    "search_request",
    "HandleAlbumCoverReply",
    "OpenTidalCoverProvider::AlbumCoverRequestPtr",
    "albumcover_request",
    "HandleArtworkReply",
    "OpenTidalCoverProvider::ArtworkRequestPtr",
    "artwork_request"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_OpenTidalCoverProvider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   56,    2, 0x08,    1 /* Private */,
       1,    2,   63,    2, 0x28,    5 /* Private | MethodCloned */,
       1,    1,   68,    2, 0x28,    8 /* Private | MethodCloned */,
       6,    0,   71,    2, 0x08,   10 /* Private */,
       7,    2,   72,    2, 0x08,   11 /* Private */,
      12,    3,   77,    2, 0x08,   14 /* Private */,
      15,    4,   84,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 13,    9,   11,   14,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 13, 0x80000000 | 16,    9,   11,   14,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject OpenTidalCoverProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<JsonCoverProvider::staticMetaObject>(),
    qt_meta_stringdata_OpenTidalCoverProvider.offsetsAndSizes,
    qt_meta_data_OpenTidalCoverProvider,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_OpenTidalCoverProvider_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OpenTidalCoverProvider, std::true_type>,
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
        // method 'FlushRequests'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HandleSearchReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<OpenTidalCoverProvider::SearchRequestPtr, std::false_type>,
        // method 'HandleAlbumCoverReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<OpenTidalCoverProvider::SearchRequestPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<OpenTidalCoverProvider::AlbumCoverRequestPtr, std::false_type>,
        // method 'HandleArtworkReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<OpenTidalCoverProvider::SearchRequestPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<OpenTidalCoverProvider::AlbumCoverRequestPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<OpenTidalCoverProvider::ArtworkRequestPtr, std::false_type>
    >,
    nullptr
} };

void OpenTidalCoverProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenTidalCoverProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 1: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->FlushRequests(); break;
        case 4: _t->HandleSearchReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OpenTidalCoverProvider::SearchRequestPtr>>(_a[2]))); break;
        case 5: _t->HandleAlbumCoverReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OpenTidalCoverProvider::SearchRequestPtr>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<OpenTidalCoverProvider::AlbumCoverRequestPtr>>(_a[3]))); break;
        case 6: _t->HandleArtworkReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OpenTidalCoverProvider::SearchRequestPtr>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<OpenTidalCoverProvider::AlbumCoverRequestPtr>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<OpenTidalCoverProvider::ArtworkRequestPtr>>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject *OpenTidalCoverProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenTidalCoverProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenTidalCoverProvider.stringdata0))
        return static_cast<void*>(this);
    return JsonCoverProvider::qt_metacast(_clname);
}

int OpenTidalCoverProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JsonCoverProvider::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
