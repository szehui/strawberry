/********************************************************************************
** Form generated from reading UI file 'coversearchstatisticsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVERSEARCHSTATISTICSDIALOG_H
#define UI_COVERSEARCHSTATISTICSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CoverSearchStatisticsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *summary;
    QFrame *details;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoverSearchStatisticsDialog)
    {
        if (CoverSearchStatisticsDialog->objectName().isEmpty())
            CoverSearchStatisticsDialog->setObjectName("CoverSearchStatisticsDialog");
        CoverSearchStatisticsDialog->resize(425, 214);
        verticalLayout = new QVBoxLayout(CoverSearchStatisticsDialog);
        verticalLayout->setObjectName("verticalLayout");
        summary = new QLabel(CoverSearchStatisticsDialog);
        summary->setObjectName("summary");

        verticalLayout->addWidget(summary);

        details = new QFrame(CoverSearchStatisticsDialog);
        details->setObjectName("details");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(details->sizePolicy().hasHeightForWidth());
        details->setSizePolicy(sizePolicy);
        details->setFrameShape(QFrame::StyledPanel);
        details->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(details);

        buttonBox = new QDialogButtonBox(CoverSearchStatisticsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CoverSearchStatisticsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CoverSearchStatisticsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CoverSearchStatisticsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CoverSearchStatisticsDialog);
    } // setupUi

    void retranslateUi(QDialog *CoverSearchStatisticsDialog)
    {
        CoverSearchStatisticsDialog->setWindowTitle(QCoreApplication::translate("CoverSearchStatisticsDialog", "Fetch completed", nullptr));
        summary->setText(QCoreApplication::translate("CoverSearchStatisticsDialog", "Got %1 covers out of %2 (%3 failed)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoverSearchStatisticsDialog: public Ui_CoverSearchStatisticsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVERSEARCHSTATISTICSDIALOG_H
