/****************************************************************************
** Meta object code from reading C++ file 'scrobblersettingsservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scrobbler/scrobblersettingsservice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrobblersettingsservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ScrobblerSettingsService_t {
    uint offsetsAndSizes[24];
    char stringdata0[25];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[25];
    char stringdata5[6];
    char stringdata6[25];
    char stringdata7[32];
    char stringdata8[28];
    char stringdata9[17];
    char stringdata10[14];
    char stringdata11[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ScrobblerSettingsService_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ScrobblerSettingsService_t qt_meta_stringdata_ScrobblerSettingsService = {
    {
        QT_MOC_LITERAL(0, 24),  // "ScrobblerSettingsService"
        QT_MOC_LITERAL(25, 12),  // "ErrorMessage"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 5),  // "error"
        QT_MOC_LITERAL(45, 24),  // "ScrobblingEnabledChanged"
        QT_MOC_LITERAL(70, 5),  // "value"
        QT_MOC_LITERAL(76, 24),  // "ScrobblingOfflineChanged"
        QT_MOC_LITERAL(101, 31),  // "ScrobbleButtonVisibilityChanged"
        QT_MOC_LITERAL(133, 27),  // "LoveButtonVisibilityChanged"
        QT_MOC_LITERAL(161, 16),  // "ToggleScrobbling"
        QT_MOC_LITERAL(178, 13),  // "ToggleOffline"
        QT_MOC_LITERAL(192, 13)   // "ErrorReceived"
    },
    "ScrobblerSettingsService",
    "ErrorMessage",
    "",
    "error",
    "ScrobblingEnabledChanged",
    "value",
    "ScrobblingOfflineChanged",
    "ScrobbleButtonVisibilityChanged",
    "LoveButtonVisibilityChanged",
    "ToggleScrobbling",
    "ToggleOffline",
    "ErrorReceived"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ScrobblerSettingsService[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    1,   65,    2, 0x06,    3 /* Public */,
       6,    1,   68,    2, 0x06,    5 /* Public */,
       7,    1,   71,    2, 0x06,    7 /* Public */,
       8,    1,   74,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   77,    2, 0x0a,   11 /* Public */,
      10,    0,   78,    2, 0x0a,   12 /* Public */,
      11,    1,   79,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScrobblerSettingsService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ScrobblerSettingsService.offsetsAndSizes,
    qt_meta_data_ScrobblerSettingsService,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ScrobblerSettingsService_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScrobblerSettingsService, std::true_type>,
        // method 'ErrorMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ScrobblingEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ScrobblingOfflineChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ScrobbleButtonVisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'LoveButtonVisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'ToggleScrobbling'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ToggleOffline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ErrorReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void ScrobblerSettingsService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScrobblerSettingsService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ErrorMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->ScrobblingEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->ScrobblingOfflineChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->ScrobbleButtonVisibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->LoveButtonVisibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->ToggleScrobbling(); break;
        case 6: _t->ToggleOffline(); break;
        case 7: _t->ErrorReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScrobblerSettingsService::*)(const QString & );
            if (_t _q_method = &ScrobblerSettingsService::ErrorMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScrobblerSettingsService::*)(const bool );
            if (_t _q_method = &ScrobblerSettingsService::ScrobblingEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScrobblerSettingsService::*)(const bool );
            if (_t _q_method = &ScrobblerSettingsService::ScrobblingOfflineChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScrobblerSettingsService::*)(const bool );
            if (_t _q_method = &ScrobblerSettingsService::ScrobbleButtonVisibilityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScrobblerSettingsService::*)(const bool );
            if (_t _q_method = &ScrobblerSettingsService::LoveButtonVisibilityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *ScrobblerSettingsService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrobblerSettingsService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrobblerSettingsService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScrobblerSettingsService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ScrobblerSettingsService::ErrorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScrobblerSettingsService::ScrobblingEnabledChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScrobblerSettingsService::ScrobblingOfflineChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScrobblerSettingsService::ScrobbleButtonVisibilityChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScrobblerSettingsService::LoveButtonVisibilityChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
