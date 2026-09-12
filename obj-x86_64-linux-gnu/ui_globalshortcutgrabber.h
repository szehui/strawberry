/********************************************************************************
** Form generated from reading UI file 'globalshortcutgrabber.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHORTCUTGRABBER_H
#define UI_GLOBALSHORTCUTGRABBER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlobalShortcutGrabber
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_shortcut;
    QLabel *label_key;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GlobalShortcutGrabber)
    {
        if (GlobalShortcutGrabber->objectName().isEmpty())
            GlobalShortcutGrabber->setObjectName("GlobalShortcutGrabber");
        GlobalShortcutGrabber->resize(418, 123);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        GlobalShortcutGrabber->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GlobalShortcutGrabber);
        verticalLayout->setObjectName("verticalLayout");
        label_shortcut = new QLabel(GlobalShortcutGrabber);
        label_shortcut->setObjectName("label_shortcut");
        label_shortcut->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_shortcut);

        label_key = new QLabel(GlobalShortcutGrabber);
        label_key->setObjectName("label_key");
        label_key->setTextFormat(Qt::RichText);
        label_key->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_key);

        buttonBox = new QDialogButtonBox(GlobalShortcutGrabber);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GlobalShortcutGrabber);

        QMetaObject::connectSlotsByName(GlobalShortcutGrabber);
    } // setupUi

    void retranslateUi(QDialog *GlobalShortcutGrabber)
    {
        GlobalShortcutGrabber->setWindowTitle(QCoreApplication::translate("GlobalShortcutGrabber", "Press a key", nullptr));
        label_shortcut->setText(QCoreApplication::translate("GlobalShortcutGrabber", "Press a key combination to use for %1...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlobalShortcutGrabber: public Ui_GlobalShortcutGrabber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHORTCUTGRABBER_H
