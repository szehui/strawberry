/********************************************************************************
** Form generated from reading UI file 'spotifysettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPOTIFYSETTINGSPAGE_H
#define UI_SPOTIFYSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SpotifySettingsPage
{
public:
    QVBoxLayout *layout_spotifysettingspage;
    QCheckBox *enable;
    QGroupBox *groupbox_api_credentials;
    QFormLayout *layout_api_credentials;
    QCheckBox *checkbox_use_custom_api_credentials;
    QLabel *label_client_id;
    QLineEdit *client_id;
    QLabel *label_client_secret;
    QLineEdit *client_secret;
    QGroupBox *groupbox_authentication;
    QHBoxLayout *horizontalLayout_2;
    LoginStateWidget *login_state;
    QPushButton *button_login;
    QWidget *widget_warning;
    QHBoxLayout *horizontalLayout;
    QLabel *label_warning_logo;
    QLabel *label_warning_text;
    QGroupBox *groupbox_preferences;
    QFormLayout *layout_preferences;
    QLabel *label_searchdelay;
    QSpinBox *searchdelay;
    QLabel *label_artistssearchlimit;
    QSpinBox *artistssearchlimit;
    QLabel *label_albumssearchlimit;
    QSpinBox *albumssearchlimit;
    QLabel *label_songssearchlimit;
    QSpinBox *songssearchlimit;
    QCheckBox *checkbox_download_album_covers;
    QCheckBox *checkbox_fetchalbums;
    QCheckBox *checkbox_remove_remastered;
    QSpacerItem *spacer_middle;
    QHBoxLayout *layout_bottom;
    QSpacerItem *spacer_bottom;
    QLabel *label_spotify;

    void setupUi(QWidget *SpotifySettingsPage)
    {
        if (SpotifySettingsPage->objectName().isEmpty())
            SpotifySettingsPage->setObjectName("SpotifySettingsPage");
        SpotifySettingsPage->resize(505, 853);
        layout_spotifysettingspage = new QVBoxLayout(SpotifySettingsPage);
        layout_spotifysettingspage->setObjectName("layout_spotifysettingspage");
        enable = new QCheckBox(SpotifySettingsPage);
        enable->setObjectName("enable");

        layout_spotifysettingspage->addWidget(enable);

        groupbox_api_credentials = new QGroupBox(SpotifySettingsPage);
        groupbox_api_credentials->setObjectName("groupbox_api_credentials");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupbox_api_credentials->sizePolicy().hasHeightForWidth());
        groupbox_api_credentials->setSizePolicy(sizePolicy);
        layout_api_credentials = new QFormLayout(groupbox_api_credentials);
        layout_api_credentials->setObjectName("layout_api_credentials");
        checkbox_use_custom_api_credentials = new QCheckBox(groupbox_api_credentials);
        checkbox_use_custom_api_credentials->setObjectName("checkbox_use_custom_api_credentials");

        layout_api_credentials->setWidget(0, QFormLayout::LabelRole, checkbox_use_custom_api_credentials);

        label_client_id = new QLabel(groupbox_api_credentials);
        label_client_id->setObjectName("label_client_id");
        label_client_id->setMinimumSize(QSize(150, 0));

        layout_api_credentials->setWidget(1, QFormLayout::LabelRole, label_client_id);

        client_id = new QLineEdit(groupbox_api_credentials);
        client_id->setObjectName("client_id");
        client_id->setText(QString::fromUtf8(""));

        layout_api_credentials->setWidget(1, QFormLayout::FieldRole, client_id);

        label_client_secret = new QLabel(groupbox_api_credentials);
        label_client_secret->setObjectName("label_client_secret");

        layout_api_credentials->setWidget(2, QFormLayout::LabelRole, label_client_secret);

        client_secret = new QLineEdit(groupbox_api_credentials);
        client_secret->setObjectName("client_secret");
        client_secret->setEchoMode(QLineEdit::Password);

        layout_api_credentials->setWidget(2, QFormLayout::FieldRole, client_secret);


        layout_spotifysettingspage->addWidget(groupbox_api_credentials);

        groupbox_authentication = new QGroupBox(SpotifySettingsPage);
        groupbox_authentication->setObjectName("groupbox_authentication");
        horizontalLayout_2 = new QHBoxLayout(groupbox_authentication);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        login_state = new LoginStateWidget(groupbox_authentication);
        login_state->setObjectName("login_state");

        horizontalLayout_2->addWidget(login_state);

        button_login = new QPushButton(groupbox_authentication);
        button_login->setObjectName("button_login");

        horizontalLayout_2->addWidget(button_login);


        layout_spotifysettingspage->addWidget(groupbox_authentication);

        widget_warning = new QWidget(SpotifySettingsPage);
        widget_warning->setObjectName("widget_warning");
        horizontalLayout = new QHBoxLayout(widget_warning);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        label_warning_logo = new QLabel(widget_warning);
        label_warning_logo->setObjectName("label_warning_logo");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_warning_logo->sizePolicy().hasHeightForWidth());
        label_warning_logo->setSizePolicy(sizePolicy1);
        label_warning_logo->setPixmap(QPixmap(QString::fromUtf8(":/icons/64x64/dialog-warning.png")));

        horizontalLayout->addWidget(label_warning_logo);

        label_warning_text = new QLabel(widget_warning);
        label_warning_text->setObjectName("label_warning_text");
        label_warning_text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_warning_text->setWordWrap(true);
        label_warning_text->setMargin(10);
        label_warning_text->setOpenExternalLinks(true);

        horizontalLayout->addWidget(label_warning_text);


        layout_spotifysettingspage->addWidget(widget_warning);

        groupbox_preferences = new QGroupBox(SpotifySettingsPage);
        groupbox_preferences->setObjectName("groupbox_preferences");
        layout_preferences = new QFormLayout(groupbox_preferences);
        layout_preferences->setObjectName("layout_preferences");
        label_searchdelay = new QLabel(groupbox_preferences);
        label_searchdelay->setObjectName("label_searchdelay");

        layout_preferences->setWidget(0, QFormLayout::LabelRole, label_searchdelay);

        searchdelay = new QSpinBox(groupbox_preferences);
        searchdelay->setObjectName("searchdelay");
        searchdelay->setMinimum(500);
        searchdelay->setMaximum(10000);
        searchdelay->setSingleStep(50);
        searchdelay->setValue(1500);

        layout_preferences->setWidget(0, QFormLayout::FieldRole, searchdelay);

        label_artistssearchlimit = new QLabel(groupbox_preferences);
        label_artistssearchlimit->setObjectName("label_artistssearchlimit");

        layout_preferences->setWidget(1, QFormLayout::LabelRole, label_artistssearchlimit);

        artistssearchlimit = new QSpinBox(groupbox_preferences);
        artistssearchlimit->setObjectName("artistssearchlimit");
        artistssearchlimit->setMinimum(1);
        artistssearchlimit->setMaximum(100);
        artistssearchlimit->setValue(50);

        layout_preferences->setWidget(1, QFormLayout::FieldRole, artistssearchlimit);

        label_albumssearchlimit = new QLabel(groupbox_preferences);
        label_albumssearchlimit->setObjectName("label_albumssearchlimit");

        layout_preferences->setWidget(2, QFormLayout::LabelRole, label_albumssearchlimit);

        albumssearchlimit = new QSpinBox(groupbox_preferences);
        albumssearchlimit->setObjectName("albumssearchlimit");
        albumssearchlimit->setMinimum(1);
        albumssearchlimit->setMaximum(1000);
        albumssearchlimit->setValue(50);

        layout_preferences->setWidget(2, QFormLayout::FieldRole, albumssearchlimit);

        label_songssearchlimit = new QLabel(groupbox_preferences);
        label_songssearchlimit->setObjectName("label_songssearchlimit");

        layout_preferences->setWidget(3, QFormLayout::LabelRole, label_songssearchlimit);

        songssearchlimit = new QSpinBox(groupbox_preferences);
        songssearchlimit->setObjectName("songssearchlimit");
        songssearchlimit->setMinimum(1);
        songssearchlimit->setMaximum(1000);
        songssearchlimit->setValue(50);

        layout_preferences->setWidget(3, QFormLayout::FieldRole, songssearchlimit);

        checkbox_download_album_covers = new QCheckBox(groupbox_preferences);
        checkbox_download_album_covers->setObjectName("checkbox_download_album_covers");

        layout_preferences->setWidget(4, QFormLayout::LabelRole, checkbox_download_album_covers);

        checkbox_fetchalbums = new QCheckBox(groupbox_preferences);
        checkbox_fetchalbums->setObjectName("checkbox_fetchalbums");

        layout_preferences->setWidget(5, QFormLayout::LabelRole, checkbox_fetchalbums);

        checkbox_remove_remastered = new QCheckBox(groupbox_preferences);
        checkbox_remove_remastered->setObjectName("checkbox_remove_remastered");

        layout_preferences->setWidget(6, QFormLayout::LabelRole, checkbox_remove_remastered);


        layout_spotifysettingspage->addWidget(groupbox_preferences);

        spacer_middle = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_spotifysettingspage->addItem(spacer_middle);

        layout_bottom = new QHBoxLayout();
        layout_bottom->setObjectName("layout_bottom");
        spacer_bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_bottom->addItem(spacer_bottom);

        label_spotify = new QLabel(SpotifySettingsPage);
        label_spotify->setObjectName("label_spotify");
        label_spotify->setMinimumSize(QSize(64, 64));
        label_spotify->setMaximumSize(QSize(64, 64));
        label_spotify->setPixmap(QPixmap(QString::fromUtf8(":/icons/64x64/spotify.png")));

        layout_bottom->addWidget(label_spotify);


        layout_spotifysettingspage->addLayout(layout_bottom);

        QWidget::setTabOrder(enable, checkbox_use_custom_api_credentials);
        QWidget::setTabOrder(checkbox_use_custom_api_credentials, client_id);
        QWidget::setTabOrder(client_id, client_secret);
        QWidget::setTabOrder(client_secret, button_login);
        QWidget::setTabOrder(button_login, searchdelay);
        QWidget::setTabOrder(searchdelay, artistssearchlimit);
        QWidget::setTabOrder(artistssearchlimit, albumssearchlimit);
        QWidget::setTabOrder(albumssearchlimit, songssearchlimit);
        QWidget::setTabOrder(songssearchlimit, checkbox_download_album_covers);
        QWidget::setTabOrder(checkbox_download_album_covers, checkbox_fetchalbums);
        QWidget::setTabOrder(checkbox_fetchalbums, checkbox_remove_remastered);

        retranslateUi(SpotifySettingsPage);

        QMetaObject::connectSlotsByName(SpotifySettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SpotifySettingsPage)
    {
        SpotifySettingsPage->setWindowTitle(QCoreApplication::translate("SpotifySettingsPage", "Spotify", nullptr));
        enable->setText(QCoreApplication::translate("SpotifySettingsPage", "Enable", nullptr));
        groupbox_api_credentials->setTitle(QCoreApplication::translate("SpotifySettingsPage", "API Credentials", nullptr));
        checkbox_use_custom_api_credentials->setText(QCoreApplication::translate("SpotifySettingsPage", "Use custom API credentials", nullptr));
        label_client_id->setText(QCoreApplication::translate("SpotifySettingsPage", "Client ID", nullptr));
        label_client_secret->setText(QCoreApplication::translate("SpotifySettingsPage", "Client secret", nullptr));
        groupbox_authentication->setTitle(QCoreApplication::translate("SpotifySettingsPage", "Authentication", nullptr));
        button_login->setText(QCoreApplication::translate("SpotifySettingsPage", "Authenticate", nullptr));
        label_warning_logo->setText(QString());
        label_warning_text->setText(QCoreApplication::translate("SpotifySettingsPage", "<html><head/><body><p>The GStreamer Spotify plugin is not detected, you will not be able to stream songs from Spotify without it. See <a href=\"https://wiki.strawberrymusicplayer.org/wiki/Installing_GStreamer_Spotify_plugin\"><span style=\" text-decoration: underline; color:#2980b9;\">Wiki</span></a> for instructions on how to install the plugin.</p></body></html>", nullptr));
        groupbox_preferences->setTitle(QCoreApplication::translate("SpotifySettingsPage", "Preferences", nullptr));
        label_searchdelay->setText(QCoreApplication::translate("SpotifySettingsPage", "Search delay", nullptr));
        searchdelay->setSuffix(QCoreApplication::translate("SpotifySettingsPage", "ms", nullptr));
        label_artistssearchlimit->setText(QCoreApplication::translate("SpotifySettingsPage", "Artists search limit", nullptr));
        label_albumssearchlimit->setText(QCoreApplication::translate("SpotifySettingsPage", "Albums search limit", nullptr));
        label_songssearchlimit->setText(QCoreApplication::translate("SpotifySettingsPage", "Songs search limit", nullptr));
        checkbox_download_album_covers->setText(QCoreApplication::translate("SpotifySettingsPage", "Download album covers", nullptr));
        checkbox_fetchalbums->setText(QCoreApplication::translate("SpotifySettingsPage", "Fetch entire albums when searching songs", nullptr));
        checkbox_remove_remastered->setText(QCoreApplication::translate("SpotifySettingsPage", "Remove (Remastered), etc from song titles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpotifySettingsPage: public Ui_SpotifySettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPOTIFYSETTINGSPAGE_H
