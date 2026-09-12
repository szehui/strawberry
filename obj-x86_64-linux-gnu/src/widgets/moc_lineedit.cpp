/****************************************************************************
** Meta object code from reading C++ file 'lineedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/lineedit.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineedit.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LineEdit_t {
    uint offsetsAndSizes[22];
    char stringdata0[9];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[6];
    char stringdata5[13];
    char stringdata6[5];
    char stringdata7[5];
    char stringdata8[16];
    char stringdata9[17];
    char stringdata10[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LineEdit_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LineEdit_t qt_meta_stringdata_LineEdit = {
    {
        QT_MOC_LITERAL(0, 8),  // "LineEdit"
        QT_MOC_LITERAL(9, 5),  // "Reset"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 9),  // "set_focus"
        QT_MOC_LITERAL(26, 5),  // "clear"
        QT_MOC_LITERAL(32, 12),  // "text_changed"
        QT_MOC_LITERAL(45, 4),  // "text"
        QT_MOC_LITERAL(50, 4),  // "hint"
        QT_MOC_LITERAL(55, 15),  // "font_point_size"
        QT_MOC_LITERAL(71, 16),  // "has_clear_button"
        QT_MOC_LITERAL(88, 16)   // "has_reset_button"
    },
    "LineEdit",
    "Reset",
    "",
    "set_focus",
    "clear",
    "text_changed",
    "text",
    "hint",
    "font_point_size",
    "has_clear_button",
    "has_reset_button"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LineEdit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x0a,    6 /* Public */,
       4,    0,   40,    2, 0x0a,    7 /* Public */,
       5,    1,   41,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015003, uint(-1), 0,
       8, QMetaType::QReal, 0x00015003, uint(-1), 0,
       9, QMetaType::Bool, 0x00015003, uint(-1), 0,
      10, QMetaType::Bool, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject LineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_LineEdit.offsetsAndSizes,
    qt_meta_data_LineEdit,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LineEdit_t,
        // property 'hint'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'font_point_size'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'has_clear_button'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'has_reset_button'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LineEdit, std::true_type>,
        // method 'Reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_focus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void LineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Reset(); break;
        case 1: _t->set_focus(); break;
        case 2: _t->clear(); break;
        case 3: _t->text_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LineEdit::*)();
            if (_t _q_method = &LineEdit::Reset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hint(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->font_point_size(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->has_clear_button(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->has_reset_button(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->set_font_point_size(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *LineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int LineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LineEdit::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_stringdata_TextEdit_t {
    uint offsetsAndSizes[16];
    char stringdata0[9];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[6];
    char stringdata5[5];
    char stringdata6[17];
    char stringdata7[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TextEdit_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TextEdit_t qt_meta_stringdata_TextEdit = {
    {
        QT_MOC_LITERAL(0, 8),  // "TextEdit"
        QT_MOC_LITERAL(9, 5),  // "Reset"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 9),  // "set_focus"
        QT_MOC_LITERAL(26, 5),  // "clear"
        QT_MOC_LITERAL(32, 4),  // "hint"
        QT_MOC_LITERAL(37, 16),  // "has_clear_button"
        QT_MOC_LITERAL(54, 16)   // "has_reset_button"
    },
    "TextEdit",
    "Reset",
    "",
    "set_focus",
    "clear",
    "hint",
    "has_clear_button",
    "has_reset_button"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TextEdit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x0a,    5 /* Public */,
       4,    0,   34,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015003, uint(-1), 0,
       7, QMetaType::Bool, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject TextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_TextEdit.offsetsAndSizes,
    qt_meta_data_TextEdit,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TextEdit_t,
        // property 'hint'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'has_clear_button'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'has_reset_button'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TextEdit, std::true_type>,
        // method 'Reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_focus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Reset(); break;
        case 1: _t->set_focus(); break;
        case 2: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextEdit::*)();
            if (_t _q_method = &TextEdit::Reset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hint(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->has_clear_button(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->has_reset_button(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TextEdit::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_stringdata_SpinBox_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[6];
    char stringdata5[5];
    char stringdata6[17];
    char stringdata7[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SpinBox_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SpinBox_t qt_meta_stringdata_SpinBox = {
    {
        QT_MOC_LITERAL(0, 7),  // "SpinBox"
        QT_MOC_LITERAL(8, 5),  // "Reset"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 9),  // "set_focus"
        QT_MOC_LITERAL(25, 5),  // "clear"
        QT_MOC_LITERAL(31, 4),  // "hint"
        QT_MOC_LITERAL(36, 16),  // "has_clear_button"
        QT_MOC_LITERAL(53, 16)   // "has_reset_button"
    },
    "SpinBox",
    "Reset",
    "",
    "set_focus",
    "clear",
    "hint",
    "has_clear_button",
    "has_reset_button"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SpinBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x0a,    5 /* Public */,
       4,    0,   34,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015003, uint(-1), 0,
       7, QMetaType::Bool, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_SpinBox.offsetsAndSizes,
    qt_meta_data_SpinBox,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SpinBox_t,
        // property 'hint'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'has_clear_button'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'has_reset_button'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpinBox, std::true_type>,
        // method 'Reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_focus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Reset(); break;
        case 1: _t->set_focus(); break;
        case 2: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpinBox::*)();
            if (_t _q_method = &SpinBox::Reset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hint(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->has_clear_button(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->has_reset_button(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *SpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpinBox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int SpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SpinBox::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_stringdata_CheckBox_t {
    uint offsetsAndSizes[16];
    char stringdata0[9];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[6];
    char stringdata5[5];
    char stringdata6[17];
    char stringdata7[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CheckBox_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CheckBox_t qt_meta_stringdata_CheckBox = {
    {
        QT_MOC_LITERAL(0, 8),  // "CheckBox"
        QT_MOC_LITERAL(9, 5),  // "Reset"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 9),  // "set_focus"
        QT_MOC_LITERAL(26, 5),  // "clear"
        QT_MOC_LITERAL(32, 4),  // "hint"
        QT_MOC_LITERAL(37, 16),  // "has_clear_button"
        QT_MOC_LITERAL(54, 16)   // "has_reset_button"
    },
    "CheckBox",
    "Reset",
    "",
    "set_focus",
    "clear",
    "hint",
    "has_clear_button",
    "has_reset_button"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CheckBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x0a,    5 /* Public */,
       4,    0,   34,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015003, uint(-1), 0,
       7, QMetaType::Bool, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject CheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_CheckBox.offsetsAndSizes,
    qt_meta_data_CheckBox,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CheckBox_t,
        // property 'hint'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'has_clear_button'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'has_reset_button'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CheckBox, std::true_type>,
        // method 'Reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_focus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CheckBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Reset(); break;
        case 1: _t->set_focus(); break;
        case 2: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CheckBox::*)();
            if (_t _q_method = &CheckBox::Reset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CheckBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hint(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->has_clear_button(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->has_reset_button(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CheckBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *CheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CheckBox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int CheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CheckBox::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_stringdata_RatingBox_t {
    uint offsetsAndSizes[12];
    char stringdata0[10];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[6];
    char stringdata5[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RatingBox_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RatingBox_t qt_meta_stringdata_RatingBox = {
    {
        QT_MOC_LITERAL(0, 9),  // "RatingBox"
        QT_MOC_LITERAL(10, 5),  // "Reset"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 9),  // "set_focus"
        QT_MOC_LITERAL(27, 5),  // "clear"
        QT_MOC_LITERAL(33, 4)   // "hint"
    },
    "RatingBox",
    "Reset",
    "",
    "set_focus",
    "clear",
    "hint"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RatingBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x0a,    3 /* Public */,
       4,    0,   34,    2, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject RatingBox::staticMetaObject = { {
    QMetaObject::SuperData::link<RatingWidget::staticMetaObject>(),
    qt_meta_stringdata_RatingBox.offsetsAndSizes,
    qt_meta_data_RatingBox,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RatingBox_t,
        // property 'hint'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RatingBox, std::true_type>,
        // method 'Reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_focus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RatingBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RatingBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Reset(); break;
        case 1: _t->set_focus(); break;
        case 2: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RatingBox::*)();
            if (_t _q_method = &RatingBox::Reset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RatingBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RatingBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_hint(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *RatingBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RatingBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RatingBox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(this);
    return RatingWidget::qt_metacast(_clname);
}

int RatingBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RatingWidget::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RatingBox::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
