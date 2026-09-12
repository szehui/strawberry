/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsasf.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSASF_H
#define UI_TRANSCODEROPTIONSASF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsASF
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;

    void setupUi(QWidget *TranscoderOptionsASF)
    {
        if (TranscoderOptionsASF->objectName().isEmpty())
            TranscoderOptionsASF->setObjectName("TranscoderOptionsASF");
        TranscoderOptionsASF->resize(400, 300);
        formLayout = new QFormLayout(TranscoderOptionsASF);
        formLayout->setObjectName("formLayout");
        label = new QLabel(TranscoderOptionsASF);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        bitrate_slider = new QSlider(TranscoderOptionsASF);
        bitrate_slider->setObjectName("bitrate_slider");
        bitrate_slider->setMaximum(320);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(TranscoderOptionsASF);
        bitrate_spinbox->setObjectName("bitrate_spinbox");
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setValue(128);

        horizontalLayout->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(TranscoderOptionsASF);
        QObject::connect(bitrate_slider, &QSlider::valueChanged, bitrate_spinbox, &QSpinBox::setValue);
        QObject::connect(bitrate_spinbox, &QSpinBox::valueChanged, bitrate_slider, &QSlider::setValue);

        QMetaObject::connectSlotsByName(TranscoderOptionsASF);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsASF)
    {
        TranscoderOptionsASF->setWindowTitle(QCoreApplication::translate("TranscoderOptionsASF", "Form", nullptr));
        label->setText(QCoreApplication::translate("TranscoderOptionsASF", "Bitrate", nullptr));
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsASF", " kbps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsASF: public Ui_TranscoderOptionsASF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSASF_H
