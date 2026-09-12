/****************************************************************************
** Meta object code from reading C++ file 'savedgroupingmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/collection/savedgroupingmanager.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savedgroupingmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SavedGroupingManager_t {
    uint offsetsAndSizes[10];
    char stringdata0[21];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SavedGroupingManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SavedGroupingManager_t qt_meta_stringdata_SavedGroupingManager = {
    {
        QT_MOC_LITERAL(0, 20),  // "SavedGroupingManager"
        QT_MOC_LITERAL(21, 20),  // "UpdateGroupByActions"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 17),  // "UpdateButtonState"
        QT_MOC_LITERAL(61, 6)   // "Remove"
    },
    "SavedGroupingManager",
    "UpdateGroupByActions",
    "",
    "UpdateButtonState",
    "Remove"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SavedGroupingManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SavedGroupingManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SavedGroupingManager.offsetsAndSizes,
    qt_meta_data_SavedGroupingManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SavedGroupingManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SavedGroupingManager, std::true_type>,
        // method 'UpdateGroupByActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateButtonState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Remove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SavedGroupingManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SavedGroupingManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateGroupByActions(); break;
        case 1: _t->UpdateButtonState(); break;
        case 2: _t->Remove(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SavedGroupingManager::*)();
            if (_t _q_method = &SavedGroupingManager::UpdateGroupByActions; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *SavedGroupingManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SavedGroupingManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SavedGroupingManager.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SavedGroupingManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SavedGroupingManager::UpdateGroupByActions()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
