/****************************************************************************
** Meta object code from reading C++ file 'blockanalyzer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/analyzer/blockanalyzer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blockanalyzer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BlockAnalyzer_t {
    uint offsetsAndSizes[8];
    char stringdata0[14];
    char stringdata1[1];
    char stringdata2[9];
    char stringdata3[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BlockAnalyzer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BlockAnalyzer_t qt_meta_stringdata_BlockAnalyzer = {
    {
        QT_MOC_LITERAL(0, 13),  // "BlockAnalyzer"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 8),  // "QWidget*"
        QT_MOC_LITERAL(24, 6)   // "parent"
    },
    "BlockAnalyzer",
    "",
    "QWidget*",
    "parent"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BlockAnalyzer[] = {

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

Q_CONSTINIT const QMetaObject BlockAnalyzer::staticMetaObject = { {
    QMetaObject::SuperData::link<AnalyzerBase::staticMetaObject>(),
    qt_meta_stringdata_BlockAnalyzer.offsetsAndSizes,
    qt_meta_data_BlockAnalyzer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BlockAnalyzer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BlockAnalyzer, std::true_type>,
        // constructor 'BlockAnalyzer'
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void BlockAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { BlockAnalyzer *_r = new BlockAnalyzer((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    (void)_o;
}

const QMetaObject *BlockAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlockAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlockAnalyzer.stringdata0))
        return static_cast<void*>(this);
    return AnalyzerBase::qt_metacast(_clname);
}

int BlockAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnalyzerBase::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
