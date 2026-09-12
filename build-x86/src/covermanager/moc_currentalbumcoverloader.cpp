/****************************************************************************
** Meta object code from reading C++ file 'currentalbumcoverloader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covermanager/currentalbumcoverloader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentalbumcoverloader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CurrentAlbumCoverLoader_t {
    uint offsetsAndSizes[28];
    char stringdata0[24];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[5];
    char stringdata5[23];
    char stringdata6[7];
    char stringdata7[16];
    char stringdata8[14];
    char stringdata9[6];
    char stringdata10[15];
    char stringdata11[15];
    char stringdata12[16];
    char stringdata13[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CurrentAlbumCoverLoader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CurrentAlbumCoverLoader_t qt_meta_stringdata_CurrentAlbumCoverLoader = {
    {
        QT_MOC_LITERAL(0, 23),  // "CurrentAlbumCoverLoader"
        QT_MOC_LITERAL(24, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 4),  // "Song"
        QT_MOC_LITERAL(47, 4),  // "song"
        QT_MOC_LITERAL(52, 22),  // "AlbumCoverLoaderResult"
        QT_MOC_LITERAL(75, 6),  // "result"
        QT_MOC_LITERAL(82, 15),  // "ThumbnailLoaded"
        QT_MOC_LITERAL(98, 13),  // "thumbnail_uri"
        QT_MOC_LITERAL(112, 5),  // "image"
        QT_MOC_LITERAL(118, 14),  // "ReloadSettings"
        QT_MOC_LITERAL(133, 14),  // "LoadAlbumCover"
        QT_MOC_LITERAL(148, 15),  // "AlbumCoverReady"
        QT_MOC_LITERAL(164, 2)   // "id"
    },
    "CurrentAlbumCoverLoader",
    "AlbumCoverLoaded",
    "",
    "Song",
    "song",
    "AlbumCoverLoaderResult",
    "result",
    "ThumbnailLoaded",
    "thumbnail_uri",
    "image",
    "ReloadSettings",
    "LoadAlbumCover",
    "AlbumCoverReady",
    "id"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CurrentAlbumCoverLoader[] = {

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
       7,    3,   49,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   56,    2, 0x0a,    8 /* Public */,
      11,    1,   57,    2, 0x0a,    9 /* Public */,
      12,    2,   60,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QUrl, QMetaType::QImage,    4,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 5,   13,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject CurrentAlbumCoverLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CurrentAlbumCoverLoader.offsetsAndSizes,
    qt_meta_data_CurrentAlbumCoverLoader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CurrentAlbumCoverLoader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CurrentAlbumCoverLoader, std::true_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverLoaderResult &, std::false_type>,
        // method 'ThumbnailLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        // method 'ReloadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadAlbumCover'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'AlbumCoverReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<AlbumCoverLoaderResult, std::false_type>
    >,
    nullptr
} };

void CurrentAlbumCoverLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurrentAlbumCoverLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult>>(_a[2]))); break;
        case 1: _t->ThumbnailLoaded((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[3]))); break;
        case 2: _t->ReloadSettings(); break;
        case 3: _t->LoadAlbumCover((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 4: _t->AlbumCoverReady((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AlbumCoverLoaderResult >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AlbumCoverLoaderResult >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CurrentAlbumCoverLoader::*)(const Song & , const AlbumCoverLoaderResult & );
            if (_t _q_method = &CurrentAlbumCoverLoader::AlbumCoverLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CurrentAlbumCoverLoader::*)(const Song & , const QUrl & , const QImage & );
            if (_t _q_method = &CurrentAlbumCoverLoader::ThumbnailLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *CurrentAlbumCoverLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurrentAlbumCoverLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurrentAlbumCoverLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CurrentAlbumCoverLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CurrentAlbumCoverLoader::AlbumCoverLoaded(const Song & _t1, const AlbumCoverLoaderResult & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CurrentAlbumCoverLoader::ThumbnailLoaded(const Song & _t1, const QUrl & _t2, const QImage & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
