/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QHBoxLayout *layout_dialog;
    QTreeWidget *list;
    QVBoxLayout *layout;
    QLabel *title;
    QFrame *line_2;
    QStackedWidget *stacked_widget;
    QFrame *line_1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(827, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDialog->setWindowIcon(icon);
        layout_dialog = new QHBoxLayout(SettingsDialog);
        layout_dialog->setObjectName("layout_dialog");
        list = new QTreeWidget(SettingsDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        list->setHeaderItem(__qtreewidgetitem);
        list->setObjectName("list");
        list->setMaximumSize(QSize(220, 16777215));
        list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        list->setIconSize(QSize(32, 32));
        list->setRootIsDecorated(false);
        list->setItemsExpandable(false);
        list->setExpandsOnDoubleClick(false);
        list->header()->setVisible(false);

        layout_dialog->addWidget(list);

        layout = new QVBoxLayout();
        layout->setObjectName("layout");
        title = new QLabel(SettingsDialog);
        title->setObjectName("title");

        layout->addWidget(title);

        line_2 = new QFrame(SettingsDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        layout->addWidget(line_2);

        stacked_widget = new QStackedWidget(SettingsDialog);
        stacked_widget->setObjectName("stacked_widget");

        layout->addWidget(stacked_widget);

        line_1 = new QFrame(SettingsDialog);
        line_1->setObjectName("line_1");
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);

        layout->addWidget(line_1);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        layout->addWidget(buttonBox);


        layout_dialog->addLayout(layout);

        QWidget::setTabOrder(list, buttonBox);

        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SettingsDialog, qOverload<>(&QDialog::reject));

        stacked_widget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
