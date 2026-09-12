/********************************************************************************
** Form generated from reading UI file 'collectionsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLECTIONSETTINGSPAGE_H
#define UI_COLLECTIONSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CollectionSettingsPage
{
public:
    QVBoxLayout *layout_collectionsettingspage;
    QLabel *label_collection_folders;
    QHBoxLayout *layout_collection_folders;
    QListView *list;
    QVBoxLayout *layout_collection_folder_buttons;
    QPushButton *add_directory;
    QPushButton *remove_directory;
    QSpacerItem *spacer_collection_buttons;
    QGroupBox *groupbox_updating;
    QVBoxLayout *layout_updating;
    QCheckBox *startup_scan;
    QCheckBox *monitor;
    QCheckBox *song_tracking;
    QCheckBox *mark_songs_unavailable;
    QCheckBox *song_ebur128_loudness_analysis;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_expire_unavailable_songs_after;
    QSpinBox *expire_unavailable_songs_days;
    QLabel *label_expire_unavailable_songs_days;
    QSpacerItem *spacer_expire_unavailable_songs;
    QLabel *label_preferred_cover_filenames;
    QLineEdit *cover_art_patterns;
    QGroupBox *groupbox_display;
    QVBoxLayout *layout_display;
    QCheckBox *auto_open;
    QCheckBox *show_dividers;
    QCheckBox *pretty_covers;
    QCheckBox *various_artists;
    QCheckBox *checkbox_skip_articles_for_artists;
    QCheckBox *checkbox_skip_articles_for_albums;
    QCheckBox *checkbox_use_sort_tags;
    QGroupBox *groupbox_albumcovercache;
    QVBoxLayout *verticalLayout;
    QGridLayout *layout_cache_size;
    QSpinBox *spinbox_cache_size;
    QLabel *label_cache_size;
    QComboBox *combobox_cache_size;
    QSpacerItem *spacer_cache_size;
    QHBoxLayout *layout_disk_cache;
    QCheckBox *checkbox_disk_cache;
    QSpacerItem *spacer_disk_cache;
    QGridLayout *layout_disk_cache_size;
    QLabel *label_disk_cache_size;
    QComboBox *combobox_disk_cache_size;
    QSpinBox *spinbox_disk_cache_size;
    QSpacerItem *spacer_disk_cache_size;
    QHBoxLayout *horizontalLayout;
    QLabel *label_disk_cache_in_use;
    QLabel *disk_cache_in_use;
    QPushButton *button_clear_disk_cache;
    QSpacerItem *spacer_disk_cache_in_use;
    QGroupBox *groupbox_song_playcounts_and_ratings;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkbox_save_playcounts;
    QCheckBox *checkbox_save_ratings;
    QCheckBox *checkbox_overwrite_playcount;
    QCheckBox *checkbox_overwrite_rating;
    QHBoxLayout *layout_statistics_button;
    QPushButton *button_save_stats;
    QSpacerItem *spacer_save_stats;
    QCheckBox *checkbox_delete_files;

    void setupUi(QWidget *CollectionSettingsPage)
    {
        if (CollectionSettingsPage->objectName().isEmpty())
            CollectionSettingsPage->setObjectName("CollectionSettingsPage");
        CollectionSettingsPage->resize(604, 1112);
        layout_collectionsettingspage = new QVBoxLayout(CollectionSettingsPage);
        layout_collectionsettingspage->setObjectName("layout_collectionsettingspage");
        label_collection_folders = new QLabel(CollectionSettingsPage);
        label_collection_folders->setObjectName("label_collection_folders");

        layout_collectionsettingspage->addWidget(label_collection_folders);

        layout_collection_folders = new QHBoxLayout();
        layout_collection_folders->setObjectName("layout_collection_folders");
        list = new QListView(CollectionSettingsPage);
        list->setObjectName("list");
        list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        list->setIconSize(QSize(16, 16));
        list->setUniformItemSizes(true);

        layout_collection_folders->addWidget(list);

        layout_collection_folder_buttons = new QVBoxLayout();
        layout_collection_folder_buttons->setObjectName("layout_collection_folder_buttons");
        add_directory = new QPushButton(CollectionSettingsPage);
        add_directory->setObjectName("add_directory");
        add_directory->setFlat(false);

        layout_collection_folder_buttons->addWidget(add_directory);

        remove_directory = new QPushButton(CollectionSettingsPage);
        remove_directory->setObjectName("remove_directory");

        layout_collection_folder_buttons->addWidget(remove_directory);

        spacer_collection_buttons = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_collection_folder_buttons->addItem(spacer_collection_buttons);


        layout_collection_folders->addLayout(layout_collection_folder_buttons);


        layout_collectionsettingspage->addLayout(layout_collection_folders);

        groupbox_updating = new QGroupBox(CollectionSettingsPage);
        groupbox_updating->setObjectName("groupbox_updating");
        layout_updating = new QVBoxLayout(groupbox_updating);
        layout_updating->setObjectName("layout_updating");
        startup_scan = new QCheckBox(groupbox_updating);
        startup_scan->setObjectName("startup_scan");

        layout_updating->addWidget(startup_scan);

        monitor = new QCheckBox(groupbox_updating);
        monitor->setObjectName("monitor");

        layout_updating->addWidget(monitor);

        song_tracking = new QCheckBox(groupbox_updating);
        song_tracking->setObjectName("song_tracking");

        layout_updating->addWidget(song_tracking);

        mark_songs_unavailable = new QCheckBox(groupbox_updating);
        mark_songs_unavailable->setObjectName("mark_songs_unavailable");

        layout_updating->addWidget(mark_songs_unavailable);

        song_ebur128_loudness_analysis = new QCheckBox(groupbox_updating);
        song_ebur128_loudness_analysis->setObjectName("song_ebur128_loudness_analysis");

        layout_updating->addWidget(song_ebur128_loudness_analysis);

        widget = new QWidget(groupbox_updating);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_expire_unavailable_songs_after = new QLabel(widget);
        label_expire_unavailable_songs_after->setObjectName("label_expire_unavailable_songs_after");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_expire_unavailable_songs_after->sizePolicy().hasHeightForWidth());
        label_expire_unavailable_songs_after->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_expire_unavailable_songs_after);

        expire_unavailable_songs_days = new QSpinBox(widget);
        expire_unavailable_songs_days->setObjectName("expire_unavailable_songs_days");
        expire_unavailable_songs_days->setMaximum(365);
        expire_unavailable_songs_days->setValue(60);

        horizontalLayout_2->addWidget(expire_unavailable_songs_days);

        label_expire_unavailable_songs_days = new QLabel(widget);
        label_expire_unavailable_songs_days->setObjectName("label_expire_unavailable_songs_days");
        sizePolicy.setHeightForWidth(label_expire_unavailable_songs_days->sizePolicy().hasHeightForWidth());
        label_expire_unavailable_songs_days->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_expire_unavailable_songs_days);

        spacer_expire_unavailable_songs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_expire_unavailable_songs);


        layout_updating->addWidget(widget);

        label_preferred_cover_filenames = new QLabel(groupbox_updating);
        label_preferred_cover_filenames->setObjectName("label_preferred_cover_filenames");

        layout_updating->addWidget(label_preferred_cover_filenames);

        cover_art_patterns = new QLineEdit(groupbox_updating);
        cover_art_patterns->setObjectName("cover_art_patterns");

        layout_updating->addWidget(cover_art_patterns);


        layout_collectionsettingspage->addWidget(groupbox_updating);

        groupbox_display = new QGroupBox(CollectionSettingsPage);
        groupbox_display->setObjectName("groupbox_display");
        layout_display = new QVBoxLayout(groupbox_display);
        layout_display->setObjectName("layout_display");
        auto_open = new QCheckBox(groupbox_display);
        auto_open->setObjectName("auto_open");

        layout_display->addWidget(auto_open);

        show_dividers = new QCheckBox(groupbox_display);
        show_dividers->setObjectName("show_dividers");

        layout_display->addWidget(show_dividers);

        pretty_covers = new QCheckBox(groupbox_display);
        pretty_covers->setObjectName("pretty_covers");

        layout_display->addWidget(pretty_covers);

        various_artists = new QCheckBox(groupbox_display);
        various_artists->setObjectName("various_artists");

        layout_display->addWidget(various_artists);

        checkbox_skip_articles_for_artists = new QCheckBox(groupbox_display);
        checkbox_skip_articles_for_artists->setObjectName("checkbox_skip_articles_for_artists");

        layout_display->addWidget(checkbox_skip_articles_for_artists);

        checkbox_skip_articles_for_albums = new QCheckBox(groupbox_display);
        checkbox_skip_articles_for_albums->setObjectName("checkbox_skip_articles_for_albums");

        layout_display->addWidget(checkbox_skip_articles_for_albums);

        checkbox_use_sort_tags = new QCheckBox(groupbox_display);
        checkbox_use_sort_tags->setObjectName("checkbox_use_sort_tags");

        layout_display->addWidget(checkbox_use_sort_tags);


        layout_collectionsettingspage->addWidget(groupbox_display);

        groupbox_albumcovercache = new QGroupBox(CollectionSettingsPage);
        groupbox_albumcovercache->setObjectName("groupbox_albumcovercache");
        verticalLayout = new QVBoxLayout(groupbox_albumcovercache);
        verticalLayout->setObjectName("verticalLayout");
        layout_cache_size = new QGridLayout();
        layout_cache_size->setObjectName("layout_cache_size");
        spinbox_cache_size = new QSpinBox(groupbox_albumcovercache);
        spinbox_cache_size->setObjectName("spinbox_cache_size");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinbox_cache_size->sizePolicy().hasHeightForWidth());
        spinbox_cache_size->setSizePolicy(sizePolicy1);
        spinbox_cache_size->setMaximumSize(QSize(80, 16777215));
        spinbox_cache_size->setMaximum(1048576);

        layout_cache_size->addWidget(spinbox_cache_size, 0, 2, 1, 1);

        label_cache_size = new QLabel(groupbox_albumcovercache);
        label_cache_size->setObjectName("label_cache_size");
        sizePolicy1.setHeightForWidth(label_cache_size->sizePolicy().hasHeightForWidth());
        label_cache_size->setSizePolicy(sizePolicy1);

        layout_cache_size->addWidget(label_cache_size, 0, 0, 1, 1);

        combobox_cache_size = new QComboBox(groupbox_albumcovercache);
        combobox_cache_size->setObjectName("combobox_cache_size");
        sizePolicy1.setHeightForWidth(combobox_cache_size->sizePolicy().hasHeightForWidth());
        combobox_cache_size->setSizePolicy(sizePolicy1);

        layout_cache_size->addWidget(combobox_cache_size, 0, 3, 1, 1);

        spacer_cache_size = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_cache_size->addItem(spacer_cache_size, 0, 4, 1, 1);


        verticalLayout->addLayout(layout_cache_size);

        layout_disk_cache = new QHBoxLayout();
        layout_disk_cache->setObjectName("layout_disk_cache");
        checkbox_disk_cache = new QCheckBox(groupbox_albumcovercache);
        checkbox_disk_cache->setObjectName("checkbox_disk_cache");

        layout_disk_cache->addWidget(checkbox_disk_cache);

        spacer_disk_cache = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_disk_cache->addItem(spacer_disk_cache);


        verticalLayout->addLayout(layout_disk_cache);

        layout_disk_cache_size = new QGridLayout();
        layout_disk_cache_size->setObjectName("layout_disk_cache_size");
        label_disk_cache_size = new QLabel(groupbox_albumcovercache);
        label_disk_cache_size->setObjectName("label_disk_cache_size");
        sizePolicy1.setHeightForWidth(label_disk_cache_size->sizePolicy().hasHeightForWidth());
        label_disk_cache_size->setSizePolicy(sizePolicy1);

        layout_disk_cache_size->addWidget(label_disk_cache_size, 0, 0, 1, 1);

        combobox_disk_cache_size = new QComboBox(groupbox_albumcovercache);
        combobox_disk_cache_size->setObjectName("combobox_disk_cache_size");
        sizePolicy1.setHeightForWidth(combobox_disk_cache_size->sizePolicy().hasHeightForWidth());
        combobox_disk_cache_size->setSizePolicy(sizePolicy1);

        layout_disk_cache_size->addWidget(combobox_disk_cache_size, 0, 2, 1, 1);

        spinbox_disk_cache_size = new QSpinBox(groupbox_albumcovercache);
        spinbox_disk_cache_size->setObjectName("spinbox_disk_cache_size");
        sizePolicy1.setHeightForWidth(spinbox_disk_cache_size->sizePolicy().hasHeightForWidth());
        spinbox_disk_cache_size->setSizePolicy(sizePolicy1);
        spinbox_disk_cache_size->setMaximumSize(QSize(80, 16777215));
        spinbox_disk_cache_size->setMaximum(1048576);

        layout_disk_cache_size->addWidget(spinbox_disk_cache_size, 0, 1, 1, 1);

        spacer_disk_cache_size = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_disk_cache_size->addItem(spacer_disk_cache_size, 0, 4, 1, 1);


        verticalLayout->addLayout(layout_disk_cache_size);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_disk_cache_in_use = new QLabel(groupbox_albumcovercache);
        label_disk_cache_in_use->setObjectName("label_disk_cache_in_use");

        horizontalLayout->addWidget(label_disk_cache_in_use);

        disk_cache_in_use = new QLabel(groupbox_albumcovercache);
        disk_cache_in_use->setObjectName("disk_cache_in_use");

        horizontalLayout->addWidget(disk_cache_in_use);

        button_clear_disk_cache = new QPushButton(groupbox_albumcovercache);
        button_clear_disk_cache->setObjectName("button_clear_disk_cache");
        sizePolicy1.setHeightForWidth(button_clear_disk_cache->sizePolicy().hasHeightForWidth());
        button_clear_disk_cache->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(button_clear_disk_cache);

        spacer_disk_cache_in_use = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_disk_cache_in_use);


        verticalLayout->addLayout(horizontalLayout);


        layout_collectionsettingspage->addWidget(groupbox_albumcovercache);

        groupbox_song_playcounts_and_ratings = new QGroupBox(CollectionSettingsPage);
        groupbox_song_playcounts_and_ratings->setObjectName("groupbox_song_playcounts_and_ratings");
        verticalLayout_3 = new QVBoxLayout(groupbox_song_playcounts_and_ratings);
        verticalLayout_3->setObjectName("verticalLayout_3");
        checkbox_save_playcounts = new QCheckBox(groupbox_song_playcounts_and_ratings);
        checkbox_save_playcounts->setObjectName("checkbox_save_playcounts");

        verticalLayout_3->addWidget(checkbox_save_playcounts);

        checkbox_save_ratings = new QCheckBox(groupbox_song_playcounts_and_ratings);
        checkbox_save_ratings->setObjectName("checkbox_save_ratings");

        verticalLayout_3->addWidget(checkbox_save_ratings);

        checkbox_overwrite_playcount = new QCheckBox(groupbox_song_playcounts_and_ratings);
        checkbox_overwrite_playcount->setObjectName("checkbox_overwrite_playcount");

        verticalLayout_3->addWidget(checkbox_overwrite_playcount);

        checkbox_overwrite_rating = new QCheckBox(groupbox_song_playcounts_and_ratings);
        checkbox_overwrite_rating->setObjectName("checkbox_overwrite_rating");

        verticalLayout_3->addWidget(checkbox_overwrite_rating);

        layout_statistics_button = new QHBoxLayout();
        layout_statistics_button->setObjectName("layout_statistics_button");
        button_save_stats = new QPushButton(groupbox_song_playcounts_and_ratings);
        button_save_stats->setObjectName("button_save_stats");

        layout_statistics_button->addWidget(button_save_stats);

        spacer_save_stats = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_statistics_button->addItem(spacer_save_stats);


        verticalLayout_3->addLayout(layout_statistics_button);


        layout_collectionsettingspage->addWidget(groupbox_song_playcounts_and_ratings);

        checkbox_delete_files = new QCheckBox(CollectionSettingsPage);
        checkbox_delete_files->setObjectName("checkbox_delete_files");

        layout_collectionsettingspage->addWidget(checkbox_delete_files);

        QWidget::setTabOrder(list, add_directory);
        QWidget::setTabOrder(add_directory, remove_directory);
        QWidget::setTabOrder(remove_directory, startup_scan);
        QWidget::setTabOrder(startup_scan, monitor);
        QWidget::setTabOrder(monitor, song_tracking);
        QWidget::setTabOrder(song_tracking, mark_songs_unavailable);
        QWidget::setTabOrder(mark_songs_unavailable, song_ebur128_loudness_analysis);
        QWidget::setTabOrder(song_ebur128_loudness_analysis, expire_unavailable_songs_days);
        QWidget::setTabOrder(expire_unavailable_songs_days, cover_art_patterns);
        QWidget::setTabOrder(cover_art_patterns, auto_open);
        QWidget::setTabOrder(auto_open, show_dividers);
        QWidget::setTabOrder(show_dividers, pretty_covers);
        QWidget::setTabOrder(pretty_covers, various_artists);
        QWidget::setTabOrder(various_artists, checkbox_skip_articles_for_artists);
        QWidget::setTabOrder(checkbox_skip_articles_for_artists, checkbox_skip_articles_for_albums);
        QWidget::setTabOrder(checkbox_skip_articles_for_albums, checkbox_use_sort_tags);
        QWidget::setTabOrder(checkbox_use_sort_tags, spinbox_cache_size);
        QWidget::setTabOrder(spinbox_cache_size, combobox_cache_size);
        QWidget::setTabOrder(combobox_cache_size, checkbox_disk_cache);
        QWidget::setTabOrder(checkbox_disk_cache, spinbox_disk_cache_size);
        QWidget::setTabOrder(spinbox_disk_cache_size, combobox_disk_cache_size);
        QWidget::setTabOrder(combobox_disk_cache_size, button_clear_disk_cache);
        QWidget::setTabOrder(button_clear_disk_cache, checkbox_save_playcounts);
        QWidget::setTabOrder(checkbox_save_playcounts, checkbox_save_ratings);
        QWidget::setTabOrder(checkbox_save_ratings, checkbox_overwrite_playcount);
        QWidget::setTabOrder(checkbox_overwrite_playcount, checkbox_overwrite_rating);
        QWidget::setTabOrder(checkbox_overwrite_rating, button_save_stats);
        QWidget::setTabOrder(button_save_stats, checkbox_delete_files);

        retranslateUi(CollectionSettingsPage);

        QMetaObject::connectSlotsByName(CollectionSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *CollectionSettingsPage)
    {
        CollectionSettingsPage->setWindowTitle(QCoreApplication::translate("CollectionSettingsPage", "Collection", nullptr));
        label_collection_folders->setText(QCoreApplication::translate("CollectionSettingsPage", "These folders will be scanned for music to make up your collection", nullptr));
        add_directory->setText(QCoreApplication::translate("CollectionSettingsPage", "Add new folder...", nullptr));
        remove_directory->setText(QCoreApplication::translate("CollectionSettingsPage", "Remove folder", nullptr));
        groupbox_updating->setTitle(QCoreApplication::translate("CollectionSettingsPage", "Automatic updating", nullptr));
        startup_scan->setText(QCoreApplication::translate("CollectionSettingsPage", "Update the collection when Strawberry starts", nullptr));
        monitor->setText(QCoreApplication::translate("CollectionSettingsPage", "Monitor the collection for changes", nullptr));
        song_tracking->setText(QCoreApplication::translate("CollectionSettingsPage", "Song fingerprinting and tracking", nullptr));
        mark_songs_unavailable->setText(QCoreApplication::translate("CollectionSettingsPage", "Mark disappeared songs unavailable", nullptr));
        song_ebur128_loudness_analysis->setText(QCoreApplication::translate("CollectionSettingsPage", "Perform song EBU R 128 analysis (required for EBU R 128 loudness normalization)", nullptr));
        label_expire_unavailable_songs_after->setText(QCoreApplication::translate("CollectionSettingsPage", "Expire unavailable songs after", nullptr));
        label_expire_unavailable_songs_days->setText(QCoreApplication::translate("CollectionSettingsPage", "days", nullptr));
        label_preferred_cover_filenames->setText(QCoreApplication::translate("CollectionSettingsPage", "Preferred album art filenames (comma separated)", nullptr));
#if QT_CONFIG(tooltip)
        cover_art_patterns->setToolTip(QCoreApplication::translate("CollectionSettingsPage", "When looking for album art Strawberry will first look for picture files that contain one of these words.\n"
"If there are no matches then it will use the largest image in the directory.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupbox_display->setTitle(QCoreApplication::translate("CollectionSettingsPage", "Display options", nullptr));
        auto_open->setText(QCoreApplication::translate("CollectionSettingsPage", "Automatically open single categories in the collection tree", nullptr));
        show_dividers->setText(QCoreApplication::translate("CollectionSettingsPage", "Show dividers", nullptr));
        pretty_covers->setText(QCoreApplication::translate("CollectionSettingsPage", "Show album cover art in collection", nullptr));
        various_artists->setText(QCoreApplication::translate("CollectionSettingsPage", "Use various artists for compilation albums", nullptr));
        checkbox_skip_articles_for_artists->setText(QCoreApplication::translate("CollectionSettingsPage", "Skip leading articles (\"the\", \"a\", \"an\") when sorting artists, composers and performers", nullptr));
        checkbox_skip_articles_for_albums->setText(QCoreApplication::translate("CollectionSettingsPage", "Skip leading articles (\"the\", \"a\", \"an\") when sorting albums", nullptr));
        checkbox_use_sort_tags->setText(QCoreApplication::translate("CollectionSettingsPage", "Use sort tags for sorting when available", nullptr));
        groupbox_albumcovercache->setTitle(QCoreApplication::translate("CollectionSettingsPage", "Album cover pixmap cache", nullptr));
        label_cache_size->setText(QCoreApplication::translate("CollectionSettingsPage", "Size", nullptr));
        checkbox_disk_cache->setText(QCoreApplication::translate("CollectionSettingsPage", "Enable Disk Cache", nullptr));
        label_disk_cache_size->setText(QCoreApplication::translate("CollectionSettingsPage", "Disk Cache Size", nullptr));
        label_disk_cache_in_use->setText(QCoreApplication::translate("CollectionSettingsPage", "Current disk cache in use:", nullptr));
        disk_cache_in_use->setText(QString());
        button_clear_disk_cache->setText(QCoreApplication::translate("CollectionSettingsPage", "Clear Disk Cache", nullptr));
        groupbox_song_playcounts_and_ratings->setTitle(QCoreApplication::translate("CollectionSettingsPage", "Song playcounts and ratings", nullptr));
        checkbox_save_playcounts->setText(QCoreApplication::translate("CollectionSettingsPage", "Save playcounts to song tags when possible", nullptr));
        checkbox_save_ratings->setText(QCoreApplication::translate("CollectionSettingsPage", "Save ratings to song tags when possible", nullptr));
        checkbox_overwrite_playcount->setText(QCoreApplication::translate("CollectionSettingsPage", "Overwrite database playcount when songs are re-read from disk", nullptr));
        checkbox_overwrite_rating->setText(QCoreApplication::translate("CollectionSettingsPage", "Overwrite database rating when songs are re-read from disk", nullptr));
        button_save_stats->setText(QCoreApplication::translate("CollectionSettingsPage", "Save playcounts and ratings to files now", nullptr));
        checkbox_delete_files->setText(QCoreApplication::translate("CollectionSettingsPage", "Enable delete files in the right click context menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CollectionSettingsPage: public Ui_CollectionSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLECTIONSETTINGSPAGE_H
