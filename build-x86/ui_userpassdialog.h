/********************************************************************************
** Form generated from reading UI file 'userpassdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPASSDIALOG_H
#define UI_USERPASSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserPassDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *username;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UserPassDialog)
    {
        if (UserPassDialog->objectName().isEmpty())
            UserPassDialog->setObjectName("UserPassDialog");
        UserPassDialog->resize(400, 161);
        verticalLayout = new QVBoxLayout(UserPassDialog);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_username = new QLabel(UserPassDialog);
        label_username->setObjectName("label_username");

        gridLayout->addWidget(label_username, 0, 0, 1, 1);

        label_password = new QLabel(UserPassDialog);
        label_password->setObjectName("label_password");

        gridLayout->addWidget(label_password, 1, 0, 1, 1);

        username = new QLineEdit(UserPassDialog);
        username->setObjectName("username");

        gridLayout->addWidget(username, 0, 1, 1, 1);

        password = new QLineEdit(UserPassDialog);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(UserPassDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UserPassDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UserPassDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UserPassDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UserPassDialog);
    } // setupUi

    void retranslateUi(QDialog *UserPassDialog)
    {
        UserPassDialog->setWindowTitle(QCoreApplication::translate("UserPassDialog", "Enter username and password", nullptr));
        label_username->setText(QCoreApplication::translate("UserPassDialog", "Username", nullptr));
        label_password->setText(QCoreApplication::translate("UserPassDialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPassDialog: public Ui_UserPassDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPASSDIALOG_H
