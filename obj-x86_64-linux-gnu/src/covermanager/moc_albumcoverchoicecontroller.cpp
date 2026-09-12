/****************************************************************************
** Meta object code from reading C++ file 'albumcoverchoicecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covermanager/albumcoverchoicecontroller.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoverchoicecontroller.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AlbumCoverChoiceController_t {
    uint offsetsAndSizes[38];
    char stringdata0[27];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[25];
    char stringdata5[33];
    char stringdata6[6];
    char stringdata7[18];
    char stringdata8[3];
    char stringdata9[22];
    char stringdata10[7];
    char stringdata11[22];
    char stringdata12[11];
    char stringdata13[26];
    char stringdata14[18];
    char stringdata15[6];
    char stringdata16[5];
    char stringdata17[5];
    char stringdata18[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AlbumCoverChoiceController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AlbumCoverChoiceController_t qt_meta_stringdata_AlbumCoverChoiceController = {
    {
        QT_MOC_LITERAL(0, 26),  // "AlbumCoverChoiceController"
        QT_MOC_LITERAL(27, 5),  // "Error"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 5),  // "error"
        QT_MOC_LITERAL(40, 24),  // "AutomaticCoverSearchDone"
        QT_MOC_LITERAL(65, 32),  // "set_save_embedded_cover_override"
        QT_MOC_LITERAL(98, 5),  // "value"
        QT_MOC_LITERAL(104, 17),  // "AlbumCoverFetched"
        QT_MOC_LITERAL(122, 2),  // "id"
        QT_MOC_LITERAL(125, 21),  // "AlbumCoverImageResult"
        QT_MOC_LITERAL(147, 6),  // "result"
        QT_MOC_LITERAL(154, 21),  // "CoverSearchStatistics"
        QT_MOC_LITERAL(176, 10),  // "statistics"
        QT_MOC_LITERAL(187, 25),  // "SaveEmbeddedCoverFinished"
        QT_MOC_LITERAL(213, 17),  // "TagReaderReplyPtr"
        QT_MOC_LITERAL(231, 5),  // "reply"
        QT_MOC_LITERAL(237, 4),  // "Song"
        QT_MOC_LITERAL(242, 4),  // "song"
        QT_MOC_LITERAL(247, 12)   // "art_embedded"
    },
    "AlbumCoverChoiceController",
    "Error",
    "",
    "error",
    "AutomaticCoverSearchDone",
    "set_save_embedded_cover_override",
    "value",
    "AlbumCoverFetched",
    "id",
    "AlbumCoverImageResult",
    "result",
    "CoverSearchStatistics",
    "statistics",
    "SaveEmbeddedCoverFinished",
    "TagReaderReplyPtr",
    "reply",
    "Song",
    "song",
    "art_embedded"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AlbumCoverChoiceController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    0,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   48,    2, 0x0a,    4 /* Public */,
       7,    3,   51,    2, 0x08,    6 /* Private */,
      13,    3,   58,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 9, 0x80000000 | 11,    8,   10,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, QMetaType::Bool,   15,   17,   18,

       0        // eod
};

Q_CONSTINIT const QMetaObject AlbumCoverChoiceController::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AlbumCoverChoiceController.offsetsAndSizes,
    qt_meta_data_AlbumCoverChoiceController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AlbumCoverChoiceController_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AlbumCoverChoiceController, std::true_type>,
        // method 'Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AutomaticCoverSearchDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_save_embedded_cover_override'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'AlbumCoverFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverImageResult &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const CoverSearchStatistics &, std::false_type>,
        // method 'SaveEmbeddedCoverFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TagReaderReplyPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<Song, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>
    >,
    nullptr
} };

void AlbumCoverChoiceController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumCoverChoiceController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->AutomaticCoverSearchDone(); break;
        case 2: _t->set_save_embedded_cover_override((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->AlbumCoverFetched((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverImageResult>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<CoverSearchStatistics>>(_a[3]))); break;
        case 4: _t->SaveEmbeddedCoverFinished((*reinterpret_cast< std::add_pointer_t<TagReaderReplyPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Song>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AlbumCoverImageResult >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlbumCoverChoiceController::*)(const QString & );
            if (_t _q_method = &AlbumCoverChoiceController::Error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AlbumCoverChoiceController::*)();
            if (_t _q_method = &AlbumCoverChoiceController::AutomaticCoverSearchDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AlbumCoverChoiceController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumCoverChoiceController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverChoiceController.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AlbumCoverChoiceController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AlbumCoverChoiceController::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AlbumCoverChoiceController::AutomaticCoverSearchDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
