/****************************************************************************
** Meta object code from reading C++ file 'tidalurlhandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tidal/tidalurlhandler.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tidalurlhandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TidalUrlHandler_t {
    uint offsetsAndSizes[26];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[10];
    char stringdata5[6];
    char stringdata6[20];
    char stringdata7[11];
    char stringdata8[15];
    char stringdata9[9];
    char stringdata10[11];
    char stringdata11[10];
    char stringdata12[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TidalUrlHandler_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TidalUrlHandler_t qt_meta_stringdata_TidalUrlHandler = {
    {
        QT_MOC_LITERAL(0, 15),  // "TidalUrlHandler"
        QT_MOC_LITERAL(16, 19),  // "GetStreamURLFailure"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 2),  // "id"
        QT_MOC_LITERAL(40, 9),  // "media_url"
        QT_MOC_LITERAL(50, 5),  // "error"
        QT_MOC_LITERAL(56, 19),  // "GetStreamURLSuccess"
        QT_MOC_LITERAL(76, 10),  // "stream_url"
        QT_MOC_LITERAL(87, 14),  // "Song::FileType"
        QT_MOC_LITERAL(102, 8),  // "filetype"
        QT_MOC_LITERAL(111, 10),  // "samplerate"
        QT_MOC_LITERAL(122, 9),  // "bit_depth"
        QT_MOC_LITERAL(132, 8)   // "duration"
    },
    "TidalUrlHandler",
    "GetStreamURLFailure",
    "",
    "id",
    "media_url",
    "error",
    "GetStreamURLSuccess",
    "stream_url",
    "Song::FileType",
    "filetype",
    "samplerate",
    "bit_depth",
    "duration"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TidalUrlHandler[] = {

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
       1,    3,   26,    2, 0x08,    1 /* Private */,
       6,    7,   33,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QUrl, 0x80000000 | 8, QMetaType::Int, QMetaType::Int, QMetaType::LongLong,    3,    4,    7,    9,   10,   11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject TidalUrlHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<UrlHandler::staticMetaObject>(),
    qt_meta_stringdata_TidalUrlHandler.offsetsAndSizes,
    qt_meta_data_TidalUrlHandler,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TidalUrlHandler_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TidalUrlHandler, std::true_type>,
        // method 'GetStreamURLFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'GetStreamURLSuccess'
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

void TidalUrlHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TidalUrlHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->GetStreamURLFailure((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->GetStreamURLSuccess((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Song::FileType>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[7]))); break;
        default: ;
        }
    }
}

const QMetaObject *TidalUrlHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TidalUrlHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TidalUrlHandler.stringdata0))
        return static_cast<void*>(this);
    return UrlHandler::qt_metacast(_clname);
}

int TidalUrlHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UrlHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
