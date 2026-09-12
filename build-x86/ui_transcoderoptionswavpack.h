/********************************************************************************
** Form generated from reading UI file 'transcoderoptionswavpack.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSWAVPACK_H
#define UI_TRANSCODEROPTIONSWAVPACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsWavPack
{
public:
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *TranscoderOptionsWavPack)
    {
        if (TranscoderOptionsWavPack->objectName().isEmpty())
            TranscoderOptionsWavPack->setObjectName("TranscoderOptionsWavPack");
        TranscoderOptionsWavPack->resize(400, 102);
        formLayout = new QFormLayout(TranscoderOptionsWavPack);
        formLayout->setObjectName("formLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(TranscoderOptionsWavPack);

        QMetaObject::connectSlotsByName(TranscoderOptionsWavPack);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsWavPack)
    {
        TranscoderOptionsWavPack->setWindowTitle(QCoreApplication::translate("TranscoderOptionsWavPack", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsWavPack: public Ui_TranscoderOptionsWavPack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSWAVPACK_H
