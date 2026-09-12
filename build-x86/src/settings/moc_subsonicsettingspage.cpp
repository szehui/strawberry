/****************************************************************************
** Meta object code from reading C++ file 'subsonicsettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/settings/subsonicsettingspage.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subsonicsettingspage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SubsonicSettingsPage_t {
    uint offsetsAndSizes[30];
    char stringdata0[21];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[29];
    char stringdata7[12];
    char stringdata8[9];
    char stringdata9[35];
    char stringdata10[8];
    char stringdata11[12];
    char stringdata12[12];
    char stringdata13[12];
    char stringdata14[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SubsonicSettingsPage_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SubsonicSettingsPage_t qt_meta_stringdata_SubsonicSettingsPage = {
    {
        QT_MOC_LITERAL(0, 20),  // "SubsonicSettingsPage"
        QT_MOC_LITERAL(21, 4),  // "Test"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 3),  // "url"
        QT_MOC_LITERAL(31, 8),  // "username"
        QT_MOC_LITERAL(40, 8),  // "password"
        QT_MOC_LITERAL(49, 28),  // "SubsonicSettings::AuthMethod"
        QT_MOC_LITERAL(78, 11),  // "auth_method"
        QT_MOC_LITERAL(90, 8),  // "redirect"
        QT_MOC_LITERAL(99, 34),  // "CheckboxDownloadAlbumCoversTo..."
        QT_MOC_LITERAL(134, 7),  // "enabled"
        QT_MOC_LITERAL(142, 11),  // "TestClicked"
        QT_MOC_LITERAL(154, 11),  // "TestSuccess"
        QT_MOC_LITERAL(166, 11),  // "TestFailure"
        QT_MOC_LITERAL(178, 14)   // "failure_reason"
    },
    "SubsonicSettingsPage",
    "Test",
    "",
    "url",
    "username",
    "password",
    "SubsonicSettings::AuthMethod",
    "auth_method",
    "redirect",
    "CheckboxDownloadAlbumCoversToggled",
    "enabled",
    "TestClicked",
    "TestSuccess",
    "TestFailure",
    "failure_reason"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SubsonicSettingsPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    5,   50,    2, 0x06,    1 /* Public */,
       1,    4,   61,    2, 0x26,    7 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   70,    2, 0x08,   12 /* Private */,
      11,    0,   73,    2, 0x08,   14 /* Private */,
      12,    0,   74,    2, 0x08,   15 /* Private */,
      13,    1,   75,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QString, 0x80000000 | 6, QMetaType::Bool,    3,    4,    5,    7,    8,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QString, 0x80000000 | 6,    3,    4,    5,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject SubsonicSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_SubsonicSettingsPage.offsetsAndSizes,
    qt_meta_data_SubsonicSettingsPage,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SubsonicSettingsPage_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SubsonicSettingsPage, std::true_type>,
        // method 'Test'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SubsonicSettings::AuthMethod, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'Test'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SubsonicSettings::AuthMethod, std::false_type>,
        // method 'CheckboxDownloadAlbumCoversToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'TestClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TestSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TestFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void SubsonicSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubsonicSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Test((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<SubsonicSettings::AuthMethod>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 1: _t->Test((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<SubsonicSettings::AuthMethod>>(_a[4]))); break;
        case 2: _t->CheckboxDownloadAlbumCoversToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->TestClicked(); break;
        case 4: _t->TestSuccess(); break;
        case 5: _t->TestFailure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SubsonicSettingsPage::*)(const QUrl & , const QString & , const QString & , const SubsonicSettings::AuthMethod , const bool );
            if (_t _q_method = &SubsonicSettingsPage::Test; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SubsonicSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubsonicSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubsonicSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int SubsonicSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SubsonicSettingsPage::Test(const QUrl & _t1, const QString & _t2, const QString & _t3, const SubsonicSettings::AuthMethod _t4, const bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
