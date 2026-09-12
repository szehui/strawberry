/********************************************************************************
** Form generated from reading UI file 'radioviewcontainer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOVIEWCONTAINER_H
#define UI_RADIOVIEWCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "radios/radiobrowsersearchview.h"
#include "radios/radioview.h"

QT_BEGIN_NAMESPACE

class Ui_RadioViewContainer
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tab_widget;
    QWidget *tab_channels;
    QVBoxLayout *layout_channels;
    QHBoxLayout *horizontalLayout;
    QToolButton *refresh;
    QSpacerItem *horizontalSpacer;
    RadioView *view;
    RadioBrowserSearchView *search_view;

    void setupUi(QWidget *RadioViewContainer)
    {
        if (RadioViewContainer->objectName().isEmpty())
            RadioViewContainer->setObjectName("RadioViewContainer");
        RadioViewContainer->resize(424, 395);
        verticalLayout = new QVBoxLayout(RadioViewContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tab_widget = new QTabWidget(RadioViewContainer);
        tab_widget->setObjectName("tab_widget");
        tab_channels = new QWidget();
        tab_channels->setObjectName("tab_channels");
        layout_channels = new QVBoxLayout(tab_channels);
        layout_channels->setSpacing(0);
        layout_channels->setObjectName("layout_channels");
        layout_channels->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        refresh = new QToolButton(tab_channels);
        refresh->setObjectName("refresh");
        refresh->setEnabled(true);
        refresh->setIconSize(QSize(22, 22));
        refresh->setAutoRaise(true);

        horizontalLayout->addWidget(refresh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        layout_channels->addLayout(horizontalLayout);

        view = new RadioView(tab_channels);
        view->setObjectName("view");
        view->setProperty("showDropIndicator", QVariant(false));
        view->setDragEnabled(true);
        view->setDragDropMode(QAbstractItemView::DragDrop);
        view->setAlternatingRowColors(true);
        view->setIconSize(QSize(16, 16));
        view->setUniformRowHeights(true);
        view->setAllColumnsShowFocus(true);
        view->setHeaderHidden(true);

        layout_channels->addWidget(view);

        tab_widget->addTab(tab_channels, QString());
        search_view = new RadioBrowserSearchView();
        search_view->setObjectName("search_view");
        tab_widget->addTab(search_view, QString());

        verticalLayout->addWidget(tab_widget);


        retranslateUi(RadioViewContainer);

        tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RadioViewContainer);
    } // setupUi

    void retranslateUi(QWidget *RadioViewContainer)
    {
        RadioViewContainer->setWindowTitle(QCoreApplication::translate("RadioViewContainer", "Form", nullptr));
        refresh->setText(QString());
        tab_widget->setTabText(tab_widget->indexOf(tab_channels), QCoreApplication::translate("RadioViewContainer", "Channels", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(search_view), QCoreApplication::translate("RadioViewContainer", "Radio Browser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RadioViewContainer: public Ui_RadioViewContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOVIEWCONTAINER_H
