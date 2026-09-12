/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "analyzer/analyzercontainer.h"
#include "playlist/playlistcontainer.h"
#include "playlist/playlistsequence.h"
#include "widgets/fancytabwidget.h"
#include "widgets/multiloadingindicator.h"
#include "widgets/playingwidget.h"
#include "widgets/trackslider.h"
#include "widgets/volumeslider.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_previous_track;
    QAction *action_play_pause;
    QAction *action_stop;
    QAction *action_next_track;
    QAction *action_quit;
    QAction *action_stop_after_this_track;
    QAction *action_love;
    QAction *action_clear_playlist;
    QAction *action_edit_track;
    QAction *action_renumber_tracks;
    QAction *action_selection_set_value;
    QAction *action_edit_value;
    QAction *action_settings;
    QAction *action_about_strawberry;
    QAction *action_shuffle;
    QAction *action_add_file;
    QAction *action_open_file;
    QAction *action_open_cd;
    QAction *action_cover_manager;
    QAction *action_console;
    QAction *action_shuffle_mode;
    QAction *action_repeat_mode;
    QAction *action_remove_from_playlist;
    QAction *action_equalizer;
    QAction *action_transcoder;
    QAction *action_add_folder;
    QAction *action_jump;
    QAction *action_new_playlist;
    QAction *action_save_playlist;
    QAction *action_load_playlist;
    QAction *action_save_all_playlists;
    QAction *action_next_playlist;
    QAction *action_previous_playlist;
    QAction *action_last_playlist;
    QAction *action_active_playlist;
    QAction *action_close_playlist;
    QAction *action_update_collection;
    QAction *action_about_qt;
    QAction *action_mute;
    QAction *action_full_collection_scan;
    QAction *action_stop_collection_scan;
    QAction *action_auto_complete_tags;
    QAction *action_toggle_scrobbling;
    QAction *action_remove_duplicates;
    QAction *action_remove_unavailable;
    QAction *action_add_files_to_transcoder;
    QAction *action_add_stream;
    QAction *action_toggle_show_sidebar;
    QWidget *centralWidget;
    QVBoxLayout *layout_centralWidget;
    QSplitter *splitter;
    QWidget *sidebar_layout;
    QVBoxLayout *layout_left;
    FancyTabWidget *tabs;
    PlayingWidget *widget_playing;
    QWidget *playlist_layout;
    QVBoxLayout *layout_right;
    PlaylistContainer *playlist;
    QHBoxLayout *layout_bottom;
    QFrame *line_6;
    QWidget *player_controls_container;
    QVBoxLayout *layout_player_controls_container;
    QFrame *player_controls;
    QHBoxLayout *layout_player_controls;
    QToolButton *back_button;
    QToolButton *pause_play_button;
    QToolButton *stop_button;
    QToolButton *forward_button;
    QWidget *widget_love;
    QHBoxLayout *layout_widget_love;
    QFrame *line_love;
    QToolButton *button_love;
    QFrame *line_buttons;
    AnalyzerContainer *analyzer;
    QSpacerItem *horizontalSpacer;
    QFrame *line_volume;
    VolumeSlider *volume;
    QWidget *status_bar;
    QVBoxLayout *layout_status_bar;
    QFrame *status_bar_line;
    QWidget *status_bar_internal;
    QHBoxLayout *layout_status_bar_internal;
    QStackedWidget *status_bar_stack;
    MultiLoadingIndicator *multi_loading_indicator;
    QWidget *playlist_summary_page;
    QVBoxLayout *layout_playlist_summary;
    QLabel *playlist_summary;
    QFrame *line_5;
    PlaylistSequence *playlist_sequence;
    QFrame *line_2;
    QToolButton *button_scrobble;
    TrackSlider *track_slider;
    QMenuBar *menuBar;
    QMenu *menu_music;
    QMenu *menu_playlist;
    QMenu *menu_help;
    QMenu *menu_tools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1131, 685);
        action_previous_track = new QAction(MainWindow);
        action_previous_track->setObjectName("action_previous_track");
        action_play_pause = new QAction(MainWindow);
        action_play_pause->setObjectName("action_play_pause");
        action_stop = new QAction(MainWindow);
        action_stop->setObjectName("action_stop");
        action_stop->setEnabled(false);
        action_next_track = new QAction(MainWindow);
        action_next_track->setObjectName("action_next_track");
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::QuitRole);
        action_stop_after_this_track = new QAction(MainWindow);
        action_stop_after_this_track->setObjectName("action_stop_after_this_track");
        action_love = new QAction(MainWindow);
        action_love->setObjectName("action_love");
        action_love->setEnabled(false);
#if QT_CONFIG(shortcut)
        action_love->setShortcut(QString::fromUtf8("Ctrl+L"));
#endif // QT_CONFIG(shortcut)
        action_clear_playlist = new QAction(MainWindow);
        action_clear_playlist->setObjectName("action_clear_playlist");
        action_edit_track = new QAction(MainWindow);
        action_edit_track->setObjectName("action_edit_track");
        action_renumber_tracks = new QAction(MainWindow);
        action_renumber_tracks->setObjectName("action_renumber_tracks");
        action_selection_set_value = new QAction(MainWindow);
        action_selection_set_value->setObjectName("action_selection_set_value");
        action_edit_value = new QAction(MainWindow);
        action_edit_value->setObjectName("action_edit_value");
        action_settings = new QAction(MainWindow);
        action_settings->setObjectName("action_settings");
        action_settings->setMenuRole(QAction::PreferencesRole);
        action_about_strawberry = new QAction(MainWindow);
        action_about_strawberry->setObjectName("action_about_strawberry");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_about_strawberry->setIcon(icon);
        action_about_strawberry->setMenuRole(QAction::AboutRole);
        action_shuffle = new QAction(MainWindow);
        action_shuffle->setObjectName("action_shuffle");
        action_add_file = new QAction(MainWindow);
        action_add_file->setObjectName("action_add_file");
        action_open_file = new QAction(MainWindow);
        action_open_file->setObjectName("action_open_file");
        action_open_cd = new QAction(MainWindow);
        action_open_cd->setObjectName("action_open_cd");
        action_cover_manager = new QAction(MainWindow);
        action_cover_manager->setObjectName("action_cover_manager");
        action_console = new QAction(MainWindow);
        action_console->setObjectName("action_console");
        action_shuffle_mode = new QAction(MainWindow);
        action_shuffle_mode->setObjectName("action_shuffle_mode");
        action_repeat_mode = new QAction(MainWindow);
        action_repeat_mode->setObjectName("action_repeat_mode");
        action_remove_from_playlist = new QAction(MainWindow);
        action_remove_from_playlist->setObjectName("action_remove_from_playlist");
        action_equalizer = new QAction(MainWindow);
        action_equalizer->setObjectName("action_equalizer");
        action_transcoder = new QAction(MainWindow);
        action_transcoder->setObjectName("action_transcoder");
        action_add_folder = new QAction(MainWindow);
        action_add_folder->setObjectName("action_add_folder");
        action_jump = new QAction(MainWindow);
        action_jump->setObjectName("action_jump");
        action_new_playlist = new QAction(MainWindow);
        action_new_playlist->setObjectName("action_new_playlist");
        action_save_playlist = new QAction(MainWindow);
        action_save_playlist->setObjectName("action_save_playlist");
        action_load_playlist = new QAction(MainWindow);
        action_load_playlist->setObjectName("action_load_playlist");
        action_save_all_playlists = new QAction(MainWindow);
        action_save_all_playlists->setObjectName("action_save_all_playlists");
        action_next_playlist = new QAction(MainWindow);
        action_next_playlist->setObjectName("action_next_playlist");
        action_previous_playlist = new QAction(MainWindow);
        action_previous_playlist->setObjectName("action_previous_playlist");
        action_last_playlist = new QAction(MainWindow);
        action_last_playlist->setObjectName("action_last_playlist");
        action_active_playlist = new QAction(MainWindow);
        action_active_playlist->setObjectName("action_active_playlist");
        action_close_playlist = new QAction(MainWindow);
        action_close_playlist->setObjectName("action_close_playlist");
        action_update_collection = new QAction(MainWindow);
        action_update_collection->setObjectName("action_update_collection");
        action_about_qt = new QAction(MainWindow);
        action_about_qt->setObjectName("action_about_qt");
        action_about_qt->setMenuRole(QAction::AboutQtRole);
        action_mute = new QAction(MainWindow);
        action_mute->setObjectName("action_mute");
        action_mute->setCheckable(true);
        action_full_collection_scan = new QAction(MainWindow);
        action_full_collection_scan->setObjectName("action_full_collection_scan");
        action_stop_collection_scan = new QAction(MainWindow);
        action_stop_collection_scan->setObjectName("action_stop_collection_scan");
        action_auto_complete_tags = new QAction(MainWindow);
        action_auto_complete_tags->setObjectName("action_auto_complete_tags");
        action_toggle_scrobbling = new QAction(MainWindow);
        action_toggle_scrobbling->setObjectName("action_toggle_scrobbling");
        action_remove_duplicates = new QAction(MainWindow);
        action_remove_duplicates->setObjectName("action_remove_duplicates");
        action_remove_unavailable = new QAction(MainWindow);
        action_remove_unavailable->setObjectName("action_remove_unavailable");
        action_add_files_to_transcoder = new QAction(MainWindow);
        action_add_files_to_transcoder->setObjectName("action_add_files_to_transcoder");
        action_add_files_to_transcoder->setCheckable(false);
#if QT_CONFIG(shortcut)
        action_add_files_to_transcoder->setShortcut(QString::fromUtf8("Ctrl+Shift+T"));
#endif // QT_CONFIG(shortcut)
        action_add_stream = new QAction(MainWindow);
        action_add_stream->setObjectName("action_add_stream");
        action_toggle_show_sidebar = new QAction(MainWindow);
        action_toggle_show_sidebar->setObjectName("action_toggle_show_sidebar");
        action_toggle_show_sidebar->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layout_centralWidget = new QVBoxLayout(centralWidget);
        layout_centralWidget->setSpacing(0);
        layout_centralWidget->setContentsMargins(11, 11, 11, 11);
        layout_centralWidget->setObjectName("layout_centralWidget");
        layout_centralWidget->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        sidebar_layout = new QWidget(splitter);
        sidebar_layout->setObjectName("sidebar_layout");
        layout_left = new QVBoxLayout(sidebar_layout);
        layout_left->setSpacing(0);
        layout_left->setContentsMargins(11, 11, 11, 11);
        layout_left->setObjectName("layout_left");
        layout_left->setContentsMargins(0, 0, 0, 0);
        tabs = new FancyTabWidget(sidebar_layout);
        tabs->setObjectName("tabs");

        layout_left->addWidget(tabs);

        widget_playing = new PlayingWidget(sidebar_layout);
        widget_playing->setObjectName("widget_playing");

        layout_left->addWidget(widget_playing);

        splitter->addWidget(sidebar_layout);
        playlist_layout = new QWidget(splitter);
        playlist_layout->setObjectName("playlist_layout");
        layout_right = new QVBoxLayout(playlist_layout);
        layout_right->setSpacing(0);
        layout_right->setContentsMargins(11, 11, 11, 11);
        layout_right->setObjectName("layout_right");
        layout_right->setContentsMargins(0, 0, 0, 0);
        playlist = new PlaylistContainer(playlist_layout);
        playlist->setObjectName("playlist");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playlist->sizePolicy().hasHeightForWidth());
        playlist->setSizePolicy(sizePolicy);

        layout_right->addWidget(playlist);

        layout_bottom = new QHBoxLayout();
        layout_bottom->setSpacing(0);
        layout_bottom->setObjectName("layout_bottom");
        line_6 = new QFrame(playlist_layout);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        layout_bottom->addWidget(line_6);

        player_controls_container = new QWidget(playlist_layout);
        player_controls_container->setObjectName("player_controls_container");
        layout_player_controls_container = new QVBoxLayout(player_controls_container);
        layout_player_controls_container->setSpacing(0);
        layout_player_controls_container->setContentsMargins(11, 11, 11, 11);
        layout_player_controls_container->setObjectName("layout_player_controls_container");
        layout_player_controls_container->setContentsMargins(0, 0, 0, 0);
        player_controls = new QFrame(player_controls_container);
        player_controls->setObjectName("player_controls");
        player_controls->setFrameShape(QFrame::NoFrame);
        layout_player_controls = new QHBoxLayout(player_controls);
        layout_player_controls->setSpacing(1);
        layout_player_controls->setContentsMargins(11, 11, 11, 11);
        layout_player_controls->setObjectName("layout_player_controls");
        layout_player_controls->setContentsMargins(0, 0, 0, 0);
        back_button = new QToolButton(player_controls);
        back_button->setObjectName("back_button");
        back_button->setIconSize(QSize(32, 32));
        back_button->setAutoRaise(true);

        layout_player_controls->addWidget(back_button);

        pause_play_button = new QToolButton(player_controls);
        pause_play_button->setObjectName("pause_play_button");
        pause_play_button->setIconSize(QSize(32, 32));
        pause_play_button->setAutoRaise(true);

        layout_player_controls->addWidget(pause_play_button);

        stop_button = new QToolButton(player_controls);
        stop_button->setObjectName("stop_button");
        stop_button->setEnabled(false);
        stop_button->setIconSize(QSize(32, 32));
        stop_button->setPopupMode(QToolButton::MenuButtonPopup);
        stop_button->setAutoRaise(true);

        layout_player_controls->addWidget(stop_button);

        forward_button = new QToolButton(player_controls);
        forward_button->setObjectName("forward_button");
        forward_button->setIconSize(QSize(32, 32));
        forward_button->setAutoRaise(true);

        layout_player_controls->addWidget(forward_button);

        widget_love = new QWidget(player_controls);
        widget_love->setObjectName("widget_love");
        layout_widget_love = new QHBoxLayout(widget_love);
        layout_widget_love->setSpacing(1);
        layout_widget_love->setContentsMargins(11, 11, 11, 11);
        layout_widget_love->setObjectName("layout_widget_love");
        layout_widget_love->setContentsMargins(0, 0, 0, 0);
        line_love = new QFrame(widget_love);
        line_love->setObjectName("line_love");
        line_love->setFrameShape(QFrame::VLine);
        line_love->setFrameShadow(QFrame::Sunken);

        layout_widget_love->addWidget(line_love);

        button_love = new QToolButton(widget_love);
        button_love->setObjectName("button_love");
        button_love->setIconSize(QSize(32, 32));
        button_love->setAutoRaise(true);

        layout_widget_love->addWidget(button_love);


        layout_player_controls->addWidget(widget_love);

        line_buttons = new QFrame(player_controls);
        line_buttons->setObjectName("line_buttons");
        line_buttons->setFrameShape(QFrame::VLine);
        line_buttons->setFrameShadow(QFrame::Sunken);

        layout_player_controls->addWidget(line_buttons);

        analyzer = new AnalyzerContainer(player_controls);
        analyzer->setObjectName("analyzer");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(analyzer->sizePolicy().hasHeightForWidth());
        analyzer->setSizePolicy(sizePolicy1);
        analyzer->setMinimumSize(QSize(0, 36));

        layout_player_controls->addWidget(analyzer);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_player_controls->addItem(horizontalSpacer);

        line_volume = new QFrame(player_controls);
        line_volume->setObjectName("line_volume");
        line_volume->setFrameShape(QFrame::VLine);
        line_volume->setFrameShadow(QFrame::Sunken);

        layout_player_controls->addWidget(line_volume);

        volume = new VolumeSlider(player_controls);
        volume->setObjectName("volume");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volume->sizePolicy().hasHeightForWidth());
        volume->setSizePolicy(sizePolicy2);
        volume->setMaximum(100);
        volume->setOrientation(Qt::Horizontal);

        layout_player_controls->addWidget(volume);


        layout_player_controls_container->addWidget(player_controls);

        status_bar = new QWidget(player_controls_container);
        status_bar->setObjectName("status_bar");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(status_bar->sizePolicy().hasHeightForWidth());
        status_bar->setSizePolicy(sizePolicy3);
        layout_status_bar = new QVBoxLayout(status_bar);
        layout_status_bar->setSpacing(0);
        layout_status_bar->setContentsMargins(11, 11, 11, 11);
        layout_status_bar->setObjectName("layout_status_bar");
        layout_status_bar->setContentsMargins(0, 0, 0, 0);
        status_bar_line = new QFrame(status_bar);
        status_bar_line->setObjectName("status_bar_line");
        status_bar_line->setFrameShape(QFrame::HLine);
        status_bar_line->setFrameShadow(QFrame::Sunken);

        layout_status_bar->addWidget(status_bar_line);

        status_bar_internal = new QWidget(status_bar);
        status_bar_internal->setObjectName("status_bar_internal");
        sizePolicy3.setHeightForWidth(status_bar_internal->sizePolicy().hasHeightForWidth());
        status_bar_internal->setSizePolicy(sizePolicy3);
        layout_status_bar_internal = new QHBoxLayout(status_bar_internal);
        layout_status_bar_internal->setSpacing(3);
        layout_status_bar_internal->setContentsMargins(11, 11, 11, 11);
        layout_status_bar_internal->setObjectName("layout_status_bar_internal");
        layout_status_bar_internal->setContentsMargins(0, 0, 0, 0);
        status_bar_stack = new QStackedWidget(status_bar_internal);
        status_bar_stack->setObjectName("status_bar_stack");
        multi_loading_indicator = new MultiLoadingIndicator();
        multi_loading_indicator->setObjectName("multi_loading_indicator");
        status_bar_stack->addWidget(multi_loading_indicator);
        playlist_summary_page = new QWidget();
        playlist_summary_page->setObjectName("playlist_summary_page");
        layout_playlist_summary = new QVBoxLayout(playlist_summary_page);
        layout_playlist_summary->setSpacing(0);
        layout_playlist_summary->setContentsMargins(11, 11, 11, 11);
        layout_playlist_summary->setObjectName("layout_playlist_summary");
        layout_playlist_summary->setContentsMargins(0, 0, 0, 0);
        playlist_summary = new QLabel(playlist_summary_page);
        playlist_summary->setObjectName("playlist_summary");
        playlist_summary->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_playlist_summary->addWidget(playlist_summary);

        status_bar_stack->addWidget(playlist_summary_page);

        layout_status_bar_internal->addWidget(status_bar_stack);

        line_5 = new QFrame(status_bar_internal);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        layout_status_bar_internal->addWidget(line_5);

        playlist_sequence = new PlaylistSequence(status_bar_internal);
        playlist_sequence->setObjectName("playlist_sequence");

        layout_status_bar_internal->addWidget(playlist_sequence);

        line_2 = new QFrame(status_bar_internal);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        layout_status_bar_internal->addWidget(line_2);

        button_scrobble = new QToolButton(status_bar_internal);
        button_scrobble->setObjectName("button_scrobble");
        button_scrobble->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(button_scrobble->sizePolicy().hasHeightForWidth());
        button_scrobble->setSizePolicy(sizePolicy4);
        button_scrobble->setIconSize(QSize(16, 16));
        button_scrobble->setAutoRaise(true);

        layout_status_bar_internal->addWidget(button_scrobble);

        track_slider = new TrackSlider(status_bar_internal);
        track_slider->setObjectName("track_slider");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(10);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(track_slider->sizePolicy().hasHeightForWidth());
        track_slider->setSizePolicy(sizePolicy5);

        layout_status_bar_internal->addWidget(track_slider);


        layout_status_bar->addWidget(status_bar_internal);


        layout_player_controls_container->addWidget(status_bar);


        layout_bottom->addWidget(player_controls_container);


        layout_right->addLayout(layout_bottom);

        splitter->addWidget(playlist_layout);

        layout_centralWidget->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1131, 23));
        menu_music = new QMenu(menuBar);
        menu_music->setObjectName("menu_music");
        menu_playlist = new QMenu(menuBar);
        menu_playlist->setObjectName("menu_playlist");
        menu_help = new QMenu(menuBar);
        menu_help->setObjectName("menu_help");
        menu_tools = new QMenu(menuBar);
        menu_tools->setObjectName("menu_tools");
        MainWindow->setMenuBar(menuBar);

        playlist->addAction(action_edit_track);
        playlist->addAction(action_edit_value);
        menuBar->addAction(menu_music->menuAction());
        menuBar->addAction(menu_playlist->menuAction());
        menuBar->addAction(menu_tools->menuAction());
        menuBar->addAction(menu_help->menuAction());
        menu_music->addAction(action_open_file);
        menu_music->addAction(action_open_cd);
        menu_music->addSeparator();
        menu_music->addAction(action_previous_track);
        menu_music->addAction(action_play_pause);
        menu_music->addAction(action_stop);
        menu_music->addAction(action_next_track);
        menu_music->addSeparator();
        menu_music->addAction(action_mute);
        menu_music->addSeparator();
        menu_music->addAction(action_love);
        menu_music->addSeparator();
        menu_music->addAction(action_quit);
        menu_playlist->addAction(action_add_file);
        menu_playlist->addAction(action_add_folder);
        menu_playlist->addAction(action_add_stream);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_shuffle_mode);
        menu_playlist->addAction(action_repeat_mode);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_new_playlist);
        menu_playlist->addAction(action_save_playlist);
        menu_playlist->addAction(action_load_playlist);
        menu_playlist->addAction(action_save_all_playlists);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_jump);
        menu_playlist->addAction(action_clear_playlist);
        menu_playlist->addAction(action_shuffle);
        menu_playlist->addAction(action_remove_duplicates);
        menu_playlist->addAction(action_remove_unavailable);
        menu_help->addAction(action_about_strawberry);
        menu_help->addAction(action_about_qt);
        menu_help->addSeparator();
        menu_tools->addAction(action_cover_manager);
        menu_tools->addAction(action_equalizer);
        menu_tools->addAction(action_transcoder);
        menu_tools->addSeparator();
        menu_tools->addAction(action_update_collection);
        menu_tools->addAction(action_full_collection_scan);
        menu_tools->addAction(action_stop_collection_scan);
        menu_tools->addSeparator();
        menu_tools->addAction(action_settings);
        menu_tools->addAction(action_console);
        menu_tools->addSeparator();
        menu_tools->addAction(action_toggle_show_sidebar);

        retranslateUi(MainWindow);

        status_bar_stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Strawberry Music Player", nullptr));
        action_previous_track->setText(QCoreApplication::translate("MainWindow", "Previous track", nullptr));
#if QT_CONFIG(shortcut)
        action_previous_track->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        action_play_pause->setText(QCoreApplication::translate("MainWindow", "&Play", nullptr));
#if QT_CONFIG(shortcut)
        action_play_pause->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        action_stop->setText(QCoreApplication::translate("MainWindow", "&Stop", nullptr));
#if QT_CONFIG(shortcut)
        action_stop->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        action_next_track->setText(QCoreApplication::translate("MainWindow", "&Next track", nullptr));
#if QT_CONFIG(shortcut)
        action_next_track->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        action_quit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        action_quit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        action_stop_after_this_track->setText(QCoreApplication::translate("MainWindow", "Stop after this track", nullptr));
#if QT_CONFIG(shortcut)
        action_stop_after_this_track->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_love->setText(QCoreApplication::translate("MainWindow", "Love", nullptr));
        action_clear_playlist->setText(QCoreApplication::translate("MainWindow", "&Clear playlist", nullptr));
#if QT_CONFIG(tooltip)
        action_clear_playlist->setToolTip(QCoreApplication::translate("MainWindow", "Clear playlist", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_clear_playlist->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        action_edit_track->setText(QCoreApplication::translate("MainWindow", "Edit track information...", nullptr));
#if QT_CONFIG(shortcut)
        action_edit_track->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        action_renumber_tracks->setText(QCoreApplication::translate("MainWindow", "Renumber tracks in this order...", nullptr));
        action_selection_set_value->setText(QCoreApplication::translate("MainWindow", "Set value for all selected tracks...", nullptr));
        action_edit_value->setText(QCoreApplication::translate("MainWindow", "Edit tag...", nullptr));
        action_settings->setText(QCoreApplication::translate("MainWindow", "&Settings...", nullptr));
#if QT_CONFIG(shortcut)
        action_settings->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        action_about_strawberry->setText(QCoreApplication::translate("MainWindow", "&About Strawberry", nullptr));
#if QT_CONFIG(shortcut)
        action_about_strawberry->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_shuffle->setText(QCoreApplication::translate("MainWindow", "S&huffle playlist", nullptr));
#if QT_CONFIG(shortcut)
        action_shuffle->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+H", nullptr));
#endif // QT_CONFIG(shortcut)
        action_add_file->setText(QCoreApplication::translate("MainWindow", "&Add file...", nullptr));
#if QT_CONFIG(shortcut)
        action_add_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_open_file->setText(QCoreApplication::translate("MainWindow", "&Open file...", nullptr));
        action_open_cd->setText(QCoreApplication::translate("MainWindow", "Open audio &CD...", nullptr));
        action_cover_manager->setText(QCoreApplication::translate("MainWindow", "&Cover Manager", nullptr));
        action_console->setText(QCoreApplication::translate("MainWindow", "C&onsole", nullptr));
        action_shuffle_mode->setText(QCoreApplication::translate("MainWindow", "&Shuffle mode", nullptr));
        action_repeat_mode->setText(QCoreApplication::translate("MainWindow", "&Repeat mode", nullptr));
        action_remove_from_playlist->setText(QCoreApplication::translate("MainWindow", "Remove from playlist", nullptr));
        action_equalizer->setText(QCoreApplication::translate("MainWindow", "&Equalizer", nullptr));
        action_transcoder->setText(QCoreApplication::translate("MainWindow", "&Transcode Music", nullptr));
        action_add_folder->setText(QCoreApplication::translate("MainWindow", "Add &folder...", nullptr));
        action_jump->setText(QCoreApplication::translate("MainWindow", "&Jump to the currently playing track", nullptr));
#if QT_CONFIG(shortcut)
        action_jump->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        action_new_playlist->setText(QCoreApplication::translate("MainWindow", "&New playlist", nullptr));
#if QT_CONFIG(shortcut)
        action_new_playlist->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_save_playlist->setText(QCoreApplication::translate("MainWindow", "Save &playlist...", nullptr));
#if QT_CONFIG(shortcut)
        action_save_playlist->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_load_playlist->setText(QCoreApplication::translate("MainWindow", "&Load playlist...", nullptr));
#if QT_CONFIG(shortcut)
        action_load_playlist->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_save_all_playlists->setText(QCoreApplication::translate("MainWindow", "&Save all playlists...", nullptr));
        action_next_playlist->setText(QCoreApplication::translate("MainWindow", "Go to next playlist tab", nullptr));
        action_previous_playlist->setText(QCoreApplication::translate("MainWindow", "Go to previous playlist tab", nullptr));
        action_last_playlist->setText(QCoreApplication::translate("MainWindow", "Go to last playlist tab", nullptr));
        action_active_playlist->setText(QCoreApplication::translate("MainWindow", "Go to active playlist tab", nullptr));
        action_close_playlist->setText(QCoreApplication::translate("MainWindow", "Close current playlist tab", nullptr));
        action_update_collection->setText(QCoreApplication::translate("MainWindow", "&Update changed collection folders", nullptr));
        action_about_qt->setText(QCoreApplication::translate("MainWindow", "About &Qt", nullptr));
        action_mute->setText(QCoreApplication::translate("MainWindow", "&Mute", nullptr));
#if QT_CONFIG(shortcut)
        action_mute->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        action_full_collection_scan->setText(QCoreApplication::translate("MainWindow", "&Do a full collection rescan", nullptr));
        action_stop_collection_scan->setText(QCoreApplication::translate("MainWindow", "Stop collection scan", nullptr));
#if QT_CONFIG(tooltip)
        action_stop_collection_scan->setToolTip(QCoreApplication::translate("MainWindow", "Stop collection scan", nullptr));
#endif // QT_CONFIG(tooltip)
        action_auto_complete_tags->setText(QCoreApplication::translate("MainWindow", "Complete tags automatically...", nullptr));
#if QT_CONFIG(shortcut)
        action_auto_complete_tags->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        action_toggle_scrobbling->setText(QCoreApplication::translate("MainWindow", "Toggle scrobbling", nullptr));
        action_remove_duplicates->setText(QCoreApplication::translate("MainWindow", "Remove &duplicates from playlist", nullptr));
        action_remove_unavailable->setText(QCoreApplication::translate("MainWindow", "Remove &unavailable tracks from playlist", nullptr));
        action_add_files_to_transcoder->setText(QCoreApplication::translate("MainWindow", "Add file(s) to transcoder", nullptr));
#if QT_CONFIG(tooltip)
        action_add_files_to_transcoder->setToolTip(QCoreApplication::translate("MainWindow", "Add file to transcoder", nullptr));
#endif // QT_CONFIG(tooltip)
        action_add_stream->setText(QCoreApplication::translate("MainWindow", "Add stream...", nullptr));
        action_toggle_show_sidebar->setText(QCoreApplication::translate("MainWindow", "Show sidebar", nullptr));
#if QT_CONFIG(accessibility)
        back_button->setAccessibleName(QCoreApplication::translate("MainWindow", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pause_play_button->setAccessibleName(QCoreApplication::translate("MainWindow", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        stop_button->setAccessibleName(QCoreApplication::translate("MainWindow", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        forward_button->setAccessibleName(QCoreApplication::translate("MainWindow", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        button_love->setAccessibleName(QCoreApplication::translate("MainWindow", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
        button_scrobble->setText(QString());
        menu_music->setTitle(QCoreApplication::translate("MainWindow", "&Music", nullptr));
        menu_playlist->setTitle(QCoreApplication::translate("MainWindow", "P&laylist", nullptr));
        menu_help->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menu_tools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
