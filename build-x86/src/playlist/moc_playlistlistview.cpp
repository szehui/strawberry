/****************************************************************************
** Meta object code from reading C++ file 'playlistlistview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistlistview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistlistview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlaylistListView_t {
    uint offsetsAndSizes[16];
    char stringdata0[17];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[12];
    char stringdata5[10];
    char stringdata6[17];
    char stringdata7[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaylistListView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaylistListView_t qt_meta_stringdata_PlaylistListView = {
    {
        QT_MOC_LITERAL(0, 16),  // "PlaylistListView"
        QT_MOC_LITERAL(17, 20),  // "ItemsSelectedChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 25),  // "ItemMimeDataDroppedSignal"
        QT_MOC_LITERAL(65, 11),  // "QModelIndex"
        QT_MOC_LITERAL(77, 9),  // "proxy_idx"
        QT_MOC_LITERAL(87, 16),  // "const QMimeData*"
        QT_MOC_LITERAL(104, 10)   // "q_mimedata"
    },
    "PlaylistListView",
    "ItemsSelectedChanged",
    "",
    "ItemMimeDataDroppedSignal",
    "QModelIndex",
    "proxy_idx",
    "const QMimeData*",
    "q_mimedata"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaylistListView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       3,    2,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistListView::staticMetaObject = { {
    QMetaObject::SuperData::link<AutoExpandingTreeView::staticMetaObject>(),
    qt_meta_stringdata_PlaylistListView.offsetsAndSizes,
    qt_meta_data_PlaylistListView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaylistListView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistListView, std::true_type>,
        // method 'ItemsSelectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ItemMimeDataDroppedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMimeData *, std::false_type>
    >,
    nullptr
} };

void PlaylistListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ItemsSelectedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->ItemMimeDataDroppedSignal((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const QMimeData*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaylistListView::*)(const bool );
            if (_t _q_method = &PlaylistListView::ItemsSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaylistListView::*)(const QModelIndex & , const QMimeData * );
            if (_t _q_method = &PlaylistListView::ItemMimeDataDroppedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *PlaylistListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistListView.stringdata0))
        return static_cast<void*>(this);
    return AutoExpandingTreeView::qt_metacast(_clname);
}

int PlaylistListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AutoExpandingTreeView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PlaylistListView::ItemsSelectedChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistListView::ItemMimeDataDroppedSignal(const QModelIndex & _t1, const QMimeData * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
