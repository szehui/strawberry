/********************************************************************************
** Form generated from reading UI file 'notificationssettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONSSETTINGSPAGE_H
#define UI_NOTIFICATIONSSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotificationsSettingsPage
{
public:
    QAction *action_artist;
    QAction *action_album;
    QAction *action_title;
    QAction *action_albumartist;
    QAction *action_year;
    QAction *action_composer;
    QAction *action_performer;
    QAction *action_grouping;
    QAction *action_disc;
    QAction *action_track;
    QAction *action_genre;
    QAction *action_length;
    QAction *action_playcount;
    QAction *action_skipcount;
    QAction *action_rating;
    QAction *action_newline;
    QAction *action_filename;
    QAction *action_url;
    QAction *action_originalyear;
    QVBoxLayout *layout_notificationssettingspage;
    QLabel *label_info;
    QGroupBox *groupbox_notification_type;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *notifications_none;
    QRadioButton *notifications_native;
    QRadioButton *notifications_pretty;
    QRadioButton *notifications_tray;
    QGroupBox *notifications_general;
    QVBoxLayout *layout_notifications_general;
    QWidget *notifications_options;
    QHBoxLayout *layout_notifications_options;
    QLabel *label_3;
    QSpinBox *notifications_duration;
    QCheckBox *notifications_disable_duration;
    QCheckBox *notifications_volume;
    QCheckBox *notifications_play_mode;
    QCheckBox *notifications_pause;
    QCheckBox *notifications_resume;
    QCheckBox *notifications_art;
    QGroupBox *notifications_custom_text_group;
    QVBoxLayout *layout_notifications_custom_text_group;
    QFrame *frame_custom_notifications;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *notifications_custom_text_enabled;
    QPushButton *notifications_preview;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *notifications_custom_text1;
    QToolButton *notifications_exp_chooser1;
    QLabel *label_summary;
    QLabel *label_body;
    QLineEdit *notifications_custom_text2;
    QToolButton *notifications_exp_chooser2;
    QGroupBox *notifications_pretty_group;
    QGridLayout *layout_notifications_pretty_group;
    QSlider *notifications_opacity;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *notifications_font_choose;
    QPushButton *notifications_fg_choose;
    QLabel *label_4;
    QComboBox *notifications_bg_preset;
    QCheckBox *notifications_fading;
    QGroupBox *groupbox_discord;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *richpresence_enabled;
    QGroupBox *richpresence_listening_to;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *richpresence_listening_to_app;
    QRadioButton *richpresence_listening_to_artist;
    QRadioButton *richpresence_listening_to_song;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *NotificationsSettingsPage)
    {
        if (NotificationsSettingsPage->objectName().isEmpty())
            NotificationsSettingsPage->setObjectName("NotificationsSettingsPage");
        NotificationsSettingsPage->resize(518, 844);
        action_artist = new QAction(NotificationsSettingsPage);
        action_artist->setObjectName("action_artist");
        action_artist->setText(QString::fromUtf8("%artist%"));
        action_album = new QAction(NotificationsSettingsPage);
        action_album->setObjectName("action_album");
        action_album->setText(QString::fromUtf8("%album%"));
        action_title = new QAction(NotificationsSettingsPage);
        action_title->setObjectName("action_title");
        action_title->setText(QString::fromUtf8("%title%"));
        action_albumartist = new QAction(NotificationsSettingsPage);
        action_albumartist->setObjectName("action_albumartist");
        action_albumartist->setText(QString::fromUtf8("%albumartist%"));
        action_year = new QAction(NotificationsSettingsPage);
        action_year->setObjectName("action_year");
        action_year->setText(QString::fromUtf8("%year%"));
        action_composer = new QAction(NotificationsSettingsPage);
        action_composer->setObjectName("action_composer");
        action_composer->setText(QString::fromUtf8("%composer%"));
        action_performer = new QAction(NotificationsSettingsPage);
        action_performer->setObjectName("action_performer");
        action_performer->setText(QString::fromUtf8("%performer%"));
        action_grouping = new QAction(NotificationsSettingsPage);
        action_grouping->setObjectName("action_grouping");
        action_grouping->setText(QString::fromUtf8("%grouping%"));
        action_disc = new QAction(NotificationsSettingsPage);
        action_disc->setObjectName("action_disc");
        action_disc->setText(QString::fromUtf8("%disc%"));
        action_track = new QAction(NotificationsSettingsPage);
        action_track->setObjectName("action_track");
        action_track->setText(QString::fromUtf8("%track%"));
        action_genre = new QAction(NotificationsSettingsPage);
        action_genre->setObjectName("action_genre");
        action_genre->setText(QString::fromUtf8("%genre%"));
        action_length = new QAction(NotificationsSettingsPage);
        action_length->setObjectName("action_length");
        action_length->setText(QString::fromUtf8("%length%"));
        action_playcount = new QAction(NotificationsSettingsPage);
        action_playcount->setObjectName("action_playcount");
        action_playcount->setText(QString::fromUtf8("%playcount%"));
        action_skipcount = new QAction(NotificationsSettingsPage);
        action_skipcount->setObjectName("action_skipcount");
        action_skipcount->setText(QString::fromUtf8("%skipcount%"));
        action_rating = new QAction(NotificationsSettingsPage);
        action_rating->setObjectName("action_rating");
        action_rating->setText(QString::fromUtf8("%rating%"));
        action_newline = new QAction(NotificationsSettingsPage);
        action_newline->setObjectName("action_newline");
        action_newline->setText(QString::fromUtf8("%newline%"));
        action_filename = new QAction(NotificationsSettingsPage);
        action_filename->setObjectName("action_filename");
        action_url = new QAction(NotificationsSettingsPage);
        action_url->setObjectName("action_url");
        action_originalyear = new QAction(NotificationsSettingsPage);
        action_originalyear->setObjectName("action_originalyear");
        layout_notificationssettingspage = new QVBoxLayout(NotificationsSettingsPage);
        layout_notificationssettingspage->setObjectName("layout_notificationssettingspage");
        label_info = new QLabel(NotificationsSettingsPage);
        label_info->setObjectName("label_info");

        layout_notificationssettingspage->addWidget(label_info);

        groupbox_notification_type = new QGroupBox(NotificationsSettingsPage);
        groupbox_notification_type->setObjectName("groupbox_notification_type");
        verticalLayout_7 = new QVBoxLayout(groupbox_notification_type);
        verticalLayout_7->setObjectName("verticalLayout_7");
        notifications_none = new QRadioButton(groupbox_notification_type);
        notifications_none->setObjectName("notifications_none");

        verticalLayout_7->addWidget(notifications_none);

        notifications_native = new QRadioButton(groupbox_notification_type);
        notifications_native->setObjectName("notifications_native");

        verticalLayout_7->addWidget(notifications_native);

        notifications_pretty = new QRadioButton(groupbox_notification_type);
        notifications_pretty->setObjectName("notifications_pretty");

        verticalLayout_7->addWidget(notifications_pretty);

        notifications_tray = new QRadioButton(groupbox_notification_type);
        notifications_tray->setObjectName("notifications_tray");

        verticalLayout_7->addWidget(notifications_tray);


        layout_notificationssettingspage->addWidget(groupbox_notification_type);

        notifications_general = new QGroupBox(NotificationsSettingsPage);
        notifications_general->setObjectName("notifications_general");
        layout_notifications_general = new QVBoxLayout(notifications_general);
        layout_notifications_general->setObjectName("layout_notifications_general");
        notifications_options = new QWidget(notifications_general);
        notifications_options->setObjectName("notifications_options");
        layout_notifications_options = new QHBoxLayout(notifications_options);
        layout_notifications_options->setObjectName("layout_notifications_options");
        layout_notifications_options->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(notifications_options);
        label_3->setObjectName("label_3");

        layout_notifications_options->addWidget(label_3);

        notifications_duration = new QSpinBox(notifications_options);
        notifications_duration->setObjectName("notifications_duration");
        notifications_duration->setMinimum(1);
        notifications_duration->setMaximum(20);
        notifications_duration->setValue(5);

        layout_notifications_options->addWidget(notifications_duration);

        notifications_disable_duration = new QCheckBox(notifications_options);
        notifications_disable_duration->setObjectName("notifications_disable_duration");

        layout_notifications_options->addWidget(notifications_disable_duration);


        layout_notifications_general->addWidget(notifications_options);

        notifications_volume = new QCheckBox(notifications_general);
        notifications_volume->setObjectName("notifications_volume");

        layout_notifications_general->addWidget(notifications_volume);

        notifications_play_mode = new QCheckBox(notifications_general);
        notifications_play_mode->setObjectName("notifications_play_mode");

        layout_notifications_general->addWidget(notifications_play_mode);

        notifications_pause = new QCheckBox(notifications_general);
        notifications_pause->setObjectName("notifications_pause");

        layout_notifications_general->addWidget(notifications_pause);

        notifications_resume = new QCheckBox(notifications_general);
        notifications_resume->setObjectName("notifications_resume");

        layout_notifications_general->addWidget(notifications_resume);

        notifications_art = new QCheckBox(notifications_general);
        notifications_art->setObjectName("notifications_art");

        layout_notifications_general->addWidget(notifications_art);


        layout_notificationssettingspage->addWidget(notifications_general);

        notifications_custom_text_group = new QGroupBox(NotificationsSettingsPage);
        notifications_custom_text_group->setObjectName("notifications_custom_text_group");
        layout_notifications_custom_text_group = new QVBoxLayout(notifications_custom_text_group);
        layout_notifications_custom_text_group->setObjectName("layout_notifications_custom_text_group");
        frame_custom_notifications = new QFrame(notifications_custom_text_group);
        frame_custom_notifications->setObjectName("frame_custom_notifications");
        frame_custom_notifications->setFrameShape(QFrame::Shape::NoFrame);
        frame_custom_notifications->setFrameShadow(QFrame::Shadow::Plain);
        frame_custom_notifications->setLineWidth(0);
        horizontalLayout_7 = new QHBoxLayout(frame_custom_notifications);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        notifications_custom_text_enabled = new QCheckBox(frame_custom_notifications);
        notifications_custom_text_enabled->setObjectName("notifications_custom_text_enabled");

        horizontalLayout_7->addWidget(notifications_custom_text_enabled);

        notifications_preview = new QPushButton(frame_custom_notifications);
        notifications_preview->setObjectName("notifications_preview");
        notifications_preview->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(notifications_preview->sizePolicy().hasHeightForWidth());
        notifications_preview->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(notifications_preview);


        layout_notifications_custom_text_group->addWidget(frame_custom_notifications);

        frame = new QFrame(notifications_custom_text_group);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        frame->setLineWidth(0);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        notifications_custom_text1 = new QLineEdit(frame);
        notifications_custom_text1->setObjectName("notifications_custom_text1");
        notifications_custom_text1->setEnabled(false);
        notifications_custom_text1->setText(QString::fromUtf8(""));

        gridLayout->addWidget(notifications_custom_text1, 0, 1, 1, 1);

        notifications_exp_chooser1 = new QToolButton(frame);
        notifications_exp_chooser1->setObjectName("notifications_exp_chooser1");
        notifications_exp_chooser1->setEnabled(false);

        gridLayout->addWidget(notifications_exp_chooser1, 0, 2, 1, 1);

        label_summary = new QLabel(frame);
        label_summary->setObjectName("label_summary");

        gridLayout->addWidget(label_summary, 0, 0, 1, 1);

        label_body = new QLabel(frame);
        label_body->setObjectName("label_body");

        gridLayout->addWidget(label_body, 1, 0, 1, 1);

        notifications_custom_text2 = new QLineEdit(frame);
        notifications_custom_text2->setObjectName("notifications_custom_text2");
        notifications_custom_text2->setEnabled(false);
        notifications_custom_text2->setText(QString::fromUtf8(""));

        gridLayout->addWidget(notifications_custom_text2, 1, 1, 1, 1);

        notifications_exp_chooser2 = new QToolButton(frame);
        notifications_exp_chooser2->setObjectName("notifications_exp_chooser2");
        notifications_exp_chooser2->setEnabled(false);

        gridLayout->addWidget(notifications_exp_chooser2, 1, 2, 1, 1);


        layout_notifications_custom_text_group->addWidget(frame);


        layout_notificationssettingspage->addWidget(notifications_custom_text_group);

        notifications_pretty_group = new QGroupBox(NotificationsSettingsPage);
        notifications_pretty_group->setObjectName("notifications_pretty_group");
        layout_notifications_pretty_group = new QGridLayout(notifications_pretty_group);
        layout_notifications_pretty_group->setObjectName("layout_notifications_pretty_group");
        notifications_opacity = new QSlider(notifications_pretty_group);
        notifications_opacity->setObjectName("notifications_opacity");
        notifications_opacity->setOrientation(Qt::Orientation::Horizontal);

        layout_notifications_pretty_group->addWidget(notifications_opacity, 0, 1, 1, 2);

        label_5 = new QLabel(notifications_pretty_group);
        label_5->setObjectName("label_5");

        layout_notifications_pretty_group->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(notifications_pretty_group);
        label_6->setObjectName("label_6");

        layout_notifications_pretty_group->addWidget(label_6, 2, 0, 1, 1);

        notifications_font_choose = new QPushButton(notifications_pretty_group);
        notifications_font_choose->setObjectName("notifications_font_choose");

        layout_notifications_pretty_group->addWidget(notifications_font_choose, 2, 2, 1, 1);

        notifications_fg_choose = new QPushButton(notifications_pretty_group);
        notifications_fg_choose->setObjectName("notifications_fg_choose");

        layout_notifications_pretty_group->addWidget(notifications_fg_choose, 2, 1, 1, 1);

        label_4 = new QLabel(notifications_pretty_group);
        label_4->setObjectName("label_4");

        layout_notifications_pretty_group->addWidget(label_4, 0, 0, 1, 1);

        notifications_bg_preset = new QComboBox(notifications_pretty_group);
        notifications_bg_preset->addItem(QString());
        notifications_bg_preset->addItem(QString());
        notifications_bg_preset->addItem(QString());
        notifications_bg_preset->setObjectName("notifications_bg_preset");

        layout_notifications_pretty_group->addWidget(notifications_bg_preset, 1, 1, 1, 1);

        notifications_fading = new QCheckBox(notifications_pretty_group);
        notifications_fading->setObjectName("notifications_fading");

        layout_notifications_pretty_group->addWidget(notifications_fading, 3, 0, 1, 1);


        layout_notificationssettingspage->addWidget(notifications_pretty_group);

        groupbox_discord = new QGroupBox(NotificationsSettingsPage);
        groupbox_discord->setObjectName("groupbox_discord");
        verticalLayout_3 = new QVBoxLayout(groupbox_discord);
        verticalLayout_3->setObjectName("verticalLayout_3");
        richpresence_enabled = new QCheckBox(groupbox_discord);
        richpresence_enabled->setObjectName("richpresence_enabled");

        verticalLayout_3->addWidget(richpresence_enabled);

        richpresence_listening_to = new QGroupBox(groupbox_discord);
        richpresence_listening_to->setObjectName("richpresence_listening_to");
        verticalLayout_11 = new QVBoxLayout(richpresence_listening_to);
        verticalLayout_11->setObjectName("verticalLayout_11");
        richpresence_listening_to_app = new QRadioButton(richpresence_listening_to);
        richpresence_listening_to_app->setObjectName("richpresence_listening_to_app");

        verticalLayout_11->addWidget(richpresence_listening_to_app);

        richpresence_listening_to_artist = new QRadioButton(richpresence_listening_to);
        richpresence_listening_to_artist->setObjectName("richpresence_listening_to_artist");

        verticalLayout_11->addWidget(richpresence_listening_to_artist);

        richpresence_listening_to_song = new QRadioButton(richpresence_listening_to);
        richpresence_listening_to_song->setObjectName("richpresence_listening_to_song");

        verticalLayout_11->addWidget(richpresence_listening_to_song);


        verticalLayout_3->addWidget(richpresence_listening_to);


        layout_notificationssettingspage->addWidget(groupbox_discord);

        spacer_bottom = new QSpacerItem(20, 32, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_notificationssettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(notifications_none, notifications_native);
        QWidget::setTabOrder(notifications_native, notifications_pretty);
        QWidget::setTabOrder(notifications_pretty, notifications_tray);
        QWidget::setTabOrder(notifications_tray, notifications_duration);
        QWidget::setTabOrder(notifications_duration, notifications_disable_duration);
        QWidget::setTabOrder(notifications_disable_duration, notifications_volume);
        QWidget::setTabOrder(notifications_volume, notifications_play_mode);
        QWidget::setTabOrder(notifications_play_mode, notifications_pause);
        QWidget::setTabOrder(notifications_pause, notifications_resume);
        QWidget::setTabOrder(notifications_resume, notifications_art);
        QWidget::setTabOrder(notifications_art, notifications_custom_text_enabled);
        QWidget::setTabOrder(notifications_custom_text_enabled, notifications_preview);
        QWidget::setTabOrder(notifications_preview, notifications_custom_text1);
        QWidget::setTabOrder(notifications_custom_text1, notifications_exp_chooser1);
        QWidget::setTabOrder(notifications_exp_chooser1, notifications_custom_text2);
        QWidget::setTabOrder(notifications_custom_text2, notifications_exp_chooser2);
        QWidget::setTabOrder(notifications_exp_chooser2, notifications_opacity);
        QWidget::setTabOrder(notifications_opacity, notifications_bg_preset);
        QWidget::setTabOrder(notifications_bg_preset, notifications_fg_choose);
        QWidget::setTabOrder(notifications_fg_choose, notifications_font_choose);
        QWidget::setTabOrder(notifications_font_choose, notifications_fading);
        QWidget::setTabOrder(notifications_fading, richpresence_enabled);
        QWidget::setTabOrder(richpresence_enabled, richpresence_listening_to_app);
        QWidget::setTabOrder(richpresence_listening_to_app, richpresence_listening_to_artist);
        QWidget::setTabOrder(richpresence_listening_to_artist, richpresence_listening_to_song);

        retranslateUi(NotificationsSettingsPage);

        QMetaObject::connectSlotsByName(NotificationsSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *NotificationsSettingsPage)
    {
        NotificationsSettingsPage->setWindowTitle(QCoreApplication::translate("NotificationsSettingsPage", "Notifications", nullptr));
#if QT_CONFIG(tooltip)
        action_artist->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song artist tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_album->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song album tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_title->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song title tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_albumartist->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song albumartist tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_year->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song year tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_composer->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song composer tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_performer->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song performer tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_grouping->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song grouping tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_disc->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song disc tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_track->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song track tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_genre->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song genre tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_length->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song length tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_playcount->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song play count", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_skipcount->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song skip count", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_rating->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song rating", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_newline->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add a new line if supported by the notification type", nullptr));
#endif // QT_CONFIG(tooltip)
        action_filename->setText(QCoreApplication::translate("NotificationsSettingsPage", "%filename%", nullptr));
#if QT_CONFIG(tooltip)
        action_filename->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song filename", nullptr));
#endif // QT_CONFIG(tooltip)
        action_url->setText(QCoreApplication::translate("NotificationsSettingsPage", "%url%", nullptr));
#if QT_CONFIG(tooltip)
        action_url->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song URL", nullptr));
#endif // QT_CONFIG(tooltip)
        action_originalyear->setText(QCoreApplication::translate("NotificationsSettingsPage", "%originalyear%", nullptr));
#if QT_CONFIG(tooltip)
        action_originalyear->setToolTip(QCoreApplication::translate("NotificationsSettingsPage", "Add song original year tag", nullptr));
#endif // QT_CONFIG(tooltip)
        label_info->setText(QCoreApplication::translate("NotificationsSettingsPage", "Strawberry can show a message when the track changes.", nullptr));
        groupbox_notification_type->setTitle(QCoreApplication::translate("NotificationsSettingsPage", "Notification type", nullptr));
        notifications_none->setText(QCoreApplication::translate("NotificationsSettingsPage", "Disabled", "Refers to a disabled notification type in Notification settings."));
        notifications_native->setText(QCoreApplication::translate("NotificationsSettingsPage", "Show a &native desktop notification", nullptr));
        notifications_pretty->setText(QCoreApplication::translate("NotificationsSettingsPage", "Show a pretty OSD", nullptr));
        notifications_tray->setText(QCoreApplication::translate("NotificationsSettingsPage", "Show a popup fro&m the system tray", nullptr));
        notifications_general->setTitle(QCoreApplication::translate("NotificationsSettingsPage", "General settings", nullptr));
        label_3->setText(QCoreApplication::translate("NotificationsSettingsPage", "Popup duration", nullptr));
        notifications_duration->setSuffix(QCoreApplication::translate("NotificationsSettingsPage", " seconds", nullptr));
        notifications_disable_duration->setText(QCoreApplication::translate("NotificationsSettingsPage", "Disable duration", nullptr));
        notifications_volume->setText(QCoreApplication::translate("NotificationsSettingsPage", "Show a notification when I change the volume", nullptr));
        notifications_play_mode->setText(QCoreApplication::translate("NotificationsSettingsPage", "Show a notification when I change the repeat/shuffle mode", nullptr));
        notifications_pause->setText(QCoreApplication::translate("NotificationsSettingsPage", "Show a notification when I pause playback", nullptr));
        notifications_resume->setText(QCoreApplication::translate("NotificationsSettingsPage", "Show a notification when I resume playback", nullptr));
        notifications_art->setText(QCoreApplication::translate("NotificationsSettingsPage", "Include album art in the notification", nullptr));
        notifications_custom_text_group->setTitle(QCoreApplication::translate("NotificationsSettingsPage", "Custom message settings", nullptr));
        notifications_custom_text_enabled->setText(QCoreApplication::translate("NotificationsSettingsPage", "Use a custom message for notifications", nullptr));
        notifications_preview->setText(QCoreApplication::translate("NotificationsSettingsPage", "Preview", nullptr));
#if QT_CONFIG(accessibility)
        notifications_exp_chooser1->setAccessibleName(QCoreApplication::translate("NotificationsSettingsPage", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
        notifications_exp_chooser1->setText(QString());
        label_summary->setText(QCoreApplication::translate("NotificationsSettingsPage", "Summary", nullptr));
        label_body->setText(QCoreApplication::translate("NotificationsSettingsPage", "Body", nullptr));
#if QT_CONFIG(accessibility)
        notifications_exp_chooser2->setAccessibleName(QCoreApplication::translate("NotificationsSettingsPage", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
        notifications_exp_chooser2->setText(QString());
        notifications_pretty_group->setTitle(QCoreApplication::translate("NotificationsSettingsPage", "Pretty OSD options", nullptr));
        label_5->setText(QCoreApplication::translate("NotificationsSettingsPage", "Background color", nullptr));
        label_6->setText(QCoreApplication::translate("NotificationsSettingsPage", "Text options", nullptr));
        notifications_font_choose->setText(QCoreApplication::translate("NotificationsSettingsPage", "Choose font...", nullptr));
        notifications_fg_choose->setText(QCoreApplication::translate("NotificationsSettingsPage", "Choose color...", nullptr));
        label_4->setText(QCoreApplication::translate("NotificationsSettingsPage", "Background opacity", nullptr));
        notifications_bg_preset->setItemText(0, QCoreApplication::translate("NotificationsSettingsPage", "Basic Blue", nullptr));
        notifications_bg_preset->setItemText(1, QCoreApplication::translate("NotificationsSettingsPage", "Strawberry Red", nullptr));
        notifications_bg_preset->setItemText(2, QCoreApplication::translate("NotificationsSettingsPage", "Custom...", nullptr));

        notifications_fading->setText(QCoreApplication::translate("NotificationsSettingsPage", "Enable fading", nullptr));
        groupbox_discord->setTitle(QCoreApplication::translate("NotificationsSettingsPage", "Discord", nullptr));
        richpresence_enabled->setText(QCoreApplication::translate("NotificationsSettingsPage", "Enable Rich Presence", nullptr));
        richpresence_listening_to->setTitle(QCoreApplication::translate("NotificationsSettingsPage", "\"Listening to...\"", nullptr));
        richpresence_listening_to_app->setText(QCoreApplication::translate("NotificationsSettingsPage", "Strawberry", nullptr));
        richpresence_listening_to_artist->setText(QCoreApplication::translate("NotificationsSettingsPage", "Artist name", nullptr));
        richpresence_listening_to_song->setText(QCoreApplication::translate("NotificationsSettingsPage", "Song title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotificationsSettingsPage: public Ui_NotificationsSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONSSETTINGSPAGE_H
