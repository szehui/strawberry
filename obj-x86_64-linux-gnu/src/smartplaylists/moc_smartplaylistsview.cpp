/****************************************************************************
** Meta object code from reading C++ file 'smartplaylistsview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/smartplaylists/smartplaylistsview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartplaylistsview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SmartPlaylistsView_t {
    uint offsetsAndSizes[14];
    char stringdata0[19];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[11];
    char stringdata5[12];
    char stringdata6[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SmartPlaylistsView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SmartPlaylistsView_t qt_meta_stringdata_SmartPlaylistsView = {
    {
        QT_MOC_LITERAL(0, 18),  // "SmartPlaylistsView"
        QT_MOC_LITERAL(19, 20),  // "ItemsSelectedChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 28),  // "ShowSmartPlaylistContextMenu"
        QT_MOC_LITERAL(70, 10),  // "global_pos"
        QT_MOC_LITERAL(81, 11),  // "QModelIndex"
        QT_MOC_LITERAL(93, 3)   // "idx"
    },
    "SmartPlaylistsView",
    "ItemsSelectedChanged",
    "",
    "ShowSmartPlaylistContextMenu",
    "global_pos",
    "QModelIndex",
    "idx"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SmartPlaylistsView[] = {

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
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    2,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 5,    4,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject SmartPlaylistsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_SmartPlaylistsView.offsetsAndSizes,
    qt_meta_data_SmartPlaylistsView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SmartPlaylistsView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SmartPlaylistsView, std::true_type>,
        // method 'ItemsSelectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowSmartPlaylistContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>
    >,
    nullptr
} };

void SmartPlaylistsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SmartPlaylistsView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ItemsSelectedChanged(); break;
        case 1: _t->ShowSmartPlaylistContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SmartPlaylistsView::*)();
            if (_t _q_method = &SmartPlaylistsView::ItemsSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SmartPlaylistsView::*)(const QPoint , const QModelIndex );
            if (_t _q_method = &SmartPlaylistsView::ShowSmartPlaylistContextMenu; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *SmartPlaylistsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartPlaylistsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SmartPlaylistsView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int SmartPlaylistsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
void SmartPlaylistsView::ItemsSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SmartPlaylistsView::ShowSmartPlaylistContextMenu(const QPoint _t1, const QModelIndex _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
