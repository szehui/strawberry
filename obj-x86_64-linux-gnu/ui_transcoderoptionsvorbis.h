/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsvorbis.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSVORBIS_H
#define UI_TRANSCODEROPTIONSVORBIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsVorbis
{
public:
    QFormLayout *formLayout_2;
    QLabel *label_1;
    QHBoxLayout *horizontalLayout_1;
    QSlider *quality_slider;
    QSpinBox *quality_spinbox;
    QCheckBox *managed;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QSlider *min_bitrate_slider;
    QSpinBox *min_bitrate_spinbox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QSlider *max_bitrate_slider;
    QSpinBox *max_bitrate_spinbox;

    void setupUi(QWidget *TranscoderOptionsVorbis)
    {
        if (TranscoderOptionsVorbis->objectName().isEmpty())
            TranscoderOptionsVorbis->setObjectName("TranscoderOptionsVorbis");
        TranscoderOptionsVorbis->resize(400, 300);
        formLayout_2 = new QFormLayout(TranscoderOptionsVorbis);
        formLayout_2->setObjectName("formLayout_2");
        label_1 = new QLabel(TranscoderOptionsVorbis);
        label_1->setObjectName("label_1");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_1);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        quality_slider = new QSlider(TranscoderOptionsVorbis);
        quality_slider->setObjectName("quality_slider");
        quality_slider->setMinimum(-1);
        quality_slider->setMaximum(10);
        quality_slider->setValue(3);
        quality_slider->setOrientation(Qt::Horizontal);
        quality_slider->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_1->addWidget(quality_slider);

        quality_spinbox = new QSpinBox(TranscoderOptionsVorbis);
        quality_spinbox->setObjectName("quality_spinbox");
        quality_spinbox->setMinimum(-1);
        quality_spinbox->setMaximum(10);
        quality_spinbox->setValue(3);

        horizontalLayout_1->addWidget(quality_spinbox);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_1);

        managed = new QCheckBox(TranscoderOptionsVorbis);
        managed->setObjectName("managed");

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, managed);

        widget = new QWidget(TranscoderOptionsVorbis);
        widget->setObjectName("widget");
        widget->setEnabled(false);
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(32, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        bitrate_slider = new QSlider(widget);
        bitrate_slider->setObjectName("bitrate_slider");
        bitrate_slider->setMaximum(250);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(widget);
        bitrate_spinbox->setObjectName("bitrate_spinbox");
        bitrate_spinbox->setMaximum(250);
        bitrate_spinbox->setValue(128);

        horizontalLayout_2->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        min_bitrate_slider = new QSlider(widget);
        min_bitrate_slider->setObjectName("min_bitrate_slider");
        min_bitrate_slider->setMaximum(250);
        min_bitrate_slider->setValue(0);
        min_bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(min_bitrate_slider);

        min_bitrate_spinbox = new QSpinBox(widget);
        min_bitrate_spinbox->setObjectName("min_bitrate_spinbox");
        min_bitrate_spinbox->setMaximum(250);
        min_bitrate_spinbox->setValue(0);

        horizontalLayout_3->addWidget(min_bitrate_spinbox);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        max_bitrate_slider = new QSlider(widget);
        max_bitrate_slider->setObjectName("max_bitrate_slider");
        max_bitrate_slider->setMaximum(250);
        max_bitrate_slider->setValue(0);
        max_bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(max_bitrate_slider);

        max_bitrate_spinbox = new QSpinBox(widget);
        max_bitrate_spinbox->setObjectName("max_bitrate_spinbox");
        max_bitrate_spinbox->setMaximum(250);
        max_bitrate_spinbox->setValue(0);

        horizontalLayout_4->addWidget(max_bitrate_spinbox);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);


        formLayout_2->setWidget(2, QFormLayout::SpanningRole, widget);

        QWidget::setTabOrder(quality_slider, quality_spinbox);
        QWidget::setTabOrder(quality_spinbox, managed);
        QWidget::setTabOrder(managed, bitrate_slider);
        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);
        QWidget::setTabOrder(bitrate_spinbox, min_bitrate_slider);
        QWidget::setTabOrder(min_bitrate_slider, min_bitrate_spinbox);
        QWidget::setTabOrder(min_bitrate_spinbox, max_bitrate_slider);
        QWidget::setTabOrder(max_bitrate_slider, max_bitrate_spinbox);

        retranslateUi(TranscoderOptionsVorbis);
        QObject::connect(quality_slider, &QSlider::valueChanged, quality_spinbox, &QSpinBox::setValue);
        QObject::connect(quality_spinbox, &QSpinBox::valueChanged, quality_slider, &QSlider::setValue);
        QObject::connect(bitrate_slider, &QSlider::valueChanged, bitrate_spinbox, &QSpinBox::setValue);
        QObject::connect(bitrate_spinbox, &QSpinBox::valueChanged, bitrate_slider, &QSlider::setValue);
        QObject::connect(min_bitrate_spinbox, &QSpinBox::valueChanged, min_bitrate_slider, &QSlider::setValue);
        QObject::connect(min_bitrate_slider, &QSlider::valueChanged, min_bitrate_spinbox, &QSpinBox::setValue);
        QObject::connect(max_bitrate_slider, &QSlider::valueChanged, max_bitrate_spinbox, &QSpinBox::setValue);
        QObject::connect(max_bitrate_spinbox, &QSpinBox::valueChanged, max_bitrate_slider, &QSlider::setValue);
        QObject::connect(managed, &QCheckBox::toggled, widget, &QWidget::setEnabled);

        QMetaObject::connectSlotsByName(TranscoderOptionsVorbis);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsVorbis)
    {
        TranscoderOptionsVorbis->setWindowTitle(QCoreApplication::translate("TranscoderOptionsVorbis", "Form", nullptr));
        label_1->setText(QCoreApplication::translate("TranscoderOptionsVorbis", "Quality", "Sound quality"));
        managed->setText(QCoreApplication::translate("TranscoderOptionsVorbis", "Use bitrate management engine", nullptr));
        label_2->setText(QCoreApplication::translate("TranscoderOptionsVorbis", "Target bitrate", nullptr));
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsVorbis", " kbps", nullptr));
        label_3->setText(QCoreApplication::translate("TranscoderOptionsVorbis", "Minimum bitrate", nullptr));
        min_bitrate_spinbox->setSpecialValueText(QCoreApplication::translate("TranscoderOptionsVorbis", "disabled", nullptr));
        min_bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsVorbis", " kbps", nullptr));
        label_4->setText(QCoreApplication::translate("TranscoderOptionsVorbis", "Maximum bitrate", nullptr));
        max_bitrate_spinbox->setSpecialValueText(QCoreApplication::translate("TranscoderOptionsVorbis", "disabled", nullptr));
        max_bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsVorbis", " kbps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsVorbis: public Ui_TranscoderOptionsVorbis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSVORBIS_H
