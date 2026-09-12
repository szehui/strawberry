/********************************************************************************
** Form generated from reading UI file 'acoustidsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACOUSTIDSETTINGSPAGE_H
#define UI_ACOUSTIDSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AcoustidSettingsPage
{
public:
    QVBoxLayout *layout_acoustidsettingspage;
    QLabel *label_description;
    QGroupBox *groupbox_api_credentials;
    QFormLayout *layout_api_credentials;
    QCheckBox *checkbox_use_custom_api_key;
    QLabel *label_api_key;
    QLineEdit *api_key;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *AcoustidSettingsPage)
    {
        if (AcoustidSettingsPage->objectName().isEmpty())
            AcoustidSettingsPage->setObjectName("AcoustidSettingsPage");
        AcoustidSettingsPage->resize(472, 200);
        layout_acoustidsettingspage = new QVBoxLayout(AcoustidSettingsPage);
        layout_acoustidsettingspage->setObjectName("layout_acoustidsettingspage");
        label_description = new QLabel(AcoustidSettingsPage);
        label_description->setObjectName("label_description");
        label_description->setWordWrap(true);

        layout_acoustidsettingspage->addWidget(label_description);

        groupbox_api_credentials = new QGroupBox(AcoustidSettingsPage);
        groupbox_api_credentials->setObjectName("groupbox_api_credentials");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupbox_api_credentials->sizePolicy().hasHeightForWidth());
        groupbox_api_credentials->setSizePolicy(sizePolicy);
        layout_api_credentials = new QFormLayout(groupbox_api_credentials);
        layout_api_credentials->setObjectName("layout_api_credentials");
        checkbox_use_custom_api_key = new QCheckBox(groupbox_api_credentials);
        checkbox_use_custom_api_key->setObjectName("checkbox_use_custom_api_key");

        layout_api_credentials->setWidget(0, QFormLayout::LabelRole, checkbox_use_custom_api_key);

        label_api_key = new QLabel(groupbox_api_credentials);
        label_api_key->setObjectName("label_api_key");
        label_api_key->setMinimumSize(QSize(150, 0));

        layout_api_credentials->setWidget(1, QFormLayout::LabelRole, label_api_key);

        api_key = new QLineEdit(groupbox_api_credentials);
        api_key->setObjectName("api_key");
        api_key->setText(QString::fromUtf8(""));

        layout_api_credentials->setWidget(1, QFormLayout::FieldRole, api_key);


        layout_acoustidsettingspage->addWidget(groupbox_api_credentials);

        spacer_bottom = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_acoustidsettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(checkbox_use_custom_api_key, api_key);

        retranslateUi(AcoustidSettingsPage);

        QMetaObject::connectSlotsByName(AcoustidSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *AcoustidSettingsPage)
    {
        AcoustidSettingsPage->setWindowTitle(QCoreApplication::translate("AcoustidSettingsPage", "AcoustID", nullptr));
        label_description->setText(QCoreApplication::translate("AcoustidSettingsPage", "AcoustID is used to identify songs by their audio fingerprint when fetching tags.", nullptr));
        groupbox_api_credentials->setTitle(QCoreApplication::translate("AcoustidSettingsPage", "API Credentials", nullptr));
        checkbox_use_custom_api_key->setText(QCoreApplication::translate("AcoustidSettingsPage", "Use custom API Key", nullptr));
        label_api_key->setText(QCoreApplication::translate("AcoustidSettingsPage", "API key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AcoustidSettingsPage: public Ui_AcoustidSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACOUSTIDSETTINGSPAGE_H
