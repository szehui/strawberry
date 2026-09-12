/****************************************************************************
** Meta object code from reading C++ file 'musicbrainzclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tagfetcher/musicbrainzclient.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicbrainzclient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MusicBrainzClient_t {
    uint offsetsAndSizes[32];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[30];
    char stringdata5[7];
    char stringdata6[6];
    char stringdata7[15];
    char stringdata8[8];
    char stringdata9[14];
    char stringdata10[20];
    char stringdata11[15];
    char stringdata12[6];
    char stringdata13[15];
    char stringdata14[5];
    char stringdata15[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MusicBrainzClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MusicBrainzClient_t qt_meta_stringdata_MusicBrainzClient = {
    {
        QT_MOC_LITERAL(0, 17),  // "MusicBrainzClient"
        QT_MOC_LITERAL(18, 12),  // "MbIdFinished"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 2),  // "id"
        QT_MOC_LITERAL(35, 29),  // "MusicBrainzClient::ResultList"
        QT_MOC_LITERAL(65, 6),  // "result"
        QT_MOC_LITERAL(72, 5),  // "error"
        QT_MOC_LITERAL(78, 14),  // "DiscIdFinished"
        QT_MOC_LITERAL(93, 7),  // "disc_id"
        QT_MOC_LITERAL(101, 13),  // "FlushRequests"
        QT_MOC_LITERAL(115, 19),  // "MbIdRequestFinished"
        QT_MOC_LITERAL(135, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(150, 5),  // "reply"
        QT_MOC_LITERAL(156, 14),  // "request_number"
        QT_MOC_LITERAL(171, 4),  // "mbid"
        QT_MOC_LITERAL(176, 21)   // "DiscIdRequestFinished"
    },
    "MusicBrainzClient",
    "MbIdFinished",
    "",
    "id",
    "MusicBrainzClient::ResultList",
    "result",
    "error",
    "DiscIdFinished",
    "disc_id",
    "FlushRequests",
    "MbIdRequestFinished",
    "QNetworkReply*",
    "reply",
    "request_number",
    "mbid",
    "DiscIdRequestFinished"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MusicBrainzClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   56,    2, 0x06,    1 /* Public */,
       1,    2,   63,    2, 0x26,    5 /* Public | MethodCloned */,
       7,    3,   68,    2, 0x06,    8 /* Public */,
       7,    2,   75,    2, 0x26,   12 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   80,    2, 0x08,   15 /* Private */,
      10,    4,   81,    2, 0x08,   16 /* Private */,
      15,    2,   90,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::QString,    3,    5,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::QString,    8,    5,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    8,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, QMetaType::Int, QMetaType::QString,   12,    3,   13,   14,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    8,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject MusicBrainzClient::staticMetaObject = { {
    QMetaObject::SuperData::link<JsonBaseRequest::staticMetaObject>(),
    qt_meta_stringdata_MusicBrainzClient.offsetsAndSizes,
    qt_meta_data_MusicBrainzClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MusicBrainzClient_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MusicBrainzClient, std::true_type>,
        // method 'MbIdFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MusicBrainzClient::ResultList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'MbIdFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MusicBrainzClient::ResultList &, std::false_type>,
        // method 'DiscIdFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MusicBrainzClient::ResultList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DiscIdFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MusicBrainzClient::ResultList &, std::false_type>,
        // method 'FlushRequests'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MbIdRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DiscIdRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>
    >,
    nullptr
} };

void MusicBrainzClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MusicBrainzClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->MbIdFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MusicBrainzClient::ResultList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->MbIdFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MusicBrainzClient::ResultList>>(_a[2]))); break;
        case 2: _t->DiscIdFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MusicBrainzClient::ResultList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: _t->DiscIdFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MusicBrainzClient::ResultList>>(_a[2]))); break;
        case 4: _t->FlushRequests(); break;
        case 5: _t->MbIdRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 6: _t->DiscIdRequestFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MusicBrainzClient::*)(const int , const MusicBrainzClient::ResultList & , const QString & );
            if (_t _q_method = &MusicBrainzClient::MbIdFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MusicBrainzClient::*)(const QString & , const MusicBrainzClient::ResultList & , const QString & );
            if (_t _q_method = &MusicBrainzClient::DiscIdFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *MusicBrainzClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicBrainzClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MusicBrainzClient.stringdata0))
        return static_cast<void*>(this);
    return JsonBaseRequest::qt_metacast(_clname);
}

int MusicBrainzClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JsonBaseRequest::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MusicBrainzClient::MbIdFinished(const int _t1, const MusicBrainzClient::ResultList & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void MusicBrainzClient::DiscIdFinished(const QString & _t1, const MusicBrainzClient::ResultList & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
