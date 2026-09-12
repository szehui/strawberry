/********************************************************************************
** Form generated from reading UI file 'coverfromurldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVERFROMURLDIALOG_H
#define UI_COVERFROMURLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/busyindicator.h"

QT_BEGIN_NAMESPACE

class Ui_CoverFromURLDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *urlLabel;
    BusyIndicator *busy;
    QHBoxLayout *horizontalLayout;
    QLineEdit *url;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoverFromURLDialog)
    {
        if (CoverFromURLDialog->objectName().isEmpty())
            CoverFromURLDialog->setObjectName("CoverFromURLDialog");
        CoverFromURLDialog->resize(407, 126);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        CoverFromURLDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CoverFromURLDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        urlLabel = new QLabel(CoverFromURLDialog);
        urlLabel->setObjectName("urlLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(urlLabel->sizePolicy().hasHeightForWidth());
        urlLabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(urlLabel);

        busy = new BusyIndicator(CoverFromURLDialog);
        busy->setObjectName("busy");

        horizontalLayout_2->addWidget(busy);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        url = new QLineEdit(CoverFromURLDialog);
        url->setObjectName("url");

        horizontalLayout->addWidget(url);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(CoverFromURLDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CoverFromURLDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CoverFromURLDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CoverFromURLDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CoverFromURLDialog);
    } // setupUi

    void retranslateUi(QDialog *CoverFromURLDialog)
    {
        CoverFromURLDialog->setWindowTitle(QCoreApplication::translate("CoverFromURLDialog", "Load cover from URL", nullptr));
        urlLabel->setText(QCoreApplication::translate("CoverFromURLDialog", "Enter a URL to download a cover from the Internet:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoverFromURLDialog: public Ui_CoverFromURLDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVERFROMURLDIALOG_H
