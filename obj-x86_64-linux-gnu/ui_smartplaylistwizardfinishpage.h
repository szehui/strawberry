/********************************************************************************
** Form generated from reading UI file 'smartplaylistwizardfinishpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTPLAYLISTWIZARDFINISHPAGE_H
#define UI_SMARTPLAYLISTWIZARDFINISHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistWizardFinishPage
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QWidget *dynamic_container;
    QVBoxLayout *verticalLayout;
    QCheckBox *dynamic;
    QLabel *label_2;

    void setupUi(QWidget *SmartPlaylistWizardFinishPage)
    {
        if (SmartPlaylistWizardFinishPage->objectName().isEmpty())
            SmartPlaylistWizardFinishPage->setObjectName("SmartPlaylistWizardFinishPage");
        SmartPlaylistWizardFinishPage->resize(583, 370);
        formLayout = new QFormLayout(SmartPlaylistWizardFinishPage);
        formLayout->setObjectName("formLayout");
        label = new QLabel(SmartPlaylistWizardFinishPage);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(SmartPlaylistWizardFinishPage);
        name->setObjectName("name");

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        dynamic_container = new QWidget(SmartPlaylistWizardFinishPage);
        dynamic_container->setObjectName("dynamic_container");
        verticalLayout = new QVBoxLayout(dynamic_container);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dynamic = new QCheckBox(dynamic_container);
        dynamic->setObjectName("dynamic");

        verticalLayout->addWidget(dynamic);

        label_2 = new QLabel(dynamic_container);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);
        label_2->setIndent(24);

        verticalLayout->addWidget(label_2);


        formLayout->setWidget(1, QFormLayout::SpanningRole, dynamic_container);


        retranslateUi(SmartPlaylistWizardFinishPage);

        QMetaObject::connectSlotsByName(SmartPlaylistWizardFinishPage);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistWizardFinishPage)
    {
        SmartPlaylistWizardFinishPage->setWindowTitle(QCoreApplication::translate("SmartPlaylistWizardFinishPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("SmartPlaylistWizardFinishPage", "Name", nullptr));
        dynamic->setText(QCoreApplication::translate("SmartPlaylistWizardFinishPage", "Use dynamic mode", nullptr));
        label_2->setText(QCoreApplication::translate("SmartPlaylistWizardFinishPage", "In dynamic mode new tracks will be chosen and added to the playlist every time a song finishes.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistWizardFinishPage: public Ui_SmartPlaylistWizardFinishPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTPLAYLISTWIZARDFINISHPAGE_H
