/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSDIALOG_H
#define UI_TRANSCODEROPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TranscoderOptionsDialog)
    {
        if (TranscoderOptionsDialog->objectName().isEmpty())
            TranscoderOptionsDialog->setObjectName("TranscoderOptionsDialog");
        TranscoderOptionsDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(TranscoderOptionsDialog);
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(TranscoderOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TranscoderOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TranscoderOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TranscoderOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TranscoderOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscoderOptionsDialog)
    {
        TranscoderOptionsDialog->setWindowTitle(QCoreApplication::translate("TranscoderOptionsDialog", "Transcoding options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsDialog: public Ui_TranscoderOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSDIALOG_H
