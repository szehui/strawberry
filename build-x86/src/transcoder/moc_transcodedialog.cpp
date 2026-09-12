/****************************************************************************
** Meta object code from reading C++ file 'transcodedialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/transcoder/transcodedialog.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transcodedialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TranscodeDialog_t {
    uint offsetsAndSizes[36];
    char stringdata0[16];
    char stringdata1[4];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[6];
    char stringdata9[7];
    char stringdata10[8];
    char stringdata11[16];
    char stringdata12[8];
    char stringdata13[8];
    char stringdata14[8];
    char stringdata15[15];
    char stringdata16[7];
    char stringdata17[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TranscodeDialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TranscodeDialog_t qt_meta_stringdata_TranscodeDialog = {
    {
        QT_MOC_LITERAL(0, 15),  // "TranscodeDialog"
        QT_MOC_LITERAL(16, 3),  // "Add"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 6),  // "Import"
        QT_MOC_LITERAL(28, 6),  // "Remove"
        QT_MOC_LITERAL(35, 5),  // "Start"
        QT_MOC_LITERAL(41, 6),  // "Cancel"
        QT_MOC_LITERAL(48, 11),  // "JobComplete"
        QT_MOC_LITERAL(60, 5),  // "input"
        QT_MOC_LITERAL(66, 6),  // "output"
        QT_MOC_LITERAL(73, 7),  // "success"
        QT_MOC_LITERAL(81, 15),  // "AllJobsComplete"
        QT_MOC_LITERAL(97, 7),  // "LogLine"
        QT_MOC_LITERAL(105, 7),  // "message"
        QT_MOC_LITERAL(113, 7),  // "Options"
        QT_MOC_LITERAL(121, 14),  // "AddDestination"
        QT_MOC_LITERAL(136, 6),  // "accept"
        QT_MOC_LITERAL(143, 6)   // "reject"
    },
    "TranscodeDialog",
    "Add",
    "",
    "Import",
    "Remove",
    "Start",
    "Cancel",
    "JobComplete",
    "input",
    "output",
    "success",
    "AllJobsComplete",
    "LogLine",
    "message",
    "Options",
    "AddDestination",
    "accept",
    "reject"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TranscodeDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    3,   91,    2, 0x08,    6 /* Private */,
      11,    0,   98,    2, 0x08,   10 /* Private */,
      12,    1,   99,    2, 0x08,   11 /* Private */,
      14,    0,  102,    2, 0x08,   13 /* Private */,
      15,    0,  103,    2, 0x08,   14 /* Private */,
      16,    0,  104,    2, 0x08,   15 /* Private */,
      17,    0,  105,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TranscodeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TranscodeDialog.offsetsAndSizes,
    qt_meta_data_TranscodeDialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TranscodeDialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TranscodeDialog, std::true_type>,
        // method 'Add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Import'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Remove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'JobComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'AllJobsComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LogLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Options'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddDestination'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TranscodeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TranscodeDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Add(); break;
        case 1: _t->Import(); break;
        case 2: _t->Remove(); break;
        case 3: _t->Start(); break;
        case 4: _t->Cancel(); break;
        case 5: _t->JobComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 6: _t->AllJobsComplete(); break;
        case 7: _t->LogLine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->Options(); break;
        case 9: _t->AddDestination(); break;
        case 10: _t->accept(); break;
        case 11: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject *TranscodeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TranscodeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TranscodeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TranscodeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
