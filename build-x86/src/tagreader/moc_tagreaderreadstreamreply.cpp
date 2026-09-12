/****************************************************************************
** Meta object code from reading C++ file 'tagreaderreadstreamreply.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tagreader/tagreaderreadstreamreply.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagreaderreadstreamreply.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TagReaderReadStreamReply_t {
    uint offsetsAndSizes[18];
    char stringdata0[25];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[16];
    char stringdata7[7];
    char stringdata8[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TagReaderReadStreamReply_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TagReaderReadStreamReply_t qt_meta_stringdata_TagReaderReadStreamReply = {
    {
        QT_MOC_LITERAL(0, 24),  // "TagReaderReadStreamReply"
        QT_MOC_LITERAL(25, 8),  // "Finished"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 3),  // "url"
        QT_MOC_LITERAL(39, 4),  // "Song"
        QT_MOC_LITERAL(44, 4),  // "song"
        QT_MOC_LITERAL(49, 15),  // "TagReaderResult"
        QT_MOC_LITERAL(65, 6),  // "result"
        QT_MOC_LITERAL(72, 12)   // "EmitFinished"
    },
    "TagReaderReadStreamReply",
    "Finished",
    "",
    "url",
    "Song",
    "song",
    "TagReaderResult",
    "result",
    "EmitFinished"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TagReaderReadStreamReply[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   33,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TagReaderReadStreamReply::staticMetaObject = { {
    QMetaObject::SuperData::link<TagReaderReply::staticMetaObject>(),
    qt_meta_stringdata_TagReaderReadStreamReply.offsetsAndSizes,
    qt_meta_data_TagReaderReadStreamReply,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TagReaderReadStreamReply_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TagReaderReadStreamReply, std::true_type>,
        // method 'Finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TagReaderResult &, std::false_type>,
        // method 'EmitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TagReaderReadStreamReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TagReaderReadStreamReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Finished((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Song>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<TagReaderResult>>(_a[3]))); break;
        case 1: _t->EmitFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TagReaderReadStreamReply::*)(const QUrl & , const Song & , const TagReaderResult & );
            if (_t _q_method = &TagReaderReadStreamReply::Finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TagReaderReadStreamReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagReaderReadStreamReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagReaderReadStreamReply.stringdata0))
        return static_cast<void*>(this);
    return TagReaderReply::qt_metacast(_clname);
}

int TagReaderReadStreamReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TagReaderReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TagReaderReadStreamReply::Finished(const QUrl & _t1, const Song & _t2, const TagReaderResult & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
