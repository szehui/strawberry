/****************************************************************************
** Meta object code from reading C++ file 'playlistview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlaylistView_t {
    uint offsetsAndSizes[130];
    char stringdata0[13];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[4];
    char stringdata5[21];
    char stringdata6[11];
    char stringdata7[10];
    char stringdata8[15];
    char stringdata9[24];
    char stringdata10[11];
    char stringdata11[12];
    char stringdata12[13];
    char stringdata13[20];
    char stringdata14[11];
    char stringdata15[6];
    char stringdata16[26];
    char stringdata17[23];
    char stringdata18[19];
    char stringdata19[10];
    char stringdata20[15];
    char stringdata21[13];
    char stringdata22[19];
    char stringdata23[8];
    char stringdata24[14];
    char stringdata25[28];
    char stringdata26[7];
    char stringdata27[15];
    char stringdata28[21];
    char stringdata29[14];
    char stringdata30[9];
    char stringdata31[9];
    char stringdata32[25];
    char stringdata33[16];
    char stringdata34[30];
    char stringdata35[18];
    char stringdata36[15];
    char stringdata37[8];
    char stringdata38[28];
    char stringdata39[6];
    char stringdata40[12];
    char stringdata41[13];
    char stringdata42[22];
    char stringdata43[27];
    char stringdata44[8];
    char stringdata45[8];
    char stringdata46[12];
    char stringdata47[5];
    char stringdata48[5];
    char stringdata49[17];
    char stringdata50[23];
    char stringdata51[7];
    char stringdata52[19];
    char stringdata53[8];
    char stringdata54[20];
    char stringdata55[6];
    char stringdata56[14];
    char stringdata57[4];
    char stringdata58[15];
    char stringdata59[17];
    char stringdata60[10];
    char stringdata61[17];
    char stringdata62[7];
    char stringdata63[14];
    char stringdata64[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaylistView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaylistView_t qt_meta_stringdata_PlaylistView = {
    {
        QT_MOC_LITERAL(0, 12),  // "PlaylistView"
        QT_MOC_LITERAL(13, 8),  // "PlayItem"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 11),  // "QModelIndex"
        QT_MOC_LITERAL(35, 3),  // "idx"
        QT_MOC_LITERAL(39, 20),  // "Playlist::AutoScroll"
        QT_MOC_LITERAL(60, 10),  // "autoscroll"
        QT_MOC_LITERAL(71, 9),  // "PlayPause"
        QT_MOC_LITERAL(81, 14),  // "offset_nanosec"
        QT_MOC_LITERAL(96, 23),  // "ShowPlaylistContextMenu"
        QT_MOC_LITERAL(120, 10),  // "global_pos"
        QT_MOC_LITERAL(131, 11),  // "SeekForward"
        QT_MOC_LITERAL(143, 12),  // "SeekBackward"
        QT_MOC_LITERAL(156, 19),  // "FocusOnFilterSignal"
        QT_MOC_LITERAL(176, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(187, 5),  // "event"
        QT_MOC_LITERAL(193, 25),  // "BackgroundPropertyChanged"
        QT_MOC_LITERAL(219, 22),  // "ColumnAlignmentChanged"
        QT_MOC_LITERAL(242, 18),  // "ColumnAlignmentMap"
        QT_MOC_LITERAL(261, 9),  // "alignment"
        QT_MOC_LITERAL(271, 14),  // "ReloadSettings"
        QT_MOC_LITERAL(286, 12),  // "SaveSettings"
        QT_MOC_LITERAL(299, 18),  // "SetColumnAlignment"
        QT_MOC_LITERAL(318, 7),  // "section"
        QT_MOC_LITERAL(326, 13),  // "Qt::Alignment"
        QT_MOC_LITERAL(340, 27),  // "JumpToCurrentlyPlayingTrack"
        QT_MOC_LITERAL(368, 6),  // "Update"
        QT_MOC_LITERAL(375, 14),  // "SetHeaderState"
        QT_MOC_LITERAL(390, 20),  // "HeaderSectionResized"
        QT_MOC_LITERAL(411, 13),  // "logical_index"
        QT_MOC_LITERAL(425, 8),  // "old_size"
        QT_MOC_LITERAL(434, 8),  // "new_size"
        QT_MOC_LITERAL(443, 24),  // "InhibitAutoscrollTimeout"
        QT_MOC_LITERAL(468, 15),  // "MaybeAutoscroll"
        QT_MOC_LITERAL(484, 29),  // "InvalidateCachedCurrentPixmap"
        QT_MOC_LITERAL(514, 17),  // "PlaylistDestroyed"
        QT_MOC_LITERAL(532, 14),  // "StretchChanged"
        QT_MOC_LITERAL(547, 7),  // "stretch"
        QT_MOC_LITERAL(555, 27),  // "FadePreviousBackgroundImage"
        QT_MOC_LITERAL(583, 5),  // "value"
        QT_MOC_LITERAL(589, 11),  // "StopGlowing"
        QT_MOC_LITERAL(601, 12),  // "StartGlowing"
        QT_MOC_LITERAL(614, 21),  // "JumpToLastPlayedTrack"
        QT_MOC_LITERAL(636, 26),  // "CopyCurrentSongToClipboard"
        QT_MOC_LITERAL(663, 7),  // "Playing"
        QT_MOC_LITERAL(671, 7),  // "Stopped"
        QT_MOC_LITERAL(679, 11),  // "SongChanged"
        QT_MOC_LITERAL(691, 4),  // "Song"
        QT_MOC_LITERAL(696, 4),  // "song"
        QT_MOC_LITERAL(701, 16),  // "AlbumCoverLoaded"
        QT_MOC_LITERAL(718, 22),  // "AlbumCoverLoaderResult"
        QT_MOC_LITERAL(741, 6),  // "result"
        QT_MOC_LITERAL(748, 18),  // "DynamicModeChanged"
        QT_MOC_LITERAL(767, 7),  // "dynamic"
        QT_MOC_LITERAL(775, 19),  // "SetRatingLockStatus"
        QT_MOC_LITERAL(795, 5),  // "state"
        QT_MOC_LITERAL(801, 13),  // "RatingHoverIn"
        QT_MOC_LITERAL(815, 3),  // "pos"
        QT_MOC_LITERAL(819, 14),  // "RatingHoverOut"
        QT_MOC_LITERAL(834, 16),  // "SortStateChanged"
        QT_MOC_LITERAL(851, 9),  // "is_sorted"
        QT_MOC_LITERAL(861, 16),  // "Playlist::Column"
        QT_MOC_LITERAL(878, 6),  // "column"
        QT_MOC_LITERAL(885, 13),  // "Qt::SortOrder"
        QT_MOC_LITERAL(899, 10)   // "sort_order"
    },
    "PlaylistView",
    "PlayItem",
    "",
    "QModelIndex",
    "idx",
    "Playlist::AutoScroll",
    "autoscroll",
    "PlayPause",
    "offset_nanosec",
    "ShowPlaylistContextMenu",
    "global_pos",
    "SeekForward",
    "SeekBackward",
    "FocusOnFilterSignal",
    "QKeyEvent*",
    "event",
    "BackgroundPropertyChanged",
    "ColumnAlignmentChanged",
    "ColumnAlignmentMap",
    "alignment",
    "ReloadSettings",
    "SaveSettings",
    "SetColumnAlignment",
    "section",
    "Qt::Alignment",
    "JumpToCurrentlyPlayingTrack",
    "Update",
    "SetHeaderState",
    "HeaderSectionResized",
    "logical_index",
    "old_size",
    "new_size",
    "InhibitAutoscrollTimeout",
    "MaybeAutoscroll",
    "InvalidateCachedCurrentPixmap",
    "PlaylistDestroyed",
    "StretchChanged",
    "stretch",
    "FadePreviousBackgroundImage",
    "value",
    "StopGlowing",
    "StartGlowing",
    "JumpToLastPlayedTrack",
    "CopyCurrentSongToClipboard",
    "Playing",
    "Stopped",
    "SongChanged",
    "Song",
    "song",
    "AlbumCoverLoaded",
    "AlbumCoverLoaderResult",
    "result",
    "DynamicModeChanged",
    "dynamic",
    "SetRatingLockStatus",
    "state",
    "RatingHoverIn",
    "pos",
    "RatingHoverOut",
    "SortStateChanged",
    "is_sorted",
    "Playlist::Column",
    "column",
    "Qt::SortOrder",
    "sort_order"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaylistView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  236,    2, 0x06,    1 /* Public */,
       7,    2,  241,    2, 0x06,    4 /* Public */,
       7,    1,  246,    2, 0x26,    7 /* Public | MethodCloned */,
       7,    0,  249,    2, 0x26,    9 /* Public | MethodCloned */,
       9,    2,  250,    2, 0x06,   10 /* Public */,
      11,    0,  255,    2, 0x06,   13 /* Public */,
      12,    0,  256,    2, 0x06,   14 /* Public */,
      13,    1,  257,    2, 0x06,   15 /* Public */,
      16,    0,  260,    2, 0x06,   17 /* Public */,
      17,    1,  261,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  264,    2, 0x0a,   20 /* Public */,
      21,    0,  265,    2, 0x0a,   21 /* Public */,
      22,    2,  266,    2, 0x0a,   22 /* Public */,
      25,    0,  271,    2, 0x0a,   25 /* Public */,
      26,    0,  272,    2, 0x08,   26 /* Private */,
      27,    0,  273,    2, 0x08,   27 /* Private */,
      28,    3,  274,    2, 0x08,   28 /* Private */,
      32,    0,  281,    2, 0x08,   32 /* Private */,
      33,    1,  282,    2, 0x08,   33 /* Private */,
      34,    0,  285,    2, 0x08,   35 /* Private */,
      35,    0,  286,    2, 0x08,   36 /* Private */,
      36,    1,  287,    2, 0x08,   37 /* Private */,
      38,    1,  290,    2, 0x08,   39 /* Private */,
      40,    0,  293,    2, 0x08,   41 /* Private */,
      41,    0,  294,    2, 0x08,   42 /* Private */,
      42,    0,  295,    2, 0x08,   43 /* Private */,
      43,    0,  296,    2, 0x108,   44 /* Private | MethodIsConst  */,
      44,    0,  297,    2, 0x08,   45 /* Private */,
      45,    0,  298,    2, 0x08,   46 /* Private */,
      46,    1,  299,    2, 0x08,   47 /* Private */,
      49,    2,  302,    2, 0x08,   49 /* Private */,
      49,    1,  307,    2, 0x28,   52 /* Private | MethodCloned */,
      52,    1,  310,    2, 0x08,   54 /* Private */,
      54,    1,  313,    2, 0x08,   56 /* Private */,
      56,    2,  316,    2, 0x08,   58 /* Private */,
      58,    0,  321,    2, 0x08,   61 /* Private */,
      59,    3,  322,    2, 0x08,   62 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 5,    8,    6,
    QMetaType::Void, QMetaType::ULongLong,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 3,   10,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 24,   23,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   29,   30,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::QReal,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 50,   48,   51,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    4,   57,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 61, 0x80000000 | 63,   60,   62,   64,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_PlaylistView.offsetsAndSizes,
    qt_meta_data_PlaylistView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaylistView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistView, std::true_type>,
        // method 'PlayItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint64, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowPlaylistContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        // method 'SeekForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SeekBackward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FocusOnFilterSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'BackgroundPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ColumnAlignmentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ColumnAlignmentMap, std::false_type>,
        // method 'ReloadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetColumnAlignment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::Alignment, std::false_type>,
        // method 'JumpToCurrentlyPlayingTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetHeaderState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HeaderSectionResized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'InhibitAutoscrollTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MaybeAutoscroll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::AutoScroll, std::false_type>,
        // method 'InvalidateCachedCurrentPixmap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlaylistDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StretchChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'FadePreviousBackgroundImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qreal, std::false_type>,
        // method 'StopGlowing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StartGlowing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'JumpToLastPlayedTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CopyCurrentSongToClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Playing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Stopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SongChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AlbumCoverLoaderResult &, std::false_type>,
        // method 'AlbumCoverLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Song &, std::false_type>,
        // method 'DynamicModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'SetRatingLockStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'RatingHoverIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint, std::false_type>,
        // method 'RatingHoverOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SortStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Playlist::Column, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::SortOrder, std::false_type>
    >,
    nullptr
} };

void PlaylistView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PlayItem((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2]))); break;
        case 1: _t->PlayPause((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[2]))); break;
        case 2: _t->PlayPause((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 3: _t->PlayPause(); break;
        case 4: _t->ShowPlaylistContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 5: _t->SeekForward(); break;
        case 6: _t->SeekBackward(); break;
        case 7: _t->FocusOnFilterSignal((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 8: _t->BackgroundPropertyChanged(); break;
        case 9: _t->ColumnAlignmentChanged((*reinterpret_cast< std::add_pointer_t<ColumnAlignmentMap>>(_a[1]))); break;
        case 10: _t->ReloadSettings(); break;
        case 11: _t->SaveSettings(); break;
        case 12: _t->SetColumnAlignment((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::Alignment>>(_a[2]))); break;
        case 13: _t->JumpToCurrentlyPlayingTrack(); break;
        case 14: _t->Update(); break;
        case 15: _t->SetHeaderState(); break;
        case 16: _t->HeaderSectionResized((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 17: _t->InhibitAutoscrollTimeout(); break;
        case 18: _t->MaybeAutoscroll((*reinterpret_cast< std::add_pointer_t<Playlist::AutoScroll>>(_a[1]))); break;
        case 19: _t->InvalidateCachedCurrentPixmap(); break;
        case 20: _t->PlaylistDestroyed(); break;
        case 21: _t->StretchChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->FadePreviousBackgroundImage((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 23: _t->StopGlowing(); break;
        case 24: _t->StartGlowing(); break;
        case 25: _t->JumpToLastPlayedTrack(); break;
        case 26: _t->CopyCurrentSongToClipboard(); break;
        case 27: _t->Playing(); break;
        case 28: _t->Stopped(); break;
        case 29: _t->SongChanged((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 30: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AlbumCoverLoaderResult>>(_a[2]))); break;
        case 31: _t->AlbumCoverLoaded((*reinterpret_cast< std::add_pointer_t<Song>>(_a[1]))); break;
        case 32: _t->DynamicModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->SetRatingLockStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->RatingHoverIn((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 35: _t->RatingHoverOut(); break;
        case 36: _t->SortStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Playlist::Column>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ColumnAlignmentMap >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Qt::Alignment >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaylistView::*)(const QModelIndex , const Playlist::AutoScroll );
            if (_t _q_method = &PlaylistView::PlayItem; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)(const quint64 , const Playlist::AutoScroll );
            if (_t _q_method = &PlaylistView::PlayPause; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)(const QPoint , const QModelIndex );
            if (_t _q_method = &PlaylistView::ShowPlaylistContextMenu; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)();
            if (_t _q_method = &PlaylistView::SeekForward; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)();
            if (_t _q_method = &PlaylistView::SeekBackward; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)(QKeyEvent * );
            if (_t _q_method = &PlaylistView::FocusOnFilterSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)();
            if (_t _q_method = &PlaylistView::BackgroundPropertyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)(const ColumnAlignmentMap );
            if (_t _q_method = &PlaylistView::ColumnAlignmentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *PlaylistView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int PlaylistView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void PlaylistView::PlayItem(const QModelIndex _t1, const Playlist::AutoScroll _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistView::PlayPause(const quint64 _t1, const Playlist::AutoScroll _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 4
void PlaylistView::ShowPlaylistContextMenu(const QPoint _t1, const QModelIndex _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlaylistView::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PlaylistView::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlaylistView::FocusOnFilterSignal(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlaylistView::BackgroundPropertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PlaylistView::ColumnAlignmentChanged(const ColumnAlignmentMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
