/********************************************************************************
** Form generated from reading UI file 'deviceviewcontainer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEVIEWCONTAINER_H
#define UI_DEVICEVIEWCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "device/deviceview.h"

QT_BEGIN_NAMESPACE

class Ui_DeviceViewContainer
{
public:
    QVBoxLayout *verticalLayout;
    DeviceView *view;

    void setupUi(QWidget *DeviceViewContainer)
    {
        if (DeviceViewContainer->objectName().isEmpty())
            DeviceViewContainer->setObjectName("DeviceViewContainer");
        DeviceViewContainer->resize(400, 600);
        verticalLayout = new QVBoxLayout(DeviceViewContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        view = new DeviceView(DeviceViewContainer);
        view->setObjectName("view");

        verticalLayout->addWidget(view);


        retranslateUi(DeviceViewContainer);

        QMetaObject::connectSlotsByName(DeviceViewContainer);
    } // setupUi

    void retranslateUi(QWidget *DeviceViewContainer)
    {
        DeviceViewContainer->setWindowTitle(QCoreApplication::translate("DeviceViewContainer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceViewContainer: public Ui_DeviceViewContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEVIEWCONTAINER_H
