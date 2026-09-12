/********************************************************************************
** Form generated from reading UI file 'coverssettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVERSSETTINGSPAGE_H
#define UI_COVERSSETTINGSPAGE_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_CoversSettingsPage
{
public:
    QVBoxLayout *layout_coverssettingspage;
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
    QGroupBox *groupbox_album_cover_art_types;
    QHBoxLayout *horizontalLayout;
    QListWidget *types;
    QVBoxLayout *layout_move_up_down;
    QPushButton *types_up;
    QPushButton *types_down;
    QSpacerItem *spacer_types_updown;
    QGroupBox *groupbox_albumcovers;
    QVBoxLayout *layout_albumcovers;
    QGroupBox *groupbox_save_options;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radiobutton_save_albumcover_albumdir;
    QRadioButton *radiobutton_save_albumcover_cache;
    QRadioButton *radiobutton_save_albumcover_embedded;
    QGroupBox *groupbox_cover_filename;
    QVBoxLayout *layout_cover_filename;
    QWidget *groupbox_cover_type;
    QHBoxLayout *layout_cover_type;
    QRadioButton *radiobutton_cover_pattern;
    QRadioButton *radiobutton_cover_hash;
    QSpacerItem *spacer_cover_filename_bttons;
    QLineEdit *lineedit_cover_pattern;
    QCheckBox *checkbox_cover_overwrite;
    QCheckBox *checkbox_cover_lowercase;
    QCheckBox *checkbox_cover_replace_spaces;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *CoversSettingsPage)
    {
        if (CoversSettingsPage->objectName().isEmpty())
            CoversSettingsPage->setObjectName("CoversSettingsPage");
        CoversSettingsPage->resize(460, 1028);
        layout_coverssettingspage = new QVBoxLayout(CoversSettingsPage);
        layout_coverssettingspage->setObjectName("layout_coverssettingspage");
        groupbox_providers = new QGroupBox(CoversSettingsPage);
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


        layout_coverssettingspage->addWidget(groupbox_providers);

        groupbox_api_credentials = new QGroupBox(CoversSettingsPage);
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


        layout_coverssettingspage->addWidget(groupbox_api_credentials);

        authentication = new QGroupBox(CoversSettingsPage);
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


        layout_coverssettingspage->addWidget(authentication);

        groupbox_album_cover_art_types = new QGroupBox(CoversSettingsPage);
        groupbox_album_cover_art_types->setObjectName("groupbox_album_cover_art_types");
        horizontalLayout = new QHBoxLayout(groupbox_album_cover_art_types);
        horizontalLayout->setObjectName("horizontalLayout");
        types = new QListWidget(groupbox_album_cover_art_types);
        types->setObjectName("types");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(types->sizePolicy().hasHeightForWidth());
        types->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(types);

        layout_move_up_down = new QVBoxLayout();
        layout_move_up_down->setObjectName("layout_move_up_down");
        types_up = new QPushButton(groupbox_album_cover_art_types);
        types_up->setObjectName("types_up");

        layout_move_up_down->addWidget(types_up);

        types_down = new QPushButton(groupbox_album_cover_art_types);
        types_down->setObjectName("types_down");

        layout_move_up_down->addWidget(types_down);

        spacer_types_updown = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_move_up_down->addItem(spacer_types_updown);


        horizontalLayout->addLayout(layout_move_up_down);


        layout_coverssettingspage->addWidget(groupbox_album_cover_art_types);

        groupbox_albumcovers = new QGroupBox(CoversSettingsPage);
        groupbox_albumcovers->setObjectName("groupbox_albumcovers");
        layout_albumcovers = new QVBoxLayout(groupbox_albumcovers);
        layout_albumcovers->setObjectName("layout_albumcovers");
        layout_albumcovers->setContentsMargins(-1, -1, -1, 0);
        groupbox_save_options = new QGroupBox(groupbox_albumcovers);
        groupbox_save_options->setObjectName("groupbox_save_options");
        verticalLayout_2 = new QVBoxLayout(groupbox_save_options);
        verticalLayout_2->setObjectName("verticalLayout_2");
        radiobutton_save_albumcover_albumdir = new QRadioButton(groupbox_save_options);
        radiobutton_save_albumcover_albumdir->setObjectName("radiobutton_save_albumcover_albumdir");

        verticalLayout_2->addWidget(radiobutton_save_albumcover_albumdir);

        radiobutton_save_albumcover_cache = new QRadioButton(groupbox_save_options);
        radiobutton_save_albumcover_cache->setObjectName("radiobutton_save_albumcover_cache");

        verticalLayout_2->addWidget(radiobutton_save_albumcover_cache);

        radiobutton_save_albumcover_embedded = new QRadioButton(groupbox_save_options);
        radiobutton_save_albumcover_embedded->setObjectName("radiobutton_save_albumcover_embedded");

        verticalLayout_2->addWidget(radiobutton_save_albumcover_embedded);


        layout_albumcovers->addWidget(groupbox_save_options);

        groupbox_cover_filename = new QGroupBox(groupbox_albumcovers);
        groupbox_cover_filename->setObjectName("groupbox_cover_filename");
        layout_cover_filename = new QVBoxLayout(groupbox_cover_filename);
        layout_cover_filename->setObjectName("layout_cover_filename");
        groupbox_cover_type = new QWidget(groupbox_cover_filename);
        groupbox_cover_type->setObjectName("groupbox_cover_type");
        layout_cover_type = new QHBoxLayout(groupbox_cover_type);
        layout_cover_type->setObjectName("layout_cover_type");
        layout_cover_type->setContentsMargins(0, 0, 0, 0);
        radiobutton_cover_pattern = new QRadioButton(groupbox_cover_type);
        radiobutton_cover_pattern->setObjectName("radiobutton_cover_pattern");

        layout_cover_type->addWidget(radiobutton_cover_pattern);

        radiobutton_cover_hash = new QRadioButton(groupbox_cover_type);
        radiobutton_cover_hash->setObjectName("radiobutton_cover_hash");

        layout_cover_type->addWidget(radiobutton_cover_hash);

        spacer_cover_filename_bttons = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_cover_type->addItem(spacer_cover_filename_bttons);


        layout_cover_filename->addWidget(groupbox_cover_type);

        lineedit_cover_pattern = new QLineEdit(groupbox_cover_filename);
        lineedit_cover_pattern->setObjectName("lineedit_cover_pattern");
        lineedit_cover_pattern->setText(QString::fromUtf8("%albumartist-%album"));

        layout_cover_filename->addWidget(lineedit_cover_pattern);

        checkbox_cover_overwrite = new QCheckBox(groupbox_cover_filename);
        checkbox_cover_overwrite->setObjectName("checkbox_cover_overwrite");

        layout_cover_filename->addWidget(checkbox_cover_overwrite);

        checkbox_cover_lowercase = new QCheckBox(groupbox_cover_filename);
        checkbox_cover_lowercase->setObjectName("checkbox_cover_lowercase");

        layout_cover_filename->addWidget(checkbox_cover_lowercase);

        checkbox_cover_replace_spaces = new QCheckBox(groupbox_cover_filename);
        checkbox_cover_replace_spaces->setObjectName("checkbox_cover_replace_spaces");

        layout_cover_filename->addWidget(checkbox_cover_replace_spaces);


        layout_albumcovers->addWidget(groupbox_cover_filename);


        layout_coverssettingspage->addWidget(groupbox_albumcovers);

        spacer_bottom = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_coverssettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(providers, providers_up);
        QWidget::setTabOrder(providers_up, providers_down);
        QWidget::setTabOrder(providers_down, checkbox_custom_api_credentials);
        QWidget::setTabOrder(checkbox_custom_api_credentials, lineedit_api_credential_id);
        QWidget::setTabOrder(lineedit_api_credential_id, lineedit_api_credential_secret);
        QWidget::setTabOrder(lineedit_api_credential_secret, button_authenticate);
        QWidget::setTabOrder(button_authenticate, types);
        QWidget::setTabOrder(types, types_up);
        QWidget::setTabOrder(types_up, types_down);
        QWidget::setTabOrder(types_down, radiobutton_save_albumcover_albumdir);
        QWidget::setTabOrder(radiobutton_save_albumcover_albumdir, radiobutton_save_albumcover_cache);
        QWidget::setTabOrder(radiobutton_save_albumcover_cache, radiobutton_save_albumcover_embedded);
        QWidget::setTabOrder(radiobutton_save_albumcover_embedded, radiobutton_cover_pattern);
        QWidget::setTabOrder(radiobutton_cover_pattern, radiobutton_cover_hash);
        QWidget::setTabOrder(radiobutton_cover_hash, lineedit_cover_pattern);
        QWidget::setTabOrder(lineedit_cover_pattern, checkbox_cover_overwrite);
        QWidget::setTabOrder(checkbox_cover_overwrite, checkbox_cover_lowercase);
        QWidget::setTabOrder(checkbox_cover_lowercase, checkbox_cover_replace_spaces);

        retranslateUi(CoversSettingsPage);

        QMetaObject::connectSlotsByName(CoversSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *CoversSettingsPage)
    {
        CoversSettingsPage->setWindowTitle(QCoreApplication::translate("CoversSettingsPage", "Covers", nullptr));
        groupbox_providers->setTitle(QCoreApplication::translate("CoversSettingsPage", "Cover providers", nullptr));
        label_enabled->setText(QCoreApplication::translate("CoversSettingsPage", "Choose the providers you want to use when searching for covers.", nullptr));
        providers_up->setText(QCoreApplication::translate("CoversSettingsPage", "Move up", nullptr));
        providers_down->setText(QCoreApplication::translate("CoversSettingsPage", "Move down", nullptr));
        groupbox_api_credentials->setTitle(QCoreApplication::translate("CoversSettingsPage", "API Credentials", nullptr));
        checkbox_custom_api_credentials->setText(QCoreApplication::translate("CoversSettingsPage", "Use custom API credentials", nullptr));
        label_api_credential_id->setText(QCoreApplication::translate("CoversSettingsPage", "Client ID", nullptr));
        label_api_credential_secret->setText(QCoreApplication::translate("CoversSettingsPage", "Client secret", nullptr));
        authentication->setTitle(QCoreApplication::translate("CoversSettingsPage", "Authentication", nullptr));
        label_auth_info->setText(QString());
        button_authenticate->setText(QCoreApplication::translate("CoversSettingsPage", "Login", nullptr));
        groupbox_album_cover_art_types->setTitle(QCoreApplication::translate("CoversSettingsPage", "Album cover types", nullptr));
        types_up->setText(QCoreApplication::translate("CoversSettingsPage", "Move up", nullptr));
        types_down->setText(QCoreApplication::translate("CoversSettingsPage", "Move down", nullptr));
        groupbox_albumcovers->setTitle(QCoreApplication::translate("CoversSettingsPage", "Saving album covers", nullptr));
        groupbox_save_options->setTitle(QString());
        radiobutton_save_albumcover_albumdir->setText(QCoreApplication::translate("CoversSettingsPage", "Save album covers in album directory", nullptr));
        radiobutton_save_albumcover_cache->setText(QCoreApplication::translate("CoversSettingsPage", "Save album covers in cache directory", nullptr));
        radiobutton_save_albumcover_embedded->setText(QCoreApplication::translate("CoversSettingsPage", "Save album covers as embedded cover", nullptr));
        groupbox_cover_filename->setTitle(QCoreApplication::translate("CoversSettingsPage", "Filename:", nullptr));
        radiobutton_cover_pattern->setText(QCoreApplication::translate("CoversSettingsPage", "Pattern", nullptr));
        radiobutton_cover_hash->setText(QCoreApplication::translate("CoversSettingsPage", "Random", nullptr));
        checkbox_cover_overwrite->setText(QCoreApplication::translate("CoversSettingsPage", "Overwrite existing file", nullptr));
        checkbox_cover_lowercase->setText(QCoreApplication::translate("CoversSettingsPage", "Lowercase filename", nullptr));
        checkbox_cover_replace_spaces->setText(QCoreApplication::translate("CoversSettingsPage", "Replace spaces with dashes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoversSettingsPage: public Ui_CoversSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVERSSETTINGSPAGE_H
