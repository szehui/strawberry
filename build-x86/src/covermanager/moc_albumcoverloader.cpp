/****************************************************************************
** Meta object code from reading C++ file 'albumcoverloader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covermanager/albumcoverloader.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoverloader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AlbumCoverLoader_t {
    uint offsetsAndSizes[36];
    char stringdata0[17];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[3];
    char stringdata5[23];
    char stringdata6[7];
    char stringdata7[5];
    char stringdata8[18];
    char stringdata9[13];
    char stringdata10[24];
    char stringdata11[15];
    char stringdata12[6];
    char stringdata13[26];
    char stringdata14[5];
    char stringdata15[29];
    char stringdata16[12];
    char stringdata17[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AlbumCoverLoader_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AlbumCoverLoader_t qt_meta_stringdata_AlbumCoverLoader = {
    {
        QT_MOC_LITERAL(0, 16),  // "AlbumCoverLoader"
        QT_MOC_LITERAL(17, 12),  // "ExitFinished"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(48, 2),  // "id"
        QT_MOC_LITERAL(51, 22),  // "AlbumCoverLoaderResult"
        QT_MOC_LITERAL(74, 6),  // "result"
        QT_MOC_LITERAL(81, 4),  // "Exit"
        QT_MOC_LITERAL(86, 17),  // "StartProcessTasks"
        QT_MOC_LITERAL(104, 12),  // "ProcessTasks"
        QT_MOC_LITERAL(117, 23),  // "LoadRemoteImageFinished"
        QT_MOC_LITERAL(141, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(156, 5),  // "reply"
        QT_MOC_LITERAL(162, 25),  // "AlbumCoverLoader::TaskPtr"
        QT_MOC_LITERAL(188, 4),  // "task"
        QT_MOC_LITERAL(193, 28),  // "AlbumCoverLoaderResult::Type"
        QT_MOC_LITERAL(222, 11),  // "result_type"
        QT_MOC_LITERAL(234, 9)   // "cover_url"
    },
    "AlbumCoverLoader",
    "ExitFinished",
    "",
    "AlbumCoverLoaded",
    "id",
    "AlbumCoverLoaderResult",
    "result",
    "Exit",
    "StartProcessTasks",
    "ProcessTasks",
    "LoadRemoteImageFinished",
    "QNetworkReply*",
    "reply",
    "AlbumCoverLoader::TaskPtr",
    "task",
    "AlbumCoverLoaderResult::Type",
    "result_type",
    "cover_url"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AlbumCoverLoader[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    2,   51,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   56,    2, 0x08,    5 /* Private */,
       8,    0,   57,    2, 0x08,    6 /* Private */,
       9,    0,   58,    2, 0x08,    7 /* Private */,
      10,    4,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15, QMetaType::QUrl,   12,   14,   16,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject AlbumCoverLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AlbumCoverLoader.offsetsAndSizes,
    qt_meta_data_AlbumCoverLoader,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AlbumCoverLoader_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AlbumCoverLoader, std::true_type>,
        // method 'ExitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverLoaderResult &, std::false_type>,
        // method 'Exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StartProcessTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ProcessTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoadRemoteImageFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<AlbumCoverLoader::TaskPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverLoaderResult::Type, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void AlbumCoverLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumCoverLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ExitFinished(); break;
        case 1: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult>>(_a[2]))); break;
        case 2: _t->Exit(); break;
        case 3: _t->StartProcessTasks(); break;
        case 4: _t->ProcessTasks(); break;
        case 5: _t->LoadRemoteImageFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoader::TaskPtr>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult::Type>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
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
            using _t = void (AlbumCoverLoader::*)();
            if (_t _q_method = &AlbumCoverLoader::ExitFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AlbumCoverLoader::*)(const quint64 , const AlbumCoverLoaderResult & );
            if (_t _q_method = &AlbumCoverLoader::AlbumCoverLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AlbumCoverLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumCoverLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AlbumCoverLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AlbumCoverLoader::ExitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AlbumCoverLoader::AlbumCoverLoaded(const quint64 _t1, const AlbumCoverLoaderResult & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
