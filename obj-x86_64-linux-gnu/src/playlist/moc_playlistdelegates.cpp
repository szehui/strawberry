/****************************************************************************
** Meta object code from reading C++ file 'playlistdelegates.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistdelegates.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistdelegates.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QueuedItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QueuedItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QueuedItemDelegate_t qt_meta_stringdata_QueuedItemDelegate = {
    {
        QT_MOC_LITERAL(0, 18)   // "QueuedItemDelegate"
    },
    "QueuedItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QueuedItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject QueuedItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_QueuedItemDelegate.offsetsAndSizes,
    qt_meta_data_QueuedItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QueuedItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QueuedItemDelegate, std::true_type>
    >,
    nullptr
} };

void QueuedItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QueuedItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QueuedItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QueuedItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QueuedItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_PlaylistDelegateBase_t {
    uint offsetsAndSizes[22];
    char stringdata0[21];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[19];
    char stringdata6[5];
    char stringdata7[21];
    char stringdata8[7];
    char stringdata9[12];
    char stringdata10[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaylistDelegateBase_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaylistDelegateBase_t qt_meta_stringdata_PlaylistDelegateBase = {
    {
        QT_MOC_LITERAL(0, 20),  // "PlaylistDelegateBase"
        QT_MOC_LITERAL(21, 9),  // "helpEvent"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 11),  // "QHelpEvent*"
        QT_MOC_LITERAL(44, 5),  // "event"
        QT_MOC_LITERAL(50, 18),  // "QAbstractItemView*"
        QT_MOC_LITERAL(69, 4),  // "view"
        QT_MOC_LITERAL(74, 20),  // "QStyleOptionViewItem"
        QT_MOC_LITERAL(95, 6),  // "option"
        QT_MOC_LITERAL(102, 11),  // "QModelIndex"
        QT_MOC_LITERAL(114, 3)   // "idx"
    },
    "PlaylistDelegateBase",
    "helpEvent",
    "",
    "QHelpEvent*",
    "event",
    "QAbstractItemView*",
    "view",
    "QStyleOptionViewItem",
    "option",
    "QModelIndex",
    "idx"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaylistDelegateBase[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistDelegateBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QueuedItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_PlaylistDelegateBase.offsetsAndSizes,
    qt_meta_data_PlaylistDelegateBase,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaylistDelegateBase_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistDelegateBase, std::true_type>,
        // method 'helpEvent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHelpEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemView *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStyleOptionViewItem &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void PlaylistDelegateBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistDelegateBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->helpEvent((*reinterpret_cast< std::add_pointer_t<QHelpEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractItemView*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStyleOptionViewItem>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *PlaylistDelegateBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistDelegateBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistDelegateBase.stringdata0))
        return static_cast<void*>(this);
    return QueuedItemDelegate::qt_metacast(_clname);
}

int PlaylistDelegateBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QueuedItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_stringdata_LengthItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LengthItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LengthItemDelegate_t qt_meta_stringdata_LengthItemDelegate = {
    {
        QT_MOC_LITERAL(0, 18)   // "LengthItemDelegate"
    },
    "LengthItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LengthItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject LengthItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_LengthItemDelegate.offsetsAndSizes,
    qt_meta_data_LengthItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LengthItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LengthItemDelegate, std::true_type>
    >,
    nullptr
} };

void LengthItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *LengthItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LengthItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LengthItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int LengthItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_SizeItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SizeItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SizeItemDelegate_t qt_meta_stringdata_SizeItemDelegate = {
    {
        QT_MOC_LITERAL(0, 16)   // "SizeItemDelegate"
    },
    "SizeItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SizeItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject SizeItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_SizeItemDelegate.offsetsAndSizes,
    qt_meta_data_SizeItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SizeItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SizeItemDelegate, std::true_type>
    >,
    nullptr
} };

void SizeItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SizeItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SizeItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SizeItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int SizeItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_DateItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DateItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DateItemDelegate_t qt_meta_stringdata_DateItemDelegate = {
    {
        QT_MOC_LITERAL(0, 16)   // "DateItemDelegate"
    },
    "DateItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DateItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject DateItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_DateItemDelegate.offsetsAndSizes,
    qt_meta_data_DateItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DateItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DateItemDelegate, std::true_type>
    >,
    nullptr
} };

void DateItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *DateItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DateItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DateItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int DateItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_LastPlayedItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LastPlayedItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LastPlayedItemDelegate_t qt_meta_stringdata_LastPlayedItemDelegate = {
    {
        QT_MOC_LITERAL(0, 22)   // "LastPlayedItemDelegate"
    },
    "LastPlayedItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LastPlayedItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject LastPlayedItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_LastPlayedItemDelegate.offsetsAndSizes,
    qt_meta_data_LastPlayedItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LastPlayedItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LastPlayedItemDelegate, std::true_type>
    >,
    nullptr
} };

void LastPlayedItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *LastPlayedItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LastPlayedItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LastPlayedItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int LastPlayedItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_FileTypeItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FileTypeItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FileTypeItemDelegate_t qt_meta_stringdata_FileTypeItemDelegate = {
    {
        QT_MOC_LITERAL(0, 20)   // "FileTypeItemDelegate"
    },
    "FileTypeItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FileTypeItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject FileTypeItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_FileTypeItemDelegate.offsetsAndSizes,
    qt_meta_data_FileTypeItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FileTypeItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileTypeItemDelegate, std::true_type>
    >,
    nullptr
} };

void FileTypeItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FileTypeItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTypeItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTypeItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int FileTypeItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_TextItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TextItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TextItemDelegate_t qt_meta_stringdata_TextItemDelegate = {
    {
        QT_MOC_LITERAL(0, 16)   // "TextItemDelegate"
    },
    "TextItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TextItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject TextItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_TextItemDelegate.offsetsAndSizes,
    qt_meta_data_TextItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TextItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TextItemDelegate, std::true_type>
    >,
    nullptr
} };

void TextItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TextItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int TextItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_TagCompletionModel_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TagCompletionModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TagCompletionModel_t qt_meta_stringdata_TagCompletionModel = {
    {
        QT_MOC_LITERAL(0, 18)   // "TagCompletionModel"
    },
    "TagCompletionModel"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TagCompletionModel[] = {

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

Q_CONSTINIT const QMetaObject TagCompletionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStringListModel::staticMetaObject>(),
    qt_meta_stringdata_TagCompletionModel.offsetsAndSizes,
    qt_meta_data_TagCompletionModel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TagCompletionModel_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TagCompletionModel, std::true_type>
    >,
    nullptr
} };

void TagCompletionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TagCompletionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagCompletionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagCompletionModel.stringdata0))
        return static_cast<void*>(this);
    return QStringListModel::qt_metacast(_clname);
}

int TagCompletionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStringListModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_TagCompleter_t {
    uint offsetsAndSizes[6];
    char stringdata0[13];
    char stringdata1[11];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TagCompleter_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TagCompleter_t qt_meta_stringdata_TagCompleter = {
    {
        QT_MOC_LITERAL(0, 12),  // "TagCompleter"
        QT_MOC_LITERAL(13, 10),  // "ModelReady"
        QT_MOC_LITERAL(24, 0)   // ""
    },
    "TagCompleter",
    "ModelReady",
    ""
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TagCompleter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TagCompleter::staticMetaObject = { {
    QMetaObject::SuperData::link<QCompleter::staticMetaObject>(),
    qt_meta_stringdata_TagCompleter.offsetsAndSizes,
    qt_meta_data_TagCompleter,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TagCompleter_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TagCompleter, std::true_type>,
        // method 'ModelReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TagCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TagCompleter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ModelReady(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TagCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagCompleter.stringdata0))
        return static_cast<void*>(this);
    return QCompleter::qt_metacast(_clname);
}

int TagCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_stringdata_TagCompletionItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TagCompletionItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TagCompletionItemDelegate_t qt_meta_stringdata_TagCompletionItemDelegate = {
    {
        QT_MOC_LITERAL(0, 25)   // "TagCompletionItemDelegate"
    },
    "TagCompletionItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TagCompletionItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject TagCompletionItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_TagCompletionItemDelegate.offsetsAndSizes,
    qt_meta_data_TagCompletionItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TagCompletionItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TagCompletionItemDelegate, std::true_type>
    >,
    nullptr
} };

void TagCompletionItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TagCompletionItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagCompletionItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagCompletionItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int TagCompletionItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_NativeSeparatorsDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_NativeSeparatorsDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_NativeSeparatorsDelegate_t qt_meta_stringdata_NativeSeparatorsDelegate = {
    {
        QT_MOC_LITERAL(0, 24)   // "NativeSeparatorsDelegate"
    },
    "NativeSeparatorsDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_NativeSeparatorsDelegate[] = {

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

Q_CONSTINIT const QMetaObject NativeSeparatorsDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_NativeSeparatorsDelegate.offsetsAndSizes,
    qt_meta_data_NativeSeparatorsDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_NativeSeparatorsDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NativeSeparatorsDelegate, std::true_type>
    >,
    nullptr
} };

void NativeSeparatorsDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *NativeSeparatorsDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeSeparatorsDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NativeSeparatorsDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int NativeSeparatorsDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_SongSourceDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SongSourceDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SongSourceDelegate_t qt_meta_stringdata_SongSourceDelegate = {
    {
        QT_MOC_LITERAL(0, 18)   // "SongSourceDelegate"
    },
    "SongSourceDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SongSourceDelegate[] = {

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

Q_CONSTINIT const QMetaObject SongSourceDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_SongSourceDelegate.offsetsAndSizes,
    qt_meta_data_SongSourceDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SongSourceDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SongSourceDelegate, std::true_type>
    >,
    nullptr
} };

void SongSourceDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SongSourceDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongSourceDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongSourceDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int SongSourceDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_RatingItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RatingItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RatingItemDelegate_t qt_meta_stringdata_RatingItemDelegate = {
    {
        QT_MOC_LITERAL(0, 18)   // "RatingItemDelegate"
    },
    "RatingItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RatingItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject RatingItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_RatingItemDelegate.offsetsAndSizes,
    qt_meta_data_RatingItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RatingItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RatingItemDelegate, std::true_type>
    >,
    nullptr
} };

void RatingItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *RatingItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RatingItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RatingItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int RatingItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_Ebur128LoudnessLUFSItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Ebur128LoudnessLUFSItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Ebur128LoudnessLUFSItemDelegate_t qt_meta_stringdata_Ebur128LoudnessLUFSItemDelegate = {
    {
        QT_MOC_LITERAL(0, 31)   // "Ebur128LoudnessLUFSItemDelegate"
    },
    "Ebur128LoudnessLUFSItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Ebur128LoudnessLUFSItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject Ebur128LoudnessLUFSItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_Ebur128LoudnessLUFSItemDelegate.offsetsAndSizes,
    qt_meta_data_Ebur128LoudnessLUFSItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Ebur128LoudnessLUFSItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Ebur128LoudnessLUFSItemDelegate, std::true_type>
    >,
    nullptr
} };

void Ebur128LoudnessLUFSItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Ebur128LoudnessLUFSItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ebur128LoudnessLUFSItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ebur128LoudnessLUFSItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int Ebur128LoudnessLUFSItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_Ebur128LoudnessRangeLUItemDelegate_t {
    uint offsetsAndSizes[2];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Ebur128LoudnessRangeLUItemDelegate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Ebur128LoudnessRangeLUItemDelegate_t qt_meta_stringdata_Ebur128LoudnessRangeLUItemDelegate = {
    {
        QT_MOC_LITERAL(0, 34)   // "Ebur128LoudnessRangeLUItemDel..."
    },
    "Ebur128LoudnessRangeLUItemDelegate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Ebur128LoudnessRangeLUItemDelegate[] = {

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

Q_CONSTINIT const QMetaObject Ebur128LoudnessRangeLUItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistDelegateBase::staticMetaObject>(),
    qt_meta_stringdata_Ebur128LoudnessRangeLUItemDelegate.offsetsAndSizes,
    qt_meta_data_Ebur128LoudnessRangeLUItemDelegate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Ebur128LoudnessRangeLUItemDelegate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Ebur128LoudnessRangeLUItemDelegate, std::true_type>
    >,
    nullptr
} };

void Ebur128LoudnessRangeLUItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Ebur128LoudnessRangeLUItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ebur128LoudnessRangeLUItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ebur128LoudnessRangeLUItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return PlaylistDelegateBase::qt_metacast(_clname);
}

int Ebur128LoudnessRangeLUItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistDelegateBase::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
