/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsflac.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSFLAC_H
#define UI_TRANSCODEROPTIONSFLAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsFLAC
{
public:
    QFormLayout *formLayout;
    QLabel *label_1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSlider *quality;
    QLabel *label_3;

    void setupUi(QWidget *TranscoderOptionsFLAC)
    {
        if (TranscoderOptionsFLAC->objectName().isEmpty())
            TranscoderOptionsFLAC->setObjectName("TranscoderOptionsFLAC");
        TranscoderOptionsFLAC->resize(400, 102);
        formLayout = new QFormLayout(TranscoderOptionsFLAC);
        formLayout->setObjectName("formLayout");
        label_1 = new QLabel(TranscoderOptionsFLAC);
        label_1->setObjectName("label_1");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(TranscoderOptionsFLAC);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        quality = new QSlider(TranscoderOptionsFLAC);
        quality->setObjectName("quality");
        quality->setMaximum(9);
        quality->setValue(5);
        quality->setOrientation(Qt::Horizontal);
        quality->setTickPosition(QSlider::TicksBelow);

        horizontalLayout->addWidget(quality);

        label_3 = new QLabel(TranscoderOptionsFLAC);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(TranscoderOptionsFLAC);

        QMetaObject::connectSlotsByName(TranscoderOptionsFLAC);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsFLAC)
    {
        TranscoderOptionsFLAC->setWindowTitle(QCoreApplication::translate("TranscoderOptionsFLAC", "Form", nullptr));
        label_1->setText(QCoreApplication::translate("TranscoderOptionsFLAC", "Quality", "Sound quality"));
        label_2->setText(QCoreApplication::translate("TranscoderOptionsFLAC", "Fast", nullptr));
        label_3->setText(QCoreApplication::translate("TranscoderOptionsFLAC", "Best", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsFLAC: public Ui_TranscoderOptionsFLAC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSFLAC_H
