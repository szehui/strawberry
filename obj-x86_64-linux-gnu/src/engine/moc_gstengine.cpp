/****************************************************************************
** Meta object code from reading C++ file 'gstengine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/engine/gstengine.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gstengine.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GstEngine_t {
    uint offsetsAndSizes[86];
    char stringdata0[10];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[8];
    char stringdata5[17];
    char stringdata6[6];
    char stringdata7[20];
    char stringdata8[23];
    char stringdata9[7];
    char stringdata10[11];
    char stringdata11[11];
    char stringdata12[18];
    char stringdata13[19];
    char stringdata14[9];
    char stringdata15[21];
    char stringdata16[19];
    char stringdata17[12];
    char stringdata18[15];
    char stringdata19[20];
    char stringdata20[7];
    char stringdata21[11];
    char stringdata22[8];
    char stringdata23[9];
    char stringdata24[12];
    char stringdata25[15];
    char stringdata26[16];
    char stringdata27[17];
    char stringdata28[11];
    char stringdata29[4];
    char stringdata30[7];
    char stringdata31[16];
    char stringdata32[21];
    char stringdata33[8];
    char stringdata34[9];
    char stringdata35[21];
    char stringdata36[4];
    char stringdata37[6];
    char stringdata38[17];
    char stringdata39[18];
    char stringdata40[8];
    char stringdata41[18];
    char stringdata42[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GstEngine_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GstEngine_t qt_meta_stringdata_GstEngine = {
    {
        QT_MOC_LITERAL(0, 9),  // "GstEngine"
        QT_MOC_LITERAL(10, 14),  // "ReloadSettings"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 24),  // "SetStereoBalancerEnabled"
        QT_MOC_LITERAL(51, 7),  // "enabled"
        QT_MOC_LITERAL(59, 16),  // "SetStereoBalance"
        QT_MOC_LITERAL(76, 5),  // "value"
        QT_MOC_LITERAL(82, 19),  // "SetEqualizerEnabled"
        QT_MOC_LITERAL(102, 22),  // "SetEqualizerParameters"
        QT_MOC_LITERAL(125, 6),  // "preamp"
        QT_MOC_LITERAL(132, 10),  // "QList<int>"
        QT_MOC_LITERAL(143, 10),  // "band_gains"
        QT_MOC_LITERAL(154, 17),  // "AddBufferConsumer"
        QT_MOC_LITERAL(172, 18),  // "GstBufferConsumer*"
        QT_MOC_LITERAL(191, 8),  // "consumer"
        QT_MOC_LITERAL(200, 20),  // "RemoveBufferConsumer"
        QT_MOC_LITERAL(221, 18),  // "EndOfStreamReached"
        QT_MOC_LITERAL(240, 11),  // "pipeline_id"
        QT_MOC_LITERAL(252, 14),  // "has_next_track"
        QT_MOC_LITERAL(267, 19),  // "HandlePipelineError"
        QT_MOC_LITERAL(287, 6),  // "domain"
        QT_MOC_LITERAL(294, 10),  // "error_code"
        QT_MOC_LITERAL(305, 7),  // "message"
        QT_MOC_LITERAL(313, 8),  // "debugstr"
        QT_MOC_LITERAL(322, 11),  // "NewMetaData"
        QT_MOC_LITERAL(334, 14),  // "EngineMetadata"
        QT_MOC_LITERAL(349, 15),  // "engine_metadata"
        QT_MOC_LITERAL(365, 16),  // "AddBufferToScope"
        QT_MOC_LITERAL(382, 10),  // "GstBuffer*"
        QT_MOC_LITERAL(393, 3),  // "buf"
        QT_MOC_LITERAL(397, 6),  // "format"
        QT_MOC_LITERAL(404, 15),  // "FadeoutFinished"
        QT_MOC_LITERAL(420, 20),  // "FadeoutPauseFinished"
        QT_MOC_LITERAL(441, 7),  // "SeekNow"
        QT_MOC_LITERAL(449, 8),  // "PlayDone"
        QT_MOC_LITERAL(458, 20),  // "GstStateChangeReturn"
        QT_MOC_LITERAL(479, 3),  // "ret"
        QT_MOC_LITERAL(483, 5),  // "pause"
        QT_MOC_LITERAL(489, 16),  // "BufferingStarted"
        QT_MOC_LITERAL(506, 17),  // "BufferingProgress"
        QT_MOC_LITERAL(524, 7),  // "percent"
        QT_MOC_LITERAL(532, 17),  // "BufferingFinished"
        QT_MOC_LITERAL(550, 16)   // "PipelineFinished"
    },
    "GstEngine",
    "ReloadSettings",
    "",
    "SetStereoBalancerEnabled",
    "enabled",
    "SetStereoBalance",
    "value",
    "SetEqualizerEnabled",
    "SetEqualizerParameters",
    "preamp",
    "QList<int>",
    "band_gains",
    "AddBufferConsumer",
    "GstBufferConsumer*",
    "consumer",
    "RemoveBufferConsumer",
    "EndOfStreamReached",
    "pipeline_id",
    "has_next_track",
    "HandlePipelineError",
    "domain",
    "error_code",
    "message",
    "debugstr",
    "NewMetaData",
    "EngineMetadata",
    "engine_metadata",
    "AddBufferToScope",
    "GstBuffer*",
    "buf",
    "format",
    "FadeoutFinished",
    "FadeoutPauseFinished",
    "SeekNow",
    "PlayDone",
    "GstStateChangeReturn",
    "ret",
    "pause",
    "BufferingStarted",
    "BufferingProgress",
    "percent",
    "BufferingFinished",
    "PipelineFinished"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GstEngine[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x0a,    1 /* Public */,
       3,    1,  129,    2, 0x0a,    2 /* Public */,
       5,    1,  132,    2, 0x0a,    4 /* Public */,
       7,    1,  135,    2, 0x0a,    6 /* Public */,
       8,    2,  138,    2, 0x0a,    8 /* Public */,
      12,    1,  143,    2, 0x0a,   11 /* Public */,
      15,    1,  146,    2, 0x0a,   13 /* Public */,
      16,    2,  149,    2, 0x08,   15 /* Private */,
      19,    5,  154,    2, 0x08,   18 /* Private */,
      24,    2,  165,    2, 0x08,   24 /* Private */,
      27,    3,  170,    2, 0x08,   27 /* Private */,
      31,    1,  177,    2, 0x08,   31 /* Private */,
      32,    0,  180,    2, 0x08,   33 /* Private */,
      33,    0,  181,    2, 0x08,   34 /* Private */,
      34,    3,  182,    2, 0x08,   35 /* Private */,
      38,    0,  189,    2, 0x08,   39 /* Private */,
      39,    1,  190,    2, 0x08,   40 /* Private */,
      41,    0,  193,    2, 0x08,   42 /* Private */,
      42,    1,  194,    2, 0x08,   43 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,   17,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 25,   17,   26,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Int, QMetaType::QString,   29,   17,   30,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool, QMetaType::Int,   36,   37,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject GstEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<EngineBase::staticMetaObject>(),
    qt_meta_stringdata_GstEngine.offsetsAndSizes,
    qt_meta_data_GstEngine,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GstEngine_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GstEngine, std::true_type>,
        // method 'ReloadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetStereoBalancerEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SetStereoBalance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float, std::false_type>,
        // method 'SetEqualizerEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SetEqualizerParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'AddBufferConsumer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GstBufferConsumer *, std::false_type>,
        // method 'RemoveBufferConsumer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GstBufferConsumer *, std::false_type>,
        // method 'EndOfStreamReached'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'HandlePipelineError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'NewMetaData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EngineMetadata &, std::false_type>,
        // method 'AddBufferToScope'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GstBuffer *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'FadeoutFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'FadeoutPauseFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SeekNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlayDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const GstStateChangeReturn, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'BufferingStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BufferingProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'BufferingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PipelineFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void GstEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GstEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->SetStereoBalancerEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->SetStereoBalance((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->SetEqualizerEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->SetEqualizerParameters((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[2]))); break;
        case 5: _t->AddBufferConsumer((*reinterpret_cast< std::add_pointer_t<GstBufferConsumer*>>(_a[1]))); break;
        case 6: _t->RemoveBufferConsumer((*reinterpret_cast< std::add_pointer_t<GstBufferConsumer*>>(_a[1]))); break;
        case 7: _t->EndOfStreamReached((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->HandlePipelineError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 9: _t->NewMetaData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EngineMetadata>>(_a[2]))); break;
        case 10: _t->AddBufferToScope((*reinterpret_cast< std::add_pointer_t<GstBuffer*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->FadeoutFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->FadeoutPauseFinished(); break;
        case 13: _t->SeekNow(); break;
        case 14: _t->PlayDone((*reinterpret_cast< std::add_pointer_t<GstStateChangeReturn>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 15: _t->BufferingStarted(); break;
        case 16: _t->BufferingProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->BufferingFinished(); break;
        case 18: _t->PipelineFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *GstEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GstEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GstEngine.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GstBufferConsumer"))
        return static_cast< GstBufferConsumer*>(this);
    return EngineBase::qt_metacast(_clname);
}

int GstEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EngineBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
