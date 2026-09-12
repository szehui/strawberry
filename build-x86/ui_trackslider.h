/********************************************************************************
** Form generated from reading UI file 'trackslider.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKSLIDER_H
#define UI_TRACKSLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "widgets/clickablelabel.h"
#include "widgets/tracksliderslider.h"

QT_BEGIN_NAMESPACE

class Ui_TrackSlider
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *elapsed;
    TrackSliderSlider *slider;
    ClickableLabel *remaining;

    void setupUi(QWidget *TrackSlider)
    {
        if (TrackSlider->objectName().isEmpty())
            TrackSlider->setObjectName("TrackSlider");
        TrackSlider->setEnabled(true);
        TrackSlider->resize(517, 33);
        horizontalLayout = new QHBoxLayout(TrackSlider);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        elapsed = new QLabel(TrackSlider);
        elapsed->setObjectName("elapsed");
        elapsed->setEnabled(false);
        elapsed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(elapsed);

        slider = new TrackSliderSlider(TrackSlider);
        slider->setObjectName("slider");
        slider->setEnabled(false);
        slider->setSingleStep(10);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider);

        remaining = new ClickableLabel(TrackSlider);
        remaining->setObjectName("remaining");
        remaining->setEnabled(false);

        horizontalLayout->addWidget(remaining);


        retranslateUi(TrackSlider);

        QMetaObject::connectSlotsByName(TrackSlider);
    } // setupUi

    void retranslateUi(QWidget *TrackSlider)
    {
        TrackSlider->setWindowTitle(QCoreApplication::translate("TrackSlider", "Form", nullptr));
        elapsed->setText(QCoreApplication::translate("TrackSlider", "0:00:00", nullptr));
#if QT_CONFIG(tooltip)
        remaining->setToolTip(QCoreApplication::translate("TrackSlider", "Click to toggle between remaining time and total time", nullptr));
#endif // QT_CONFIG(tooltip)
        remaining->setText(QCoreApplication::translate("TrackSlider", "0:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackSlider: public Ui_TrackSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKSLIDER_H
