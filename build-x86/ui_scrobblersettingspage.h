/********************************************************************************
** Form generated from reading UI file 'scrobblersettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCROBBLERSETTINGSPAGE_H
#define UI_SCROBBLERSETTINGSPAGE_H

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

class Ui_ScrobblerSettingsPage
{
public:
    QVBoxLayout *layout_scrobblersettingspage;
    QCheckBox *checkbox_enable;
    QLabel *label_scrobble_info;
    QCheckBox *checkbox_offline;
    QCheckBox *checkbox_scrobble_button;
    QCheckBox *checkbox_love_button;
    QHBoxLayout *layout_submit;
    QLabel *label_submit;
    QSpinBox *spinbox_submit;
    QSpacerItem *spacer_submit;
    QCheckBox *checkbox_albumartist;
    QCheckBox *checkbox_show_error_dialog;
    QCheckBox *checkbox_strip_remastered;
    QGroupBox *groupbox_sources;
    QFormLayout *formLayout;
    QCheckBox *checkbox_source_collection;
    QCheckBox *checkbox_source_subsonic;
    QCheckBox *checkbox_source_local;
    QCheckBox *checkbox_source_tidal;
    QCheckBox *checkbox_source_device;
    QCheckBox *checkbox_source_qobuz;
    QCheckBox *checkbox_source_somafm;
    QCheckBox *checkbox_source_radioparadise;
    QCheckBox *checkbox_source_spotify;
    QCheckBox *checkbox_source_cdda;
    QCheckBox *checkbox_source_stream;
    QCheckBox *checkbox_source_unknown;
    QGroupBox *groupbox_lastfm;
    QVBoxLayout *layout_lastfm;
    QCheckBox *checkbox_lastfm_enable;
    QCheckBox *checkbox_lastfm_use_custom_api_credentials;
    QHBoxLayout *layout_lastfm_client_id;
    QLabel *label_lastfm_client_id;
    QLineEdit *lineedit_lastfm_client_id;
    QHBoxLayout *layout_lastfm_client_secret;
    QLabel *label_lastfm_client_secret;
    QLineEdit *lineedit_lastfm_client_secret;
    LoginStateWidget *widget_lastfm_login_state;
    QWidget *widget_lastfm_login;
    QVBoxLayout *layout_lastfm_login;
    QHBoxLayout *layout_lastfm_button_login;
    QPushButton *button_lastfm_login;
    QSpacerItem *spacer_lastfm_login;
    QGroupBox *groupbox_listenbrainz;
    QVBoxLayout *layout_listenbrainz;
    QCheckBox *checkbox_listenbrainz_enable;
    QCheckBox *checkbox_listenbrainz_use_custom_api_credentials;
    QHBoxLayout *layout_listenbrainz_client_id;
    QLabel *label_listenbrainz_client_id;
    QLineEdit *lineedit_listenbrainz_client_id;
    QHBoxLayout *layout_listenbrainz_client_secret;
    QLabel *label_listenbrainz_client_secret;
    QLineEdit *lineedit_listenbrainz_client_secret;
    QHBoxLayout *layout_listenbrainz_user_token;
    QLabel *label_listenbrainz_user_token;
    QLineEdit *lineedit_listenbrainz_user_token;
    QLabel *label_listenbrainz_token;
    LoginStateWidget *widget_listenbrainz_login_state;
    QWidget *widget_listenbrainz_login;
    QVBoxLayout *layout_listenbrainz_login;
    QHBoxLayout *layout_listenbrainz_button_login;
    QPushButton *button_listenbrainz_login;
    QSpacerItem *spacer_listenbrainz_login;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *ScrobblerSettingsPage)
    {
        if (ScrobblerSettingsPage->objectName().isEmpty())
            ScrobblerSettingsPage->setObjectName("ScrobblerSettingsPage");
        ScrobblerSettingsPage->resize(460, 1103);
        layout_scrobblersettingspage = new QVBoxLayout(ScrobblerSettingsPage);
        layout_scrobblersettingspage->setObjectName("layout_scrobblersettingspage");
        checkbox_enable = new QCheckBox(ScrobblerSettingsPage);
        checkbox_enable->setObjectName("checkbox_enable");
        checkbox_enable->setEnabled(true);
        checkbox_enable->setChecked(false);

        layout_scrobblersettingspage->addWidget(checkbox_enable);

        label_scrobble_info = new QLabel(ScrobblerSettingsPage);
        label_scrobble_info->setObjectName("label_scrobble_info");
        label_scrobble_info->setWordWrap(true);

        layout_scrobblersettingspage->addWidget(label_scrobble_info);

        checkbox_offline = new QCheckBox(ScrobblerSettingsPage);
        checkbox_offline->setObjectName("checkbox_offline");

        layout_scrobblersettingspage->addWidget(checkbox_offline);

        checkbox_scrobble_button = new QCheckBox(ScrobblerSettingsPage);
        checkbox_scrobble_button->setObjectName("checkbox_scrobble_button");

        layout_scrobblersettingspage->addWidget(checkbox_scrobble_button);

        checkbox_love_button = new QCheckBox(ScrobblerSettingsPage);
        checkbox_love_button->setObjectName("checkbox_love_button");

        layout_scrobblersettingspage->addWidget(checkbox_love_button);

        layout_submit = new QHBoxLayout();
        layout_submit->setObjectName("layout_submit");
        label_submit = new QLabel(ScrobblerSettingsPage);
        label_submit->setObjectName("label_submit");

        layout_submit->addWidget(label_submit);

        spinbox_submit = new QSpinBox(ScrobblerSettingsPage);
        spinbox_submit->setObjectName("spinbox_submit");
        spinbox_submit->setMaximum(900);

        layout_submit->addWidget(spinbox_submit);

        spacer_submit = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_submit->addItem(spacer_submit);


        layout_scrobblersettingspage->addLayout(layout_submit);

        checkbox_albumartist = new QCheckBox(ScrobblerSettingsPage);
        checkbox_albumartist->setObjectName("checkbox_albumartist");

        layout_scrobblersettingspage->addWidget(checkbox_albumartist);

        checkbox_show_error_dialog = new QCheckBox(ScrobblerSettingsPage);
        checkbox_show_error_dialog->setObjectName("checkbox_show_error_dialog");

        layout_scrobblersettingspage->addWidget(checkbox_show_error_dialog);

        checkbox_strip_remastered = new QCheckBox(ScrobblerSettingsPage);
        checkbox_strip_remastered->setObjectName("checkbox_strip_remastered");

        layout_scrobblersettingspage->addWidget(checkbox_strip_remastered);

        groupbox_sources = new QGroupBox(ScrobblerSettingsPage);
        groupbox_sources->setObjectName("groupbox_sources");
        formLayout = new QFormLayout(groupbox_sources);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(-1, -1, 0, -1);
        checkbox_source_collection = new QCheckBox(groupbox_sources);
        checkbox_source_collection->setObjectName("checkbox_source_collection");

        formLayout->setWidget(0, QFormLayout::LabelRole, checkbox_source_collection);

        checkbox_source_subsonic = new QCheckBox(groupbox_sources);
        checkbox_source_subsonic->setObjectName("checkbox_source_subsonic");

        formLayout->setWidget(0, QFormLayout::FieldRole, checkbox_source_subsonic);

        checkbox_source_local = new QCheckBox(groupbox_sources);
        checkbox_source_local->setObjectName("checkbox_source_local");

        formLayout->setWidget(2, QFormLayout::LabelRole, checkbox_source_local);

        checkbox_source_tidal = new QCheckBox(groupbox_sources);
        checkbox_source_tidal->setObjectName("checkbox_source_tidal");

        formLayout->setWidget(2, QFormLayout::FieldRole, checkbox_source_tidal);

        checkbox_source_device = new QCheckBox(groupbox_sources);
        checkbox_source_device->setObjectName("checkbox_source_device");

        formLayout->setWidget(3, QFormLayout::LabelRole, checkbox_source_device);

        checkbox_source_qobuz = new QCheckBox(groupbox_sources);
        checkbox_source_qobuz->setObjectName("checkbox_source_qobuz");

        formLayout->setWidget(3, QFormLayout::FieldRole, checkbox_source_qobuz);

        checkbox_source_somafm = new QCheckBox(groupbox_sources);
        checkbox_source_somafm->setObjectName("checkbox_source_somafm");

        formLayout->setWidget(5, QFormLayout::FieldRole, checkbox_source_somafm);

        checkbox_source_radioparadise = new QCheckBox(groupbox_sources);
        checkbox_source_radioparadise->setObjectName("checkbox_source_radioparadise");

        formLayout->setWidget(6, QFormLayout::FieldRole, checkbox_source_radioparadise);

        checkbox_source_spotify = new QCheckBox(groupbox_sources);
        checkbox_source_spotify->setObjectName("checkbox_source_spotify");

        formLayout->setWidget(4, QFormLayout::FieldRole, checkbox_source_spotify);

        checkbox_source_cdda = new QCheckBox(groupbox_sources);
        checkbox_source_cdda->setObjectName("checkbox_source_cdda");

        formLayout->setWidget(4, QFormLayout::LabelRole, checkbox_source_cdda);

        checkbox_source_stream = new QCheckBox(groupbox_sources);
        checkbox_source_stream->setObjectName("checkbox_source_stream");

        formLayout->setWidget(5, QFormLayout::LabelRole, checkbox_source_stream);

        checkbox_source_unknown = new QCheckBox(groupbox_sources);
        checkbox_source_unknown->setObjectName("checkbox_source_unknown");

        formLayout->setWidget(6, QFormLayout::LabelRole, checkbox_source_unknown);


        layout_scrobblersettingspage->addWidget(groupbox_sources);

        groupbox_lastfm = new QGroupBox(ScrobblerSettingsPage);
        groupbox_lastfm->setObjectName("groupbox_lastfm");
        layout_lastfm = new QVBoxLayout(groupbox_lastfm);
        layout_lastfm->setObjectName("layout_lastfm");
        checkbox_lastfm_enable = new QCheckBox(groupbox_lastfm);
        checkbox_lastfm_enable->setObjectName("checkbox_lastfm_enable");

        layout_lastfm->addWidget(checkbox_lastfm_enable);

        checkbox_lastfm_use_custom_api_credentials = new QCheckBox(groupbox_lastfm);
        checkbox_lastfm_use_custom_api_credentials->setObjectName("checkbox_lastfm_use_custom_api_credentials");

        layout_lastfm->addWidget(checkbox_lastfm_use_custom_api_credentials);

        layout_lastfm_client_id = new QHBoxLayout();
        layout_lastfm_client_id->setObjectName("layout_lastfm_client_id");
        label_lastfm_client_id = new QLabel(groupbox_lastfm);
        label_lastfm_client_id->setObjectName("label_lastfm_client_id");
        label_lastfm_client_id->setMinimumSize(QSize(80, 0));

        layout_lastfm_client_id->addWidget(label_lastfm_client_id);

        lineedit_lastfm_client_id = new QLineEdit(groupbox_lastfm);
        lineedit_lastfm_client_id->setObjectName("lineedit_lastfm_client_id");

        layout_lastfm_client_id->addWidget(lineedit_lastfm_client_id);


        layout_lastfm->addLayout(layout_lastfm_client_id);

        layout_lastfm_client_secret = new QHBoxLayout();
        layout_lastfm_client_secret->setObjectName("layout_lastfm_client_secret");
        label_lastfm_client_secret = new QLabel(groupbox_lastfm);
        label_lastfm_client_secret->setObjectName("label_lastfm_client_secret");
        label_lastfm_client_secret->setMinimumSize(QSize(80, 0));

        layout_lastfm_client_secret->addWidget(label_lastfm_client_secret);

        lineedit_lastfm_client_secret = new QLineEdit(groupbox_lastfm);
        lineedit_lastfm_client_secret->setObjectName("lineedit_lastfm_client_secret");
        lineedit_lastfm_client_secret->setEchoMode(QLineEdit::Password);

        layout_lastfm_client_secret->addWidget(lineedit_lastfm_client_secret);


        layout_lastfm->addLayout(layout_lastfm_client_secret);

        widget_lastfm_login_state = new LoginStateWidget(groupbox_lastfm);
        widget_lastfm_login_state->setObjectName("widget_lastfm_login_state");

        layout_lastfm->addWidget(widget_lastfm_login_state);

        widget_lastfm_login = new QWidget(groupbox_lastfm);
        widget_lastfm_login->setObjectName("widget_lastfm_login");
        layout_lastfm_login = new QVBoxLayout(widget_lastfm_login);
        layout_lastfm_login->setObjectName("layout_lastfm_login");
        layout_lastfm_button_login = new QHBoxLayout();
        layout_lastfm_button_login->setObjectName("layout_lastfm_button_login");
        button_lastfm_login = new QPushButton(widget_lastfm_login);
        button_lastfm_login->setObjectName("button_lastfm_login");

        layout_lastfm_button_login->addWidget(button_lastfm_login);

        spacer_lastfm_login = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_lastfm_button_login->addItem(spacer_lastfm_login);


        layout_lastfm_login->addLayout(layout_lastfm_button_login);


        layout_lastfm->addWidget(widget_lastfm_login);


        layout_scrobblersettingspage->addWidget(groupbox_lastfm);

        groupbox_listenbrainz = new QGroupBox(ScrobblerSettingsPage);
        groupbox_listenbrainz->setObjectName("groupbox_listenbrainz");
        layout_listenbrainz = new QVBoxLayout(groupbox_listenbrainz);
        layout_listenbrainz->setObjectName("layout_listenbrainz");
        checkbox_listenbrainz_enable = new QCheckBox(groupbox_listenbrainz);
        checkbox_listenbrainz_enable->setObjectName("checkbox_listenbrainz_enable");

        layout_listenbrainz->addWidget(checkbox_listenbrainz_enable);

        checkbox_listenbrainz_use_custom_api_credentials = new QCheckBox(groupbox_listenbrainz);
        checkbox_listenbrainz_use_custom_api_credentials->setObjectName("checkbox_listenbrainz_use_custom_api_credentials");

        layout_listenbrainz->addWidget(checkbox_listenbrainz_use_custom_api_credentials);

        layout_listenbrainz_client_id = new QHBoxLayout();
        layout_listenbrainz_client_id->setObjectName("layout_listenbrainz_client_id");
        label_listenbrainz_client_id = new QLabel(groupbox_listenbrainz);
        label_listenbrainz_client_id->setObjectName("label_listenbrainz_client_id");
        label_listenbrainz_client_id->setMinimumSize(QSize(80, 0));

        layout_listenbrainz_client_id->addWidget(label_listenbrainz_client_id);

        lineedit_listenbrainz_client_id = new QLineEdit(groupbox_listenbrainz);
        lineedit_listenbrainz_client_id->setObjectName("lineedit_listenbrainz_client_id");

        layout_listenbrainz_client_id->addWidget(lineedit_listenbrainz_client_id);


        layout_listenbrainz->addLayout(layout_listenbrainz_client_id);

        layout_listenbrainz_client_secret = new QHBoxLayout();
        layout_listenbrainz_client_secret->setObjectName("layout_listenbrainz_client_secret");
        label_listenbrainz_client_secret = new QLabel(groupbox_listenbrainz);
        label_listenbrainz_client_secret->setObjectName("label_listenbrainz_client_secret");
        label_listenbrainz_client_secret->setMinimumSize(QSize(80, 0));

        layout_listenbrainz_client_secret->addWidget(label_listenbrainz_client_secret);

        lineedit_listenbrainz_client_secret = new QLineEdit(groupbox_listenbrainz);
        lineedit_listenbrainz_client_secret->setObjectName("lineedit_listenbrainz_client_secret");
        lineedit_listenbrainz_client_secret->setEchoMode(QLineEdit::Password);

        layout_listenbrainz_client_secret->addWidget(lineedit_listenbrainz_client_secret);


        layout_listenbrainz->addLayout(layout_listenbrainz_client_secret);

        layout_listenbrainz_user_token = new QHBoxLayout();
        layout_listenbrainz_user_token->setObjectName("layout_listenbrainz_user_token");
        label_listenbrainz_user_token = new QLabel(groupbox_listenbrainz);
        label_listenbrainz_user_token->setObjectName("label_listenbrainz_user_token");
        label_listenbrainz_user_token->setMinimumSize(QSize(80, 0));

        layout_listenbrainz_user_token->addWidget(label_listenbrainz_user_token);

        lineedit_listenbrainz_user_token = new QLineEdit(groupbox_listenbrainz);
        lineedit_listenbrainz_user_token->setObjectName("lineedit_listenbrainz_user_token");

        layout_listenbrainz_user_token->addWidget(lineedit_listenbrainz_user_token);


        layout_listenbrainz->addLayout(layout_listenbrainz_user_token);

        label_listenbrainz_token = new QLabel(groupbox_listenbrainz);
        label_listenbrainz_token->setObjectName("label_listenbrainz_token");
        label_listenbrainz_token->setOpenExternalLinks(true);

        layout_listenbrainz->addWidget(label_listenbrainz_token);

        widget_listenbrainz_login_state = new LoginStateWidget(groupbox_listenbrainz);
        widget_listenbrainz_login_state->setObjectName("widget_listenbrainz_login_state");

        layout_listenbrainz->addWidget(widget_listenbrainz_login_state);

        widget_listenbrainz_login = new QWidget(groupbox_listenbrainz);
        widget_listenbrainz_login->setObjectName("widget_listenbrainz_login");
        layout_listenbrainz_login = new QVBoxLayout(widget_listenbrainz_login);
        layout_listenbrainz_login->setObjectName("layout_listenbrainz_login");
        layout_listenbrainz_button_login = new QHBoxLayout();
        layout_listenbrainz_button_login->setObjectName("layout_listenbrainz_button_login");
        button_listenbrainz_login = new QPushButton(widget_listenbrainz_login);
        button_listenbrainz_login->setObjectName("button_listenbrainz_login");

        layout_listenbrainz_button_login->addWidget(button_listenbrainz_login);

        spacer_listenbrainz_login = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_listenbrainz_button_login->addItem(spacer_listenbrainz_login);


        layout_listenbrainz_login->addLayout(layout_listenbrainz_button_login);


        layout_listenbrainz->addWidget(widget_listenbrainz_login);


        layout_scrobblersettingspage->addWidget(groupbox_listenbrainz);

        spacer_bottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_scrobblersettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(checkbox_enable, checkbox_offline);
        QWidget::setTabOrder(checkbox_offline, checkbox_scrobble_button);
        QWidget::setTabOrder(checkbox_scrobble_button, checkbox_love_button);
        QWidget::setTabOrder(checkbox_love_button, spinbox_submit);
        QWidget::setTabOrder(spinbox_submit, checkbox_albumartist);
        QWidget::setTabOrder(checkbox_albumartist, checkbox_show_error_dialog);
        QWidget::setTabOrder(checkbox_show_error_dialog, checkbox_strip_remastered);
        QWidget::setTabOrder(checkbox_strip_remastered, checkbox_source_collection);
        QWidget::setTabOrder(checkbox_source_collection, checkbox_source_local);
        QWidget::setTabOrder(checkbox_source_local, checkbox_source_device);
        QWidget::setTabOrder(checkbox_source_device, checkbox_source_cdda);
        QWidget::setTabOrder(checkbox_source_cdda, checkbox_source_stream);
        QWidget::setTabOrder(checkbox_source_stream, checkbox_source_unknown);
        QWidget::setTabOrder(checkbox_source_unknown, checkbox_source_subsonic);
        QWidget::setTabOrder(checkbox_source_subsonic, checkbox_source_tidal);
        QWidget::setTabOrder(checkbox_source_tidal, checkbox_source_qobuz);
        QWidget::setTabOrder(checkbox_source_qobuz, checkbox_source_spotify);
        QWidget::setTabOrder(checkbox_source_spotify, checkbox_source_somafm);
        QWidget::setTabOrder(checkbox_source_somafm, checkbox_source_radioparadise);
        QWidget::setTabOrder(checkbox_source_radioparadise, checkbox_lastfm_enable);
        QWidget::setTabOrder(checkbox_lastfm_enable, checkbox_lastfm_use_custom_api_credentials);
        QWidget::setTabOrder(checkbox_lastfm_use_custom_api_credentials, lineedit_lastfm_client_id);
        QWidget::setTabOrder(lineedit_lastfm_client_id, lineedit_lastfm_client_secret);
        QWidget::setTabOrder(lineedit_lastfm_client_secret, button_lastfm_login);
        QWidget::setTabOrder(button_lastfm_login, checkbox_listenbrainz_enable);
        QWidget::setTabOrder(checkbox_listenbrainz_enable, checkbox_listenbrainz_use_custom_api_credentials);
        QWidget::setTabOrder(checkbox_listenbrainz_use_custom_api_credentials, lineedit_listenbrainz_client_id);
        QWidget::setTabOrder(lineedit_listenbrainz_client_id, lineedit_listenbrainz_client_secret);
        QWidget::setTabOrder(lineedit_listenbrainz_client_secret, lineedit_listenbrainz_user_token);
        QWidget::setTabOrder(lineedit_listenbrainz_user_token, button_listenbrainz_login);

        retranslateUi(ScrobblerSettingsPage);

        QMetaObject::connectSlotsByName(ScrobblerSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *ScrobblerSettingsPage)
    {
        ScrobblerSettingsPage->setWindowTitle(QCoreApplication::translate("ScrobblerSettingsPage", "Scrobbler", nullptr));
        checkbox_enable->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Enable", nullptr));
        label_scrobble_info->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Songs are scrobbled if they have valid metadata and are longer than 30 seconds, have been playing for at least half its duration or for 4 minutes (whichever occurs earlier).", nullptr));
#if QT_CONFIG(tooltip)
        checkbox_offline->setToolTip(QCoreApplication::translate("ScrobblerSettingsPage", "With this option enabled, scrobbles will be cached to disk but not sent to the server. This option can be enabled in cases where the server or the internet connection is unstable, the scrobbles will be sent when the option is disabled.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkbox_offline->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Offline mode (Only cache scrobbles)", nullptr));
        checkbox_scrobble_button->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Show scrobble button", nullptr));
        checkbox_love_button->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Show love button", nullptr));
#if QT_CONFIG(tooltip)
        label_submit->setToolTip(QCoreApplication::translate("ScrobblerSettingsPage", "This is the delay between when a song is scrobbled and when scrobbles are submitted to the server. Setting the time to 0 seconds will submit scrobbles immediately.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_submit->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Submit scrobbles every", nullptr));
        spinbox_submit->setSuffix(QCoreApplication::translate("ScrobblerSettingsPage", " seconds", nullptr));
        spinbox_submit->setPrefix(QString());
        checkbox_albumartist->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Prefer album artist when sending scrobbles", nullptr));
        checkbox_show_error_dialog->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Show dialog for errors", nullptr));
        checkbox_strip_remastered->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Strip \"remastered\" and similar from album and title", nullptr));
        groupbox_sources->setTitle(QCoreApplication::translate("ScrobblerSettingsPage", "Enable scrobbling for the following sources:", nullptr));
        checkbox_source_collection->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Collection", nullptr));
        checkbox_source_subsonic->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Subsonic", nullptr));
        checkbox_source_local->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Local file", nullptr));
        checkbox_source_tidal->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Tidal", nullptr));
        checkbox_source_device->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Device", nullptr));
        checkbox_source_qobuz->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Qobuz", nullptr));
        checkbox_source_somafm->setText(QCoreApplication::translate("ScrobblerSettingsPage", "SomaFM", nullptr));
        checkbox_source_radioparadise->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Radio Paradise", nullptr));
        checkbox_source_spotify->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Spotify", nullptr));
        checkbox_source_cdda->setText(QCoreApplication::translate("ScrobblerSettingsPage", "CDDA", nullptr));
        checkbox_source_stream->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Stream", nullptr));
        checkbox_source_unknown->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Unknown", nullptr));
        groupbox_lastfm->setTitle(QCoreApplication::translate("ScrobblerSettingsPage", "Last.fm", nullptr));
        checkbox_lastfm_enable->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Enable", nullptr));
        checkbox_lastfm_use_custom_api_credentials->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Use custom API credentials", nullptr));
        label_lastfm_client_id->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Client ID:", nullptr));
        label_lastfm_client_secret->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Client secret:", nullptr));
        button_lastfm_login->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Login", nullptr));
        groupbox_listenbrainz->setTitle(QCoreApplication::translate("ScrobblerSettingsPage", "Listenbrainz", nullptr));
        checkbox_listenbrainz_enable->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Enable", nullptr));
        checkbox_listenbrainz_use_custom_api_credentials->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Use custom API credentials", nullptr));
        label_listenbrainz_client_id->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Client ID:", nullptr));
        label_listenbrainz_client_secret->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Client secret:", nullptr));
        label_listenbrainz_user_token->setText(QCoreApplication::translate("ScrobblerSettingsPage", "User token:", nullptr));
        label_listenbrainz_token->setText(QString());
        button_listenbrainz_login->setText(QCoreApplication::translate("ScrobblerSettingsPage", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScrobblerSettingsPage: public Ui_ScrobblerSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCROBBLERSETTINGSPAGE_H
