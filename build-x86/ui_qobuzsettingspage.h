/********************************************************************************
** Form generated from reading UI file 'qobuzsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QOBUZSETTINGSPAGE_H
#define UI_QOBUZSETTINGSPAGE_H

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

class Ui_QobuzSettingsPage
{
public:
    QVBoxLayout *layout_qobuzsettingspage;
    QCheckBox *enable;
    QGroupBox *groupbox_api_credentials;
    QFormLayout *layout_api_credentials;
    QLabel *label_app_id;
    QLineEdit *app_id;
    QLabel *label_app_secret;
    QLineEdit *app_secret;
    QLabel *label_private_key;
    QLineEdit *private_key;
    QPushButton *button_fetch_api_credentials;
    QPushButton *button_login;
    LoginStateWidget *login_state;
    QGroupBox *groupbox_preferences;
    QFormLayout *layout_preferences;
    QLabel *label_format;
    QComboBox *format;
    QLabel *label_searchdelay;
    QSpinBox *searchdelay;
    QLabel *label_artistssearchlimit;
    QSpinBox *artistssearchlimit;
    QLabel *label_albumssearchlimit;
    QSpinBox *albumssearchlimit;
    QLabel *label_songssearchlimit;
    QSpinBox *songssearchlimit;
    QCheckBox *checkbox_download_album_covers;
    QCheckBox *checkbox_remove_remastered;
    QSpacerItem *spacer_middle;
    QHBoxLayout *layout_bottom;
    QSpacerItem *spacer_bottom;
    QLabel *label_qobuz;

    void setupUi(QWidget *QobuzSettingsPage)
    {
        if (QobuzSettingsPage->objectName().isEmpty())
            QobuzSettingsPage->setObjectName("QobuzSettingsPage");
        QobuzSettingsPage->resize(472, 697);
        layout_qobuzsettingspage = new QVBoxLayout(QobuzSettingsPage);
        layout_qobuzsettingspage->setObjectName("layout_qobuzsettingspage");
        enable = new QCheckBox(QobuzSettingsPage);
        enable->setObjectName("enable");

        layout_qobuzsettingspage->addWidget(enable);

        groupbox_api_credentials = new QGroupBox(QobuzSettingsPage);
        groupbox_api_credentials->setObjectName("groupbox_api_credentials");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupbox_api_credentials->sizePolicy().hasHeightForWidth());
        groupbox_api_credentials->setSizePolicy(sizePolicy);
        layout_api_credentials = new QFormLayout(groupbox_api_credentials);
        layout_api_credentials->setObjectName("layout_api_credentials");
        label_app_id = new QLabel(groupbox_api_credentials);
        label_app_id->setObjectName("label_app_id");
        label_app_id->setMinimumSize(QSize(150, 0));

        layout_api_credentials->setWidget(1, QFormLayout::LabelRole, label_app_id);

        app_id = new QLineEdit(groupbox_api_credentials);
        app_id->setObjectName("app_id");
        app_id->setText(QString::fromUtf8(""));

        layout_api_credentials->setWidget(1, QFormLayout::FieldRole, app_id);

        label_app_secret = new QLabel(groupbox_api_credentials);
        label_app_secret->setObjectName("label_app_secret");

        layout_api_credentials->setWidget(2, QFormLayout::LabelRole, label_app_secret);

        app_secret = new QLineEdit(groupbox_api_credentials);
        app_secret->setObjectName("app_secret");
        app_secret->setText(QString::fromUtf8(""));

        layout_api_credentials->setWidget(2, QFormLayout::FieldRole, app_secret);

        label_private_key = new QLabel(groupbox_api_credentials);
        label_private_key->setObjectName("label_private_key");

        layout_api_credentials->setWidget(3, QFormLayout::LabelRole, label_private_key);

        private_key = new QLineEdit(groupbox_api_credentials);
        private_key->setObjectName("private_key");

        layout_api_credentials->setWidget(3, QFormLayout::FieldRole, private_key);


        layout_qobuzsettingspage->addWidget(groupbox_api_credentials);

        button_fetch_api_credentials = new QPushButton(QobuzSettingsPage);
        button_fetch_api_credentials->setObjectName("button_fetch_api_credentials");

        layout_qobuzsettingspage->addWidget(button_fetch_api_credentials);

        button_login = new QPushButton(QobuzSettingsPage);
        button_login->setObjectName("button_login");

        layout_qobuzsettingspage->addWidget(button_login);

        login_state = new LoginStateWidget(QobuzSettingsPage);
        login_state->setObjectName("login_state");

        layout_qobuzsettingspage->addWidget(login_state);

        groupbox_preferences = new QGroupBox(QobuzSettingsPage);
        groupbox_preferences->setObjectName("groupbox_preferences");
        layout_preferences = new QFormLayout(groupbox_preferences);
        layout_preferences->setObjectName("layout_preferences");
        label_format = new QLabel(groupbox_preferences);
        label_format->setObjectName("label_format");

        layout_preferences->setWidget(1, QFormLayout::LabelRole, label_format);

        format = new QComboBox(groupbox_preferences);
        format->setObjectName("format");
        format->setCurrentText(QString::fromUtf8(""));

        layout_preferences->setWidget(1, QFormLayout::FieldRole, format);

        label_searchdelay = new QLabel(groupbox_preferences);
        label_searchdelay->setObjectName("label_searchdelay");

        layout_preferences->setWidget(2, QFormLayout::LabelRole, label_searchdelay);

        searchdelay = new QSpinBox(groupbox_preferences);
        searchdelay->setObjectName("searchdelay");
        searchdelay->setMinimum(0);
        searchdelay->setMaximum(10000);
        searchdelay->setSingleStep(50);
        searchdelay->setValue(1500);

        layout_preferences->setWidget(2, QFormLayout::FieldRole, searchdelay);

        label_artistssearchlimit = new QLabel(groupbox_preferences);
        label_artistssearchlimit->setObjectName("label_artistssearchlimit");

        layout_preferences->setWidget(3, QFormLayout::LabelRole, label_artistssearchlimit);

        artistssearchlimit = new QSpinBox(groupbox_preferences);
        artistssearchlimit->setObjectName("artistssearchlimit");
        artistssearchlimit->setMinimum(1);
        artistssearchlimit->setMaximum(100);
        artistssearchlimit->setValue(50);

        layout_preferences->setWidget(3, QFormLayout::FieldRole, artistssearchlimit);

        label_albumssearchlimit = new QLabel(groupbox_preferences);
        label_albumssearchlimit->setObjectName("label_albumssearchlimit");

        layout_preferences->setWidget(4, QFormLayout::LabelRole, label_albumssearchlimit);

        albumssearchlimit = new QSpinBox(groupbox_preferences);
        albumssearchlimit->setObjectName("albumssearchlimit");
        albumssearchlimit->setMinimum(1);
        albumssearchlimit->setMaximum(1000);
        albumssearchlimit->setValue(50);

        layout_preferences->setWidget(4, QFormLayout::FieldRole, albumssearchlimit);

        label_songssearchlimit = new QLabel(groupbox_preferences);
        label_songssearchlimit->setObjectName("label_songssearchlimit");

        layout_preferences->setWidget(5, QFormLayout::LabelRole, label_songssearchlimit);

        songssearchlimit = new QSpinBox(groupbox_preferences);
        songssearchlimit->setObjectName("songssearchlimit");
        songssearchlimit->setMinimum(1);
        songssearchlimit->setMaximum(1000);
        songssearchlimit->setValue(50);

        layout_preferences->setWidget(5, QFormLayout::FieldRole, songssearchlimit);

        checkbox_download_album_covers = new QCheckBox(groupbox_preferences);
        checkbox_download_album_covers->setObjectName("checkbox_download_album_covers");

        layout_preferences->setWidget(7, QFormLayout::LabelRole, checkbox_download_album_covers);

        checkbox_remove_remastered = new QCheckBox(groupbox_preferences);
        checkbox_remove_remastered->setObjectName("checkbox_remove_remastered");

        layout_preferences->setWidget(8, QFormLayout::LabelRole, checkbox_remove_remastered);


        layout_qobuzsettingspage->addWidget(groupbox_preferences);

        spacer_middle = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_qobuzsettingspage->addItem(spacer_middle);

        layout_bottom = new QHBoxLayout();
        layout_bottom->setObjectName("layout_bottom");
        spacer_bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_bottom->addItem(spacer_bottom);

        label_qobuz = new QLabel(QobuzSettingsPage);
        label_qobuz->setObjectName("label_qobuz");
        label_qobuz->setMinimumSize(QSize(64, 64));
        label_qobuz->setMaximumSize(QSize(64, 64));
        label_qobuz->setPixmap(QPixmap(QString::fromUtf8(":/icons/64x64/qobuz.png")));

        layout_bottom->addWidget(label_qobuz);


        layout_qobuzsettingspage->addLayout(layout_bottom);

        QWidget::setTabOrder(enable, app_id);
        QWidget::setTabOrder(app_id, app_secret);
        QWidget::setTabOrder(app_secret, private_key);
        QWidget::setTabOrder(private_key, button_fetch_api_credentials);
        QWidget::setTabOrder(button_fetch_api_credentials, button_login);
        QWidget::setTabOrder(button_login, format);
        QWidget::setTabOrder(format, searchdelay);
        QWidget::setTabOrder(searchdelay, artistssearchlimit);
        QWidget::setTabOrder(artistssearchlimit, albumssearchlimit);
        QWidget::setTabOrder(albumssearchlimit, songssearchlimit);
        QWidget::setTabOrder(songssearchlimit, checkbox_download_album_covers);
        QWidget::setTabOrder(checkbox_download_album_covers, checkbox_remove_remastered);

        retranslateUi(QobuzSettingsPage);

        QMetaObject::connectSlotsByName(QobuzSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *QobuzSettingsPage)
    {
        QobuzSettingsPage->setWindowTitle(QCoreApplication::translate("QobuzSettingsPage", "Qobuz", nullptr));
        enable->setText(QCoreApplication::translate("QobuzSettingsPage", "Enable", nullptr));
        groupbox_api_credentials->setTitle(QCoreApplication::translate("QobuzSettingsPage", "API Credentials", nullptr));
        label_app_id->setText(QCoreApplication::translate("QobuzSettingsPage", "App ID", nullptr));
        label_app_secret->setText(QCoreApplication::translate("QobuzSettingsPage", "App Secret", nullptr));
        label_private_key->setText(QCoreApplication::translate("QobuzSettingsPage", "Private key", nullptr));
#if QT_CONFIG(tooltip)
        button_fetch_api_credentials->setToolTip(QCoreApplication::translate("QobuzSettingsPage", "Automatically fetch app ID, app secret and private key from Qobuz web player", nullptr));
#endif // QT_CONFIG(tooltip)
        button_fetch_api_credentials->setText(QCoreApplication::translate("QobuzSettingsPage", "Fetch API Credentials", nullptr));
        button_login->setText(QCoreApplication::translate("QobuzSettingsPage", "Login", nullptr));
        groupbox_preferences->setTitle(QCoreApplication::translate("QobuzSettingsPage", "Preferences", nullptr));
        label_format->setText(QCoreApplication::translate("QobuzSettingsPage", "Audio format", nullptr));
        label_searchdelay->setText(QCoreApplication::translate("QobuzSettingsPage", "Search delay", nullptr));
        searchdelay->setSuffix(QCoreApplication::translate("QobuzSettingsPage", "ms", nullptr));
        label_artistssearchlimit->setText(QCoreApplication::translate("QobuzSettingsPage", "Artists search limit", nullptr));
        label_albumssearchlimit->setText(QCoreApplication::translate("QobuzSettingsPage", "Albums search limit", nullptr));
        label_songssearchlimit->setText(QCoreApplication::translate("QobuzSettingsPage", "Songs search limit", nullptr));
        checkbox_download_album_covers->setText(QCoreApplication::translate("QobuzSettingsPage", "Download album covers", nullptr));
        checkbox_remove_remastered->setText(QCoreApplication::translate("QobuzSettingsPage", "Remove (Remastered), etc from song titles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QobuzSettingsPage: public Ui_QobuzSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QOBUZSETTINGSPAGE_H
