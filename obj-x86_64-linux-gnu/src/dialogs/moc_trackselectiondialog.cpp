/****************************************************************************
** Meta object code from reading C++ file 'trackselectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/dialogs/trackselectiondialog.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackselectiondialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TrackSelectionDialog_t {
    uint offsetsAndSizes[38];
    char stringdata0[21];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[11];
    char stringdata5[5];
    char stringdata6[14];
    char stringdata7[13];
    char stringdata8[17];
    char stringdata9[9];
    char stringdata10[17];
    char stringdata11[9];
    char stringdata12[14];
    char stringdata13[7];
    char stringdata14[12];
    char stringdata15[9];
    char stringdata16[13];
    char stringdata17[15];
    char stringdata18[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TrackSelectionDialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TrackSelectionDialog_t qt_meta_stringdata_TrackSelectionDialog = {
    {
        QT_MOC_LITERAL(0, 20),  // "TrackSelectionDialog"
        QT_MOC_LITERAL(21, 5),  // "Error"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 5),  // "error"
        QT_MOC_LITERAL(34, 10),  // "SongChosen"
        QT_MOC_LITERAL(45, 4),  // "Song"
        QT_MOC_LITERAL(50, 13),  // "original_song"
        QT_MOC_LITERAL(64, 12),  // "new_metadata"
        QT_MOC_LITERAL(77, 16),  // "FetchTagProgress"
        QT_MOC_LITERAL(94, 8),  // "progress"
        QT_MOC_LITERAL(103, 16),  // "FetchTagFinished"
        QT_MOC_LITERAL(120, 8),  // "SongList"
        QT_MOC_LITERAL(129, 13),  // "songs_guessed"
        QT_MOC_LITERAL(143, 6),  // "accept"
        QT_MOC_LITERAL(150, 11),  // "UpdateStack"
        QT_MOC_LITERAL(162, 8),  // "NextSong"
        QT_MOC_LITERAL(171, 12),  // "PreviousSong"
        QT_MOC_LITERAL(184, 14),  // "ResultSelected"
        QT_MOC_LITERAL(199, 14)   // "AcceptFinished"
    },
    "TrackSelectionDialog",
    "Error",
    "",
    "error",
    "SongChosen",
    "Song",
    "original_song",
    "new_metadata",
    "FetchTagProgress",
    "progress",
    "FetchTagFinished",
    "SongList",
    "songs_guessed",
    "accept",
    "UpdateStack",
    "NextSong",
    "PreviousSong",
    "ResultSelected",
    "AcceptFinished"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TrackSelectionDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       4,    2,   83,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   88,    2, 0x0a,    6 /* Public */,
      10,    3,   93,    2, 0x0a,    9 /* Public */,
      10,    2,  100,    2, 0x2a,   13 /* Public | MethodCloned */,
      13,    0,  105,    2, 0x0a,   16 /* Public */,
      14,    0,  106,    2, 0x08,   17 /* Private */,
      15,    0,  107,    2, 0x08,   18 /* Private */,
      16,    0,  108,    2, 0x08,   19 /* Private */,
      17,    0,  109,    2, 0x08,   20 /* Private */,
      18,    0,  110,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    9,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 11, QMetaType::QString,    6,   12,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 11,    6,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TrackSelectionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TrackSelectionDialog.offsetsAndSizes,
    qt_meta_data_TrackSelectionDialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TrackSelectionDialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TrackSelectionDialog, std::true_type>,
        // method 'Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SongChosen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'FetchTagProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'FetchTagFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'FetchTagFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongList &, std::false_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateStack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NextSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PreviousSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResultSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AcceptFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TrackSelectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackSelectionDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->SongChosen((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Song>>(_a[2]))); break;
        case 2: _t->FetchTagProgress((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->FetchTagFinished((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->FetchTagFinished((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SongList>>(_a[2]))); break;
        case 5: _t->accept(); break;
        case 6: _t->UpdateStack(); break;
        case 7: _t->NextSong(); break;
        case 8: _t->PreviousSong(); break;
        case 9: _t->ResultSelected(); break;
        case 10: _t->AcceptFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackSelectionDialog::*)(const QString & );
            if (_t _q_method = &TrackSelectionDialog::Error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackSelectionDialog::*)(const Song & , const Song & );
            if (_t _q_method = &TrackSelectionDialog::SongChosen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *TrackSelectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackSelectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackSelectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TrackSelectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void TrackSelectionDialog::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrackSelectionDialog::SongChosen(const Song & _t1, const Song & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
