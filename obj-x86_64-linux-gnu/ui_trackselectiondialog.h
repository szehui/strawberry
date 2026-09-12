/********************************************************************************
** Form generated from reading UI file 'trackselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKSELECTIONDIALOG_H
#define UI_TRACKSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/busyindicator.h"

QT_BEGIN_NAMESPACE

class Ui_TrackSelectionDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QListWidget *song_list;
    QStackedWidget *stacked_widget;
    QWidget *loading_page;
    QVBoxLayout *verticalLayout;
    QSpacerItem *spacer_loading_page_top;
    QHBoxLayout *layout_loading_page;
    QSpacerItem *spacer_loading_left;
    BusyIndicator *progress;
    QSpacerItem *spacer_loading_right;
    QSpacerItem *spacer_loading_page_bottom;
    QWidget *error_page;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *spacer_error_page_top;
    QLabel *label_error_title;
    QLabel *label_error_text;
    QSpacerItem *spacer_error_page_bottom;
    QWidget *results_page;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_result_title;
    QTreeWidget *results;
    QHBoxLayout *layout_trackselectiondialog;
    BusyIndicator *loading;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *TrackSelectionDialog)
    {
        if (TrackSelectionDialog->objectName().isEmpty())
            TrackSelectionDialog->setObjectName("TrackSelectionDialog");
        TrackSelectionDialog->resize(773, 375);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        TrackSelectionDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(TrackSelectionDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter = new QSplitter(TrackSelectionDialog);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        song_list = new QListWidget(splitter);
        song_list->setObjectName("song_list");
        song_list->setUniformItemSizes(true);
        splitter->addWidget(song_list);
        stacked_widget = new QStackedWidget(splitter);
        stacked_widget->setObjectName("stacked_widget");
        loading_page = new QWidget();
        loading_page->setObjectName("loading_page");
        verticalLayout = new QVBoxLayout(loading_page);
        verticalLayout->setObjectName("verticalLayout");
        spacer_loading_page_top = new QSpacerItem(20, 133, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer_loading_page_top);

        layout_loading_page = new QHBoxLayout();
        layout_loading_page->setObjectName("layout_loading_page");
        spacer_loading_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_loading_page->addItem(spacer_loading_left);

        progress = new BusyIndicator(loading_page);
        progress->setObjectName("progress");

        layout_loading_page->addWidget(progress);

        spacer_loading_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_loading_page->addItem(spacer_loading_right);


        verticalLayout->addLayout(layout_loading_page);

        spacer_loading_page_bottom = new QSpacerItem(20, 133, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer_loading_page_bottom);

        stacked_widget->addWidget(loading_page);
        error_page = new QWidget();
        error_page->setObjectName("error_page");
        verticalLayout_4 = new QVBoxLayout(error_page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        spacer_error_page_top = new QSpacerItem(20, 124, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(spacer_error_page_top);

        label_error_title = new QLabel(error_page);
        label_error_title->setObjectName("label_error_title");
        label_error_title->setStyleSheet(QString::fromUtf8("QLabel { font-weight: bold; }"));
        label_error_title->setTextFormat(Qt::PlainText);
        label_error_title->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_error_title);

        label_error_text = new QLabel(error_page);
        label_error_text->setObjectName("label_error_text");
        label_error_text->setTextFormat(Qt::PlainText);
        label_error_text->setAlignment(Qt::AlignCenter);
        label_error_text->setWordWrap(true);
        label_error_text->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(label_error_text);

        spacer_error_page_bottom = new QSpacerItem(20, 124, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(spacer_error_page_bottom);

        stacked_widget->addWidget(error_page);
        results_page = new QWidget();
        results_page->setObjectName("results_page");
        verticalLayout_2 = new QVBoxLayout(results_page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_result_title = new QLabel(results_page);
        label_result_title->setObjectName("label_result_title");
        label_result_title->setStyleSheet(QString::fromUtf8("QLabel { font-weight: bold; }"));

        verticalLayout_2->addWidget(label_result_title);

        results = new QTreeWidget(results_page);
        results->setObjectName("results");
        results->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        results->setRootIsDecorated(false);
        results->header()->setMinimumSectionSize(50);
        results->header()->setDefaultSectionSize(150);

        verticalLayout_2->addWidget(results);

        stacked_widget->addWidget(results_page);
        splitter->addWidget(stacked_widget);

        verticalLayout_3->addWidget(splitter);

        layout_trackselectiondialog = new QHBoxLayout();
        layout_trackselectiondialog->setObjectName("layout_trackselectiondialog");
        loading = new BusyIndicator(TrackSelectionDialog);
        loading->setObjectName("loading");

        layout_trackselectiondialog->addWidget(loading);

        button_box = new QDialogButtonBox(TrackSelectionDialog);
        button_box->setObjectName("button_box");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_box->sizePolicy().hasHeightForWidth());
        button_box->setSizePolicy(sizePolicy1);
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        layout_trackselectiondialog->addWidget(button_box);


        verticalLayout_3->addLayout(layout_trackselectiondialog);


        retranslateUi(TrackSelectionDialog);
        QObject::connect(button_box, &QDialogButtonBox::accepted, TrackSelectionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(button_box, &QDialogButtonBox::rejected, TrackSelectionDialog, qOverload<>(&QDialog::reject));

        stacked_widget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TrackSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *TrackSelectionDialog)
    {
        TrackSelectionDialog->setWindowTitle(QCoreApplication::translate("TrackSelectionDialog", "Tag fetcher", nullptr));
        label_error_title->setText(QCoreApplication::translate("TrackSelectionDialog", "No results", nullptr));
        label_error_text->setText(QCoreApplication::translate("TrackSelectionDialog", "Strawberry was unable to find results for this file", nullptr));
        label_result_title->setText(QCoreApplication::translate("TrackSelectionDialog", "Select best possible match", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = results->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("TrackSelectionDialog", "Album", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("TrackSelectionDialog", "Artist", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("TrackSelectionDialog", "Album artist", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("TrackSelectionDialog", "Title", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("TrackSelectionDialog", "Year", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TrackSelectionDialog", "Track", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackSelectionDialog: public Ui_TrackSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKSELECTIONDIALOG_H
