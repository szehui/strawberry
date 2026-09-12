/****************************************************************************
** Meta object code from reading C++ file 'lrcliblyricsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/lyrics/lrcliblyricsprovider.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lrcliblyricsprovider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LrcLibLyricsProvider_t {
    uint offsetsAndSizes[18];
    char stringdata0[21];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[20];
    char stringdata5[8];
    char stringdata6[18];
    char stringdata7[15];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LrcLibLyricsProvider_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LrcLibLyricsProvider_t qt_meta_stringdata_LrcLibLyricsProvider = {
    {
        QT_MOC_LITERAL(0, 20),  // "LrcLibLyricsProvider"
        QT_MOC_LITERAL(21, 11),  // "StartSearch"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 2),  // "id"
        QT_MOC_LITERAL(37, 19),  // "LyricsSearchRequest"
        QT_MOC_LITERAL(57, 7),  // "request"
        QT_MOC_LITERAL(65, 17),  // "HandleSearchReply"
        QT_MOC_LITERAL(83, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(98, 5)   // "reply"
    },
    "LrcLibLyricsProvider",
    "StartSearch",
    "",
    "id",
    "LyricsSearchRequest",
    "request",
    "HandleSearchReply",
    "QNetworkReply*",
    "reply"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LrcLibLyricsProvider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x09,    1 /* Protected */,
       6,    3,   31,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, 0x80000000 | 4,    8,    3,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject LrcLibLyricsProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<JsonLyricsProvider::staticMetaObject>(),
    qt_meta_stringdata_LrcLibLyricsProvider.offsetsAndSizes,
    qt_meta_data_LrcLibLyricsProvider,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LrcLibLyricsProvider_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LrcLibLyricsProvider, std::true_type>,
        // method 'StartSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LyricsSearchRequest &, std::false_type>,
        // method 'HandleSearchReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LyricsSearchRequest &, std::false_type>
    >,
    nullptr
} };

void LrcLibLyricsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LrcLibLyricsProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StartSearch((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LyricsSearchRequest>>(_a[2]))); break;
        case 1: _t->HandleSearchReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<LyricsSearchRequest>>(_a[3]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LyricsSearchRequest >(); break;
            }
            break;
        }
    }
}

const QMetaObject *LrcLibLyricsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LrcLibLyricsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LrcLibLyricsProvider.stringdata0))
        return static_cast<void*>(this);
    return JsonLyricsProvider::qt_metacast(_clname);
}

int LrcLibLyricsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JsonLyricsProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
