/********************************************************************************
** Form generated from reading UI file 'radiobrowsersearchview.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOBROWSERSEARCHVIEW_H
#define UI_RADIOBROWSERSEARCHVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/searchfield.h"

QT_BEGIN_NAMESPACE

class Ui_RadioBrowserSearchView
{
public:
    QVBoxLayout *verticalLayout;
    SearchField *search;
    QHBoxLayout *layout_filters;
    QComboBox *combo_country;
    QComboBox *combo_sort;
    QLabel *label_status;
    QStackedWidget *stacked;
    QWidget *page_results;
    QVBoxLayout *layout_results;
    QTreeView *results;
    QPushButton *button_loadmore;
    QWidget *page_help;
    QVBoxLayout *layout_help;
    QLabel *label_help;
    QSpacerItem *spacer_help;

    void setupUi(QWidget *RadioBrowserSearchView)
    {
        if (RadioBrowserSearchView->objectName().isEmpty())
            RadioBrowserSearchView->setObjectName("RadioBrowserSearchView");
        RadioBrowserSearchView->resize(400, 500);
        verticalLayout = new QVBoxLayout(RadioBrowserSearchView);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        search = new SearchField(RadioBrowserSearchView);
        search->setObjectName("search");

        verticalLayout->addWidget(search);

        layout_filters = new QHBoxLayout();
        layout_filters->setSpacing(4);
        layout_filters->setObjectName("layout_filters");
        combo_country = new QComboBox(RadioBrowserSearchView);
        combo_country->setObjectName("combo_country");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combo_country->sizePolicy().hasHeightForWidth());
        combo_country->setSizePolicy(sizePolicy);

        layout_filters->addWidget(combo_country);

        combo_sort = new QComboBox(RadioBrowserSearchView);
        combo_sort->setObjectName("combo_sort");
        sizePolicy.setHeightForWidth(combo_sort->sizePolicy().hasHeightForWidth());
        combo_sort->setSizePolicy(sizePolicy);

        layout_filters->addWidget(combo_sort);


        verticalLayout->addLayout(layout_filters);

        label_status = new QLabel(RadioBrowserSearchView);
        label_status->setObjectName("label_status");
        label_status->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_status);

        stacked = new QStackedWidget(RadioBrowserSearchView);
        stacked->setObjectName("stacked");
        page_results = new QWidget();
        page_results->setObjectName("page_results");
        layout_results = new QVBoxLayout(page_results);
        layout_results->setSpacing(0);
        layout_results->setObjectName("layout_results");
        layout_results->setContentsMargins(0, 0, 0, 0);
        results = new QTreeView(page_results);
        results->setObjectName("results");
        results->setEditTriggers(QAbstractItemView::NoEditTriggers);
        results->setDragEnabled(true);
        results->setDragDropMode(QAbstractItemView::DragOnly);
        results->setSelectionMode(QAbstractItemView::ExtendedSelection);
        results->setAlternatingRowColors(true);
        results->setRootIsDecorated(false);
        results->setUniformRowHeights(true);
        results->setAllColumnsShowFocus(true);
        results->header()->setVisible(true);

        layout_results->addWidget(results);

        button_loadmore = new QPushButton(page_results);
        button_loadmore->setObjectName("button_loadmore");
        button_loadmore->setVisible(false);

        layout_results->addWidget(button_loadmore);

        stacked->addWidget(page_results);
        page_help = new QWidget();
        page_help->setObjectName("page_help");
        layout_help = new QVBoxLayout(page_help);
        layout_help->setObjectName("layout_help");
        label_help = new QLabel(page_help);
        label_help->setObjectName("label_help");
        label_help->setAlignment(Qt::AlignCenter);
        label_help->setWordWrap(true);

        layout_help->addWidget(label_help);

        spacer_help = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_help->addItem(spacer_help);

        stacked->addWidget(page_help);

        verticalLayout->addWidget(stacked);


        retranslateUi(RadioBrowserSearchView);

        stacked->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RadioBrowserSearchView);
    } // setupUi

    void retranslateUi(QWidget *RadioBrowserSearchView)
    {
        search->setProperty("placeholderText", QVariant(QString()));
        label_status->setText(QString());
        button_loadmore->setText(QCoreApplication::translate("RadioBrowserSearchView", "Load more...", nullptr));
        label_help->setText(QCoreApplication::translate("RadioBrowserSearchView", "Search for radio stations using radio-browser.info", nullptr));
        (void)RadioBrowserSearchView;
    } // retranslateUi

};

namespace Ui {
    class RadioBrowserSearchView: public Ui_RadioBrowserSearchView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOBROWSERSEARCHVIEW_H
