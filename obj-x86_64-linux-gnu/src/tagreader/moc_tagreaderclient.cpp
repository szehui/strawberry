/****************************************************************************
** Meta object code from reading C++ file 'tagreaderclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tagreader/tagreaderclient.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagreaderclient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TagReaderClient_t {
    uint offsetsAndSizes[18];
    char stringdata0[16];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[16];
    char stringdata5[24];
    char stringdata6[9];
    char stringdata7[6];
    char stringdata8[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TagReaderClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TagReaderClient_t qt_meta_stringdata_TagReaderClient = {
    {
        QT_MOC_LITERAL(0, 15),  // "TagReaderClient"
        QT_MOC_LITERAL(16, 12),  // "ExitFinished"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 4),  // "Exit"
        QT_MOC_LITERAL(35, 15),  // "ProcessRequests"
        QT_MOC_LITERAL(51, 23),  // "SaveSongsPlaycountAsync"
        QT_MOC_LITERAL(75, 8),  // "SongList"
        QT_MOC_LITERAL(84, 5),  // "songs"
        QT_MOC_LITERAL(90, 20)   // "SaveSongsRatingAsync"
    },
    "TagReaderClient",
    "ExitFinished",
    "",
    "Exit",
    "ProcessRequests",
    "SaveSongsPlaycountAsync",
    "SongList",
    "songs",
    "SaveSongsRatingAsync"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TagReaderClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    1,   47,    2, 0x0a,    4 /* Public */,
       8,    1,   50,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject TagReaderClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TagReaderClient.offsetsAndSizes,
    qt_meta_data_TagReaderClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TagReaderClient_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TagReaderClient, std::true_type>,
        // method 'ExitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ProcessRequests'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveSongsPlaycountAsync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'SaveSongsRatingAsync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>
    >,
    nullptr
} };

void TagReaderClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TagReaderClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ExitFinished(); break;
        case 1: _t->Exit(); break;
        case 2: _t->ProcessRequests(); break;
        case 3: _t->SaveSongsPlaycountAsync((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        case 4: _t->SaveSongsRatingAsync((*reinterpret_cast< std::add_pointer_t<SongList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TagReaderClient::*)();
            if (_t _q_method = &TagReaderClient::ExitFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TagReaderClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagReaderClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagReaderClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TagReaderClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TagReaderClient::ExitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
