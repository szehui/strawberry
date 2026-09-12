/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsspeex.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSSPEEX_H
#define UI_TRANSCODEROPTIONSSPEEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsSpeex
{
public:
    QFormLayout *formLayout;
    QLabel *label_1;
    QHBoxLayout *horizontalLayout_1;
    QSlider *quality_slider;
    QSpinBox *quality_spinbox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QSlider *abr_slider;
    QSpinBox *abr_spinbox;
    QLabel *label_3;
    QComboBox *mode;
    QCheckBox *vbr;
    QCheckBox *vad;
    QCheckBox *dtx;
    QLabel *label_5;
    QSpinBox *complexity;
    QLabel *label_6;
    QSpinBox *nframes;

    void setupUi(QWidget *TranscoderOptionsSpeex)
    {
        if (TranscoderOptionsSpeex->objectName().isEmpty())
            TranscoderOptionsSpeex->setObjectName("TranscoderOptionsSpeex");
        TranscoderOptionsSpeex->resize(555, 424);
        formLayout = new QFormLayout(TranscoderOptionsSpeex);
        formLayout->setObjectName("formLayout");
        label_1 = new QLabel(TranscoderOptionsSpeex);
        label_1->setObjectName("label_1");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        quality_slider = new QSlider(TranscoderOptionsSpeex);
        quality_slider->setObjectName("quality_slider");
        quality_slider->setMaximum(10);
        quality_slider->setValue(8);
        quality_slider->setOrientation(Qt::Horizontal);
        quality_slider->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_1->addWidget(quality_slider);

        quality_spinbox = new QSpinBox(TranscoderOptionsSpeex);
        quality_spinbox->setObjectName("quality_spinbox");
        quality_spinbox->setMaximum(10);
        quality_spinbox->setValue(8);

        horizontalLayout_1->addWidget(quality_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_1);

        label_2 = new QLabel(TranscoderOptionsSpeex);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        bitrate_slider = new QSlider(TranscoderOptionsSpeex);
        bitrate_slider->setObjectName("bitrate_slider");
        bitrate_slider->setMaximum(320);
        bitrate_slider->setSingleStep(8);
        bitrate_slider->setPageStep(32);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(TranscoderOptionsSpeex);
        bitrate_spinbox->setObjectName("bitrate_spinbox");
        bitrate_spinbox->setMinimumSize(QSize(100, 0));
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setSingleStep(8);

        horizontalLayout_2->addWidget(bitrate_spinbox);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        label_4 = new QLabel(TranscoderOptionsSpeex);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        abr_slider = new QSlider(TranscoderOptionsSpeex);
        abr_slider->setObjectName("abr_slider");
        abr_slider->setMaximum(320);
        abr_slider->setSingleStep(8);
        abr_slider->setPageStep(32);
        abr_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(abr_slider);

        abr_spinbox = new QSpinBox(TranscoderOptionsSpeex);
        abr_spinbox->setObjectName("abr_spinbox");
        abr_spinbox->setMinimumSize(QSize(100, 0));
        abr_spinbox->setMaximum(320);
        abr_spinbox->setSingleStep(8);

        horizontalLayout_3->addWidget(abr_spinbox);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        label_3 = new QLabel(TranscoderOptionsSpeex);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        mode = new QComboBox(TranscoderOptionsSpeex);
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->setObjectName("mode");

        formLayout->setWidget(3, QFormLayout::FieldRole, mode);

        vbr = new QCheckBox(TranscoderOptionsSpeex);
        vbr->setObjectName("vbr");

        formLayout->setWidget(4, QFormLayout::SpanningRole, vbr);

        vad = new QCheckBox(TranscoderOptionsSpeex);
        vad->setObjectName("vad");

        formLayout->setWidget(5, QFormLayout::SpanningRole, vad);

        dtx = new QCheckBox(TranscoderOptionsSpeex);
        dtx->setObjectName("dtx");

        formLayout->setWidget(6, QFormLayout::SpanningRole, dtx);

        label_5 = new QLabel(TranscoderOptionsSpeex);
        label_5->setObjectName("label_5");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);

        complexity = new QSpinBox(TranscoderOptionsSpeex);
        complexity->setObjectName("complexity");
        complexity->setMaximum(10000);
        complexity->setValue(3);

        formLayout->setWidget(7, QFormLayout::FieldRole, complexity);

        label_6 = new QLabel(TranscoderOptionsSpeex);
        label_6->setObjectName("label_6");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        nframes = new QSpinBox(TranscoderOptionsSpeex);
        nframes->setObjectName("nframes");
        nframes->setMaximum(10000);
        nframes->setValue(1);

        formLayout->setWidget(8, QFormLayout::FieldRole, nframes);

        QWidget::setTabOrder(quality_slider, quality_spinbox);
        QWidget::setTabOrder(quality_spinbox, bitrate_slider);
        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);
        QWidget::setTabOrder(bitrate_spinbox, abr_slider);
        QWidget::setTabOrder(abr_slider, abr_spinbox);
        QWidget::setTabOrder(abr_spinbox, mode);
        QWidget::setTabOrder(mode, vbr);
        QWidget::setTabOrder(vbr, vad);
        QWidget::setTabOrder(vad, dtx);
        QWidget::setTabOrder(dtx, complexity);
        QWidget::setTabOrder(complexity, nframes);

        retranslateUi(TranscoderOptionsSpeex);
        QObject::connect(quality_slider, &QSlider::valueChanged, quality_spinbox, &QSpinBox::setValue);
        QObject::connect(quality_spinbox, &QSpinBox::valueChanged, quality_slider, &QSlider::setValue);
        QObject::connect(bitrate_slider, &QSlider::valueChanged, bitrate_spinbox, &QSpinBox::setValue);
        QObject::connect(bitrate_spinbox, &QSpinBox::valueChanged, bitrate_slider, &QSlider::setValue);
        QObject::connect(abr_slider, &QSlider::valueChanged, abr_spinbox, &QSpinBox::setValue);
        QObject::connect(abr_spinbox, &QSpinBox::valueChanged, abr_slider, &QSlider::setValue);

        QMetaObject::connectSlotsByName(TranscoderOptionsSpeex);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsSpeex)
    {
        TranscoderOptionsSpeex->setWindowTitle(QCoreApplication::translate("TranscoderOptionsSpeex", "Form", nullptr));
        label_1->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Quality", "Sound quality"));
        label_2->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Bitrate", nullptr));
        bitrate_spinbox->setSpecialValueText(QCoreApplication::translate("TranscoderOptionsSpeex", "automatic", nullptr));
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsSpeex", " kbps", nullptr));
        label_4->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Average bitrate", nullptr));
        abr_spinbox->setSpecialValueText(QCoreApplication::translate("TranscoderOptionsSpeex", "disabled", nullptr));
        abr_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsSpeex", " kbps", nullptr));
        label_3->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Encoding mode", nullptr));
        mode->setItemText(0, QCoreApplication::translate("TranscoderOptionsSpeex", "Auto", nullptr));
        mode->setItemText(1, QCoreApplication::translate("TranscoderOptionsSpeex", "Ultra wide band (UWB)", nullptr));
        mode->setItemText(2, QCoreApplication::translate("TranscoderOptionsSpeex", "Wide band (WB)", nullptr));
        mode->setItemText(3, QCoreApplication::translate("TranscoderOptionsSpeex", "Narrow band (NB)", nullptr));

        vbr->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Variable bit rate", nullptr));
        vad->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Voice activity detection", nullptr));
        dtx->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Discontinuous transmission", nullptr));
        label_5->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Encoding complexity", nullptr));
        label_6->setText(QCoreApplication::translate("TranscoderOptionsSpeex", "Frames per buffer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsSpeex: public Ui_TranscoderOptionsSpeex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSSPEEX_H
