/********************************************************************************
** Form generated from reading UI file 'equalizerslider.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUALIZERSLIDER_H
#define UI_EQUALIZERSLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/stickyslider.h"

QT_BEGIN_NAMESPACE

class Ui_EqualizerSlider
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacer_left;
    StickySlider *slider;
    QSpacerItem *spacer_right;
    QLabel *band;
    QLabel *gain;

    void setupUi(QWidget *EqualizerSlider)
    {
        if (EqualizerSlider->objectName().isEmpty())
            EqualizerSlider->setObjectName("EqualizerSlider");
        EqualizerSlider->resize(94, 224);
        EqualizerSlider->setMinimumSize(QSize(0, 100));
        verticalLayout = new QVBoxLayout(EqualizerSlider);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        spacer_left = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_left);

        slider = new StickySlider(EqualizerSlider);
        slider->setObjectName("slider");
        slider->setMinimum(-100);
        slider->setMaximum(100);
        slider->setOrientation(Qt::Vertical);
        slider->setProperty("sticky_center", QVariant(0));
        slider->setProperty("sticky_threshold", QVariant(10));

        horizontalLayout->addWidget(slider);

        spacer_right = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_right);


        verticalLayout->addLayout(horizontalLayout);

        band = new QLabel(EqualizerSlider);
        band->setObjectName("band");
        band->setEnabled(true);
        band->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(band);

        gain = new QLabel(EqualizerSlider);
        gain->setObjectName("gain");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gain->sizePolicy().hasHeightForWidth());
        gain->setSizePolicy(sizePolicy);
#if QT_CONFIG(tooltip)
        gain->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        gain->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(gain);


        retranslateUi(EqualizerSlider);

        QMetaObject::connectSlotsByName(EqualizerSlider);
    } // setupUi

    void retranslateUi(QWidget *EqualizerSlider)
    {
        EqualizerSlider->setWindowTitle(QCoreApplication::translate("EqualizerSlider", "Equalizer", nullptr));
        gain->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EqualizerSlider: public Ui_EqualizerSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUALIZERSLIDER_H
