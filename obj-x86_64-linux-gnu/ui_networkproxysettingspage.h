/********************************************************************************
** Form generated from reading UI file 'networkproxysettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKPROXYSETTINGSPAGE_H
#define UI_NETWORKPROXYSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkProxySettingsPage
{
public:
    QVBoxLayout *layout_networkproxysettingspage;
    QRadioButton *proxy_system;
    QRadioButton *proxy_direct;
    QRadioButton *proxy_manual;
    QWidget *proxy_manual_container;
    QVBoxLayout *layout_proxy_manual_container;
    QHBoxLayout *layout_proxy_selection;
    QComboBox *proxy_type;
    QLineEdit *proxy_hostname;
    QLabel *label_port;
    QSpinBox *proxy_port;
    QGroupBox *proxy_auth;
    QFormLayout *formLayout_7;
    QLabel *label_username;
    QLineEdit *proxy_username;
    QLabel *label_password;
    QLineEdit *proxy_password;
    QCheckBox *proxy_engine;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *NetworkProxySettingsPage)
    {
        if (NetworkProxySettingsPage->objectName().isEmpty())
            NetworkProxySettingsPage->setObjectName("NetworkProxySettingsPage");
        NetworkProxySettingsPage->resize(460, 305);
        layout_networkproxysettingspage = new QVBoxLayout(NetworkProxySettingsPage);
        layout_networkproxysettingspage->setObjectName("layout_networkproxysettingspage");
        proxy_system = new QRadioButton(NetworkProxySettingsPage);
        proxy_system->setObjectName("proxy_system");
        proxy_system->setChecked(true);

        layout_networkproxysettingspage->addWidget(proxy_system);

        proxy_direct = new QRadioButton(NetworkProxySettingsPage);
        proxy_direct->setObjectName("proxy_direct");

        layout_networkproxysettingspage->addWidget(proxy_direct);

        proxy_manual = new QRadioButton(NetworkProxySettingsPage);
        proxy_manual->setObjectName("proxy_manual");

        layout_networkproxysettingspage->addWidget(proxy_manual);

        proxy_manual_container = new QWidget(NetworkProxySettingsPage);
        proxy_manual_container->setObjectName("proxy_manual_container");
        proxy_manual_container->setEnabled(false);
        layout_proxy_manual_container = new QVBoxLayout(proxy_manual_container);
        layout_proxy_manual_container->setObjectName("layout_proxy_manual_container");
        layout_proxy_manual_container->setContentsMargins(24, -1, -1, -1);
        layout_proxy_selection = new QHBoxLayout();
        layout_proxy_selection->setObjectName("layout_proxy_selection");
        proxy_type = new QComboBox(proxy_manual_container);
        proxy_type->addItem(QString());
        proxy_type->addItem(QString());
        proxy_type->setObjectName("proxy_type");

        layout_proxy_selection->addWidget(proxy_type);

        proxy_hostname = new QLineEdit(proxy_manual_container);
        proxy_hostname->setObjectName("proxy_hostname");
        proxy_hostname->setText(QString::fromUtf8(""));

        layout_proxy_selection->addWidget(proxy_hostname);

        label_port = new QLabel(proxy_manual_container);
        label_port->setObjectName("label_port");

        layout_proxy_selection->addWidget(label_port);

        proxy_port = new QSpinBox(proxy_manual_container);
        proxy_port->setObjectName("proxy_port");
        proxy_port->setMaximum(65535);
        proxy_port->setValue(8080);

        layout_proxy_selection->addWidget(proxy_port);


        layout_proxy_manual_container->addLayout(layout_proxy_selection);

        proxy_auth = new QGroupBox(proxy_manual_container);
        proxy_auth->setObjectName("proxy_auth");
        proxy_auth->setCheckable(true);
        proxy_auth->setChecked(false);
        formLayout_7 = new QFormLayout(proxy_auth);
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::AllNonFixedFieldsGrow);
        label_username = new QLabel(proxy_auth);
        label_username->setObjectName("label_username");

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_username);

        proxy_username = new QLineEdit(proxy_auth);
        proxy_username->setObjectName("proxy_username");
        proxy_username->setText(QString::fromUtf8(""));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, proxy_username);

        label_password = new QLabel(proxy_auth);
        label_password->setObjectName("label_password");

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_password);

        proxy_password = new QLineEdit(proxy_auth);
        proxy_password->setObjectName("proxy_password");
        proxy_password->setText(QString::fromUtf8(""));
        proxy_password->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, proxy_password);


        layout_proxy_manual_container->addWidget(proxy_auth);

        proxy_engine = new QCheckBox(proxy_manual_container);
        proxy_engine->setObjectName("proxy_engine");

        layout_proxy_manual_container->addWidget(proxy_engine);


        layout_networkproxysettingspage->addWidget(proxy_manual_container);

        spacer_bottom = new QSpacerItem(20, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_networkproxysettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(proxy_system, proxy_direct);
        QWidget::setTabOrder(proxy_direct, proxy_manual);
        QWidget::setTabOrder(proxy_manual, proxy_type);
        QWidget::setTabOrder(proxy_type, proxy_hostname);
        QWidget::setTabOrder(proxy_hostname, proxy_port);
        QWidget::setTabOrder(proxy_port, proxy_auth);
        QWidget::setTabOrder(proxy_auth, proxy_username);
        QWidget::setTabOrder(proxy_username, proxy_password);
        QWidget::setTabOrder(proxy_password, proxy_engine);

        retranslateUi(NetworkProxySettingsPage);
        QObject::connect(proxy_manual, &QRadioButton::toggled, proxy_manual_container, &QWidget::setEnabled);

        QMetaObject::connectSlotsByName(NetworkProxySettingsPage);
    } // setupUi

    void retranslateUi(QWidget *NetworkProxySettingsPage)
    {
        NetworkProxySettingsPage->setWindowTitle(QCoreApplication::translate("NetworkProxySettingsPage", "Network Proxy", nullptr));
        proxy_system->setText(QCoreApplication::translate("NetworkProxySettingsPage", "&Use the system proxy settings", nullptr));
        proxy_direct->setText(QCoreApplication::translate("NetworkProxySettingsPage", "Direct internet connection", nullptr));
        proxy_manual->setText(QCoreApplication::translate("NetworkProxySettingsPage", "&Manual proxy configuration", nullptr));
        proxy_type->setItemText(0, QCoreApplication::translate("NetworkProxySettingsPage", "HTTP proxy", nullptr));
        proxy_type->setItemText(1, QCoreApplication::translate("NetworkProxySettingsPage", "SOCKS proxy", nullptr));

        label_port->setText(QCoreApplication::translate("NetworkProxySettingsPage", "Port", nullptr));
        proxy_auth->setTitle(QCoreApplication::translate("NetworkProxySettingsPage", "Use authentication", nullptr));
        label_username->setText(QCoreApplication::translate("NetworkProxySettingsPage", "Username", nullptr));
        label_password->setText(QCoreApplication::translate("NetworkProxySettingsPage", "Password", nullptr));
#if QT_CONFIG(tooltip)
        proxy_engine->setToolTip(QCoreApplication::translate("NetworkProxySettingsPage", "Only HTTP proxy is supported for streaming.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxy_engine->setText(QCoreApplication::translate("NetworkProxySettingsPage", "Use proxy settings for streaming", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkProxySettingsPage: public Ui_NetworkProxySettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKPROXYSETTINGSPAGE_H
