/****************************************************************************
** Meta object code from reading C++ file 'geniuslyricsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/lyrics/geniuslyricsprovider.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geniuslyricsprovider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GeniusLyricsProvider_t {
    uint offsetsAndSizes[32];
    char stringdata0[21];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[20];
    char stringdata5[8];
    char stringdata6[14];
    char stringdata7[8];
    char stringdata8[6];
    char stringdata9[14];
    char stringdata10[18];
    char stringdata11[15];
    char stringdata12[6];
    char stringdata13[17];
    char stringdata14[10];
    char stringdata15[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GeniusLyricsProvider_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GeniusLyricsProvider_t qt_meta_stringdata_GeniusLyricsProvider = {
    {
        QT_MOC_LITERAL(0, 20),  // "GeniusLyricsProvider"
        QT_MOC_LITERAL(21, 11),  // "StartSearch"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 2),  // "id"
        QT_MOC_LITERAL(37, 19),  // "LyricsSearchRequest"
        QT_MOC_LITERAL(57, 7),  // "request"
        QT_MOC_LITERAL(65, 13),  // "OAuthFinished"
        QT_MOC_LITERAL(79, 7),  // "success"
        QT_MOC_LITERAL(87, 5),  // "error"
        QT_MOC_LITERAL(93, 13),  // "invalid_grant"
        QT_MOC_LITERAL(107, 17),  // "HandleSearchReply"
        QT_MOC_LITERAL(125, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(140, 5),  // "reply"
        QT_MOC_LITERAL(146, 16),  // "HandleLyricReply"
        QT_MOC_LITERAL(163, 9),  // "search_id"
        QT_MOC_LITERAL(173, 3)   // "url"
    },
    "GeniusLyricsProvider",
    "StartSearch",
    "",
    "id",
    "LyricsSearchRequest",
    "request",
    "OAuthFinished",
    "success",
    "error",
    "invalid_grant",
    "HandleSearchReply",
    "QNetworkReply*",
    "reply",
    "HandleLyricReply",
    "search_id",
    "url"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GeniusLyricsProvider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x09,    1 /* Protected */,
       6,    3,   49,    2, 0x08,    4 /* Private */,
       6,    2,   56,    2, 0x28,    8 /* Private | MethodCloned */,
      10,    2,   61,    2, 0x08,   11 /* Private */,
      13,    3,   66,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    7,    8,    9,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    7,    8,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,    3,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, QMetaType::QUrl,   12,   14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject GeniusLyricsProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<JsonLyricsProvider::staticMetaObject>(),
    qt_meta_stringdata_GeniusLyricsProvider.offsetsAndSizes,
    qt_meta_data_GeniusLyricsProvider,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GeniusLyricsProvider_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GeniusLyricsProvider, std::true_type>,
        // method 'StartSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LyricsSearchRequest &, std::false_type>,
        // method 'OAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'OAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'HandleSearchReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'HandleLyricReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void GeniusLyricsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeniusLyricsProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StartSearch((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LyricsSearchRequest>>(_a[2]))); break;
        case 1: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 2: _t->OAuthFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->HandleSearchReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->HandleLyricReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LyricsSearchRequest >(); break;
            }
            break;
        }
    }
}

const QMetaObject *GeniusLyricsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeniusLyricsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeniusLyricsProvider.stringdata0))
        return static_cast<void*>(this);
    return JsonLyricsProvider::qt_metacast(_clname);
}

int GeniusLyricsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JsonLyricsProvider::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
