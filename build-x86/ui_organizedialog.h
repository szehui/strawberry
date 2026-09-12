/********************************************************************************
** Form generated from reading UI file 'organizedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANIZEDIALOG_H
#define UI_ORGANIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/busyindicator.h"
#include "widgets/freespacebar.h"
#include "widgets/linetextedit.h"

QT_BEGIN_NAMESPACE

class Ui_OrganizeDialog
{
public:
    QVBoxLayout *layout_organizedialog;
    QFormLayout *layout_copying;
    QLabel *label_destination;
    QComboBox *destination;
    QLabel *label_after_copying;
    QComboBox *aftercopying;
    FreeSpaceBar *free_space;
    QGroupBox *groupbox_naming;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    LineTextEdit *naming;
    QToolButton *insert;
    QCheckBox *remove_problematic;
    QCheckBox *remove_non_fat;
    QCheckBox *remove_non_ascii;
    QCheckBox *allow_ascii_ext;
    QCheckBox *replace_spaces;
    QCheckBox *overwrite;
    QCheckBox *albumcover;
    QGroupBox *groupbox_preview;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *preview_stack;
    QWidget *preview_page;
    QVBoxLayout *verticalLayout_4;
    QListWidget *preview;
    QWidget *loading_page;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *spacer_preview_1;
    BusyIndicator *loading_indicator;
    QSpacerItem *spacer_preview_2;
    QCheckBox *eject_after;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *OrganizeDialog)
    {
        if (OrganizeDialog->objectName().isEmpty())
            OrganizeDialog->setObjectName("OrganizeDialog");
        OrganizeDialog->resize(582, 858);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        OrganizeDialog->setWindowIcon(icon);
        layout_organizedialog = new QVBoxLayout(OrganizeDialog);
        layout_organizedialog->setObjectName("layout_organizedialog");
        layout_organizedialog->setSizeConstraint(QLayout::SetMinimumSize);
        layout_copying = new QFormLayout();
        layout_copying->setObjectName("layout_copying");
        layout_copying->setSizeConstraint(QLayout::SetMinimumSize);
        label_destination = new QLabel(OrganizeDialog);
        label_destination->setObjectName("label_destination");

        layout_copying->setWidget(0, QFormLayout::LabelRole, label_destination);

        destination = new QComboBox(OrganizeDialog);
        destination->setObjectName("destination");

        layout_copying->setWidget(0, QFormLayout::FieldRole, destination);

        label_after_copying = new QLabel(OrganizeDialog);
        label_after_copying->setObjectName("label_after_copying");

        layout_copying->setWidget(1, QFormLayout::LabelRole, label_after_copying);

        aftercopying = new QComboBox(OrganizeDialog);
        aftercopying->addItem(QString());
        aftercopying->addItem(QString());
        aftercopying->setObjectName("aftercopying");

        layout_copying->setWidget(1, QFormLayout::FieldRole, aftercopying);


        layout_organizedialog->addLayout(layout_copying);

        free_space = new FreeSpaceBar(OrganizeDialog);
        free_space->setObjectName("free_space");

        layout_organizedialog->addWidget(free_space);

        groupbox_naming = new QGroupBox(OrganizeDialog);
        groupbox_naming->setObjectName("groupbox_naming");
        verticalLayout = new QVBoxLayout(groupbox_naming);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        naming = new LineTextEdit(groupbox_naming);
        naming->setObjectName("naming");
        naming->setLineWrapMode(QTextEdit::NoWrap);
        naming->setAcceptRichText(false);

        horizontalLayout->addWidget(naming);

        insert = new QToolButton(groupbox_naming);
        insert->setObjectName("insert");
        insert->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(insert);


        verticalLayout->addLayout(horizontalLayout);

        remove_problematic = new QCheckBox(groupbox_naming);
        remove_problematic->setObjectName("remove_problematic");

        verticalLayout->addWidget(remove_problematic);

        remove_non_fat = new QCheckBox(groupbox_naming);
        remove_non_fat->setObjectName("remove_non_fat");

        verticalLayout->addWidget(remove_non_fat);

        remove_non_ascii = new QCheckBox(groupbox_naming);
        remove_non_ascii->setObjectName("remove_non_ascii");

        verticalLayout->addWidget(remove_non_ascii);

        allow_ascii_ext = new QCheckBox(groupbox_naming);
        allow_ascii_ext->setObjectName("allow_ascii_ext");

        verticalLayout->addWidget(allow_ascii_ext);

        replace_spaces = new QCheckBox(groupbox_naming);
        replace_spaces->setObjectName("replace_spaces");

        verticalLayout->addWidget(replace_spaces);

        overwrite = new QCheckBox(groupbox_naming);
        overwrite->setObjectName("overwrite");

        verticalLayout->addWidget(overwrite);

        albumcover = new QCheckBox(groupbox_naming);
        albumcover->setObjectName("albumcover");

        verticalLayout->addWidget(albumcover);


        layout_organizedialog->addWidget(groupbox_naming);

        groupbox_preview = new QGroupBox(OrganizeDialog);
        groupbox_preview->setObjectName("groupbox_preview");
        verticalLayout_3 = new QVBoxLayout(groupbox_preview);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        preview_stack = new QStackedWidget(groupbox_preview);
        preview_stack->setObjectName("preview_stack");
        preview_page = new QWidget();
        preview_page->setObjectName("preview_page");
        verticalLayout_4 = new QVBoxLayout(preview_page);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        preview = new QListWidget(preview_page);
        preview->setObjectName("preview");

        verticalLayout_4->addWidget(preview);

        preview_stack->addWidget(preview_page);
        loading_page = new QWidget();
        loading_page->setObjectName("loading_page");
        horizontalLayout_2 = new QHBoxLayout(loading_page);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spacer_preview_1 = new QSpacerItem(264, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_preview_1);

        loading_indicator = new BusyIndicator(loading_page);
        loading_indicator->setObjectName("loading_indicator");

        horizontalLayout_2->addWidget(loading_indicator);

        spacer_preview_2 = new QSpacerItem(264, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_preview_2);

        preview_stack->addWidget(loading_page);

        verticalLayout_3->addWidget(preview_stack);


        layout_organizedialog->addWidget(groupbox_preview);

        eject_after = new QCheckBox(OrganizeDialog);
        eject_after->setObjectName("eject_after");

        layout_organizedialog->addWidget(eject_after);

        button_box = new QDialogButtonBox(OrganizeDialog);
        button_box->setObjectName("button_box");
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        layout_organizedialog->addWidget(button_box);

        QWidget::setTabOrder(destination, aftercopying);
        QWidget::setTabOrder(aftercopying, naming);
        QWidget::setTabOrder(naming, insert);
        QWidget::setTabOrder(insert, remove_problematic);
        QWidget::setTabOrder(remove_problematic, remove_non_fat);
        QWidget::setTabOrder(remove_non_fat, remove_non_ascii);
        QWidget::setTabOrder(remove_non_ascii, allow_ascii_ext);
        QWidget::setTabOrder(allow_ascii_ext, replace_spaces);
        QWidget::setTabOrder(replace_spaces, overwrite);
        QWidget::setTabOrder(overwrite, albumcover);
        QWidget::setTabOrder(albumcover, eject_after);
        QWidget::setTabOrder(eject_after, preview);

        retranslateUi(OrganizeDialog);
        QObject::connect(button_box, &QDialogButtonBox::accepted, OrganizeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(button_box, &QDialogButtonBox::rejected, OrganizeDialog, qOverload<>(&QDialog::reject));

        preview_stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(OrganizeDialog);
    } // setupUi

    void retranslateUi(QDialog *OrganizeDialog)
    {
        OrganizeDialog->setWindowTitle(QCoreApplication::translate("OrganizeDialog", "Organize Files", nullptr));
        label_destination->setText(QCoreApplication::translate("OrganizeDialog", "Destination", nullptr));
        label_after_copying->setText(QCoreApplication::translate("OrganizeDialog", "After copying...", nullptr));
        aftercopying->setItemText(0, QCoreApplication::translate("OrganizeDialog", "Keep the original files", nullptr));
        aftercopying->setItemText(1, QCoreApplication::translate("OrganizeDialog", "Delete the original files", nullptr));

        groupbox_naming->setTitle(QCoreApplication::translate("OrganizeDialog", "Naming options", nullptr));
#if QT_CONFIG(tooltip)
        naming->setToolTip(QCoreApplication::translate("OrganizeDialog", "<p>Tokens start with %, for example: %artist %album %title </p>\n"
"\n"
"<p>If you surround sections of text that contain a token with curly-braces, that section will be hidden if the token is empty.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        insert->setText(QCoreApplication::translate("OrganizeDialog", "Insert...", nullptr));
        remove_problematic->setText(QCoreApplication::translate("OrganizeDialog", "Remove problematic characters from filenames", nullptr));
        remove_non_fat->setText(QCoreApplication::translate("OrganizeDialog", "Restrict to characters allowed on FAT filesystems", nullptr));
        remove_non_ascii->setText(QCoreApplication::translate("OrganizeDialog", "Restrict characters to ASCII", nullptr));
        allow_ascii_ext->setText(QCoreApplication::translate("OrganizeDialog", "Allow extended ASCII characters", nullptr));
        replace_spaces->setText(QCoreApplication::translate("OrganizeDialog", "Replace spaces with underscores", nullptr));
        overwrite->setText(QCoreApplication::translate("OrganizeDialog", "Overwrite existing files", nullptr));
        albumcover->setText(QCoreApplication::translate("OrganizeDialog", "Copy album cover artwork", nullptr));
        groupbox_preview->setTitle(QCoreApplication::translate("OrganizeDialog", "Preview", nullptr));
        loading_indicator->setProperty("text", QVariant(QCoreApplication::translate("OrganizeDialog", "Loading...", nullptr)));
        eject_after->setText(QCoreApplication::translate("OrganizeDialog", "Safely remove the device after copying", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrganizeDialog: public Ui_OrganizeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZEDIALOG_H
