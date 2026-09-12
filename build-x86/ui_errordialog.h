/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QVBoxLayout *layout_errordialog;
    QHBoxLayout *container;
    QVBoxLayout *layout_left;
    QLabel *icon;
    QSpacerItem *verticalSpacer;
    QTextEdit *messages;
    QDialogButtonBox *buttonbox;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName("ErrorDialog");
        ErrorDialog->resize(600, 260);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        ErrorDialog->setWindowIcon(icon1);
        layout_errordialog = new QVBoxLayout(ErrorDialog);
        layout_errordialog->setObjectName("layout_errordialog");
        container = new QHBoxLayout();
        container->setObjectName("container");
        layout_left = new QVBoxLayout();
        layout_left->setObjectName("layout_left");
        icon = new QLabel(ErrorDialog);
        icon->setObjectName("icon");

        layout_left->addWidget(icon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_left->addItem(verticalSpacer);


        container->addLayout(layout_left);

        messages = new QTextEdit(ErrorDialog);
        messages->setObjectName("messages");
        messages->setFrameShape(QFrame::NoFrame);
        messages->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        messages->setReadOnly(true);

        container->addWidget(messages);


        layout_errordialog->addLayout(container);

        buttonbox = new QDialogButtonBox(ErrorDialog);
        buttonbox->setObjectName("buttonbox");
        buttonbox->setOrientation(Qt::Horizontal);
        buttonbox->setStandardButtons(QDialogButtonBox::Close);

        layout_errordialog->addWidget(buttonbox);


        retranslateUi(ErrorDialog);
        QObject::connect(buttonbox, &QDialogButtonBox::accepted, ErrorDialog, qOverload<>(&QDialog::close));
        QObject::connect(buttonbox, &QDialogButtonBox::rejected, ErrorDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QCoreApplication::translate("ErrorDialog", "Strawberry Error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
