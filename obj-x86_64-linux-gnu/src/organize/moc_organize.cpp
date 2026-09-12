/****************************************************************************
** Meta object code from reading C++ file 'organize.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/organize/organize.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'organize.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Organize_t {
    uint offsetsAndSizes[42];
    char stringdata0[9];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[4];
    char stringdata5[11];
    char stringdata6[12];
    char stringdata7[16];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[10];
    char stringdata11[9];
    char stringdata12[19];
    char stringdata13[28];
    char stringdata14[17];
    char stringdata15[15];
    char stringdata16[6];
    char stringdata17[7];
    char stringdata18[8];
    char stringdata19[8];
    char stringdata20[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Organize_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Organize_t qt_meta_stringdata_Organize = {
    {
        QT_MOC_LITERAL(0, 8),  // "Organize"
        QT_MOC_LITERAL(9, 8),  // "Finished"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 17),  // "files_with_errors"
        QT_MOC_LITERAL(37, 3),  // "log"
        QT_MOC_LITERAL(41, 10),  // "FileCopied"
        QT_MOC_LITERAL(52, 11),  // "database_id"
        QT_MOC_LITERAL(64, 15),  // "SongPathChanged"
        QT_MOC_LITERAL(80, 4),  // "Song"
        QT_MOC_LITERAL(85, 4),  // "song"
        QT_MOC_LITERAL(90, 9),  // "QFileInfo"
        QT_MOC_LITERAL(100, 8),  // "new_file"
        QT_MOC_LITERAL(109, 18),  // "std::optional<int>"
        QT_MOC_LITERAL(128, 27),  // "new_collection_directory_id"
        QT_MOC_LITERAL(156, 16),  // "ProcessSomeFiles"
        QT_MOC_LITERAL(173, 14),  // "FileTranscoded"
        QT_MOC_LITERAL(188, 5),  // "input"
        QT_MOC_LITERAL(194, 6),  // "output"
        QT_MOC_LITERAL(201, 7),  // "success"
        QT_MOC_LITERAL(209, 7),  // "LogLine"
        QT_MOC_LITERAL(217, 7)   // "message"
    },
    "Organize",
    "Finished",
    "",
    "files_with_errors",
    "log",
    "FileCopied",
    "database_id",
    "SongPathChanged",
    "Song",
    "song",
    "QFileInfo",
    "new_file",
    "std::optional<int>",
    "new_collection_directory_id",
    "ProcessSomeFiles",
    "FileTranscoded",
    "input",
    "output",
    "success",
    "LogLine",
    "message"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Organize[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       5,    1,   55,    2, 0x06,    4 /* Public */,
       7,    3,   58,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,   65,    2, 0x08,   10 /* Private */,
      15,    3,   66,    2, 0x08,   11 /* Private */,
      19,    1,   73,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   16,   17,   18,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject Organize::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Organize.offsetsAndSizes,
    qt_meta_data_Organize,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Organize_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Organize, std::true_type>,
        // method 'Finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'FileCopied'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SongPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFileInfo &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::optional<int>, std::false_type>,
        // method 'ProcessSomeFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FileTranscoded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'LogLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Organize::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Organize *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Finished((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 1: _t->FileCopied((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->SongPathChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFileInfo>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::optional<int>>>(_a[3]))); break;
        case 3: _t->ProcessSomeFiles(); break;
        case 4: _t->FileTranscoded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 5: _t->LogLine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Organize::*)(const QStringList & , const QStringList & );
            if (_t _q_method = &Organize::Finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Organize::*)(const int );
            if (_t _q_method = &Organize::FileCopied; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Organize::*)(const Song & , const QFileInfo & , const std::optional<int> );
            if (_t _q_method = &Organize::SongPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Organize::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Organize::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Organize.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Organize::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Organize::Finished(const QStringList & _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Organize::FileCopied(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Organize::SongPathChanged(const Song & _t1, const QFileInfo & _t2, const std::optional<int> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
