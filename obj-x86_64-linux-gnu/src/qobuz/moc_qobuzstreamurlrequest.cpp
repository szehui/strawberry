/****************************************************************************
** Meta object code from reading C++ file 'qobuzstreamurlrequest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/qobuz/qobuzstreamurlrequest.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qobuzstreamurlrequest.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QobuzStreamURLRequest_t {
    uint offsetsAndSizes[28];
    char stringdata0[22];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[10];
    char stringdata5[6];
    char stringdata6[17];
    char stringdata7[11];
    char stringdata8[15];
    char stringdata9[9];
    char stringdata10[11];
    char stringdata11[10];
    char stringdata12[9];
    char stringdata13[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QobuzStreamURLRequest_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QobuzStreamURLRequest_t qt_meta_stringdata_QobuzStreamURLRequest = {
    {
        QT_MOC_LITERAL(0, 21),  // "QobuzStreamURLRequest"
        QT_MOC_LITERAL(22, 16),  // "StreamURLFailure"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 2),  // "id"
        QT_MOC_LITERAL(43, 9),  // "media_url"
        QT_MOC_LITERAL(53, 5),  // "error"
        QT_MOC_LITERAL(59, 16),  // "StreamURLSuccess"
        QT_MOC_LITERAL(76, 10),  // "stream_url"
        QT_MOC_LITERAL(87, 14),  // "Song::FileType"
        QT_MOC_LITERAL(102, 8),  // "filetype"
        QT_MOC_LITERAL(111, 10),  // "samplerate"
        QT_MOC_LITERAL(122, 9),  // "bit_depth"
        QT_MOC_LITERAL(132, 8),  // "duration"
        QT_MOC_LITERAL(141, 17)   // "StreamURLReceived"
    },
    "QobuzStreamURLRequest",
    "StreamURLFailure",
    "",
    "id",
    "media_url",
    "error",
    "StreamURLSuccess",
    "stream_url",
    "Song::FileType",
    "filetype",
    "samplerate",
    "bit_depth",
    "duration",
    "StreamURLReceived"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QobuzStreamURLRequest[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   32,    2, 0x06,    1 /* Public */,
       6,    7,   39,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,   54,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::QUrl, QMetaType::QUrl, 0x80000000 | 8, QMetaType::Int, QMetaType::Int, QMetaType::LongLong,    3,    4,    7,    9,   10,   11,   12,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QobuzStreamURLRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<QobuzBaseRequest::staticMetaObject>(),
    qt_meta_stringdata_QobuzStreamURLRequest.offsetsAndSizes,
    qt_meta_data_QobuzStreamURLRequest,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QobuzStreamURLRequest_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QobuzStreamURLRequest, std::true_type>,
        // method 'StreamURLFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'StreamURLSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song::FileType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>,
        // method 'StreamURLReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QobuzStreamURLRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QobuzStreamURLRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StreamURLFailure((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->StreamURLSuccess((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Song::FileType>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[7]))); break;
        case 2: _t->StreamURLReceived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QobuzStreamURLRequest::*)(const uint , const QUrl & , const QString & );
            if (_t _q_method = &QobuzStreamURLRequest::StreamURLFailure; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QobuzStreamURLRequest::*)(const uint , const QUrl & , const QUrl & , const Song::FileType , const int , const int , const qint64 );
            if (_t _q_method = &QobuzStreamURLRequest::StreamURLSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QobuzStreamURLRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QobuzStreamURLRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QobuzStreamURLRequest.stringdata0))
        return static_cast<void*>(this);
    return QobuzBaseRequest::qt_metacast(_clname);
}

int QobuzStreamURLRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QobuzBaseRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QobuzStreamURLRequest::StreamURLFailure(const uint _t1, const QUrl & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QobuzStreamURLRequest::StreamURLSuccess(const uint _t1, const QUrl & _t2, const QUrl & _t3, const Song::FileType _t4, const int _t5, const int _t6, const qint64 _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
