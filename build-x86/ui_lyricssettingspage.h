/********************************************************************************
** Form generated from reading UI file 'lyricssettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYRICSSETTINGSPAGE_H
#define UI_LYRICSSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_LyricsSettingsPage
{
public:
    QVBoxLayout *layout_lyricssettingspage;
    QGroupBox *groupbox_providers;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_enabled;
    QHBoxLayout *layout_providers;
    QListWidget *providers;
    QVBoxLayout *layout_providers_updown;
    QPushButton *providers_up;
    QPushButton *providers_down;
    QSpacerItem *spacer_providers_updown;
    QGroupBox *groupbox_api_credentials;
    QVBoxLayout *layout_credentials;
    QCheckBox *checkbox_custom_api_credentials;
    QFormLayout *formlayout_api_credentials;
    QLabel *label_api_credential_id;
    QLineEdit *lineedit_api_credential_id;
    QLabel *label_api_credential_secret;
    QLineEdit *lineedit_api_credential_secret;
    QGroupBox *authentication;
    QVBoxLayout *verticalLayout;
    QLabel *label_auth_info;
    QHBoxLayout *layout_authenticate;
    LoginStateWidget *login_state;
    QWidget *widget_authenticate;
    QHBoxLayout *layout_button_authenticate;
    QPushButton *button_authenticate;
    QSpacerItem *spacer_button_authenticate;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *LyricsSettingsPage)
    {
        if (LyricsSettingsPage->objectName().isEmpty())
            LyricsSettingsPage->setObjectName("LyricsSettingsPage");
        LyricsSettingsPage->resize(460, 600);
        layout_lyricssettingspage = new QVBoxLayout(LyricsSettingsPage);
        layout_lyricssettingspage->setObjectName("layout_lyricssettingspage");
        groupbox_providers = new QGroupBox(LyricsSettingsPage);
        groupbox_providers->setObjectName("groupbox_providers");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupbox_providers->sizePolicy().hasHeightForWidth());
        groupbox_providers->setSizePolicy(sizePolicy);
        verticalLayout_15 = new QVBoxLayout(groupbox_providers);
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_enabled = new QLabel(groupbox_providers);
        label_enabled->setObjectName("label_enabled");
        label_enabled->setWordWrap(true);

        verticalLayout_15->addWidget(label_enabled);

        layout_providers = new QHBoxLayout();
        layout_providers->setObjectName("layout_providers");
        providers = new QListWidget(groupbox_providers);
        providers->setObjectName("providers");

        layout_providers->addWidget(providers);

        layout_providers_updown = new QVBoxLayout();
        layout_providers_updown->setObjectName("layout_providers_updown");
        providers_up = new QPushButton(groupbox_providers);
        providers_up->setObjectName("providers_up");
        providers_up->setEnabled(false);

        layout_providers_updown->addWidget(providers_up);

        providers_down = new QPushButton(groupbox_providers);
        providers_down->setObjectName("providers_down");
        providers_down->setEnabled(false);

        layout_providers_updown->addWidget(providers_down);

        spacer_providers_updown = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_providers_updown->addItem(spacer_providers_updown);


        layout_providers->addLayout(layout_providers_updown);


        verticalLayout_15->addLayout(layout_providers);


        layout_lyricssettingspage->addWidget(groupbox_providers);

        groupbox_api_credentials = new QGroupBox(LyricsSettingsPage);
        groupbox_api_credentials->setObjectName("groupbox_api_credentials");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupbox_api_credentials->sizePolicy().hasHeightForWidth());
        groupbox_api_credentials->setSizePolicy(sizePolicy1);
        layout_credentials = new QVBoxLayout(groupbox_api_credentials);
        layout_credentials->setObjectName("layout_credentials");
        checkbox_custom_api_credentials = new QCheckBox(groupbox_api_credentials);
        checkbox_custom_api_credentials->setObjectName("checkbox_custom_api_credentials");

        layout_credentials->addWidget(checkbox_custom_api_credentials);

        formlayout_api_credentials = new QFormLayout();
        formlayout_api_credentials->setObjectName("formlayout_api_credentials");
        label_api_credential_id = new QLabel(groupbox_api_credentials);
        label_api_credential_id->setObjectName("label_api_credential_id");

        formlayout_api_credentials->setWidget(0, QFormLayout::LabelRole, label_api_credential_id);

        lineedit_api_credential_id = new QLineEdit(groupbox_api_credentials);
        lineedit_api_credential_id->setObjectName("lineedit_api_credential_id");
        lineedit_api_credential_id->setText(QString::fromUtf8(""));

        formlayout_api_credentials->setWidget(0, QFormLayout::FieldRole, lineedit_api_credential_id);

        label_api_credential_secret = new QLabel(groupbox_api_credentials);
        label_api_credential_secret->setObjectName("label_api_credential_secret");

        formlayout_api_credentials->setWidget(1, QFormLayout::LabelRole, label_api_credential_secret);

        lineedit_api_credential_secret = new QLineEdit(groupbox_api_credentials);
        lineedit_api_credential_secret->setObjectName("lineedit_api_credential_secret");
        lineedit_api_credential_secret->setEchoMode(QLineEdit::Password);

        formlayout_api_credentials->setWidget(1, QFormLayout::FieldRole, lineedit_api_credential_secret);


        layout_credentials->addLayout(formlayout_api_credentials);


        layout_lyricssettingspage->addWidget(groupbox_api_credentials);

        authentication = new QGroupBox(LyricsSettingsPage);
        authentication->setObjectName("authentication");
        sizePolicy1.setHeightForWidth(authentication->sizePolicy().hasHeightForWidth());
        authentication->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(authentication);
        verticalLayout->setObjectName("verticalLayout");
        label_auth_info = new QLabel(authentication);
        label_auth_info->setObjectName("label_auth_info");
        label_auth_info->setWordWrap(true);

        verticalLayout->addWidget(label_auth_info);

        layout_authenticate = new QHBoxLayout();
        layout_authenticate->setObjectName("layout_authenticate");
        login_state = new LoginStateWidget(authentication);
        login_state->setObjectName("login_state");

        layout_authenticate->addWidget(login_state);

        widget_authenticate = new QWidget(authentication);
        widget_authenticate->setObjectName("widget_authenticate");
        layout_button_authenticate = new QHBoxLayout(widget_authenticate);
        layout_button_authenticate->setObjectName("layout_button_authenticate");
        button_authenticate = new QPushButton(widget_authenticate);
        button_authenticate->setObjectName("button_authenticate");

        layout_button_authenticate->addWidget(button_authenticate);


        layout_authenticate->addWidget(widget_authenticate);

        spacer_button_authenticate = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_authenticate->addItem(spacer_button_authenticate);


        verticalLayout->addLayout(layout_authenticate);


        layout_lyricssettingspage->addWidget(authentication);

        spacer_bottom = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_lyricssettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(providers, providers_up);
        QWidget::setTabOrder(providers_up, providers_down);
        QWidget::setTabOrder(providers_down, checkbox_custom_api_credentials);
        QWidget::setTabOrder(checkbox_custom_api_credentials, lineedit_api_credential_id);
        QWidget::setTabOrder(lineedit_api_credential_id, lineedit_api_credential_secret);
        QWidget::setTabOrder(lineedit_api_credential_secret, button_authenticate);

        retranslateUi(LyricsSettingsPage);

        QMetaObject::connectSlotsByName(LyricsSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *LyricsSettingsPage)
    {
        LyricsSettingsPage->setWindowTitle(QCoreApplication::translate("LyricsSettingsPage", "Lyrics", nullptr));
        groupbox_providers->setTitle(QCoreApplication::translate("LyricsSettingsPage", "Lyrics providers", nullptr));
        label_enabled->setText(QCoreApplication::translate("LyricsSettingsPage", "Choose the providers you want to use when searching for lyrics.", nullptr));
        providers_up->setText(QCoreApplication::translate("LyricsSettingsPage", "Move up", nullptr));
        providers_down->setText(QCoreApplication::translate("LyricsSettingsPage", "Move down", nullptr));
        groupbox_api_credentials->setTitle(QCoreApplication::translate("LyricsSettingsPage", "API Credentials", nullptr));
        checkbox_custom_api_credentials->setText(QCoreApplication::translate("LyricsSettingsPage", "Use custom API credentials", nullptr));
        label_api_credential_id->setText(QCoreApplication::translate("LyricsSettingsPage", "Client ID", nullptr));
        label_api_credential_secret->setText(QCoreApplication::translate("LyricsSettingsPage", "Client secret", nullptr));
        authentication->setTitle(QCoreApplication::translate("LyricsSettingsPage", "Authentication", nullptr));
        label_auth_info->setText(QString());
        button_authenticate->setText(QCoreApplication::translate("LyricsSettingsPage", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LyricsSettingsPage: public Ui_LyricsSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICSSETTINGSPAGE_H
