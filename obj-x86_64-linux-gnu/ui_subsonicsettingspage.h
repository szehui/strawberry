/********************************************************************************
** Form generated from reading UI file 'subsonicsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSONICSETTINGSPAGE_H
#define UI_SUBSONICSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubsonicSettingsPage
{
public:
    QVBoxLayout *layout_subsonicsettingspage;
    QCheckBox *enable;
    QGroupBox *server_group;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_server;
    QLineEdit *server_url;
    QSpacerItem *spacer_server;
    QGroupBox *groupbox_authentication;
    QFormLayout *layout_authentication;
    QLabel *label_username;
    QHBoxLayout *horizontalLayout;
    QLineEdit *username;
    QLabel *label_password;
    QLineEdit *password;
    QGroupBox *groupbox_auth_method;
    QHBoxLayout *layout_auth_method;
    QRadioButton *auth_method_hex;
    QRadioButton *auth_method_md5;
    QSpacerItem *spacer_auth;
    QGroupBox *groupbox_preferences;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkbox_http2;
    QCheckBox *checkbox_verify_certificate;
    QCheckBox *checkbox_download_album_covers;
    QCheckBox *checkbox_use_album_id_for_album_covers;
    QCheckBox *checkbox_server_scrobbling;
    QGroupBox *groupbox_tools;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_test;
    QPushButton *button_deletesongs;
    QSpacerItem *spacer_middle;
    QHBoxLayout *layout_bottom;
    QSpacerItem *spacer_bottom;
    QLabel *label_subsonic;

    void setupUi(QWidget *SubsonicSettingsPage)
    {
        if (SubsonicSettingsPage->objectName().isEmpty())
            SubsonicSettingsPage->setObjectName("SubsonicSettingsPage");
        SubsonicSettingsPage->resize(460, 749);
        layout_subsonicsettingspage = new QVBoxLayout(SubsonicSettingsPage);
        layout_subsonicsettingspage->setObjectName("layout_subsonicsettingspage");
        enable = new QCheckBox(SubsonicSettingsPage);
        enable->setObjectName("enable");

        layout_subsonicsettingspage->addWidget(enable);

        server_group = new QGroupBox(SubsonicSettingsPage);
        server_group->setObjectName("server_group");
        verticalLayout = new QVBoxLayout(server_group);
        verticalLayout->setObjectName("verticalLayout");
        layout_server = new QHBoxLayout();
        layout_server->setObjectName("layout_server");
        server_url = new QLineEdit(server_group);
        server_url->setObjectName("server_url");

        layout_server->addWidget(server_url);

        spacer_server = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_server->addItem(spacer_server);


        verticalLayout->addLayout(layout_server);


        layout_subsonicsettingspage->addWidget(server_group);

        groupbox_authentication = new QGroupBox(SubsonicSettingsPage);
        groupbox_authentication->setObjectName("groupbox_authentication");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupbox_authentication->sizePolicy().hasHeightForWidth());
        groupbox_authentication->setSizePolicy(sizePolicy);
        layout_authentication = new QFormLayout(groupbox_authentication);
        layout_authentication->setObjectName("layout_authentication");
        label_username = new QLabel(groupbox_authentication);
        label_username->setObjectName("label_username");

        layout_authentication->setWidget(1, QFormLayout::LabelRole, label_username);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        username = new QLineEdit(groupbox_authentication);
        username->setObjectName("username");

        horizontalLayout->addWidget(username);


        layout_authentication->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_password = new QLabel(groupbox_authentication);
        label_password->setObjectName("label_password");

        layout_authentication->setWidget(2, QFormLayout::LabelRole, label_password);

        password = new QLineEdit(groupbox_authentication);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::Password);

        layout_authentication->setWidget(2, QFormLayout::FieldRole, password);


        layout_subsonicsettingspage->addWidget(groupbox_authentication);

        groupbox_auth_method = new QGroupBox(SubsonicSettingsPage);
        groupbox_auth_method->setObjectName("groupbox_auth_method");
        layout_auth_method = new QHBoxLayout(groupbox_auth_method);
        layout_auth_method->setSpacing(0);
        layout_auth_method->setObjectName("layout_auth_method");
        layout_auth_method->setContentsMargins(0, 0, 0, 0);
        auth_method_hex = new QRadioButton(groupbox_auth_method);
        auth_method_hex->setObjectName("auth_method_hex");

        layout_auth_method->addWidget(auth_method_hex);

        auth_method_md5 = new QRadioButton(groupbox_auth_method);
        auth_method_md5->setObjectName("auth_method_md5");

        layout_auth_method->addWidget(auth_method_md5);

        spacer_auth = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_auth_method->addItem(spacer_auth);


        layout_subsonicsettingspage->addWidget(groupbox_auth_method);

        groupbox_preferences = new QGroupBox(SubsonicSettingsPage);
        groupbox_preferences->setObjectName("groupbox_preferences");
        verticalLayout_2 = new QVBoxLayout(groupbox_preferences);
        verticalLayout_2->setObjectName("verticalLayout_2");
        checkbox_http2 = new QCheckBox(groupbox_preferences);
        checkbox_http2->setObjectName("checkbox_http2");

        verticalLayout_2->addWidget(checkbox_http2);

        checkbox_verify_certificate = new QCheckBox(groupbox_preferences);
        checkbox_verify_certificate->setObjectName("checkbox_verify_certificate");

        verticalLayout_2->addWidget(checkbox_verify_certificate);

        checkbox_download_album_covers = new QCheckBox(groupbox_preferences);
        checkbox_download_album_covers->setObjectName("checkbox_download_album_covers");

        verticalLayout_2->addWidget(checkbox_download_album_covers);

        checkbox_use_album_id_for_album_covers = new QCheckBox(groupbox_preferences);
        checkbox_use_album_id_for_album_covers->setObjectName("checkbox_use_album_id_for_album_covers");

        verticalLayout_2->addWidget(checkbox_use_album_id_for_album_covers);

        checkbox_server_scrobbling = new QCheckBox(groupbox_preferences);
        checkbox_server_scrobbling->setObjectName("checkbox_server_scrobbling");

        verticalLayout_2->addWidget(checkbox_server_scrobbling);


        layout_subsonicsettingspage->addWidget(groupbox_preferences);

        groupbox_tools = new QGroupBox(SubsonicSettingsPage);
        groupbox_tools->setObjectName("groupbox_tools");
        gridLayout = new QGridLayout(groupbox_tools);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        button_test = new QPushButton(groupbox_tools);
        button_test->setObjectName("button_test");

        gridLayout->addWidget(button_test, 0, 0, 1, 1);

        button_deletesongs = new QPushButton(groupbox_tools);
        button_deletesongs->setObjectName("button_deletesongs");

        gridLayout->addWidget(button_deletesongs, 0, 1, 1, 1);


        layout_subsonicsettingspage->addWidget(groupbox_tools);

        spacer_middle = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_subsonicsettingspage->addItem(spacer_middle);

        layout_bottom = new QHBoxLayout();
        layout_bottom->setObjectName("layout_bottom");
        spacer_bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_bottom->addItem(spacer_bottom);

        label_subsonic = new QLabel(SubsonicSettingsPage);
        label_subsonic->setObjectName("label_subsonic");
        label_subsonic->setMinimumSize(QSize(64, 64));
        label_subsonic->setMaximumSize(QSize(64, 64));
        label_subsonic->setPixmap(QPixmap(QString::fromUtf8(":/icons/64x64/subsonic.png")));

        layout_bottom->addWidget(label_subsonic);


        layout_subsonicsettingspage->addLayout(layout_bottom);

        QWidget::setTabOrder(enable, server_url);
        QWidget::setTabOrder(server_url, username);
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, auth_method_hex);
        QWidget::setTabOrder(auth_method_hex, auth_method_md5);
        QWidget::setTabOrder(auth_method_md5, checkbox_http2);
        QWidget::setTabOrder(checkbox_http2, checkbox_verify_certificate);
        QWidget::setTabOrder(checkbox_verify_certificate, checkbox_download_album_covers);
        QWidget::setTabOrder(checkbox_download_album_covers, checkbox_use_album_id_for_album_covers);
        QWidget::setTabOrder(checkbox_use_album_id_for_album_covers, checkbox_server_scrobbling);
        QWidget::setTabOrder(checkbox_server_scrobbling, button_test);
        QWidget::setTabOrder(button_test, button_deletesongs);

        retranslateUi(SubsonicSettingsPage);

        QMetaObject::connectSlotsByName(SubsonicSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SubsonicSettingsPage)
    {
        SubsonicSettingsPage->setWindowTitle(QCoreApplication::translate("SubsonicSettingsPage", "Subsonic", nullptr));
        enable->setText(QCoreApplication::translate("SubsonicSettingsPage", "Enable", nullptr));
        server_group->setTitle(QCoreApplication::translate("SubsonicSettingsPage", "Server URL", nullptr));
        groupbox_authentication->setTitle(QCoreApplication::translate("SubsonicSettingsPage", "Authentication", nullptr));
        label_username->setText(QCoreApplication::translate("SubsonicSettingsPage", "Username", nullptr));
        label_password->setText(QCoreApplication::translate("SubsonicSettingsPage", "Password", nullptr));
        groupbox_auth_method->setTitle(QCoreApplication::translate("SubsonicSettingsPage", "Authentication method:", nullptr));
        auth_method_hex->setText(QCoreApplication::translate("SubsonicSettingsPage", "Hex", nullptr));
        auth_method_md5->setText(QCoreApplication::translate("SubsonicSettingsPage", "MD5 token (Recommended)", nullptr));
        groupbox_preferences->setTitle(QCoreApplication::translate("SubsonicSettingsPage", "Preferences", nullptr));
        checkbox_http2->setText(QCoreApplication::translate("SubsonicSettingsPage", "Use HTTP/2 when possible", nullptr));
        checkbox_verify_certificate->setText(QCoreApplication::translate("SubsonicSettingsPage", "Verify server certificate", nullptr));
        checkbox_download_album_covers->setText(QCoreApplication::translate("SubsonicSettingsPage", "Download album covers", nullptr));
        checkbox_use_album_id_for_album_covers->setText(QCoreApplication::translate("SubsonicSettingsPage", "Use album ID for album covers", nullptr));
        checkbox_server_scrobbling->setText(QCoreApplication::translate("SubsonicSettingsPage", "Server-side scrobbling", nullptr));
        groupbox_tools->setTitle(QString());
        button_test->setText(QCoreApplication::translate("SubsonicSettingsPage", "Test", nullptr));
        button_deletesongs->setText(QCoreApplication::translate("SubsonicSettingsPage", "Delete songs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubsonicSettingsPage: public Ui_SubsonicSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSONICSETTINGSPAGE_H
