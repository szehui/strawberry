/****************************************************************************
** Meta object code from reading C++ file 'streamingsongsview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/streaming/streamingsongsview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamingsongsview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_StreamingSongsView_t {
    uint offsetsAndSizes[26];
    char stringdata0[19];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[19];
    char stringdata5[13];
    char stringdata6[7];
    char stringdata7[10];
    char stringdata8[9];
    char stringdata9[14];
    char stringdata10[14];
    char stringdata11[8];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_StreamingSongsView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_StreamingSongsView_t qt_meta_stringdata_StreamingSongsView = {
    {
        QT_MOC_LITERAL(0, 18),  // "StreamingSongsView"
        QT_MOC_LITERAL(19, 15),  // "ShowErrorDialog"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 5),  // "error"
        QT_MOC_LITERAL(42, 18),  // "OpenSettingsDialog"
        QT_MOC_LITERAL(61, 12),  // "Song::Source"
        QT_MOC_LITERAL(74, 6),  // "source"
        QT_MOC_LITERAL(81, 9),  // "Configure"
        QT_MOC_LITERAL(91, 8),  // "GetSongs"
        QT_MOC_LITERAL(100, 13),  // "AbortGetSongs"
        QT_MOC_LITERAL(114, 13),  // "SongsFinished"
        QT_MOC_LITERAL(128, 7),  // "SongMap"
        QT_MOC_LITERAL(136, 5)   // "songs"
    },
    "StreamingSongsView",
    "ShowErrorDialog",
    "",
    "error",
    "OpenSettingsDialog",
    "Song::Source",
    "source",
    "Configure",
    "GetSongs",
    "AbortGetSongs",
    "SongsFinished",
    "SongMap",
    "songs"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_StreamingSongsView[] = {

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
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   56,    2, 0x08,    5 /* Private */,
       8,    0,   57,    2, 0x08,    6 /* Private */,
       9,    0,   58,    2, 0x08,    7 /* Private */,
      10,    2,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject StreamingSongsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_StreamingSongsView.offsetsAndSizes,
    qt_meta_data_StreamingSongsView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_StreamingSongsView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StreamingSongsView, std::true_type>,
        // method 'ShowErrorDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'OpenSettingsDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song::Source, std::false_type>,
        // method 'Configure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AbortGetSongs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SongsFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SongMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void StreamingSongsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StreamingSongsView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ShowErrorDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->OpenSettingsDialog((*reinterpret_cast< std::add_pointer_t<Song::Source>>(_a[1]))); break;
        case 2: _t->Configure(); break;
        case 3: _t->GetSongs(); break;
        case 4: _t->AbortGetSongs(); break;
        case 5: _t->SongsFinished((*reinterpret_cast< std::add_pointer_t<SongMap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StreamingSongsView::*)(const QString & );
            if (_t _q_method = &StreamingSongsView::ShowErrorDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StreamingSongsView::*)(const Song::Source );
            if (_t _q_method = &StreamingSongsView::OpenSettingsDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *StreamingSongsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamingSongsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamingSongsView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StreamingSongsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void StreamingSongsView::ShowErrorDialog(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StreamingSongsView::OpenSettingsDialog(const Song::Source _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
