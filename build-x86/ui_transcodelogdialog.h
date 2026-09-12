/********************************************************************************
** Form generated from reading UI file 'transcodelogdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODELOGDIALOG_H
#define UI_TRANSCODELOGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TranscodeLogDialog
{
public:
    QVBoxLayout *layout_transcodelogdialog;
    QPlainTextEdit *log;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TranscodeLogDialog)
    {
        if (TranscodeLogDialog->objectName().isEmpty())
            TranscodeLogDialog->setObjectName("TranscodeLogDialog");
        TranscodeLogDialog->resize(680, 360);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        TranscodeLogDialog->setWindowIcon(icon);
        layout_transcodelogdialog = new QVBoxLayout(TranscodeLogDialog);
        layout_transcodelogdialog->setObjectName("layout_transcodelogdialog");
        log = new QPlainTextEdit(TranscodeLogDialog);
        log->setObjectName("log");
        log->setReadOnly(true);

        layout_transcodelogdialog->addWidget(log);

        buttonBox = new QDialogButtonBox(TranscodeLogDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        layout_transcodelogdialog->addWidget(buttonBox);


        retranslateUi(TranscodeLogDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TranscodeLogDialog, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(TranscodeLogDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscodeLogDialog)
    {
        TranscodeLogDialog->setWindowTitle(QCoreApplication::translate("TranscodeLogDialog", "Transcoder Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscodeLogDialog: public Ui_TranscodeLogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODELOGDIALOG_H
