/********************************************************************************
** Form generated from reading UI file 'addstreamdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTREAMDIALOG_H
#define UI_ADDSTREAMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddStreamDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *url;
    QSpacerItem *spacer_bottom;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *AddStreamDialog)
    {
        if (AddStreamDialog->objectName().isEmpty())
            AddStreamDialog->setObjectName("AddStreamDialog");
        AddStreamDialog->resize(400, 120);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/48x48/document-open-remote.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddStreamDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AddStreamDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddStreamDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        url = new QLineEdit(AddStreamDialog);
        url->setObjectName("url");

        verticalLayout->addWidget(url);

        spacer_bottom = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer_bottom);

        button_box = new QDialogButtonBox(AddStreamDialog);
        button_box->setObjectName("button_box");
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(button_box);

        QWidget::setTabOrder(url, button_box);

        retranslateUi(AddStreamDialog);
        QObject::connect(button_box, &QDialogButtonBox::accepted, AddStreamDialog, qOverload<>(&QDialog::accept));
        QObject::connect(button_box, &QDialogButtonBox::rejected, AddStreamDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *AddStreamDialog)
    {
        AddStreamDialog->setWindowTitle(QCoreApplication::translate("AddStreamDialog", "Add Stream", nullptr));
        label->setText(QCoreApplication::translate("AddStreamDialog", "Enter the URL of a stream:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStreamDialog: public Ui_AddStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTREAMDIALOG_H
