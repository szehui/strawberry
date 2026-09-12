/********************************************************************************
** Form generated from reading UI file 'organizeerrordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANIZEERRORDIALOG_H
#define UI_ORGANIZEERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OrganizeErrorDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *layout_left;
    QLabel *icon;
    QSpacerItem *spacer_left;
    QVBoxLayout *layout_centre;
    QLabel *label;
    QListWidget *files;
    QListWidget *log;
    QSpacerItem *spacer_bottom;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrganizeErrorDialog)
    {
        if (OrganizeErrorDialog->objectName().isEmpty())
            OrganizeErrorDialog->setObjectName("OrganizeErrorDialog");
        OrganizeErrorDialog->resize(779, 355);
        horizontalLayout = new QHBoxLayout(OrganizeErrorDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        layout_left = new QVBoxLayout();
        layout_left->setObjectName("layout_left");
        icon = new QLabel(OrganizeErrorDialog);
        icon->setObjectName("icon");

        layout_left->addWidget(icon);

        spacer_left = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_left->addItem(spacer_left);


        horizontalLayout->addLayout(layout_left);

        layout_centre = new QVBoxLayout();
        layout_centre->setObjectName("layout_centre");
        label = new QLabel(OrganizeErrorDialog);
        label->setObjectName("label");

        layout_centre->addWidget(label);

        files = new QListWidget(OrganizeErrorDialog);
        files->setObjectName("files");

        layout_centre->addWidget(files);

        log = new QListWidget(OrganizeErrorDialog);
        log->setObjectName("log");

        layout_centre->addWidget(log);

        spacer_bottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_centre->addItem(spacer_bottom);

        buttonBox = new QDialogButtonBox(OrganizeErrorDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        layout_centre->addWidget(buttonBox);


        horizontalLayout->addLayout(layout_centre);


        retranslateUi(OrganizeErrorDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OrganizeErrorDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OrganizeErrorDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OrganizeErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *OrganizeErrorDialog)
    {
        (void)OrganizeErrorDialog;
    } // retranslateUi

};

namespace Ui {
    class OrganizeErrorDialog: public Ui_OrganizeErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZEERRORDIALOG_H
