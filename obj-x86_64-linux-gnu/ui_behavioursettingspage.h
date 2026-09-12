/********************************************************************************
** Form generated from reading UI file 'behavioursettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEHAVIOURSETTINGSPAGE_H
#define UI_BEHAVIOURSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BehaviourSettingsPage
{
public:
    QVBoxLayout *layout_behavioursettingspage;
    QCheckBox *checkbox_showtrayicon;
    QCheckBox *checkbox_keeprunning;
    QCheckBox *checkbox_trayicon_progress;
    QCheckBox *checkbox_taskbar_progress;
    QCheckBox *checkbox_resumeplayback;
    QCheckBox *checkbox_playingwidget;
    QGroupBox *groupbox_startup;
    QVBoxLayout *layout_startup;
    QRadioButton *radiobutton_remember;
    QRadioButton *radiobutton_show;
    QRadioButton *radiobutton_hide;
    QRadioButton *radiobutton_show_maximized;
    QRadioButton *radiobutton_show_minimized;
    QGroupBox *groupbox_language;
    QVBoxLayout *layout_language;
    QComboBox *combobox_language;
    QLabel *label_language;
    QGroupBox *groupbox_add_song;
    QVBoxLayout *layout_menuplaymode;
    QComboBox *combobox_menuplaymode;
    QGroupBox *groupbox_previous;
    QVBoxLayout *layout_previous;
    QComboBox *combobox_previousmode;
    QGroupBox *groupbox_doubleclickaddmode;
    QHBoxLayout *layout_doubleclickaddmode;
    QComboBox *combobox_doubleclickaddmode;
    QComboBox *combobox_doubleclickplaymode;
    QGroupBox *groupbox_doubleclickplaylist;
    QVBoxLayout *layout_doubleclickplaylist;
    QComboBox *combobox_doubleclickplaylistaddmode;
    QGroupBox *groupbox_seekstep;
    QHBoxLayout *layout_seekstep;
    QLabel *label_seekstep;
    QSpinBox *spinbox_seekstepsec;
    QSpacerItem *spacer_seekstep;
    QGroupBox *groupbox_volumeincrement;
    QHBoxLayout *horizontalLayout;
    QLabel *label_volumeincrement;
    QSpinBox *spinbox_volumeincrement;
    QSpacerItem *spacer_volumeincrement;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *BehaviourSettingsPage)
    {
        if (BehaviourSettingsPage->objectName().isEmpty())
            BehaviourSettingsPage->setObjectName("BehaviourSettingsPage");
        BehaviourSettingsPage->resize(572, 931);
        layout_behavioursettingspage = new QVBoxLayout(BehaviourSettingsPage);
        layout_behavioursettingspage->setObjectName("layout_behavioursettingspage");
        checkbox_showtrayicon = new QCheckBox(BehaviourSettingsPage);
        checkbox_showtrayicon->setObjectName("checkbox_showtrayicon");
        checkbox_showtrayicon->setChecked(true);

        layout_behavioursettingspage->addWidget(checkbox_showtrayicon);

        checkbox_keeprunning = new QCheckBox(BehaviourSettingsPage);
        checkbox_keeprunning->setObjectName("checkbox_keeprunning");
        checkbox_keeprunning->setChecked(false);

        layout_behavioursettingspage->addWidget(checkbox_keeprunning);

        checkbox_trayicon_progress = new QCheckBox(BehaviourSettingsPage);
        checkbox_trayicon_progress->setObjectName("checkbox_trayicon_progress");

        layout_behavioursettingspage->addWidget(checkbox_trayicon_progress);

        checkbox_taskbar_progress = new QCheckBox(BehaviourSettingsPage);
        checkbox_taskbar_progress->setObjectName("checkbox_taskbar_progress");

        layout_behavioursettingspage->addWidget(checkbox_taskbar_progress);

        checkbox_resumeplayback = new QCheckBox(BehaviourSettingsPage);
        checkbox_resumeplayback->setObjectName("checkbox_resumeplayback");
        checkbox_resumeplayback->setChecked(false);

        layout_behavioursettingspage->addWidget(checkbox_resumeplayback);

        checkbox_playingwidget = new QCheckBox(BehaviourSettingsPage);
        checkbox_playingwidget->setObjectName("checkbox_playingwidget");

        layout_behavioursettingspage->addWidget(checkbox_playingwidget);

        groupbox_startup = new QGroupBox(BehaviourSettingsPage);
        groupbox_startup->setObjectName("groupbox_startup");
        layout_startup = new QVBoxLayout(groupbox_startup);
        layout_startup->setObjectName("layout_startup");
        radiobutton_remember = new QRadioButton(groupbox_startup);
        radiobutton_remember->setObjectName("radiobutton_remember");
        radiobutton_remember->setChecked(true);

        layout_startup->addWidget(radiobutton_remember);

        radiobutton_show = new QRadioButton(groupbox_startup);
        radiobutton_show->setObjectName("radiobutton_show");

        layout_startup->addWidget(radiobutton_show);

        radiobutton_hide = new QRadioButton(groupbox_startup);
        radiobutton_hide->setObjectName("radiobutton_hide");

        layout_startup->addWidget(radiobutton_hide);

        radiobutton_show_maximized = new QRadioButton(groupbox_startup);
        radiobutton_show_maximized->setObjectName("radiobutton_show_maximized");

        layout_startup->addWidget(radiobutton_show_maximized);

        radiobutton_show_minimized = new QRadioButton(groupbox_startup);
        radiobutton_show_minimized->setObjectName("radiobutton_show_minimized");

        layout_startup->addWidget(radiobutton_show_minimized);


        layout_behavioursettingspage->addWidget(groupbox_startup);

        groupbox_language = new QGroupBox(BehaviourSettingsPage);
        groupbox_language->setObjectName("groupbox_language");
        layout_language = new QVBoxLayout(groupbox_language);
        layout_language->setObjectName("layout_language");
        combobox_language = new QComboBox(groupbox_language);
        combobox_language->addItem(QString());
        combobox_language->setObjectName("combobox_language");

        layout_language->addWidget(combobox_language);

        label_language = new QLabel(groupbox_language);
        label_language->setObjectName("label_language");

        layout_language->addWidget(label_language);


        layout_behavioursettingspage->addWidget(groupbox_language);

        groupbox_add_song = new QGroupBox(BehaviourSettingsPage);
        groupbox_add_song->setObjectName("groupbox_add_song");
        layout_menuplaymode = new QVBoxLayout(groupbox_add_song);
        layout_menuplaymode->setObjectName("layout_menuplaymode");
        combobox_menuplaymode = new QComboBox(groupbox_add_song);
        combobox_menuplaymode->addItem(QString());
        combobox_menuplaymode->addItem(QString());
        combobox_menuplaymode->addItem(QString());
        combobox_menuplaymode->setObjectName("combobox_menuplaymode");

        layout_menuplaymode->addWidget(combobox_menuplaymode);


        layout_behavioursettingspage->addWidget(groupbox_add_song);

        groupbox_previous = new QGroupBox(BehaviourSettingsPage);
        groupbox_previous->setObjectName("groupbox_previous");
        layout_previous = new QVBoxLayout(groupbox_previous);
        layout_previous->setObjectName("layout_previous");
        combobox_previousmode = new QComboBox(groupbox_previous);
        combobox_previousmode->addItem(QString());
        combobox_previousmode->addItem(QString());
        combobox_previousmode->setObjectName("combobox_previousmode");

        layout_previous->addWidget(combobox_previousmode);


        layout_behavioursettingspage->addWidget(groupbox_previous);

        groupbox_doubleclickaddmode = new QGroupBox(BehaviourSettingsPage);
        groupbox_doubleclickaddmode->setObjectName("groupbox_doubleclickaddmode");
        layout_doubleclickaddmode = new QHBoxLayout(groupbox_doubleclickaddmode);
        layout_doubleclickaddmode->setObjectName("layout_doubleclickaddmode");
        combobox_doubleclickaddmode = new QComboBox(groupbox_doubleclickaddmode);
        combobox_doubleclickaddmode->addItem(QString());
        combobox_doubleclickaddmode->addItem(QString());
        combobox_doubleclickaddmode->addItem(QString());
        combobox_doubleclickaddmode->addItem(QString());
        combobox_doubleclickaddmode->setObjectName("combobox_doubleclickaddmode");

        layout_doubleclickaddmode->addWidget(combobox_doubleclickaddmode);

        combobox_doubleclickplaymode = new QComboBox(groupbox_doubleclickaddmode);
        combobox_doubleclickplaymode->addItem(QString());
        combobox_doubleclickplaymode->addItem(QString());
        combobox_doubleclickplaymode->addItem(QString());
        combobox_doubleclickplaymode->setObjectName("combobox_doubleclickplaymode");

        layout_doubleclickaddmode->addWidget(combobox_doubleclickplaymode);


        layout_behavioursettingspage->addWidget(groupbox_doubleclickaddmode);

        groupbox_doubleclickplaylist = new QGroupBox(BehaviourSettingsPage);
        groupbox_doubleclickplaylist->setObjectName("groupbox_doubleclickplaylist");
        layout_doubleclickplaylist = new QVBoxLayout(groupbox_doubleclickplaylist);
        layout_doubleclickplaylist->setObjectName("layout_doubleclickplaylist");
        combobox_doubleclickplaylistaddmode = new QComboBox(groupbox_doubleclickplaylist);
        combobox_doubleclickplaylistaddmode->addItem(QString());
        combobox_doubleclickplaylistaddmode->addItem(QString());
        combobox_doubleclickplaylistaddmode->setObjectName("combobox_doubleclickplaylistaddmode");

        layout_doubleclickplaylist->addWidget(combobox_doubleclickplaylistaddmode);


        layout_behavioursettingspage->addWidget(groupbox_doubleclickplaylist);

        groupbox_seekstep = new QGroupBox(BehaviourSettingsPage);
        groupbox_seekstep->setObjectName("groupbox_seekstep");
        layout_seekstep = new QHBoxLayout(groupbox_seekstep);
        layout_seekstep->setObjectName("layout_seekstep");
        label_seekstep = new QLabel(groupbox_seekstep);
        label_seekstep->setObjectName("label_seekstep");

        layout_seekstep->addWidget(label_seekstep);

        spinbox_seekstepsec = new QSpinBox(groupbox_seekstep);
        spinbox_seekstepsec->setObjectName("spinbox_seekstepsec");
        spinbox_seekstepsec->setMinimum(1);
        spinbox_seekstepsec->setMaximum(120);
        spinbox_seekstepsec->setValue(10);

        layout_seekstep->addWidget(spinbox_seekstepsec);

        spacer_seekstep = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_seekstep->addItem(spacer_seekstep);


        layout_behavioursettingspage->addWidget(groupbox_seekstep);

        groupbox_volumeincrement = new QGroupBox(BehaviourSettingsPage);
        groupbox_volumeincrement->setObjectName("groupbox_volumeincrement");
        horizontalLayout = new QHBoxLayout(groupbox_volumeincrement);
        horizontalLayout->setObjectName("horizontalLayout");
        label_volumeincrement = new QLabel(groupbox_volumeincrement);
        label_volumeincrement->setObjectName("label_volumeincrement");

        horizontalLayout->addWidget(label_volumeincrement);

        spinbox_volumeincrement = new QSpinBox(groupbox_volumeincrement);
        spinbox_volumeincrement->setObjectName("spinbox_volumeincrement");
        spinbox_volumeincrement->setMinimum(1);
        spinbox_volumeincrement->setMaximum(25);
        spinbox_volumeincrement->setValue(5);

        horizontalLayout->addWidget(spinbox_volumeincrement);

        spacer_volumeincrement = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_volumeincrement);


        layout_behavioursettingspage->addWidget(groupbox_volumeincrement);

        spacer_bottom = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_behavioursettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(checkbox_showtrayicon, checkbox_keeprunning);
        QWidget::setTabOrder(checkbox_keeprunning, checkbox_trayicon_progress);
        QWidget::setTabOrder(checkbox_trayicon_progress, checkbox_taskbar_progress);
        QWidget::setTabOrder(checkbox_taskbar_progress, checkbox_resumeplayback);
        QWidget::setTabOrder(checkbox_resumeplayback, checkbox_playingwidget);
        QWidget::setTabOrder(checkbox_playingwidget, radiobutton_remember);
        QWidget::setTabOrder(radiobutton_remember, radiobutton_show);
        QWidget::setTabOrder(radiobutton_show, radiobutton_hide);
        QWidget::setTabOrder(radiobutton_hide, radiobutton_show_maximized);
        QWidget::setTabOrder(radiobutton_show_maximized, radiobutton_show_minimized);
        QWidget::setTabOrder(radiobutton_show_minimized, combobox_language);
        QWidget::setTabOrder(combobox_language, combobox_menuplaymode);
        QWidget::setTabOrder(combobox_menuplaymode, combobox_previousmode);
        QWidget::setTabOrder(combobox_previousmode, combobox_doubleclickaddmode);
        QWidget::setTabOrder(combobox_doubleclickaddmode, combobox_doubleclickplaymode);
        QWidget::setTabOrder(combobox_doubleclickplaymode, combobox_doubleclickplaylistaddmode);
        QWidget::setTabOrder(combobox_doubleclickplaylistaddmode, spinbox_seekstepsec);
        QWidget::setTabOrder(spinbox_seekstepsec, spinbox_volumeincrement);

        retranslateUi(BehaviourSettingsPage);

        combobox_menuplaymode->setCurrentIndex(0);
        combobox_previousmode->setCurrentIndex(0);
        combobox_doubleclickaddmode->setCurrentIndex(0);
        combobox_doubleclickplaymode->setCurrentIndex(1);
        combobox_doubleclickplaylistaddmode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BehaviourSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *BehaviourSettingsPage)
    {
        BehaviourSettingsPage->setWindowTitle(QCoreApplication::translate("BehaviourSettingsPage", "Behavior", nullptr));
        checkbox_showtrayicon->setText(QCoreApplication::translate("BehaviourSettingsPage", "Show system tray icon", nullptr));
        checkbox_keeprunning->setText(QCoreApplication::translate("BehaviourSettingsPage", "Keep running in the background when the window is closed", nullptr));
        checkbox_trayicon_progress->setText(QCoreApplication::translate("BehaviourSettingsPage", "Show song progress on system tray icon", nullptr));
        checkbox_taskbar_progress->setText(QCoreApplication::translate("BehaviourSettingsPage", "Show song progress on taskbar", nullptr));
        checkbox_resumeplayback->setText(QCoreApplication::translate("BehaviourSettingsPage", "Resume playback on start", nullptr));
        checkbox_playingwidget->setText(QCoreApplication::translate("BehaviourSettingsPage", "Show playing widget", nullptr));
        groupbox_startup->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "On startup", nullptr));
        radiobutton_remember->setText(QCoreApplication::translate("BehaviourSettingsPage", "Remember from &last time", nullptr));
        radiobutton_show->setText(QCoreApplication::translate("BehaviourSettingsPage", "Show the main window", nullptr));
        radiobutton_hide->setText(QCoreApplication::translate("BehaviourSettingsPage", "Hide the main window", nullptr));
        radiobutton_show_maximized->setText(QCoreApplication::translate("BehaviourSettingsPage", "Show the main window maximized", nullptr));
        radiobutton_show_minimized->setText(QCoreApplication::translate("BehaviourSettingsPage", "Show the main window minimized", nullptr));
        groupbox_language->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Language", nullptr));
        combobox_language->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Use the system default", nullptr));

        label_language->setText(QCoreApplication::translate("BehaviourSettingsPage", "You will need to restart Strawberry if you change the language.", nullptr));
        groupbox_add_song->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Using the menu to add a song will...", nullptr));
        combobox_menuplaymode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Never start playing", nullptr));
        combobox_menuplaymode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Play if there is nothing already playing", nullptr));
        combobox_menuplaymode->setItemText(2, QCoreApplication::translate("BehaviourSettingsPage", "Always start playing", nullptr));

        groupbox_previous->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Pressing \"Previous\" in player will...", nullptr));
        combobox_previousmode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Jump to previous song right away", nullptr));
        combobox_previousmode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Restart song, then jump to previous if pressed again", nullptr));

        groupbox_doubleclickaddmode->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Double clicking a song will...", nullptr));
        combobox_doubleclickaddmode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Append to the playlist", nullptr));
        combobox_doubleclickaddmode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Replace the playlist", nullptr));
        combobox_doubleclickaddmode->setItemText(2, QCoreApplication::translate("BehaviourSettingsPage", "Open in new playlist", nullptr));
        combobox_doubleclickaddmode->setItemText(3, QCoreApplication::translate("BehaviourSettingsPage", "Add to the queue", nullptr));

        combobox_doubleclickplaymode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Never start playing", nullptr));
        combobox_doubleclickplaymode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Play if there is nothing already playing", nullptr));
        combobox_doubleclickplaymode->setItemText(2, QCoreApplication::translate("BehaviourSettingsPage", "Always start playing", nullptr));

        groupbox_doubleclickplaylist->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Double clicking a song in the playlist will...", nullptr));
        combobox_doubleclickplaylistaddmode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Change the currently playing song", nullptr));
        combobox_doubleclickplaylistaddmode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Add to the queue", nullptr));

        groupbox_seekstep->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Seeking using a keyboard shortcut or mouse wheel", nullptr));
        label_seekstep->setText(QCoreApplication::translate("BehaviourSettingsPage", "Time step", nullptr));
        spinbox_seekstepsec->setSuffix(QCoreApplication::translate("BehaviourSettingsPage", " s", nullptr));
        spinbox_seekstepsec->setPrefix(QString());
        groupbox_volumeincrement->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Volume Increment", nullptr));
        label_volumeincrement->setText(QCoreApplication::translate("BehaviourSettingsPage", "Volume Increment", nullptr));
        spinbox_volumeincrement->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class BehaviourSettingsPage: public Ui_BehaviourSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEHAVIOURSETTINGSPAGE_H
