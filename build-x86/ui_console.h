/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTextBrowser *output;
    QHBoxLayout *horizontalLayout;
    QLineEdit *query;
    QPushButton *run;

    void setupUi(QDialog *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName("Console");
        Console->resize(600, 360);
        gridLayout = new QGridLayout(Console);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        output = new QTextBrowser(Console);
        output->setObjectName("output");

        verticalLayout->addWidget(output);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        query = new QLineEdit(Console);
        query->setObjectName("query");

        horizontalLayout->addWidget(query);

        run = new QPushButton(Console);
        run->setObjectName("run");

        horizontalLayout->addWidget(run);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(query, run);
        QWidget::setTabOrder(run, output);

        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QDialog *Console)
    {
        Console->setWindowTitle(QCoreApplication::translate("Console", "Console", nullptr));
        run->setText(QCoreApplication::translate("Console", "Run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
