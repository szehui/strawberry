/****************************************************************************
** Meta object code from reading C++ file 'rainbowanalyzer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/analyzer/rainbowanalyzer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rainbowanalyzer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_RainbowAnalyzer_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RainbowAnalyzer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RainbowAnalyzer_t qt_meta_stringdata_RainbowAnalyzer = {
    {
        QT_MOC_LITERAL(0, 15)   // "RainbowAnalyzer"
    },
    "RainbowAnalyzer"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RainbowAnalyzer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject RainbowAnalyzer::staticMetaObject = { {
    QMetaObject::SuperData::link<AnalyzerBase::staticMetaObject>(),
    qt_meta_stringdata_RainbowAnalyzer.offsetsAndSizes,
    qt_meta_data_RainbowAnalyzer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RainbowAnalyzer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RainbowAnalyzer, std::true_type>
    >,
    nullptr
} };

void RainbowAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *RainbowAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RainbowAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RainbowAnalyzer.stringdata0))
        return static_cast<void*>(this);
    return AnalyzerBase::qt_metacast(_clname);
}

int RainbowAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnalyzerBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_NyanCatAnalyzer_t {
    uint offsetsAndSizes[8];
    char stringdata0[16];
    char stringdata1[1];
    char stringdata2[9];
    char stringdata3[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_NyanCatAnalyzer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_NyanCatAnalyzer_t qt_meta_stringdata_NyanCatAnalyzer = {
    {
        QT_MOC_LITERAL(0, 15),  // "NyanCatAnalyzer"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 8),  // "QWidget*"
        QT_MOC_LITERAL(26, 6)   // "parent"
    },
    "NyanCatAnalyzer",
    "",
    "QWidget*",
    "parent"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_NyanCatAnalyzer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   17, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   14,    1, 0x0e,    1 /* Public */,

       0        // eod
};

Q_CONSTINIT const QMetaObject NyanCatAnalyzer::staticMetaObject = { {
    QMetaObject::SuperData::link<RainbowAnalyzer::staticMetaObject>(),
    qt_meta_stringdata_NyanCatAnalyzer.offsetsAndSizes,
    qt_meta_data_NyanCatAnalyzer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_NyanCatAnalyzer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NyanCatAnalyzer, std::true_type>,
        // constructor 'NyanCatAnalyzer'
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void NyanCatAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { NyanCatAnalyzer *_r = new NyanCatAnalyzer((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    (void)_o;
}

const QMetaObject *NyanCatAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NyanCatAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NyanCatAnalyzer.stringdata0))
        return static_cast<void*>(this);
    return RainbowAnalyzer::qt_metacast(_clname);
}

int NyanCatAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RainbowAnalyzer::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_RainbowDashAnalyzer_t {
    uint offsetsAndSizes[8];
    char stringdata0[20];
    char stringdata1[1];
    char stringdata2[9];
    char stringdata3[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RainbowDashAnalyzer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RainbowDashAnalyzer_t qt_meta_stringdata_RainbowDashAnalyzer = {
    {
        QT_MOC_LITERAL(0, 19),  // "RainbowDashAnalyzer"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 8),  // "QWidget*"
        QT_MOC_LITERAL(30, 6)   // "parent"
    },
    "RainbowDashAnalyzer",
    "",
    "QWidget*",
    "parent"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RainbowDashAnalyzer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   17, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   14,    1, 0x0e,    1 /* Public */,

       0        // eod
};

Q_CONSTINIT const QMetaObject RainbowDashAnalyzer::staticMetaObject = { {
    QMetaObject::SuperData::link<RainbowAnalyzer::staticMetaObject>(),
    qt_meta_stringdata_RainbowDashAnalyzer.offsetsAndSizes,
    qt_meta_data_RainbowDashAnalyzer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RainbowDashAnalyzer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RainbowDashAnalyzer, std::true_type>,
        // constructor 'RainbowDashAnalyzer'
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void RainbowDashAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { RainbowDashAnalyzer *_r = new RainbowDashAnalyzer((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    (void)_o;
}

const QMetaObject *RainbowDashAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RainbowDashAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RainbowDashAnalyzer.stringdata0))
        return static_cast<void*>(this);
    return RainbowAnalyzer::qt_metacast(_clname);
}

int RainbowDashAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RainbowAnalyzer::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
