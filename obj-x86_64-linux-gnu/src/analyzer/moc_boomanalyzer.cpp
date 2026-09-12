/****************************************************************************
** Meta object code from reading C++ file 'boomanalyzer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/analyzer/boomanalyzer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boomanalyzer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BoomAnalyzer_t {
    uint offsetsAndSizes[14];
    char stringdata0[13];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[18];
    char stringdata5[9];
    char stringdata6[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BoomAnalyzer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BoomAnalyzer_t qt_meta_stringdata_BoomAnalyzer = {
    {
        QT_MOC_LITERAL(0, 12),  // "BoomAnalyzer"
        QT_MOC_LITERAL(13, 17),  // "changeK_barHeight"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 9),  // "new_value"
        QT_MOC_LITERAL(42, 17),  // "changeF_peakSpeed"
        QT_MOC_LITERAL(60, 8),  // "QWidget*"
        QT_MOC_LITERAL(69, 6)   // "parent"
    },
    "BoomAnalyzer",
    "changeK_barHeight",
    "",
    "new_value",
    "changeF_peakSpeed",
    "QWidget*",
    "parent"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BoomAnalyzer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   35, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 5,    6,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   32,    2, 0x0e,    5 /* Public */,

       0        // eod
};

Q_CONSTINIT const QMetaObject BoomAnalyzer::staticMetaObject = { {
    QMetaObject::SuperData::link<AnalyzerBase::staticMetaObject>(),
    qt_meta_stringdata_BoomAnalyzer.offsetsAndSizes,
    qt_meta_data_BoomAnalyzer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BoomAnalyzer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoomAnalyzer, std::true_type>,
        // method 'changeK_barHeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'changeF_peakSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // constructor 'BoomAnalyzer'
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void BoomAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { BoomAnalyzer *_r = new BoomAnalyzer((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoomAnalyzer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeK_barHeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->changeF_peakSpeed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *BoomAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoomAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoomAnalyzer.stringdata0))
        return static_cast<void*>(this);
    return AnalyzerBase::qt_metacast(_clname);
}

int BoomAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnalyzerBase::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
