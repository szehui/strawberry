/****************************************************************************
** Meta object code from reading C++ file 'radiobrowsersearchview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/radios/radiobrowsersearchview.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radiobrowsersearchview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_RadioBrowserSearchView_t {
    uint offsetsAndSizes[52];
    char stringdata0[23];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[9];
    char stringdata5[12];
    char stringdata6[5];
    char stringdata7[16];
    char stringdata8[15];
    char stringdata9[17];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[12];
    char stringdata13[6];
    char stringdata14[9];
    char stringdata15[15];
    char stringdata16[6];
    char stringdata17[12];
    char stringdata18[16];
    char stringdata19[34];
    char stringdata20[10];
    char stringdata21[22];
    char stringdata22[18];
    char stringdata23[12];
    char stringdata24[16];
    char stringdata25[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RadioBrowserSearchView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RadioBrowserSearchView_t qt_meta_stringdata_RadioBrowserSearchView = {
    {
        QT_MOC_LITERAL(0, 22),  // "RadioBrowserSearchView"
        QT_MOC_LITERAL(23, 13),  // "AddToPlaylist"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 10),  // "QMimeData*"
        QT_MOC_LITERAL(49, 8),  // "mimedata"
        QT_MOC_LITERAL(58, 11),  // "TextChanged"
        QT_MOC_LITERAL(70, 4),  // "text"
        QT_MOC_LITERAL(75, 15),  // "SearchTriggered"
        QT_MOC_LITERAL(91, 14),  // "SearchFinished"
        QT_MOC_LITERAL(106, 16),  // "RadioChannelList"
        QT_MOC_LITERAL(123, 8),  // "channels"
        QT_MOC_LITERAL(132, 8),  // "has_more"
        QT_MOC_LITERAL(141, 11),  // "SearchError"
        QT_MOC_LITERAL(153, 5),  // "error"
        QT_MOC_LITERAL(159, 8),  // "LoadMore"
        QT_MOC_LITERAL(168, 14),  // "CountryChanged"
        QT_MOC_LITERAL(183, 5),  // "index"
        QT_MOC_LITERAL(189, 11),  // "SortChanged"
        QT_MOC_LITERAL(201, 15),  // "CountriesLoaded"
        QT_MOC_LITERAL(217, 33),  // "QList<std::pair<QString,QStri..."
        QT_MOC_LITERAL(251, 9),  // "countries"
        QT_MOC_LITERAL(261, 21),  // "AddSelectedToPlaylist"
        QT_MOC_LITERAL(283, 17),  // "ItemDoubleClicked"
        QT_MOC_LITERAL(301, 11),  // "QModelIndex"
        QT_MOC_LITERAL(313, 15),  // "ShowContextMenu"
        QT_MOC_LITERAL(329, 3)   // "pos"
    },
    "RadioBrowserSearchView",
    "AddToPlaylist",
    "",
    "QMimeData*",
    "mimedata",
    "TextChanged",
    "text",
    "SearchTriggered",
    "SearchFinished",
    "RadioChannelList",
    "channels",
    "has_more",
    "SearchError",
    "error",
    "LoadMore",
    "CountryChanged",
    "index",
    "SortChanged",
    "CountriesLoaded",
    "QList<std::pair<QString,QString>>",
    "countries",
    "AddSelectedToPlaylist",
    "ItemDoubleClicked",
    "QModelIndex",
    "ShowContextMenu",
    "pos"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RadioBrowserSearchView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   89,    2, 0x08,    3 /* Private */,
       7,    0,   92,    2, 0x08,    5 /* Private */,
       8,    2,   93,    2, 0x08,    6 /* Private */,
      12,    1,   98,    2, 0x08,    9 /* Private */,
      14,    0,  101,    2, 0x08,   11 /* Private */,
      15,    1,  102,    2, 0x08,   12 /* Private */,
      17,    1,  105,    2, 0x08,   14 /* Private */,
      18,    1,  108,    2, 0x08,   16 /* Private */,
      21,    0,  111,    2, 0x08,   18 /* Private */,
      22,    1,  112,    2, 0x08,   19 /* Private */,
      24,    1,  115,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   16,
    QMetaType::Void, QMetaType::QPoint,   25,

       0        // eod
};

Q_CONSTINIT const QMetaObject RadioBrowserSearchView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RadioBrowserSearchView.offsetsAndSizes,
    qt_meta_data_RadioBrowserSearchView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RadioBrowserSearchView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RadioBrowserSearchView, std::true_type>,
        // method 'AddToPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMimeData *, std::false_type>,
        // method 'TextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SearchTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SearchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const RadioChannelList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SearchError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LoadMore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CountryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'SortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'CountriesLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPair<QString,QString>> &, std::false_type>,
        // method 'AddSelectedToPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ItemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'ShowContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>
    >,
    nullptr
} };

void RadioBrowserSearchView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioBrowserSearchView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AddToPlaylist((*reinterpret_cast< std::add_pointer_t<QMimeData*>>(_a[1]))); break;
        case 1: _t->TextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->SearchTriggered(); break;
        case 3: _t->SearchFinished((*reinterpret_cast< std::add_pointer_t<RadioChannelList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->SearchError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->LoadMore(); break;
        case 6: _t->CountryChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->SortChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->CountriesLoaded((*reinterpret_cast< std::add_pointer_t<QList<std::pair<QString,QString>>>>(_a[1]))); break;
        case 9: _t->AddSelectedToPlaylist(); break;
        case 10: _t->ItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 11: _t->ShowContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< RadioChannelList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RadioBrowserSearchView::*)(QMimeData * );
            if (_t _q_method = &RadioBrowserSearchView::AddToPlaylist; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *RadioBrowserSearchView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioBrowserSearchView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioBrowserSearchView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RadioBrowserSearchView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void RadioBrowserSearchView::AddToPlaylist(QMimeData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
