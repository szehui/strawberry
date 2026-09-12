/****************************************************************************
** Meta object code from reading C++ file 'analyzercontainer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/analyzer/analyzercontainer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analyzercontainer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AnalyzerContainer_t {
    uint offsetsAndSizes[20];
    char stringdata0[18];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[15];
    char stringdata5[3];
    char stringdata6[16];
    char stringdata7[14];
    char stringdata8[16];
    char stringdata9[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AnalyzerContainer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AnalyzerContainer_t qt_meta_stringdata_AnalyzerContainer = {
    {
        QT_MOC_LITERAL(0, 17),  // "AnalyzerContainer"
        QT_MOC_LITERAL(18, 10),  // "WheelEvent"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 5),  // "delta"
        QT_MOC_LITERAL(36, 14),  // "ChangeAnalyzer"
        QT_MOC_LITERAL(51, 2),  // "id"
        QT_MOC_LITERAL(54, 15),  // "ChangeFramerate"
        QT_MOC_LITERAL(70, 13),  // "new_framerate"
        QT_MOC_LITERAL(84, 15),  // "DisableAnalyzer"
        QT_MOC_LITERAL(100, 13)   // "ShowPopupMenu"
    },
    "AnalyzerContainer",
    "WheelEvent",
    "",
    "delta",
    "ChangeAnalyzer",
    "id",
    "ChangeFramerate",
    "new_framerate",
    "DisableAnalyzer",
    "ShowPopupMenu"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AnalyzerContainer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   47,    2, 0x08,    3 /* Private */,
       6,    1,   50,    2, 0x08,    5 /* Private */,
       8,    0,   53,    2, 0x08,    7 /* Private */,
       9,    0,   54,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AnalyzerContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AnalyzerContainer.offsetsAndSizes,
    qt_meta_data_AnalyzerContainer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AnalyzerContainer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AnalyzerContainer, std::true_type>,
        // method 'WheelEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ChangeAnalyzer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'ChangeFramerate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'DisableAnalyzer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowPopupMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AnalyzerContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnalyzerContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->WheelEvent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->ChangeAnalyzer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->ChangeFramerate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->DisableAnalyzer(); break;
        case 4: _t->ShowPopupMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnalyzerContainer::*)(const int );
            if (_t _q_method = &AnalyzerContainer::WheelEvent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *AnalyzerContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalyzerContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnalyzerContainer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AnalyzerContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AnalyzerContainer::WheelEvent(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
