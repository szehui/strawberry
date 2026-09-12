/********************************************************************************
** Form generated from reading UI file 'moodbarsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOODBARSETTINGSPAGE_H
#define UI_MOODBARSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoodbarSettingsPage
{
public:
    QVBoxLayout *layout_moodbarsettingspage;
    QGroupBox *moodbar_group;
    QFormLayout *layout_moodbar;
    QLabel *label_moodbar_style;
    QComboBox *moodbar_style;
    QCheckBox *moodbar_save;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *MoodbarSettingsPage)
    {
        if (MoodbarSettingsPage->objectName().isEmpty())
            MoodbarSettingsPage->setObjectName("MoodbarSettingsPage");
        MoodbarSettingsPage->resize(460, 666);
        layout_moodbarsettingspage = new QVBoxLayout(MoodbarSettingsPage);
        layout_moodbarsettingspage->setObjectName("layout_moodbarsettingspage");
        moodbar_group = new QGroupBox(MoodbarSettingsPage);
        moodbar_group->setObjectName("moodbar_group");
        layout_moodbar = new QFormLayout(moodbar_group);
        layout_moodbar->setObjectName("layout_moodbar");
        label_moodbar_style = new QLabel(moodbar_group);
        label_moodbar_style->setObjectName("label_moodbar_style");

        layout_moodbar->setWidget(0, QFormLayout::LabelRole, label_moodbar_style);

        moodbar_style = new QComboBox(moodbar_group);
        moodbar_style->setObjectName("moodbar_style");
        moodbar_style->setCurrentText(QString::fromUtf8(""));

        layout_moodbar->setWidget(0, QFormLayout::FieldRole, moodbar_style);

        moodbar_save = new QCheckBox(moodbar_group);
        moodbar_save->setObjectName("moodbar_save");

        layout_moodbar->setWidget(1, QFormLayout::SpanningRole, moodbar_save);

        spacer_bottom = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_moodbar->setItem(2, QFormLayout::LabelRole, spacer_bottom);


        layout_moodbarsettingspage->addWidget(moodbar_group);

        QWidget::setTabOrder(moodbar_style, moodbar_save);

        retranslateUi(MoodbarSettingsPage);

        QMetaObject::connectSlotsByName(MoodbarSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *MoodbarSettingsPage)
    {
        MoodbarSettingsPage->setWindowTitle(QCoreApplication::translate("MoodbarSettingsPage", "Moodbar", nullptr));
        moodbar_group->setTitle(QCoreApplication::translate("MoodbarSettingsPage", "Moodbar", nullptr));
        label_moodbar_style->setText(QCoreApplication::translate("MoodbarSettingsPage", "Moodbar style", nullptr));
        moodbar_save->setText(QCoreApplication::translate("MoodbarSettingsPage", "Save the .mood files directly in the songs folders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoodbarSettingsPage: public Ui_MoodbarSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOODBARSETTINGSPAGE_H
