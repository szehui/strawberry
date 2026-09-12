/********************************************************************************
** Form generated from reading UI file 'smartplaylistquerysortpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTPLAYLISTQUERYSORTPAGE_H
#define UI_SMARTPLAYLISTQUERYSORTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "smartplaylists/smartplaylistsearchpreview.h"

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistQuerySortPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupbox_sorting;
    QFormLayout *formLayout;
    QRadioButton *random;
    QRadioButton *field;
    QHBoxLayout *horizontalLayout;
    QComboBox *field_value;
    QComboBox *order;
    QGroupBox *groupbox_limits;
    QFormLayout *formLayout_2;
    QRadioButton *limit_none;
    QRadioButton *limit_limit;
    QSpinBox *limit_value;
    QFrame *line;
    SmartPlaylistSearchPreview *preview;

    void setupUi(QWidget *SmartPlaylistQuerySortPage)
    {
        if (SmartPlaylistQuerySortPage->objectName().isEmpty())
            SmartPlaylistQuerySortPage->setObjectName("SmartPlaylistQuerySortPage");
        SmartPlaylistQuerySortPage->resize(723, 335);
        verticalLayout = new QVBoxLayout(SmartPlaylistQuerySortPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupbox_sorting = new QGroupBox(SmartPlaylistQuerySortPage);
        groupbox_sorting->setObjectName("groupbox_sorting");
        formLayout = new QFormLayout(groupbox_sorting);
        formLayout->setObjectName("formLayout");
        random = new QRadioButton(groupbox_sorting);
        random->setObjectName("random");
        random->setChecked(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, random);

        field = new QRadioButton(groupbox_sorting);
        field->setObjectName("field");

        formLayout->setWidget(1, QFormLayout::LabelRole, field);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        field_value = new QComboBox(groupbox_sorting);
        field_value->setObjectName("field_value");

        horizontalLayout->addWidget(field_value);

        order = new QComboBox(groupbox_sorting);
        order->setObjectName("order");
        order->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(order);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addWidget(groupbox_sorting);

        groupbox_limits = new QGroupBox(SmartPlaylistQuerySortPage);
        groupbox_limits->setObjectName("groupbox_limits");
        formLayout_2 = new QFormLayout(groupbox_limits);
        formLayout_2->setObjectName("formLayout_2");
        limit_none = new QRadioButton(groupbox_limits);
        limit_none->setObjectName("limit_none");
        limit_none->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, limit_none);

        limit_limit = new QRadioButton(groupbox_limits);
        limit_limit->setObjectName("limit_limit");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, limit_limit);

        limit_value = new QSpinBox(groupbox_limits);
        limit_value->setObjectName("limit_value");
        limit_value->setMaximum(1000);
        limit_value->setValue(15);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, limit_value);


        verticalLayout->addWidget(groupbox_limits);

        line = new QFrame(SmartPlaylistQuerySortPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        preview = new SmartPlaylistSearchPreview(SmartPlaylistQuerySortPage);
        preview->setObjectName("preview");

        verticalLayout->addWidget(preview);


        retranslateUi(SmartPlaylistQuerySortPage);

        QMetaObject::connectSlotsByName(SmartPlaylistQuerySortPage);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistQuerySortPage)
    {
        SmartPlaylistQuerySortPage->setWindowTitle(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Form", nullptr));
        groupbox_sorting->setTitle(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Sorting", nullptr));
        random->setText(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Put songs in a random order", nullptr));
        field->setText(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Sort songs by", nullptr));
        groupbox_limits->setTitle(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Limits", nullptr));
        limit_none->setText(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Show all the songs", nullptr));
        limit_limit->setText(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Only show the first", nullptr));
        limit_value->setSuffix(QCoreApplication::translate("SmartPlaylistQuerySortPage", " songs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistQuerySortPage: public Ui_SmartPlaylistQuerySortPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTPLAYLISTQUERYSORTPAGE_H
