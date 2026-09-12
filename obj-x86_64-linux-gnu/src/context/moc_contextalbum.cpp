/****************************************************************************
** Meta object code from reading C++ file 'contextalbum.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/context/contextalbum.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contextalbum.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ContextAlbum_t {
    uint offsetsAndSizes[26];
    char stringdata0[13];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[25];
    char stringdata5[17];
    char stringdata6[6];
    char stringdata7[25];
    char stringdata8[18];
    char stringdata9[39];
    char stringdata10[15];
    char stringdata11[26];
    char stringdata12[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ContextAlbum_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ContextAlbum_t qt_meta_stringdata_ContextAlbum = {
    {
        QT_MOC_LITERAL(0, 12),  // "ContextAlbum"
        QT_MOC_LITERAL(13, 16),  // "FadeStopFinished"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 6),  // "Update"
        QT_MOC_LITERAL(38, 24),  // "AutomaticCoverSearchDone"
        QT_MOC_LITERAL(63, 16),  // "FadeCurrentCover"
        QT_MOC_LITERAL(80, 5),  // "value"
        QT_MOC_LITERAL(86, 24),  // "FadeCurrentCoverFinished"
        QT_MOC_LITERAL(111, 17),  // "FadePreviousCover"
        QT_MOC_LITERAL(129, 38),  // "SharedPtr<ContextAlbum::Previ..."
        QT_MOC_LITERAL(168, 14),  // "previous_cover"
        QT_MOC_LITERAL(183, 25),  // "FadePreviousCoverFinished"
        QT_MOC_LITERAL(209, 21)   // "SearchCoverInProgress"
    },
    "ContextAlbum",
    "FadeStopFinished",
    "",
    "Update",
    "AutomaticCoverSearchDone",
    "FadeCurrentCover",
    "value",
    "FadeCurrentCoverFinished",
    "FadePreviousCover",
    "SharedPtr<ContextAlbum::PreviousCover>",
    "previous_cover",
    "FadePreviousCoverFinished",
    "SearchCoverInProgress"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ContextAlbum[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    1,   65,    2, 0x08,    4 /* Private */,
       7,    0,   68,    2, 0x08,    6 /* Private */,
       8,    1,   69,    2, 0x08,    7 /* Private */,
      11,    1,   72,    2, 0x08,    9 /* Private */,
      12,    0,   75,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ContextAlbum::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ContextAlbum.offsetsAndSizes,
    qt_meta_data_ContextAlbum,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ContextAlbum_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ContextAlbum, std::true_type>,
        // method 'FadeStopFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AutomaticCoverSearchDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FadeCurrentCover'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qreal, std::false_type>,
        // method 'FadeCurrentCoverFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FadePreviousCover'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SharedPtr<ContextAlbum::PreviousCover>, std::false_type>,
        // method 'FadePreviousCoverFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SharedPtr<ContextAlbum::PreviousCover>, std::false_type>,
        // method 'SearchCoverInProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ContextAlbum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContextAlbum *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->FadeStopFinished(); break;
        case 1: _t->Update(); break;
        case 2: _t->AutomaticCoverSearchDone(); break;
        case 3: _t->FadeCurrentCover((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 4: _t->FadeCurrentCoverFinished(); break;
        case 5: _t->FadePreviousCover((*reinterpret_cast< std::add_pointer_t<SharedPtr<ContextAlbum::PreviousCover>>>(_a[1]))); break;
        case 6: _t->FadePreviousCoverFinished((*reinterpret_cast< std::add_pointer_t<SharedPtr<ContextAlbum::PreviousCover>>>(_a[1]))); break;
        case 7: _t->SearchCoverInProgress(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContextAlbum::*)();
            if (_t _q_method = &ContextAlbum::FadeStopFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ContextAlbum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContextAlbum::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContextAlbum.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ContextAlbum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ContextAlbum::FadeStopFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
