/********************************************************************************
** Form generated from reading UI file 'saveplaylistsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEPLAYLISTSDIALOG_H
#define UI_SAVEPLAYLISTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SavePlaylistsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_path;
    QLineEdit *lineedit_path;
    QPushButton *button_path;
    QHBoxLayout *layout_type;
    QLabel *label;
    QComboBox *combobox_type;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SavePlaylistsDialog)
    {
        if (SavePlaylistsDialog->objectName().isEmpty())
            SavePlaylistsDialog->setObjectName("SavePlaylistsDialog");
        SavePlaylistsDialog->resize(440, 140);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/128x128/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        SavePlaylistsDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SavePlaylistsDialog);
        verticalLayout->setObjectName("verticalLayout");
        layout_path = new QHBoxLayout();
        layout_path->setObjectName("layout_path");
        lineedit_path = new QLineEdit(SavePlaylistsDialog);
        lineedit_path->setObjectName("lineedit_path");

        layout_path->addWidget(lineedit_path);

        button_path = new QPushButton(SavePlaylistsDialog);
        button_path->setObjectName("button_path");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_path->sizePolicy().hasHeightForWidth());
        button_path->setSizePolicy(sizePolicy);
        button_path->setMaximumSize(QSize(40, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/64x64/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_path->setIcon(icon1);

        layout_path->addWidget(button_path);


        verticalLayout->addLayout(layout_path);

        layout_type = new QHBoxLayout();
        layout_type->setObjectName("layout_type");
        label = new QLabel(SavePlaylistsDialog);
        label->setObjectName("label");

        layout_type->addWidget(label);

        combobox_type = new QComboBox(SavePlaylistsDialog);
        combobox_type->setObjectName("combobox_type");

        layout_type->addWidget(combobox_type);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_type->addItem(horizontalSpacer);


        verticalLayout->addLayout(layout_type);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SavePlaylistsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(lineedit_path, button_path);
        QWidget::setTabOrder(button_path, combobox_type);

        retranslateUi(SavePlaylistsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SavePlaylistsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SavePlaylistsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SavePlaylistsDialog);
    } // setupUi

    void retranslateUi(QDialog *SavePlaylistsDialog)
    {
        SavePlaylistsDialog->setWindowTitle(QCoreApplication::translate("SavePlaylistsDialog", "Select directory for saving playlists", nullptr));
        button_path->setText(QString());
        label->setText(QCoreApplication::translate("SavePlaylistsDialog", "Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SavePlaylistsDialog: public Ui_SavePlaylistsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEPLAYLISTSDIALOG_H
