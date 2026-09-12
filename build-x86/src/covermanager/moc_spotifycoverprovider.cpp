/****************************************************************************
** Meta object code from reading C++ file 'spotifycoverprovider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covermanager/spotifycoverprovider.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spotifycoverprovider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SpotifyCoverProvider_t {
    uint offsetsAndSizes[14];
    char stringdata0[21];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[6];
    char stringdata5[3];
    char stringdata6[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SpotifyCoverProvider_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SpotifyCoverProvider_t qt_meta_stringdata_SpotifyCoverProvider = {
    {
        QT_MOC_LITERAL(0, 20),  // "SpotifyCoverProvider"
        QT_MOC_LITERAL(21, 17),  // "HandleSearchReply"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(55, 5),  // "reply"
        QT_MOC_LITERAL(61, 2),  // "id"
        QT_MOC_LITERAL(64, 7)   // "extract"
    },
    "SpotifyCoverProvider",
    "HandleSearchReply",
    "",
    "QNetworkReply*",
    "reply",
    "id",
    "extract"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SpotifyCoverProvider[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QString,    4,    5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject SpotifyCoverProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<JsonCoverProvider::staticMetaObject>(),
    qt_meta_stringdata_SpotifyCoverProvider.offsetsAndSizes,
    qt_meta_data_SpotifyCoverProvider,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SpotifyCoverProvider_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpotifyCoverProvider, std::true_type>,
        // method 'HandleSearchReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void SpotifyCoverProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpotifyCoverProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->HandleSearchReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *SpotifyCoverProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpotifyCoverProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpotifyCoverProvider.stringdata0))
        return static_cast<void*>(this);
    return JsonCoverProvider::qt_metacast(_clname);
}

int SpotifyCoverProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JsonCoverProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
