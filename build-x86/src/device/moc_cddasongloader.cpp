/****************************************************************************
** Meta object code from reading C++ file 'cddasongloader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/cddasongloader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cddasongloader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CDDASongLoader_t {
    uint offsetsAndSizes[24];
    char stringdata0[15];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[6];
    char stringdata5[13];
    char stringdata6[10];
    char stringdata7[6];
    char stringdata8[16];
    char stringdata9[24];
    char stringdata10[19];
    char stringdata11[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CDDASongLoader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CDDASongLoader_t qt_meta_stringdata_CDDASongLoader = {
    {
        QT_MOC_LITERAL(0, 14),  // "CDDASongLoader"
        QT_MOC_LITERAL(15, 11),  // "SongsLoaded"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 8),  // "SongList"
        QT_MOC_LITERAL(37, 5),  // "songs"
        QT_MOC_LITERAL(43, 12),  // "SongsUpdated"
        QT_MOC_LITERAL(56, 9),  // "LoadError"
        QT_MOC_LITERAL(66, 5),  // "error"
        QT_MOC_LITERAL(72, 15),  // "LoadingFinished"
        QT_MOC_LITERAL(88, 23),  // "LoadTagsFromMusicBrainz"
        QT_MOC_LITERAL(112, 18),  // "musicbrainz_discid"
        QT_MOC_LITERAL(131, 14)   // "QMap<int,Song>"
    },
    "CDDASongLoader",
    "SongsLoaded",
    "",
    "SongList",
    "songs",
    "SongsUpdated",
    "LoadError",
    "error",
    "LoadingFinished",
    "LoadTagsFromMusicBrainz",
    "musicbrainz_discid",
    "QMap<int,Song>"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CDDASongLoader[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    1,   47,    2, 0x06,    3 /* Public */,
       6,    1,   50,    2, 0x06,    5 /* Public */,
       8,    0,   53,    2, 0x06,    7 /* Public */,
       9,    2,   54,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,   10,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject CDDASongLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CDDASongLoader.offsetsAndSizes,
    qt_meta_data_CDDASongLoader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CDDASongLoader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CDDASongLoader, std::true_type>,
        // method 'SongsLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SongsUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'LoadError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LoadingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadTagsFromMusicBrainz'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<int,Song> &, std::false_type>
    >,
    nullptr
} };

void CDDASongLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDDASongLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SongsLoaded((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 1: _t->SongsUpdated((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 2: _t->LoadError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->LoadingFinished(); break;
        case 4: _t->LoadTagsFromMusicBrainz((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<int,Song>>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDDASongLoader::*)(const SongList & );
            if (_t _q_method = &CDDASongLoader::SongsLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CDDASongLoader::*)(const SongList & );
            if (_t _q_method = &CDDASongLoader::SongsUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CDDASongLoader::*)(const QString & );
            if (_t _q_method = &CDDASongLoader::LoadError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CDDASongLoader::*)();
            if (_t _q_method = &CDDASongLoader::LoadingFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CDDASongLoader::*)(const QString & , const QMap<int,Song> & );
            if (_t _q_method = &CDDASongLoader::LoadTagsFromMusicBrainz; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *CDDASongLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDDASongLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CDDASongLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CDDASongLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CDDASongLoader::SongsLoaded(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CDDASongLoader::SongsUpdated(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CDDASongLoader::LoadError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CDDASongLoader::LoadingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CDDASongLoader::LoadTagsFromMusicBrainz(const QString & _t1, const QMap<int,Song> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
