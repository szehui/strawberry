/********************************************************************************
** Form generated from reading UI file 'tidalsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIDALSETTINGSPAGE_H
#define UI_TIDALSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_TidalSettingsPage
{
public:
    QVBoxLayout *layout_tidalsettingspage;
    QCheckBox *enable;
    QGroupBox *groupbox_api_credentials;
    QFormLayout *layout_api_credentials;
    QCheckBox *checkbox_use_custom_client_id;
    QLabel *label_client_id;
    QLineEdit *client_id;
    QPushButton *button_login;
    LoginStateWidget *login_state;
    QGroupBox *groupbox_preferences;
    QFormLayout *layout_preferences;
    QLabel *label_quality;
    QComboBox *quality;
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
    QLabel *label_coversize;
    QComboBox *coversize;
    QLabel *label_streamurl;
    QComboBox *streamurl;
    QCheckBox *checkbox_album_explicit;
    QCheckBox *checkbox_remove_remastered;
    QSpacerItem *spacer_middle;
    QHBoxLayout *layout_bottom;
    QSpacerItem *spacer_bottom;
    QLabel *label_tidal;

    void setupUi(QWidget *TidalSettingsPage)
    {
        if (TidalSettingsPage->objectName().isEmpty())
            TidalSettingsPage->setObjectName("TidalSettingsPage");
        TidalSettingsPage->resize(472, 853);
        layout_tidalsettingspage = new QVBoxLayout(TidalSettingsPage);
        layout_tidalsettingspage->setObjectName("layout_tidalsettingspage");
        enable = new QCheckBox(TidalSettingsPage);
        enable->setObjectName("enable");

        layout_tidalsettingspage->addWidget(enable);

        groupbox_api_credentials = new QGroupBox(TidalSettingsPage);
        groupbox_api_credentials->setObjectName("groupbox_api_credentials");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupbox_api_credentials->sizePolicy().hasHeightForWidth());
        groupbox_api_credentials->setSizePolicy(sizePolicy);
        layout_api_credentials = new QFormLayout(groupbox_api_credentials);
        layout_api_credentials->setObjectName("layout_api_credentials");
        checkbox_use_custom_client_id = new QCheckBox(groupbox_api_credentials);
        checkbox_use_custom_client_id->setObjectName("checkbox_use_custom_client_id");

        layout_api_credentials->setWidget(0, QFormLayout::LabelRole, checkbox_use_custom_client_id);

        label_client_id = new QLabel(groupbox_api_credentials);
        label_client_id->setObjectName("label_client_id");
        label_client_id->setMinimumSize(QSize(150, 0));

        layout_api_credentials->setWidget(1, QFormLayout::LabelRole, label_client_id);

        client_id = new QLineEdit(groupbox_api_credentials);
        client_id->setObjectName("client_id");
        client_id->setText(QString::fromUtf8(""));

        layout_api_credentials->setWidget(1, QFormLayout::FieldRole, client_id);


        layout_tidalsettingspage->addWidget(groupbox_api_credentials);

        button_login = new QPushButton(TidalSettingsPage);
        button_login->setObjectName("button_login");

        layout_tidalsettingspage->addWidget(button_login);

        login_state = new LoginStateWidget(TidalSettingsPage);
        login_state->setObjectName("login_state");

        layout_tidalsettingspage->addWidget(login_state);

        groupbox_preferences = new QGroupBox(TidalSettingsPage);
        groupbox_preferences->setObjectName("groupbox_preferences");
        layout_preferences = new QFormLayout(groupbox_preferences);
        layout_preferences->setObjectName("layout_preferences");
        label_quality = new QLabel(groupbox_preferences);
        label_quality->setObjectName("label_quality");

        layout_preferences->setWidget(0, QFormLayout::LabelRole, label_quality);

        quality = new QComboBox(groupbox_preferences);
        quality->setObjectName("quality");
        quality->setCurrentText(QString::fromUtf8(""));

        layout_preferences->setWidget(0, QFormLayout::FieldRole, quality);

        label_searchdelay = new QLabel(groupbox_preferences);
        label_searchdelay->setObjectName("label_searchdelay");

        layout_preferences->setWidget(1, QFormLayout::LabelRole, label_searchdelay);

        searchdelay = new QSpinBox(groupbox_preferences);
        searchdelay->setObjectName("searchdelay");
        searchdelay->setMinimum(0);
        searchdelay->setMaximum(10000);
        searchdelay->setSingleStep(50);
        searchdelay->setValue(1500);

        layout_preferences->setWidget(1, QFormLayout::FieldRole, searchdelay);

        label_artistssearchlimit = new QLabel(groupbox_preferences);
        label_artistssearchlimit->setObjectName("label_artistssearchlimit");

        layout_preferences->setWidget(2, QFormLayout::LabelRole, label_artistssearchlimit);

        artistssearchlimit = new QSpinBox(groupbox_preferences);
        artistssearchlimit->setObjectName("artistssearchlimit");
        artistssearchlimit->setMinimum(1);
        artistssearchlimit->setMaximum(100);
        artistssearchlimit->setValue(50);

        layout_preferences->setWidget(2, QFormLayout::FieldRole, artistssearchlimit);

        label_albumssearchlimit = new QLabel(groupbox_preferences);
        label_albumssearchlimit->setObjectName("label_albumssearchlimit");

        layout_preferences->setWidget(3, QFormLayout::LabelRole, label_albumssearchlimit);

        albumssearchlimit = new QSpinBox(groupbox_preferences);
        albumssearchlimit->setObjectName("albumssearchlimit");
        albumssearchlimit->setMinimum(1);
        albumssearchlimit->setMaximum(1000);
        albumssearchlimit->setValue(50);

        layout_preferences->setWidget(3, QFormLayout::FieldRole, albumssearchlimit);

        label_songssearchlimit = new QLabel(groupbox_preferences);
        label_songssearchlimit->setObjectName("label_songssearchlimit");

        layout_preferences->setWidget(4, QFormLayout::LabelRole, label_songssearchlimit);

        songssearchlimit = new QSpinBox(groupbox_preferences);
        songssearchlimit->setObjectName("songssearchlimit");
        songssearchlimit->setMinimum(1);
        songssearchlimit->setMaximum(1000);
        songssearchlimit->setValue(50);

        layout_preferences->setWidget(4, QFormLayout::FieldRole, songssearchlimit);

        checkbox_download_album_covers = new QCheckBox(groupbox_preferences);
        checkbox_download_album_covers->setObjectName("checkbox_download_album_covers");

        layout_preferences->setWidget(5, QFormLayout::LabelRole, checkbox_download_album_covers);

        checkbox_fetchalbums = new QCheckBox(groupbox_preferences);
        checkbox_fetchalbums->setObjectName("checkbox_fetchalbums");

        layout_preferences->setWidget(6, QFormLayout::LabelRole, checkbox_fetchalbums);

        label_coversize = new QLabel(groupbox_preferences);
        label_coversize->setObjectName("label_coversize");

        layout_preferences->setWidget(7, QFormLayout::LabelRole, label_coversize);

        coversize = new QComboBox(groupbox_preferences);
        coversize->setObjectName("coversize");
        coversize->setCurrentText(QString::fromUtf8(""));

        layout_preferences->setWidget(7, QFormLayout::FieldRole, coversize);

        label_streamurl = new QLabel(groupbox_preferences);
        label_streamurl->setObjectName("label_streamurl");

        layout_preferences->setWidget(8, QFormLayout::LabelRole, label_streamurl);

        streamurl = new QComboBox(groupbox_preferences);
        streamurl->setObjectName("streamurl");
        streamurl->setCurrentText(QString::fromUtf8(""));

        layout_preferences->setWidget(8, QFormLayout::FieldRole, streamurl);

        checkbox_album_explicit = new QCheckBox(groupbox_preferences);
        checkbox_album_explicit->setObjectName("checkbox_album_explicit");

        layout_preferences->setWidget(9, QFormLayout::LabelRole, checkbox_album_explicit);

        checkbox_remove_remastered = new QCheckBox(groupbox_preferences);
        checkbox_remove_remastered->setObjectName("checkbox_remove_remastered");

        layout_preferences->setWidget(10, QFormLayout::LabelRole, checkbox_remove_remastered);


        layout_tidalsettingspage->addWidget(groupbox_preferences);

        spacer_middle = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_tidalsettingspage->addItem(spacer_middle);

        layout_bottom = new QHBoxLayout();
        layout_bottom->setObjectName("layout_bottom");
        spacer_bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_bottom->addItem(spacer_bottom);

        label_tidal = new QLabel(TidalSettingsPage);
        label_tidal->setObjectName("label_tidal");
        label_tidal->setMinimumSize(QSize(64, 64));
        label_tidal->setMaximumSize(QSize(64, 64));
        label_tidal->setPixmap(QPixmap(QString::fromUtf8(":/icons/64x64/tidal.png")));

        layout_bottom->addWidget(label_tidal);


        layout_tidalsettingspage->addLayout(layout_bottom);

        QWidget::setTabOrder(enable, checkbox_use_custom_client_id);
        QWidget::setTabOrder(checkbox_use_custom_client_id, client_id);
        QWidget::setTabOrder(client_id, button_login);
        QWidget::setTabOrder(button_login, quality);
        QWidget::setTabOrder(quality, searchdelay);
        QWidget::setTabOrder(searchdelay, artistssearchlimit);
        QWidget::setTabOrder(artistssearchlimit, albumssearchlimit);
        QWidget::setTabOrder(albumssearchlimit, songssearchlimit);
        QWidget::setTabOrder(songssearchlimit, checkbox_download_album_covers);
        QWidget::setTabOrder(checkbox_download_album_covers, checkbox_fetchalbums);
        QWidget::setTabOrder(checkbox_fetchalbums, coversize);
        QWidget::setTabOrder(coversize, streamurl);
        QWidget::setTabOrder(streamurl, checkbox_album_explicit);
        QWidget::setTabOrder(checkbox_album_explicit, checkbox_remove_remastered);

        retranslateUi(TidalSettingsPage);

        QMetaObject::connectSlotsByName(TidalSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *TidalSettingsPage)
    {
        TidalSettingsPage->setWindowTitle(QCoreApplication::translate("TidalSettingsPage", "Tidal", nullptr));
        enable->setText(QCoreApplication::translate("TidalSettingsPage", "Enable", nullptr));
        groupbox_api_credentials->setTitle(QCoreApplication::translate("TidalSettingsPage", "API Credentials", nullptr));
        checkbox_use_custom_client_id->setText(QCoreApplication::translate("TidalSettingsPage", "Use custom client ID", nullptr));
        label_client_id->setText(QCoreApplication::translate("TidalSettingsPage", "Client ID", nullptr));
        button_login->setText(QCoreApplication::translate("TidalSettingsPage", "Login", nullptr));
        groupbox_preferences->setTitle(QCoreApplication::translate("TidalSettingsPage", "Preferences", nullptr));
        label_quality->setText(QCoreApplication::translate("TidalSettingsPage", "Audio quality", nullptr));
        label_searchdelay->setText(QCoreApplication::translate("TidalSettingsPage", "Search delay", nullptr));
        searchdelay->setSuffix(QCoreApplication::translate("TidalSettingsPage", "ms", nullptr));
        label_artistssearchlimit->setText(QCoreApplication::translate("TidalSettingsPage", "Artists search limit", nullptr));
        label_albumssearchlimit->setText(QCoreApplication::translate("TidalSettingsPage", "Albums search limit", nullptr));
        label_songssearchlimit->setText(QCoreApplication::translate("TidalSettingsPage", "Songs search limit", nullptr));
        checkbox_download_album_covers->setText(QCoreApplication::translate("TidalSettingsPage", "Download album covers", nullptr));
        checkbox_fetchalbums->setText(QCoreApplication::translate("TidalSettingsPage", "Fetch entire albums when searching songs", nullptr));
        label_coversize->setText(QCoreApplication::translate("TidalSettingsPage", "Album cover size", nullptr));
        label_streamurl->setText(QCoreApplication::translate("TidalSettingsPage", "Stream URL method", nullptr));
        checkbox_album_explicit->setText(QCoreApplication::translate("TidalSettingsPage", "Append explicit to album title for explicit albums", nullptr));
        checkbox_remove_remastered->setText(QCoreApplication::translate("TidalSettingsPage", "Remove (Remastered), etc from song titles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TidalSettingsPage: public Ui_TidalSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIDALSETTINGSPAGE_H
