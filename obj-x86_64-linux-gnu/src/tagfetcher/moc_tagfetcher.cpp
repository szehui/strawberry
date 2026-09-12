/****************************************************************************
** Meta object code from reading C++ file 'tagfetcher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tagfetcher/tagfetcher.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagfetcher.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TagFetcher_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[14];
    char stringdata5[6];
    char stringdata6[16];
    char stringdata7[9];
    char stringdata8[14];
    char stringdata9[6];
    char stringdata10[7];
    char stringdata11[17];
    char stringdata12[6];
    char stringdata13[11];
    char stringdata14[10];
    char stringdata15[12];
    char stringdata16[30];
    char stringdata17[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TagFetcher_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TagFetcher_t qt_meta_stringdata_TagFetcher = {
    {
        QT_MOC_LITERAL(0, 10),  // "TagFetcher"
        QT_MOC_LITERAL(11, 8),  // "Progress"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 4),  // "Song"
        QT_MOC_LITERAL(26, 13),  // "original_song"
        QT_MOC_LITERAL(40, 5),  // "stage"
        QT_MOC_LITERAL(46, 15),  // "ResultAvailable"
        QT_MOC_LITERAL(62, 8),  // "SongList"
        QT_MOC_LITERAL(71, 13),  // "songs_guessed"
        QT_MOC_LITERAL(85, 5),  // "error"
        QT_MOC_LITERAL(91, 6),  // "Cancel"
        QT_MOC_LITERAL(98, 16),  // "FingerprintFound"
        QT_MOC_LITERAL(115, 5),  // "index"
        QT_MOC_LITERAL(121, 10),  // "PuidsFound"
        QT_MOC_LITERAL(132, 9),  // "puid_list"
        QT_MOC_LITERAL(142, 11),  // "TagsFetched"
        QT_MOC_LITERAL(154, 29),  // "MusicBrainzClient::ResultList"
        QT_MOC_LITERAL(184, 7)   // "results"
    },
    "TagFetcher",
    "Progress",
    "",
    "Song",
    "original_song",
    "stage",
    "ResultAvailable",
    "SongList",
    "songs_guessed",
    "error",
    "Cancel",
    "FingerprintFound",
    "index",
    "PuidsFound",
    "puid_list",
    "TagsFetched",
    "MusicBrainzClient::ResultList",
    "results"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TagFetcher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x06,    1 /* Public */,
       6,    3,   73,    2, 0x06,    4 /* Public */,
       6,    2,   80,    2, 0x26,    8 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   85,    2, 0x0a,   11 /* Public */,
      11,    1,   86,    2, 0x08,   12 /* Private */,
      13,    3,   89,    2, 0x08,   14 /* Private */,
      13,    2,   96,    2, 0x28,   18 /* Private | MethodCloned */,
      15,    3,  101,    2, 0x08,   21 /* Private */,
      15,    2,  108,    2, 0x28,   25 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7, QMetaType::QString,    4,    8,    9,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList, QMetaType::QString,   12,   14,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,   12,   14,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 16, QMetaType::QString,   12,   17,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 16,   12,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject TagFetcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TagFetcher.offsetsAndSizes,
    qt_meta_data_TagFetcher,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TagFetcher_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TagFetcher, std::true_type>,
        // method 'Progress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ResultAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ResultAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'Cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FingerprintFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'PuidsFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'PuidsFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'TagsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MusicBrainzClient::ResultList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'TagsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MusicBrainzClient::ResultList &, std::false_type>
    >,
    nullptr
} };

void TagFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TagFetcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Progress((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->ResultAvailable((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->ResultAvailable((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2]))); break;
        case 3: _t->Cancel(); break;
        case 4: _t->FingerprintFound((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->PuidsFound((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->PuidsFound((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 7: _t->TagsFetched((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MusicBrainzClient::ResultList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->TagsFetched((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MusicBrainzClient::ResultList>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TagFetcher::*)(const Song & , const QString & );
            if (_t _q_method = &TagFetcher::Progress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TagFetcher::*)(const Song & , const SongList & , const QString & );
            if (_t _q_method = &TagFetcher::ResultAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *TagFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagFetcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TagFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TagFetcher::Progress(const Song & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TagFetcher::ResultAvailable(const Song & _t1, const SongList & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
