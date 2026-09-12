/********************************************************************************
** Form generated from reading UI file 'transcodedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEDIALOG_H
#define UI_TRANSCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TranscodeDialog
{
public:
    QVBoxLayout *layout_transcodedialog;
    QGroupBox *input_group;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *files;
    QVBoxLayout *verticalLayout_1;
    QPushButton *add;
    QPushButton *remove;
    QSpacerItem *verticalSpacer_1;
    QPushButton *import;
    QGroupBox *output_group;
    QGridLayout *gridLayout;
    QLabel *label_1;
    QComboBox *format;
    QPushButton *options;
    QLabel *label_2;
    QComboBox *destination;
    QPushButton *select;
    QCheckBox *preserve_dir_structure;
    QGroupBox *progress_group;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_progress;
    QLabel *progress_text;
    QPushButton *details;
    QProgressBar *progress_bar;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *TranscodeDialog)
    {
        if (TranscodeDialog->objectName().isEmpty())
            TranscodeDialog->setObjectName("TranscodeDialog");
        TranscodeDialog->resize(500, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        TranscodeDialog->setWindowIcon(icon);
        layout_transcodedialog = new QVBoxLayout(TranscodeDialog);
        layout_transcodedialog->setObjectName("layout_transcodedialog");
        input_group = new QGroupBox(TranscodeDialog);
        input_group->setObjectName("input_group");
        horizontalLayout = new QHBoxLayout(input_group);
        horizontalLayout->setObjectName("horizontalLayout");
        files = new QTreeWidget(input_group);
        files->setObjectName("files");
        files->setAlternatingRowColors(true);
        files->setSelectionMode(QAbstractItemView::ExtendedSelection);
        files->setRootIsDecorated(false);
        files->setUniformRowHeights(true);
        files->setItemsExpandable(false);
        files->setAllColumnsShowFocus(true);
        files->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(files);

        verticalLayout_1 = new QVBoxLayout();
        verticalLayout_1->setObjectName("verticalLayout_1");
        add = new QPushButton(input_group);
        add->setObjectName("add");

        verticalLayout_1->addWidget(add);

        remove = new QPushButton(input_group);
        remove->setObjectName("remove");

        verticalLayout_1->addWidget(remove);

        verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_1);

        import = new QPushButton(input_group);
        import->setObjectName("import");

        verticalLayout_1->addWidget(import);


        horizontalLayout->addLayout(verticalLayout_1);


        layout_transcodedialog->addWidget(input_group);

        output_group = new QGroupBox(TranscodeDialog);
        output_group->setObjectName("output_group");
        gridLayout = new QGridLayout(output_group);
        gridLayout->setObjectName("gridLayout");
        label_1 = new QLabel(output_group);
        label_1->setObjectName("label_1");

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        format = new QComboBox(output_group);
        format->setObjectName("format");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(format->sizePolicy().hasHeightForWidth());
        format->setSizePolicy(sizePolicy);

        gridLayout->addWidget(format, 0, 1, 1, 1);

        options = new QPushButton(output_group);
        options->setObjectName("options");

        gridLayout->addWidget(options, 0, 2, 1, 1);

        label_2 = new QLabel(output_group);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        destination = new QComboBox(output_group);
        destination->addItem(QString());
        destination->setObjectName("destination");
        destination->setEnabled(true);
        sizePolicy.setHeightForWidth(destination->sizePolicy().hasHeightForWidth());
        destination->setSizePolicy(sizePolicy);

        gridLayout->addWidget(destination, 1, 1, 1, 1);

        select = new QPushButton(output_group);
        select->setObjectName("select");

        gridLayout->addWidget(select, 1, 2, 1, 1);

        preserve_dir_structure = new QCheckBox(output_group);
        preserve_dir_structure->setObjectName("preserve_dir_structure");

        gridLayout->addWidget(preserve_dir_structure, 2, 0, 1, 3);


        layout_transcodedialog->addWidget(output_group);

        progress_group = new QGroupBox(TranscodeDialog);
        progress_group->setObjectName("progress_group");
        verticalLayout = new QVBoxLayout(progress_group);
        verticalLayout->setObjectName("verticalLayout");
        layout_progress = new QHBoxLayout();
        layout_progress->setObjectName("layout_progress");
        progress_text = new QLabel(progress_group);
        progress_text->setObjectName("progress_text");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progress_text->sizePolicy().hasHeightForWidth());
        progress_text->setSizePolicy(sizePolicy1);
        progress_text->setTextFormat(Qt::RichText);

        layout_progress->addWidget(progress_text);

        details = new QPushButton(progress_group);
        details->setObjectName("details");

        layout_progress->addWidget(details);


        verticalLayout->addLayout(layout_progress);

        progress_bar = new QProgressBar(progress_group);
        progress_bar->setObjectName("progress_bar");

        verticalLayout->addWidget(progress_bar);


        layout_transcodedialog->addWidget(progress_group);

        button_box = new QDialogButtonBox(TranscodeDialog);
        button_box->setObjectName("button_box");
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close);

        layout_transcodedialog->addWidget(button_box);

        QWidget::setTabOrder(files, add);
        QWidget::setTabOrder(add, remove);
        QWidget::setTabOrder(remove, import);
        QWidget::setTabOrder(import, format);
        QWidget::setTabOrder(format, options);
        QWidget::setTabOrder(options, destination);
        QWidget::setTabOrder(destination, select);
        QWidget::setTabOrder(select, preserve_dir_structure);
        QWidget::setTabOrder(preserve_dir_structure, details);

        retranslateUi(TranscodeDialog);
        QObject::connect(button_box, &QDialogButtonBox::accepted, TranscodeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(button_box, &QDialogButtonBox::rejected, TranscodeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TranscodeDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscodeDialog)
    {
        TranscodeDialog->setWindowTitle(QCoreApplication::translate("TranscodeDialog", "Transcode Music", nullptr));
        input_group->setTitle(QCoreApplication::translate("TranscodeDialog", "Files to transcode", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = files->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("TranscodeDialog", "Import Directory", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("TranscodeDialog", "Directory", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TranscodeDialog", "Filename", nullptr));
        add->setText(QCoreApplication::translate("TranscodeDialog", "Add...", nullptr));
        remove->setText(QCoreApplication::translate("TranscodeDialog", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        import->setToolTip(QCoreApplication::translate("TranscodeDialog", "Add all tracks from a directory and all its subdirectories", nullptr));
#endif // QT_CONFIG(tooltip)
        import->setText(QCoreApplication::translate("TranscodeDialog", "Import...", nullptr));
        output_group->setTitle(QCoreApplication::translate("TranscodeDialog", "Output options", nullptr));
        label_1->setText(QCoreApplication::translate("TranscodeDialog", "Audio format", nullptr));
        options->setText(QCoreApplication::translate("TranscodeDialog", "Options...", nullptr));
        label_2->setText(QCoreApplication::translate("TranscodeDialog", "Destination", nullptr));
        destination->setItemText(0, QCoreApplication::translate("TranscodeDialog", "Alongside the originals", nullptr));

        select->setText(QCoreApplication::translate("TranscodeDialog", "Select...", nullptr));
        preserve_dir_structure->setText(QCoreApplication::translate("TranscodeDialog", "Preserve directory structure in output directory (import only)", nullptr));
        progress_group->setTitle(QCoreApplication::translate("TranscodeDialog", "Progress", nullptr));
        details->setText(QCoreApplication::translate("TranscodeDialog", "Details...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscodeDialog: public Ui_TranscodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEDIALOG_H
