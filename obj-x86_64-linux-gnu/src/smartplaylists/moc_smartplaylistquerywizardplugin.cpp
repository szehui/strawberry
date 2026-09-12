/****************************************************************************
** Meta object code from reading C++ file 'smartplaylistquerywizardplugin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/smartplaylists/smartplaylistquerywizardplugin.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartplaylistquerywizardplugin.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SmartPlaylistQueryWizardPlugin_t {
    uint offsetsAndSizes[22];
    char stringdata0[31];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[17];
    char stringdata5[18];
    char stringdata6[18];
    char stringdata7[16];
    char stringdata8[21];
    char stringdata9[4];
    char stringdata10[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SmartPlaylistQueryWizardPlugin_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SmartPlaylistQueryWizardPlugin_t qt_meta_stringdata_SmartPlaylistQueryWizardPlugin = {
    {
        QT_MOC_LITERAL(0, 30),  // "SmartPlaylistQueryWizardPlugin"
        QT_MOC_LITERAL(31, 17),  // "UpdateSortPreview"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 13),  // "AddSearchTerm"
        QT_MOC_LITERAL(64, 16),  // "RemoveSearchTerm"
        QT_MOC_LITERAL(81, 17),  // "SearchTypeChanged"
        QT_MOC_LITERAL(99, 17),  // "UpdateTermPreview"
        QT_MOC_LITERAL(117, 15),  // "UpdateSortOrder"
        QT_MOC_LITERAL(133, 20),  // "MoveTermListToBottom"
        QT_MOC_LITERAL(154, 3),  // "min"
        QT_MOC_LITERAL(158, 3)   // "max"
    },
    "SmartPlaylistQueryWizardPlugin",
    "UpdateSortPreview",
    "",
    "AddSearchTerm",
    "RemoveSearchTerm",
    "SearchTypeChanged",
    "UpdateTermPreview",
    "UpdateSortOrder",
    "MoveTermListToBottom",
    "min",
    "max"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SmartPlaylistQueryWizardPlugin[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    2,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject SmartPlaylistQueryWizardPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<SmartPlaylistWizardPlugin::staticMetaObject>(),
    qt_meta_stringdata_SmartPlaylistQueryWizardPlugin.offsetsAndSizes,
    qt_meta_data_SmartPlaylistQueryWizardPlugin,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SmartPlaylistQueryWizardPlugin_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SmartPlaylistQueryWizardPlugin, std::true_type>,
        // method 'UpdateSortPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddSearchTerm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveSearchTerm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SearchTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateTermPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateSortOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MoveTermListToBottom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void SmartPlaylistQueryWizardPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SmartPlaylistQueryWizardPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateSortPreview(); break;
        case 1: _t->AddSearchTerm(); break;
        case 2: _t->RemoveSearchTerm(); break;
        case 3: _t->SearchTypeChanged(); break;
        case 4: _t->UpdateTermPreview(); break;
        case 5: _t->UpdateSortOrder(); break;
        case 6: _t->MoveTermListToBottom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *SmartPlaylistQueryWizardPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartPlaylistQueryWizardPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SmartPlaylistQueryWizardPlugin.stringdata0))
        return static_cast<void*>(this);
    return SmartPlaylistWizardPlugin::qt_metacast(_clname);
}

int SmartPlaylistQueryWizardPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SmartPlaylistWizardPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
