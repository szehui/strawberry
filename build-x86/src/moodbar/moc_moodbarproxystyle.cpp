/****************************************************************************
** Meta object code from reading C++ file 'moodbarproxystyle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/moodbar/moodbarproxystyle.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moodbarproxystyle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MoodbarProxyStyle_t {
    uint offsetsAndSizes[20];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[5];
    char stringdata5[15];
    char stringdata6[5];
    char stringdata7[15];
    char stringdata8[18];
    char stringdata9[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MoodbarProxyStyle_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MoodbarProxyStyle_t qt_meta_stringdata_MoodbarProxyStyle = {
    {
        QT_MOC_LITERAL(0, 17),  // "MoodbarProxyStyle"
        QT_MOC_LITERAL(18, 12),  // "StyleChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 11),  // "MoodbarShow"
        QT_MOC_LITERAL(44, 4),  // "show"
        QT_MOC_LITERAL(49, 14),  // "SetMoodbarData"
        QT_MOC_LITERAL(64, 4),  // "data"
        QT_MOC_LITERAL(69, 14),  // "SetShowMoodbar"
        QT_MOC_LITERAL(84, 17),  // "FaderValueChanged"
        QT_MOC_LITERAL(102, 5)   // "value"
    },
    "MoodbarProxyStyle",
    "StyleChanged",
    "",
    "MoodbarShow",
    "show",
    "SetMoodbarData",
    "data",
    "SetShowMoodbar",
    "FaderValueChanged",
    "value"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MoodbarProxyStyle[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    1,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   48,    2, 0x0a,    4 /* Public */,
       7,    1,   51,    2, 0x0a,    6 /* Public */,
       8,    1,   54,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QReal,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject MoodbarProxyStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QProxyStyle::staticMetaObject>(),
    qt_meta_stringdata_MoodbarProxyStyle.offsetsAndSizes,
    qt_meta_data_MoodbarProxyStyle,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MoodbarProxyStyle_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MoodbarProxyStyle, std::true_type>,
        // method 'StyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MoodbarShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SetMoodbarData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'SetShowMoodbar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'FaderValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qreal, std::false_type>
    >,
    nullptr
} };

void MoodbarProxyStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoodbarProxyStyle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StyleChanged(); break;
        case 1: _t->MoodbarShow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->SetMoodbarData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->SetShowMoodbar((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->FaderValueChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MoodbarProxyStyle::*)();
            if (_t _q_method = &MoodbarProxyStyle::StyleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MoodbarProxyStyle::*)(const bool );
            if (_t _q_method = &MoodbarProxyStyle::MoodbarShow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MoodbarProxyStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoodbarProxyStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoodbarProxyStyle.stringdata0))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int MoodbarProxyStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
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
void MoodbarProxyStyle::StyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MoodbarProxyStyle::MoodbarShow(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
