/********************************************************************************
** Form generated from reading UI file 'collectionfilterwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLECTIONFILTERWIDGET_H
#define UI_COLLECTIONFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "widgets/searchfield.h"

QT_BEGIN_NAMESPACE

class Ui_CollectionFilterWidget
{
public:
    QAction *filter_age_all;
    QAction *filter_age_today;
    QAction *filter_age_week;
    QAction *filter_age_three_months;
    QAction *filter_age_year;
    QAction *filter_age_month;
    QAction *filter_min_rating_all;
    QAction *filter_min_rating_non_null;
    QAction *filter_min_rating_20p;
    QAction *filter_min_rating_40p;
    QAction *filter_min_rating_60p;
    QAction *filter_min_rating_80p;
    QAction *save_grouping;
    QAction *manage_groupings;
    QHBoxLayout *horizontalLayout;
    SearchField *search_field;
    QToolButton *options;

    void setupUi(QWidget *CollectionFilterWidget)
    {
        if (CollectionFilterWidget->objectName().isEmpty())
            CollectionFilterWidget->setObjectName("CollectionFilterWidget");
        CollectionFilterWidget->resize(400, 30);
        filter_age_all = new QAction(CollectionFilterWidget);
        filter_age_all->setObjectName("filter_age_all");
        filter_age_all->setCheckable(true);
        filter_age_all->setChecked(true);
        filter_age_today = new QAction(CollectionFilterWidget);
        filter_age_today->setObjectName("filter_age_today");
        filter_age_today->setCheckable(true);
        filter_age_week = new QAction(CollectionFilterWidget);
        filter_age_week->setObjectName("filter_age_week");
        filter_age_week->setCheckable(true);
        filter_age_three_months = new QAction(CollectionFilterWidget);
        filter_age_three_months->setObjectName("filter_age_three_months");
        filter_age_three_months->setCheckable(true);
        filter_age_year = new QAction(CollectionFilterWidget);
        filter_age_year->setObjectName("filter_age_year");
        filter_age_year->setCheckable(true);
        filter_age_month = new QAction(CollectionFilterWidget);
        filter_age_month->setObjectName("filter_age_month");
        filter_age_month->setCheckable(true);
        filter_min_rating_all = new QAction(CollectionFilterWidget);
        filter_min_rating_all->setObjectName("filter_min_rating_all");
        filter_min_rating_all->setCheckable(true);
        filter_min_rating_all->setChecked(true);
        filter_min_rating_non_null = new QAction(CollectionFilterWidget);
        filter_min_rating_non_null->setObjectName("filter_min_rating_non_null");
        filter_min_rating_non_null->setCheckable(true);
        filter_min_rating_20p = new QAction(CollectionFilterWidget);
        filter_min_rating_20p->setObjectName("filter_min_rating_20p");
        filter_min_rating_20p->setCheckable(true);
        filter_min_rating_40p = new QAction(CollectionFilterWidget);
        filter_min_rating_40p->setObjectName("filter_min_rating_40p");
        filter_min_rating_40p->setCheckable(true);
        filter_min_rating_60p = new QAction(CollectionFilterWidget);
        filter_min_rating_60p->setObjectName("filter_min_rating_60p");
        filter_min_rating_60p->setCheckable(true);
        filter_min_rating_80p = new QAction(CollectionFilterWidget);
        filter_min_rating_80p->setObjectName("filter_min_rating_80p");
        filter_min_rating_80p->setCheckable(true);
        save_grouping = new QAction(CollectionFilterWidget);
        save_grouping->setObjectName("save_grouping");
        manage_groupings = new QAction(CollectionFilterWidget);
        manage_groupings->setObjectName("manage_groupings");
        horizontalLayout = new QHBoxLayout(CollectionFilterWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        search_field = new SearchField(CollectionFilterWidget);
        search_field->setObjectName("search_field");

        horizontalLayout->addWidget(search_field);

        options = new QToolButton(CollectionFilterWidget);
        options->setObjectName("options");
        options->setIconSize(QSize(16, 16));
        options->setPopupMode(QToolButton::MenuButtonPopup);
        options->setAutoRaise(true);

        horizontalLayout->addWidget(options);


        retranslateUi(CollectionFilterWidget);

        QMetaObject::connectSlotsByName(CollectionFilterWidget);
    } // setupUi

    void retranslateUi(QWidget *CollectionFilterWidget)
    {
        CollectionFilterWidget->setWindowTitle(QCoreApplication::translate("CollectionFilterWidget", "Collection Filter", nullptr));
        filter_age_all->setText(QCoreApplication::translate("CollectionFilterWidget", "Entire collection", nullptr));
        filter_age_today->setText(QCoreApplication::translate("CollectionFilterWidget", "Added today", nullptr));
        filter_age_week->setText(QCoreApplication::translate("CollectionFilterWidget", "Added this week", nullptr));
        filter_age_three_months->setText(QCoreApplication::translate("CollectionFilterWidget", "Added within three months", nullptr));
#if QT_CONFIG(tooltip)
        filter_age_three_months->setToolTip(QCoreApplication::translate("CollectionFilterWidget", "Added within three months", nullptr));
#endif // QT_CONFIG(tooltip)
        filter_age_year->setText(QCoreApplication::translate("CollectionFilterWidget", "Added this year", nullptr));
        filter_age_month->setText(QCoreApplication::translate("CollectionFilterWidget", "Added this month", nullptr));
        filter_min_rating_all->setText(QCoreApplication::translate("CollectionFilterWidget", "Any rating", nullptr));
        filter_min_rating_non_null->setText(QCoreApplication::translate("CollectionFilterWidget", "Rating non null", nullptr));
        filter_min_rating_20p->setText(QCoreApplication::translate("CollectionFilterWidget", "Rating greater than 1 star", nullptr));
        filter_min_rating_40p->setText(QCoreApplication::translate("CollectionFilterWidget", "Rating greater than 2 stars", nullptr));
        filter_min_rating_60p->setText(QCoreApplication::translate("CollectionFilterWidget", "Rating greater than 3 stars", nullptr));
        filter_min_rating_80p->setText(QCoreApplication::translate("CollectionFilterWidget", "Rating greater than 4 stars", nullptr));
        save_grouping->setText(QCoreApplication::translate("CollectionFilterWidget", "Save current grouping", nullptr));
        manage_groupings->setText(QCoreApplication::translate("CollectionFilterWidget", "Manage saved groupings", nullptr));
        search_field->setProperty("placeholderText", QVariant(QCoreApplication::translate("CollectionFilterWidget", "Enter search terms here", nullptr)));
#if QT_CONFIG(accessibility)
        options->setAccessibleName(QCoreApplication::translate("CollectionFilterWidget", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class CollectionFilterWidget: public Ui_CollectionFilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLECTIONFILTERWIDGET_H
