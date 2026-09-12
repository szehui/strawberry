/****************************************************************************
** Meta object code from reading C++ file 'playingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/playingwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playingwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlayingWidget_t {
    uint offsetsAndSizes[50];
    char stringdata0[14];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[8];
    char stringdata5[8];
    char stringdata6[6];
    char stringdata7[12];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[22];
    char stringdata11[17];
    char stringdata12[6];
    char stringdata13[7];
    char stringdata14[8];
    char stringdata15[20];
    char stringdata16[5];
    char stringdata17[19];
    char stringdata18[14];
    char stringdata19[4];
    char stringdata20[25];
    char stringdata21[10];
    char stringdata22[7];
    char stringdata23[18];
    char stringdata24[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlayingWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlayingWidget_t qt_meta_stringdata_PlayingWidget = {
    {
        QT_MOC_LITERAL(0, 13),  // "PlayingWidget"
        QT_MOC_LITERAL(14, 25),  // "ShowAboveStatusBarChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 5),  // "above"
        QT_MOC_LITERAL(47, 7),  // "Playing"
        QT_MOC_LITERAL(55, 7),  // "Stopped"
        QT_MOC_LITERAL(63, 5),  // "Error"
        QT_MOC_LITERAL(69, 11),  // "SongChanged"
        QT_MOC_LITERAL(81, 4),  // "Song"
        QT_MOC_LITERAL(86, 4),  // "song"
        QT_MOC_LITERAL(91, 21),  // "SearchCoverInProgress"
        QT_MOC_LITERAL(113, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(130, 5),  // "image"
        QT_MOC_LITERAL(136, 6),  // "Update"
        QT_MOC_LITERAL(143, 7),  // "SetMode"
        QT_MOC_LITERAL(151, 19),  // "PlayingWidget::Mode"
        QT_MOC_LITERAL(171, 4),  // "mode"
        QT_MOC_LITERAL(176, 18),  // "ShowAboveStatusBar"
        QT_MOC_LITERAL(195, 13),  // "FitCoverWidth"
        QT_MOC_LITERAL(209, 3),  // "fit"
        QT_MOC_LITERAL(213, 24),  // "AutomaticCoverSearchDone"
        QT_MOC_LITERAL(238, 9),  // "SetHeight"
        QT_MOC_LITERAL(248, 6),  // "height"
        QT_MOC_LITERAL(255, 17),  // "FadePreviousTrack"
        QT_MOC_LITERAL(273, 5)   // "value"
    },
    "PlayingWidget",
    "ShowAboveStatusBarChanged",
    "",
    "above",
    "Playing",
    "Stopped",
    "Error",
    "SongChanged",
    "Song",
    "song",
    "SearchCoverInProgress",
    "AlbumCoverLoaded",
    "image",
    "Update",
    "SetMode",
    "PlayingWidget::Mode",
    "mode",
    "ShowAboveStatusBar",
    "FitCoverWidth",
    "fit",
    "AutomaticCoverSearchDone",
    "SetHeight",
    "height",
    "FadePreviousTrack",
    "value"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlayingWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  101,    2, 0x0a,    3 /* Public */,
       5,    0,  102,    2, 0x0a,    4 /* Public */,
       6,    0,  103,    2, 0x0a,    5 /* Public */,
       7,    1,  104,    2, 0x0a,    6 /* Public */,
      10,    0,  107,    2, 0x0a,    8 /* Public */,
      11,    2,  108,    2, 0x0a,    9 /* Public */,
      13,    0,  113,    2, 0x08,   12 /* Private */,
      14,    1,  114,    2, 0x08,   13 /* Private */,
      17,    1,  117,    2, 0x08,   15 /* Private */,
      18,    1,  120,    2, 0x08,   17 /* Private */,
      20,    0,  123,    2, 0x08,   19 /* Private */,
      21,    1,  124,    2, 0x08,   20 /* Private */,
      23,    1,  127,    2, 0x08,   22 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QImage,    9,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::QReal,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlayingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PlayingWidget.offsetsAndSizes,
    qt_meta_data_PlayingWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlayingWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlayingWidget, std::true_type>,
        // method 'ShowAboveStatusBarChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'Playing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Stopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SongChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'SearchCoverInProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        // method 'Update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PlayingWidget::Mode, std::false_type>,
        // method 'ShowAboveStatusBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'FitCoverWidth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'AutomaticCoverSearchDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetHeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'FadePreviousTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qreal, std::false_type>
    >,
    nullptr
} };

void PlayingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayingWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ShowAboveStatusBarChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->Playing(); break;
        case 2: _t->Stopped(); break;
        case 3: _t->Error(); break;
        case 4: _t->SongChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 5: _t->SearchCoverInProgress(); break;
        case 6: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[2]))); break;
        case 7: _t->Update(); break;
        case 8: _t->SetMode((*reinterpret_cast< std::add_pointer_t<PlayingWidget::Mode>>(_a[1]))); break;
        case 9: _t->ShowAboveStatusBar((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->FitCoverWidth((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->AutomaticCoverSearchDone(); break;
        case 12: _t->SetHeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->FadePreviousTrack((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlayingWidget::*)(const bool );
            if (_t _q_method = &PlayingWidget::ShowAboveStatusBarChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PlayingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayingWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlayingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void PlayingWidget::ShowAboveStatusBarChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
