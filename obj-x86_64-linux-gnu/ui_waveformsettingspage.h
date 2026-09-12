/********************************************************************************
** Form generated from reading UI file 'waveformsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAVEFORMSETTINGSPAGE_H
#define UI_WAVEFORMSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaveformSettingsPage
{
public:
    QVBoxLayout *layout_waveformsettingspage;
    QGroupBox *waveform_group;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupbox_color;
    QHBoxLayout *horizontalLayout;
    QPushButton *select_waveform_color;
    QCheckBox *waveform_save;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *WaveformSettingsPage)
    {
        if (WaveformSettingsPage->objectName().isEmpty())
            WaveformSettingsPage->setObjectName("WaveformSettingsPage");
        WaveformSettingsPage->resize(460, 666);
        layout_waveformsettingspage = new QVBoxLayout(WaveformSettingsPage);
        layout_waveformsettingspage->setObjectName("layout_waveformsettingspage");
        waveform_group = new QGroupBox(WaveformSettingsPage);
        waveform_group->setObjectName("waveform_group");
        verticalLayout = new QVBoxLayout(waveform_group);
        verticalLayout->setObjectName("verticalLayout");
        groupbox_color = new QGroupBox(waveform_group);
        groupbox_color->setObjectName("groupbox_color");
        horizontalLayout = new QHBoxLayout(groupbox_color);
        horizontalLayout->setObjectName("horizontalLayout");
        select_waveform_color = new QPushButton(groupbox_color);
        select_waveform_color->setObjectName("select_waveform_color");

        horizontalLayout->addWidget(select_waveform_color);


        verticalLayout->addWidget(groupbox_color);

        waveform_save = new QCheckBox(waveform_group);
        waveform_save->setObjectName("waveform_save");

        verticalLayout->addWidget(waveform_save);

        spacer_bottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer_bottom);


        layout_waveformsettingspage->addWidget(waveform_group);

        QWidget::setTabOrder(select_waveform_color, waveform_save);

        retranslateUi(WaveformSettingsPage);

        QMetaObject::connectSlotsByName(WaveformSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *WaveformSettingsPage)
    {
        WaveformSettingsPage->setWindowTitle(QCoreApplication::translate("WaveformSettingsPage", "Waveform", nullptr));
        waveform_group->setTitle(QCoreApplication::translate("WaveformSettingsPage", "Waveform", nullptr));
        groupbox_color->setTitle(QCoreApplication::translate("WaveformSettingsPage", "Color", nullptr));
#if QT_CONFIG(tooltip)
        select_waveform_color->setToolTip(QCoreApplication::translate("WaveformSettingsPage", "Select waveform color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        select_waveform_color->setAccessibleName(QCoreApplication::translate("WaveformSettingsPage", "Select waveform color", nullptr));
#endif // QT_CONFIG(accessibility)
        select_waveform_color->setText(QString());
        waveform_save->setText(QCoreApplication::translate("WaveformSettingsPage", "Save the .waveform files directly in the songs folders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaveformSettingsPage: public Ui_WaveformSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAVEFORMSETTINGSPAGE_H
