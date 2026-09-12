/********************************************************************************
** Form generated from reading UI file 'groupbydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBYDIALOG_H
#define UI_GROUPBYDIALOG_H

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
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GroupByDialog
{
public:
    QVBoxLayout *layout_groupbydialog;
    QLabel *label;
    QGroupBox *groupbox_group_by;
    QFormLayout *formLayout;
    QLabel *label_first;
    QComboBox *combobox_first;
    QLabel *label_second;
    QComboBox *combobox_second;
    QLabel *label_third;
    QComboBox *combobox_third;
    QCheckBox *checkbox_separate_albums_by_grouping;
    QSpacerItem *spacer_bottom;
    QDialogButtonBox *buttonbox;

    void setupUi(QDialog *GroupByDialog)
    {
        if (GroupByDialog->objectName().isEmpty())
            GroupByDialog->setObjectName("GroupByDialog");
        GroupByDialog->resize(394, 273);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        GroupByDialog->setWindowIcon(icon);
        layout_groupbydialog = new QVBoxLayout(GroupByDialog);
        layout_groupbydialog->setObjectName("layout_groupbydialog");
        label = new QLabel(GroupByDialog);
        label->setObjectName("label");
        label->setWordWrap(true);

        layout_groupbydialog->addWidget(label);

        groupbox_group_by = new QGroupBox(GroupByDialog);
        groupbox_group_by->setObjectName("groupbox_group_by");
        formLayout = new QFormLayout(groupbox_group_by);
        formLayout->setObjectName("formLayout");
        label_first = new QLabel(groupbox_group_by);
        label_first->setObjectName("label_first");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_first);

        combobox_first = new QComboBox(groupbox_group_by);
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->addItem(QString());
        combobox_first->setObjectName("combobox_first");

        formLayout->setWidget(0, QFormLayout::FieldRole, combobox_first);

        label_second = new QLabel(groupbox_group_by);
        label_second->setObjectName("label_second");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_second);

        combobox_second = new QComboBox(groupbox_group_by);
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->addItem(QString());
        combobox_second->setObjectName("combobox_second");

        formLayout->setWidget(1, QFormLayout::FieldRole, combobox_second);

        label_third = new QLabel(groupbox_group_by);
        label_third->setObjectName("label_third");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_third);

        combobox_third = new QComboBox(groupbox_group_by);
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->addItem(QString());
        combobox_third->setObjectName("combobox_third");

        formLayout->setWidget(2, QFormLayout::FieldRole, combobox_third);


        layout_groupbydialog->addWidget(groupbox_group_by);

        checkbox_separate_albums_by_grouping = new QCheckBox(GroupByDialog);
        checkbox_separate_albums_by_grouping->setObjectName("checkbox_separate_albums_by_grouping");

        layout_groupbydialog->addWidget(checkbox_separate_albums_by_grouping);

        spacer_bottom = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_groupbydialog->addItem(spacer_bottom);

        buttonbox = new QDialogButtonBox(GroupByDialog);
        buttonbox->setObjectName("buttonbox");
        buttonbox->setOrientation(Qt::Horizontal);
        buttonbox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        layout_groupbydialog->addWidget(buttonbox);

        QWidget::setTabOrder(combobox_first, combobox_second);
        QWidget::setTabOrder(combobox_second, combobox_third);
        QWidget::setTabOrder(combobox_third, checkbox_separate_albums_by_grouping);
        QWidget::setTabOrder(checkbox_separate_albums_by_grouping, buttonbox);

        retranslateUi(GroupByDialog);
        QObject::connect(buttonbox, &QDialogButtonBox::accepted, GroupByDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonbox, &QDialogButtonBox::rejected, GroupByDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GroupByDialog);
    } // setupUi

    void retranslateUi(QDialog *GroupByDialog)
    {
        GroupByDialog->setWindowTitle(QCoreApplication::translate("GroupByDialog", "Collection advanced grouping", nullptr));
        label->setText(QCoreApplication::translate("GroupByDialog", "You can change the way the songs in the collection are organized.", nullptr));
        groupbox_group_by->setTitle(QCoreApplication::translate("GroupByDialog", "Group Collection by...", nullptr));
        label_first->setText(QCoreApplication::translate("GroupByDialog", "First level", nullptr));
        combobox_first->setItemText(0, QCoreApplication::translate("GroupByDialog", "None", nullptr));
        combobox_first->setItemText(1, QCoreApplication::translate("GroupByDialog", "Artist", nullptr));
        combobox_first->setItemText(2, QCoreApplication::translate("GroupByDialog", "Album artist", nullptr));
        combobox_first->setItemText(3, QCoreApplication::translate("GroupByDialog", "Album", nullptr));
        combobox_first->setItemText(4, QCoreApplication::translate("GroupByDialog", "Album - Disc", nullptr));
        combobox_first->setItemText(5, QCoreApplication::translate("GroupByDialog", "Disc", nullptr));
        combobox_first->setItemText(6, QCoreApplication::translate("GroupByDialog", "Format", nullptr));
        combobox_first->setItemText(7, QCoreApplication::translate("GroupByDialog", "Genre", nullptr));
        combobox_first->setItemText(8, QCoreApplication::translate("GroupByDialog", "Year", nullptr));
        combobox_first->setItemText(9, QCoreApplication::translate("GroupByDialog", "Year - Album", nullptr));
        combobox_first->setItemText(10, QCoreApplication::translate("GroupByDialog", "Year - Album - Disc", nullptr));
        combobox_first->setItemText(11, QCoreApplication::translate("GroupByDialog", "Original year", nullptr));
        combobox_first->setItemText(12, QCoreApplication::translate("GroupByDialog", "Original year - Album", nullptr));
        combobox_first->setItemText(13, QCoreApplication::translate("GroupByDialog", "Original year - Album - Disc", nullptr));
        combobox_first->setItemText(14, QCoreApplication::translate("GroupByDialog", "Composer", nullptr));
        combobox_first->setItemText(15, QCoreApplication::translate("GroupByDialog", "Performer", nullptr));
        combobox_first->setItemText(16, QCoreApplication::translate("GroupByDialog", "Grouping", nullptr));
        combobox_first->setItemText(17, QCoreApplication::translate("GroupByDialog", "File type", nullptr));
        combobox_first->setItemText(18, QCoreApplication::translate("GroupByDialog", "Sample rate", nullptr));
        combobox_first->setItemText(19, QCoreApplication::translate("GroupByDialog", "Bit depth", nullptr));
        combobox_first->setItemText(20, QCoreApplication::translate("GroupByDialog", "Bitrate", nullptr));

        label_second->setText(QCoreApplication::translate("GroupByDialog", "Second level", nullptr));
        combobox_second->setItemText(0, QCoreApplication::translate("GroupByDialog", "None", nullptr));
        combobox_second->setItemText(1, QCoreApplication::translate("GroupByDialog", "Artist", nullptr));
        combobox_second->setItemText(2, QCoreApplication::translate("GroupByDialog", "Album artist", nullptr));
        combobox_second->setItemText(3, QCoreApplication::translate("GroupByDialog", "Album", nullptr));
        combobox_second->setItemText(4, QCoreApplication::translate("GroupByDialog", "Album - Disc", nullptr));
        combobox_second->setItemText(5, QCoreApplication::translate("GroupByDialog", "Disc", nullptr));
        combobox_second->setItemText(6, QCoreApplication::translate("GroupByDialog", "Format", nullptr));
        combobox_second->setItemText(7, QCoreApplication::translate("GroupByDialog", "Genre", nullptr));
        combobox_second->setItemText(8, QCoreApplication::translate("GroupByDialog", "Year", nullptr));
        combobox_second->setItemText(9, QCoreApplication::translate("GroupByDialog", "Year - Album", nullptr));
        combobox_second->setItemText(10, QCoreApplication::translate("GroupByDialog", "Year - Album - Disc", nullptr));
        combobox_second->setItemText(11, QCoreApplication::translate("GroupByDialog", "Original year", nullptr));
        combobox_second->setItemText(12, QCoreApplication::translate("GroupByDialog", "Original year - Album", nullptr));
        combobox_second->setItemText(13, QCoreApplication::translate("GroupByDialog", "Original year - Album - Disc", nullptr));
        combobox_second->setItemText(14, QCoreApplication::translate("GroupByDialog", "Composer", nullptr));
        combobox_second->setItemText(15, QCoreApplication::translate("GroupByDialog", "Performer", nullptr));
        combobox_second->setItemText(16, QCoreApplication::translate("GroupByDialog", "Grouping", nullptr));
        combobox_second->setItemText(17, QCoreApplication::translate("GroupByDialog", "File type", nullptr));
        combobox_second->setItemText(18, QCoreApplication::translate("GroupByDialog", "Sample rate", nullptr));
        combobox_second->setItemText(19, QCoreApplication::translate("GroupByDialog", "Bit depth", nullptr));
        combobox_second->setItemText(20, QCoreApplication::translate("GroupByDialog", "Bitrate", nullptr));

        label_third->setText(QCoreApplication::translate("GroupByDialog", "Third level", nullptr));
        combobox_third->setItemText(0, QCoreApplication::translate("GroupByDialog", "None", nullptr));
        combobox_third->setItemText(1, QCoreApplication::translate("GroupByDialog", "Artist", nullptr));
        combobox_third->setItemText(2, QCoreApplication::translate("GroupByDialog", "Album artist", nullptr));
        combobox_third->setItemText(3, QCoreApplication::translate("GroupByDialog", "Album", nullptr));
        combobox_third->setItemText(4, QCoreApplication::translate("GroupByDialog", "Album - Disc", nullptr));
        combobox_third->setItemText(5, QCoreApplication::translate("GroupByDialog", "Disc", nullptr));
        combobox_third->setItemText(6, QCoreApplication::translate("GroupByDialog", "Format", nullptr));
        combobox_third->setItemText(7, QCoreApplication::translate("GroupByDialog", "Genre", nullptr));
        combobox_third->setItemText(8, QCoreApplication::translate("GroupByDialog", "Year", nullptr));
        combobox_third->setItemText(9, QCoreApplication::translate("GroupByDialog", "Year - Album", nullptr));
        combobox_third->setItemText(10, QCoreApplication::translate("GroupByDialog", "Year - Album - Disc", nullptr));
        combobox_third->setItemText(11, QCoreApplication::translate("GroupByDialog", "Original year", nullptr));
        combobox_third->setItemText(12, QCoreApplication::translate("GroupByDialog", "Original year - Album", nullptr));
        combobox_third->setItemText(13, QCoreApplication::translate("GroupByDialog", "Original year - Album - Disc", nullptr));
        combobox_third->setItemText(14, QCoreApplication::translate("GroupByDialog", "Composer", nullptr));
        combobox_third->setItemText(15, QCoreApplication::translate("GroupByDialog", "Performer", nullptr));
        combobox_third->setItemText(16, QCoreApplication::translate("GroupByDialog", "Grouping", nullptr));
        combobox_third->setItemText(17, QCoreApplication::translate("GroupByDialog", "File type", nullptr));
        combobox_third->setItemText(18, QCoreApplication::translate("GroupByDialog", "Sample rate", nullptr));
        combobox_third->setItemText(19, QCoreApplication::translate("GroupByDialog", "Bit depth", nullptr));
        combobox_third->setItemText(20, QCoreApplication::translate("GroupByDialog", "Bitrate", nullptr));

        checkbox_separate_albums_by_grouping->setText(QCoreApplication::translate("GroupByDialog", "Separate albums by grouping tag", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupByDialog: public Ui_GroupByDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBYDIALOG_H
