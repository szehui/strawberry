/********************************************************************************
** Form generated from reading UI file 'equalizer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUALIZER_H
#define UI_EQUALIZER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equalizer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_preset;
    QComboBox *preset;
    QToolButton *preset_save;
    QToolButton *preset_del;
    QFrame *line;
    QCheckBox *enable_equalizer;
    QWidget *slider_container;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *enable_stereo_balancer;
    QHBoxLayout *slider_label_layout;
    QLabel *label_left;
    QLabel *label_balance;
    QLabel *label_right;
    QSlider *stereo_balance_slider;

    void setupUi(QDialog *Equalizer)
    {
        if (Equalizer->objectName().isEmpty())
            Equalizer->setObjectName("Equalizer");
        Equalizer->resize(435, 265);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        Equalizer->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Equalizer);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_preset = new QLabel(Equalizer);
        label_preset->setObjectName("label_preset");

        horizontalLayout->addWidget(label_preset);

        preset = new QComboBox(Equalizer);
        preset->setObjectName("preset");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preset->sizePolicy().hasHeightForWidth());
        preset->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(preset);

        preset_save = new QToolButton(Equalizer);
        preset_save->setObjectName("preset_save");

        horizontalLayout->addWidget(preset_save);

        preset_del = new QToolButton(Equalizer);
        preset_del->setObjectName("preset_del");

        horizontalLayout->addWidget(preset_del);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(Equalizer);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        enable_equalizer = new QCheckBox(Equalizer);
        enable_equalizer->setObjectName("enable_equalizer");

        verticalLayout->addWidget(enable_equalizer);

        slider_container = new QWidget(Equalizer);
        slider_container->setObjectName("slider_container");
        slider_container->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(slider_container->sizePolicy().hasHeightForWidth());
        slider_container->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(slider_container);
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        verticalLayout->addWidget(slider_container);

        enable_stereo_balancer = new QCheckBox(Equalizer);
        enable_stereo_balancer->setObjectName("enable_stereo_balancer");

        verticalLayout->addWidget(enable_stereo_balancer);

        slider_label_layout = new QHBoxLayout();
        slider_label_layout->setObjectName("slider_label_layout");
        label_left = new QLabel(Equalizer);
        label_left->setObjectName("label_left");
        QFont font;
        font.setPointSize(11);
        label_left->setFont(font);
        label_left->setAlignment(Qt::AlignmentFlag::AlignBottom);

        slider_label_layout->addWidget(label_left);

        label_balance = new QLabel(Equalizer);
        label_balance->setObjectName("label_balance");
        label_balance->setAlignment(Qt::AlignmentFlag::AlignCenter);

        slider_label_layout->addWidget(label_balance);

        label_right = new QLabel(Equalizer);
        label_right->setObjectName("label_right");
        label_right->setFont(font);
        label_right->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);

        slider_label_layout->addWidget(label_right);


        verticalLayout->addLayout(slider_label_layout);

        stereo_balance_slider = new QSlider(Equalizer);
        stereo_balance_slider->setObjectName("stereo_balance_slider");
        stereo_balance_slider->setMinimum(-100);
        stereo_balance_slider->setMaximum(100);
        stereo_balance_slider->setSingleStep(10);
        stereo_balance_slider->setPageStep(100);
        stereo_balance_slider->setOrientation(Qt::Orientation::Horizontal);
        stereo_balance_slider->setTickPosition(QSlider::TickPosition::TicksBelow);
        stereo_balance_slider->setTickInterval(10);

        verticalLayout->addWidget(stereo_balance_slider);

        QWidget::setTabOrder(preset, preset_save);
        QWidget::setTabOrder(preset_save, preset_del);
        QWidget::setTabOrder(preset_del, enable_equalizer);
        QWidget::setTabOrder(enable_equalizer, enable_stereo_balancer);
        QWidget::setTabOrder(enable_stereo_balancer, stereo_balance_slider);

        retranslateUi(Equalizer);

        QMetaObject::connectSlotsByName(Equalizer);
    } // setupUi

    void retranslateUi(QDialog *Equalizer)
    {
        Equalizer->setWindowTitle(QCoreApplication::translate("Equalizer", "Equalizer", nullptr));
        label_preset->setText(QCoreApplication::translate("Equalizer", "Preset:", nullptr));
#if QT_CONFIG(tooltip)
        preset_save->setToolTip(QCoreApplication::translate("Equalizer", "Save preset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        preset_del->setToolTip(QCoreApplication::translate("Equalizer", "Delete preset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        enable_equalizer->setToolTip(QCoreApplication::translate("Equalizer", "You need to restart playback for this setting to take affect.", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_equalizer->setText(QCoreApplication::translate("Equalizer", "Enable equalizer", nullptr));
#if QT_CONFIG(tooltip)
        enable_stereo_balancer->setToolTip(QCoreApplication::translate("Equalizer", "You need to restart playback for this setting to take affect.", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_stereo_balancer->setText(QCoreApplication::translate("Equalizer", "Enable stereo balancer", nullptr));
        label_left->setText(QCoreApplication::translate("Equalizer", "Left", nullptr));
        label_balance->setText(QCoreApplication::translate("Equalizer", "Balance", nullptr));
        label_right->setText(QCoreApplication::translate("Equalizer", "Right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equalizer: public Ui_Equalizer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUALIZER_H
