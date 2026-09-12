/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsmp3.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSMP3_H
#define UI_TRANSCODEROPTIONSMP3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsMP3
{
public:
    QFormLayout *formLayout_2;
    QRadioButton *target_quality;
    QWidget *widget_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_1;
    QHBoxLayout *horizontalLayout;
    QSlider *quality_slider;
    QDoubleSpinBox *quality_spinbox;
    QRadioButton *target_bitrate;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;
    QCheckBox *cbr;
    QLabel *label_3;
    QComboBox *encoding_engine_quality;
    QCheckBox *mono;

    void setupUi(QWidget *TranscoderOptionsMP3)
    {
        if (TranscoderOptionsMP3->objectName().isEmpty())
            TranscoderOptionsMP3->setObjectName("TranscoderOptionsMP3");
        TranscoderOptionsMP3->resize(557, 486);
        formLayout_2 = new QFormLayout(TranscoderOptionsMP3);
        formLayout_2->setObjectName("formLayout_2");
        target_quality = new QRadioButton(TranscoderOptionsMP3);
        target_quality->setObjectName("target_quality");
        target_quality->setChecked(false);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, target_quality);

        widget_1 = new QWidget(TranscoderOptionsMP3);
        widget_1->setObjectName("widget_1");
        widget_1->setEnabled(false);
        horizontalLayout_2 = new QHBoxLayout(widget_1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(32, 0, 0, 0);
        label_1 = new QLabel(widget_1);
        label_1->setObjectName("label_1");

        horizontalLayout_2->addWidget(label_1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        quality_slider = new QSlider(widget_1);
        quality_slider->setObjectName("quality_slider");
        quality_slider->setMaximum(1000);
        quality_slider->setValue(1000);
        quality_slider->setOrientation(Qt::Horizontal);
        quality_slider->setTickPosition(QSlider::TicksBelow);
        quality_slider->setTickInterval(100);

        horizontalLayout->addWidget(quality_slider);

        quality_spinbox = new QDoubleSpinBox(widget_1);
        quality_spinbox->setObjectName("quality_spinbox");
        quality_spinbox->setMinimum(0.000000000000000);
        quality_spinbox->setMaximum(10.000000000000000);
        quality_spinbox->setValue(10.000000000000000);

        horizontalLayout->addWidget(quality_spinbox);


        horizontalLayout_2->addLayout(horizontalLayout);


        formLayout_2->setWidget(1, QFormLayout::SpanningRole, widget_1);

        target_bitrate = new QRadioButton(TranscoderOptionsMP3);
        target_bitrate->setObjectName("target_bitrate");
        target_bitrate->setChecked(true);

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, target_bitrate);

        widget_2 = new QWidget(TranscoderOptionsMP3);
        widget_2->setObjectName("widget_2");
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(32, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        bitrate_slider = new QSlider(widget_2);
        bitrate_slider->setObjectName("bitrate_slider");
        bitrate_slider->setMinimum(8);
        bitrate_slider->setMaximum(320);
        bitrate_slider->setValue(320);
        bitrate_slider->setOrientation(Qt::Horizontal);
        bitrate_slider->setTickPosition(QSlider::TicksBelow);
        bitrate_slider->setTickInterval(32);

        horizontalLayout_3->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(widget_2);
        bitrate_spinbox->setObjectName("bitrate_spinbox");
        bitrate_spinbox->setMinimum(8);
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setSingleStep(8);
        bitrate_spinbox->setValue(320);

        horizontalLayout_3->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        cbr = new QCheckBox(widget_2);
        cbr->setObjectName("cbr");

        formLayout->setWidget(1, QFormLayout::SpanningRole, cbr);


        formLayout_2->setWidget(3, QFormLayout::SpanningRole, widget_2);

        label_3 = new QLabel(TranscoderOptionsMP3);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_3);

        encoding_engine_quality = new QComboBox(TranscoderOptionsMP3);
        encoding_engine_quality->addItem(QString());
        encoding_engine_quality->addItem(QString());
        encoding_engine_quality->addItem(QString());
        encoding_engine_quality->setObjectName("encoding_engine_quality");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, encoding_engine_quality);

        mono = new QCheckBox(TranscoderOptionsMP3);
        mono->setObjectName("mono");

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, mono);

        QWidget::setTabOrder(target_quality, quality_slider);
        QWidget::setTabOrder(quality_slider, quality_spinbox);
        QWidget::setTabOrder(quality_spinbox, target_bitrate);
        QWidget::setTabOrder(target_bitrate, bitrate_slider);
        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);
        QWidget::setTabOrder(bitrate_spinbox, cbr);
        QWidget::setTabOrder(cbr, encoding_engine_quality);
        QWidget::setTabOrder(encoding_engine_quality, mono);

        retranslateUi(TranscoderOptionsMP3);
        QObject::connect(bitrate_slider, &QSlider::valueChanged, bitrate_spinbox, &QSpinBox::setValue);
        QObject::connect(bitrate_spinbox, &QSpinBox::valueChanged, bitrate_slider, &QSlider::setValue);
        QObject::connect(target_quality, &QRadioButton::toggled, widget_1, &QWidget::setEnabled);
        QObject::connect(target_bitrate, &QRadioButton::toggled, widget_2, &QWidget::setEnabled);

        encoding_engine_quality->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TranscoderOptionsMP3);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsMP3)
    {
        TranscoderOptionsMP3->setWindowTitle(QCoreApplication::translate("TranscoderOptionsMP3", "Form", nullptr));
        target_quality->setText(QCoreApplication::translate("TranscoderOptionsMP3", "Optimize for &quality", nullptr));
        label_1->setText(QCoreApplication::translate("TranscoderOptionsMP3", "Quality", "Sound quality"));
        target_bitrate->setText(QCoreApplication::translate("TranscoderOptionsMP3", "Opti&mize for bitrate", nullptr));
        label_2->setText(QCoreApplication::translate("TranscoderOptionsMP3", "Bitrate", nullptr));
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsMP3", " kbps", nullptr));
        cbr->setText(QCoreApplication::translate("TranscoderOptionsMP3", "Constant bitrate", nullptr));
        label_3->setText(QCoreApplication::translate("TranscoderOptionsMP3", "Encoding engine quality", nullptr));
        encoding_engine_quality->setItemText(0, QCoreApplication::translate("TranscoderOptionsMP3", "Fast", nullptr));
        encoding_engine_quality->setItemText(1, QCoreApplication::translate("TranscoderOptionsMP3", "Standard", nullptr));
        encoding_engine_quality->setItemText(2, QCoreApplication::translate("TranscoderOptionsMP3", "High", nullptr));

        mono->setText(QCoreApplication::translate("TranscoderOptionsMP3", "Force mono encoding", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsMP3: public Ui_TranscoderOptionsMP3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSMP3_H
