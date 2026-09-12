/****************************************************************************
** Meta object code from reading C++ file 'tagreaderloadcoverdatareply.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tagreader/tagreaderloadcoverdatareply.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagreaderloadcoverdatareply.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TagReaderLoadCoverDataReply_t {
    uint offsetsAndSizes[16];
    char stringdata0[28];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[5];
    char stringdata5[16];
    char stringdata6[7];
    char stringdata7[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TagReaderLoadCoverDataReply_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TagReaderLoadCoverDataReply_t qt_meta_stringdata_TagReaderLoadCoverDataReply = {
    {
        QT_MOC_LITERAL(0, 27),  // "TagReaderLoadCoverDataReply"
        QT_MOC_LITERAL(28, 8),  // "Finished"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 8),  // "filename"
        QT_MOC_LITERAL(47, 4),  // "data"
        QT_MOC_LITERAL(52, 15),  // "TagReaderResult"
        QT_MOC_LITERAL(68, 6),  // "result"
        QT_MOC_LITERAL(75, 12)   // "EmitFinished"
    },
    "TagReaderLoadCoverDataReply",
    "Finished",
    "",
    "filename",
    "data",
    "TagReaderResult",
    "result",
    "EmitFinished"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TagReaderLoadCoverDataReply[] = {

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
       7,    0,   33,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, 0x80000000 | 5,    3,    4,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TagReaderLoadCoverDataReply::staticMetaObject = { {
    QMetaObject::SuperData::link<TagReaderReply::staticMetaObject>(),
    qt_meta_stringdata_TagReaderLoadCoverDataReply.offsetsAndSizes,
    qt_meta_data_TagReaderLoadCoverDataReply,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TagReaderLoadCoverDataReply_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TagReaderLoadCoverDataReply, std::true_type>,
        // method 'Finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TagReaderResult &, std::false_type>,
        // method 'EmitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TagReaderLoadCoverDataReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TagReaderLoadCoverDataReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Finished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<TagReaderResult>>(_a[3]))); break;
        case 1: _t->EmitFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TagReaderLoadCoverDataReply::*)(const QString & , const QByteArray & , const TagReaderResult & );
            if (_t _q_method = &TagReaderLoadCoverDataReply::Finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TagReaderLoadCoverDataReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagReaderLoadCoverDataReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagReaderLoadCoverDataReply.stringdata0))
        return static_cast<void*>(this);
    return TagReaderReply::qt_metacast(_clname);
}

int TagReaderLoadCoverDataReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TagReaderLoadCoverDataReply::Finished(const QString & _t1, const QByteArray & _t2, const TagReaderResult & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
