/********************************************************************************
** Form generated from reading UI file 'radiosettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOSETTINGSPAGE_H
#define UI_RADIOSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadioSettingsPage
{
public:
    QVBoxLayout *layout_radiosettingspage;
    QGroupBox *group_somafm;
    QFormLayout *layout_somafm;
    QLabel *label_somafm_quality;
    QComboBox *combo_somafm_quality;
    QGroupBox *group_radiobrowser;
    QFormLayout *layout_radiobrowser;
    QLabel *label_search_limit;
    QSpinBox *spin_search_limit;
    QCheckBox *check_hide_broken;
    QLabel *label_default_sort;
    QComboBox *combo_default_sort;
    QLabel *label_default_country;
    QComboBox *combo_default_country;
    QSpacerItem *spacer;

    void setupUi(QWidget *RadioSettingsPage)
    {
        if (RadioSettingsPage->objectName().isEmpty())
            RadioSettingsPage->setObjectName("RadioSettingsPage");
        RadioSettingsPage->resize(450, 500);
        layout_radiosettingspage = new QVBoxLayout(RadioSettingsPage);
        layout_radiosettingspage->setObjectName("layout_radiosettingspage");
        group_somafm = new QGroupBox(RadioSettingsPage);
        group_somafm->setObjectName("group_somafm");
        layout_somafm = new QFormLayout(group_somafm);
        layout_somafm->setObjectName("layout_somafm");
        label_somafm_quality = new QLabel(group_somafm);
        label_somafm_quality->setObjectName("label_somafm_quality");

        layout_somafm->setWidget(0, QFormLayout::LabelRole, label_somafm_quality);

        combo_somafm_quality = new QComboBox(group_somafm);
        combo_somafm_quality->setObjectName("combo_somafm_quality");

        layout_somafm->setWidget(0, QFormLayout::FieldRole, combo_somafm_quality);


        layout_radiosettingspage->addWidget(group_somafm);

        group_radiobrowser = new QGroupBox(RadioSettingsPage);
        group_radiobrowser->setObjectName("group_radiobrowser");
        layout_radiobrowser = new QFormLayout(group_radiobrowser);
        layout_radiobrowser->setObjectName("layout_radiobrowser");
        label_search_limit = new QLabel(group_radiobrowser);
        label_search_limit->setObjectName("label_search_limit");

        layout_radiobrowser->setWidget(0, QFormLayout::LabelRole, label_search_limit);

        spin_search_limit = new QSpinBox(group_radiobrowser);
        spin_search_limit->setObjectName("spin_search_limit");
        spin_search_limit->setMinimum(10);
        spin_search_limit->setMaximum(500);
        spin_search_limit->setSingleStep(10);
        spin_search_limit->setValue(100);

        layout_radiobrowser->setWidget(0, QFormLayout::FieldRole, spin_search_limit);

        check_hide_broken = new QCheckBox(group_radiobrowser);
        check_hide_broken->setObjectName("check_hide_broken");
        check_hide_broken->setChecked(true);

        layout_radiobrowser->setWidget(1, QFormLayout::SpanningRole, check_hide_broken);

        label_default_sort = new QLabel(group_radiobrowser);
        label_default_sort->setObjectName("label_default_sort");

        layout_radiobrowser->setWidget(2, QFormLayout::LabelRole, label_default_sort);

        combo_default_sort = new QComboBox(group_radiobrowser);
        combo_default_sort->setObjectName("combo_default_sort");

        layout_radiobrowser->setWidget(2, QFormLayout::FieldRole, combo_default_sort);

        label_default_country = new QLabel(group_radiobrowser);
        label_default_country->setObjectName("label_default_country");

        layout_radiobrowser->setWidget(3, QFormLayout::LabelRole, label_default_country);

        combo_default_country = new QComboBox(group_radiobrowser);
        combo_default_country->setObjectName("combo_default_country");

        layout_radiobrowser->setWidget(3, QFormLayout::FieldRole, combo_default_country);


        layout_radiosettingspage->addWidget(group_radiobrowser);

        spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_radiosettingspage->addItem(spacer);


        retranslateUi(RadioSettingsPage);

        QMetaObject::connectSlotsByName(RadioSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *RadioSettingsPage)
    {
        RadioSettingsPage->setWindowTitle(QCoreApplication::translate("RadioSettingsPage", "Radios", nullptr));
        group_somafm->setTitle(QCoreApplication::translate("RadioSettingsPage", "SomaFM", nullptr));
        label_somafm_quality->setText(QCoreApplication::translate("RadioSettingsPage", "Stream quality:", nullptr));
        group_radiobrowser->setTitle(QCoreApplication::translate("RadioSettingsPage", "Radio Browser", nullptr));
        label_search_limit->setText(QCoreApplication::translate("RadioSettingsPage", "Search results limit:", nullptr));
        check_hide_broken->setText(QCoreApplication::translate("RadioSettingsPage", "Hide broken stations", nullptr));
        label_default_sort->setText(QCoreApplication::translate("RadioSettingsPage", "Default sort order:", nullptr));
        label_default_country->setText(QCoreApplication::translate("RadioSettingsPage", "Default country:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RadioSettingsPage: public Ui_RadioSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOSETTINGSPAGE_H
