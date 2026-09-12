/********************************************************************************
** Form generated from reading UI file 'playlistsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTSETTINGSPAGE_H
#define UI_PLAYLISTSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlaylistSettingsPage
{
public:
    QVBoxLayout *layout_playlistsettingspage;
    QCheckBox *checkbox_alternating_row_colors;
    QCheckBox *checkbox_barscurrenttrack;
    QCheckBox *checkbox_glowcurrenttrack;
    QCheckBox *checkbox_warncloseplaylist;
    QCheckBox *checkbox_continueonerror;
    QCheckBox *checkbox_greyout_songs_play;
    QCheckBox *checkbox_greyout_songs_startup;
    QCheckBox *checkbox_select_track;
    QCheckBox *checkbox_show_toolbar;
    QCheckBox *checkbox_playlist_clear;
    QCheckBox *checkbox_delete_files;
    QCheckBox *checkbox_auto_sort;
    QGroupBox *groupbox_paths;
    QVBoxLayout *layout_paths;
    QRadioButton *radiobutton_automaticpath;
    QRadioButton *radiobutton_absolutepath;
    QRadioButton *radiobutton_relativepath;
    QRadioButton *radiobutton_askpath;
    QGroupBox *groupbox_metadata;
    QVBoxLayout *layout_metadata;
    QCheckBox *checkbox_editmetadatainline;
    QCheckBox *checkbox_writemetadata;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *PlaylistSettingsPage)
    {
        if (PlaylistSettingsPage->objectName().isEmpty())
            PlaylistSettingsPage->setObjectName("PlaylistSettingsPage");
        PlaylistSettingsPage->resize(517, 673);
        layout_playlistsettingspage = new QVBoxLayout(PlaylistSettingsPage);
        layout_playlistsettingspage->setObjectName("layout_playlistsettingspage");
        checkbox_alternating_row_colors = new QCheckBox(PlaylistSettingsPage);
        checkbox_alternating_row_colors->setObjectName("checkbox_alternating_row_colors");

        layout_playlistsettingspage->addWidget(checkbox_alternating_row_colors);

        checkbox_barscurrenttrack = new QCheckBox(PlaylistSettingsPage);
        checkbox_barscurrenttrack->setObjectName("checkbox_barscurrenttrack");

        layout_playlistsettingspage->addWidget(checkbox_barscurrenttrack);

        checkbox_glowcurrenttrack = new QCheckBox(PlaylistSettingsPage);
        checkbox_glowcurrenttrack->setObjectName("checkbox_glowcurrenttrack");

        layout_playlistsettingspage->addWidget(checkbox_glowcurrenttrack);

        checkbox_warncloseplaylist = new QCheckBox(PlaylistSettingsPage);
        checkbox_warncloseplaylist->setObjectName("checkbox_warncloseplaylist");

        layout_playlistsettingspage->addWidget(checkbox_warncloseplaylist);

        checkbox_continueonerror = new QCheckBox(PlaylistSettingsPage);
        checkbox_continueonerror->setObjectName("checkbox_continueonerror");

        layout_playlistsettingspage->addWidget(checkbox_continueonerror);

        checkbox_greyout_songs_play = new QCheckBox(PlaylistSettingsPage);
        checkbox_greyout_songs_play->setObjectName("checkbox_greyout_songs_play");

        layout_playlistsettingspage->addWidget(checkbox_greyout_songs_play);

        checkbox_greyout_songs_startup = new QCheckBox(PlaylistSettingsPage);
        checkbox_greyout_songs_startup->setObjectName("checkbox_greyout_songs_startup");

        layout_playlistsettingspage->addWidget(checkbox_greyout_songs_startup);

        checkbox_select_track = new QCheckBox(PlaylistSettingsPage);
        checkbox_select_track->setObjectName("checkbox_select_track");

        layout_playlistsettingspage->addWidget(checkbox_select_track);

        checkbox_show_toolbar = new QCheckBox(PlaylistSettingsPage);
        checkbox_show_toolbar->setObjectName("checkbox_show_toolbar");

        layout_playlistsettingspage->addWidget(checkbox_show_toolbar);

        checkbox_playlist_clear = new QCheckBox(PlaylistSettingsPage);
        checkbox_playlist_clear->setObjectName("checkbox_playlist_clear");

        layout_playlistsettingspage->addWidget(checkbox_playlist_clear);

        checkbox_delete_files = new QCheckBox(PlaylistSettingsPage);
        checkbox_delete_files->setObjectName("checkbox_delete_files");

        layout_playlistsettingspage->addWidget(checkbox_delete_files);

        checkbox_auto_sort = new QCheckBox(PlaylistSettingsPage);
        checkbox_auto_sort->setObjectName("checkbox_auto_sort");

        layout_playlistsettingspage->addWidget(checkbox_auto_sort);

        groupbox_paths = new QGroupBox(PlaylistSettingsPage);
        groupbox_paths->setObjectName("groupbox_paths");
        layout_paths = new QVBoxLayout(groupbox_paths);
        layout_paths->setObjectName("layout_paths");
        radiobutton_automaticpath = new QRadioButton(groupbox_paths);
        radiobutton_automaticpath->setObjectName("radiobutton_automaticpath");
        radiobutton_automaticpath->setChecked(true);

        layout_paths->addWidget(radiobutton_automaticpath);

        radiobutton_absolutepath = new QRadioButton(groupbox_paths);
        radiobutton_absolutepath->setObjectName("radiobutton_absolutepath");

        layout_paths->addWidget(radiobutton_absolutepath);

        radiobutton_relativepath = new QRadioButton(groupbox_paths);
        radiobutton_relativepath->setObjectName("radiobutton_relativepath");

        layout_paths->addWidget(radiobutton_relativepath);

        radiobutton_askpath = new QRadioButton(groupbox_paths);
        radiobutton_askpath->setObjectName("radiobutton_askpath");

        layout_paths->addWidget(radiobutton_askpath);


        layout_playlistsettingspage->addWidget(groupbox_paths);

        groupbox_metadata = new QGroupBox(PlaylistSettingsPage);
        groupbox_metadata->setObjectName("groupbox_metadata");
        layout_metadata = new QVBoxLayout(groupbox_metadata);
        layout_metadata->setObjectName("layout_metadata");
        checkbox_editmetadatainline = new QCheckBox(groupbox_metadata);
        checkbox_editmetadatainline->setObjectName("checkbox_editmetadatainline");

        layout_metadata->addWidget(checkbox_editmetadatainline);

        checkbox_writemetadata = new QCheckBox(groupbox_metadata);
        checkbox_writemetadata->setObjectName("checkbox_writemetadata");
        checkbox_writemetadata->setChecked(true);

        layout_metadata->addWidget(checkbox_writemetadata);


        layout_playlistsettingspage->addWidget(groupbox_metadata);

        spacer_bottom = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_playlistsettingspage->addItem(spacer_bottom);


        retranslateUi(PlaylistSettingsPage);
        QObject::connect(checkbox_barscurrenttrack, &QCheckBox::toggled, checkbox_glowcurrenttrack, &QCheckBox::setEnabled);

        QMetaObject::connectSlotsByName(PlaylistSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *PlaylistSettingsPage)
    {
        PlaylistSettingsPage->setWindowTitle(QCoreApplication::translate("PlaylistSettingsPage", "Playlist", nullptr));
        checkbox_alternating_row_colors->setText(QCoreApplication::translate("PlaylistSettingsPage", "Use alternating row colors", nullptr));
        checkbox_barscurrenttrack->setText(QCoreApplication::translate("PlaylistSettingsPage", "Show bars on the currently playing track", nullptr));
        checkbox_glowcurrenttrack->setText(QCoreApplication::translate("PlaylistSettingsPage", "Show a glowing animation on the currently playing track", nullptr));
        checkbox_warncloseplaylist->setText(QCoreApplication::translate("PlaylistSettingsPage", "Warn me when closing a playlist tab", nullptr));
        checkbox_continueonerror->setText(QCoreApplication::translate("PlaylistSettingsPage", "Continue to the next item in the playlist if a song is unavailable", nullptr));
        checkbox_greyout_songs_play->setText(QCoreApplication::translate("PlaylistSettingsPage", "Grey out unavailable songs in playlists on playback", nullptr));
        checkbox_greyout_songs_startup->setText(QCoreApplication::translate("PlaylistSettingsPage", "Grey out unavailable songs in playlists on startup", nullptr));
        checkbox_select_track->setText(QCoreApplication::translate("PlaylistSettingsPage", "Automatically select current playing track", nullptr));
        checkbox_show_toolbar->setText(QCoreApplication::translate("PlaylistSettingsPage", "Enable playlist toolbar", nullptr));
        checkbox_playlist_clear->setText(QCoreApplication::translate("PlaylistSettingsPage", "Enable playlist clear button", nullptr));
        checkbox_delete_files->setText(QCoreApplication::translate("PlaylistSettingsPage", "Enable delete files in the right click context menu", nullptr));
        checkbox_auto_sort->setText(QCoreApplication::translate("PlaylistSettingsPage", "Automatically sort playlist when inserting songs", nullptr));
        groupbox_paths->setTitle(QCoreApplication::translate("PlaylistSettingsPage", "When saving a playlist, file paths should be", nullptr));
        radiobutton_automaticpath->setText(QCoreApplication::translate("PlaylistSettingsPage", "A&utomatic", nullptr));
        radiobutton_absolutepath->setText(QCoreApplication::translate("PlaylistSettingsPage", "Absolu&te", nullptr));
        radiobutton_relativepath->setText(QCoreApplication::translate("PlaylistSettingsPage", "Re&lative", nullptr));
        radiobutton_askpath->setText(QCoreApplication::translate("PlaylistSettingsPage", "As&k when saving", nullptr));
        groupbox_metadata->setTitle(QCoreApplication::translate("PlaylistSettingsPage", "Metadata", nullptr));
#if QT_CONFIG(tooltip)
        checkbox_editmetadatainline->setToolTip(QCoreApplication::translate("PlaylistSettingsPage", "If activated, clicking a selected song in the playlist view will let you edit the tag value directly", nullptr));
#endif // QT_CONFIG(tooltip)
        checkbox_editmetadatainline->setText(QCoreApplication::translate("PlaylistSettingsPage", "Enable song metadata inline edition with click", nullptr));
        checkbox_writemetadata->setText(QCoreApplication::translate("PlaylistSettingsPage", "Write metadata when saving playlists", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaylistSettingsPage: public Ui_PlaylistSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTSETTINGSPAGE_H
