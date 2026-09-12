/********************************************************************************
** Form generated from reading UI file 'albumcovermanager.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMCOVERMANAGER_H
#define UI_ALBUMCOVERMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "covermanager/albumcovermanagerlist.h"
#include "widgets/searchfield.h"

QT_BEGIN_NAMESPACE

class Ui_CoverManager
{
public:
    QAction *action_fetch;
    QAction *action_load;
    QAction *action_add_to_playlist;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QListWidget *artists;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    SearchField *filter;
    QToolButton *view;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *total_albums;
    QLabel *without_cover;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *button_fetch;
    QPushButton *export_covers;
    AlbumCoverManagerList *albums;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CoverManager)
    {
        if (CoverManager->objectName().isEmpty())
            CoverManager->setObjectName("CoverManager");
        CoverManager->resize(903, 662);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        CoverManager->setWindowIcon(icon);
        action_fetch = new QAction(CoverManager);
        action_fetch->setObjectName("action_fetch");
        action_load = new QAction(CoverManager);
        action_load->setObjectName("action_load");
        action_add_to_playlist = new QAction(CoverManager);
        action_add_to_playlist->setObjectName("action_add_to_playlist");
        centralWidget = new QWidget(CoverManager);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        artists = new QListWidget(splitter);
        artists->setObjectName("artists");
        artists->setAlternatingRowColors(true);
        artists->setSelectionBehavior(QAbstractItemView::SelectRows);
        artists->setIconSize(QSize(24, 24));
        artists->setUniformItemSizes(true);
        splitter->addWidget(artists);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        filter = new SearchField(widget);
        filter->setObjectName("filter");

        horizontalLayout_2->addWidget(filter);

        view = new QToolButton(widget);
        view->setObjectName("view");
        view->setIconSize(QSize(16, 16));
        view->setPopupMode(QToolButton::MenuButtonPopup);
        view->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        view->setAutoRaise(true);

        horizontalLayout_2->addWidget(view);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 10, -1, 10);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_4->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(-1, 10, -1, 10);
        total_albums = new QLabel(widget);
        total_albums->setObjectName("total_albums");
        total_albums->setLayoutDirection(Qt::RightToLeft);
        total_albums->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(total_albums);

        without_cover = new QLabel(widget);
        without_cover->setObjectName("without_cover");
        without_cover->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(without_cover);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        button_fetch = new QPushButton(widget);
        button_fetch->setObjectName("button_fetch");
        button_fetch->setIconSize(QSize(16, 16));

        verticalLayout_3->addWidget(button_fetch);

        export_covers = new QPushButton(widget);
        export_covers->setObjectName("export_covers");

        verticalLayout_3->addWidget(export_covers);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        albums = new AlbumCoverManagerList(widget);
        albums->setObjectName("albums");
        albums->setDragEnabled(true);
        albums->setDragDropMode(QAbstractItemView::DragDrop);
        albums->setAlternatingRowColors(false);
        albums->setSelectionMode(QAbstractItemView::ExtendedSelection);
        albums->setIconSize(QSize(120, 120));
        albums->setFlow(QListView::LeftToRight);
        albums->setProperty("isWrapping", QVariant(true));
        albums->setResizeMode(QListView::Adjust);
        albums->setSpacing(2);
        albums->setViewMode(QListView::IconMode);
        albums->setWordWrap(true);

        verticalLayout->addWidget(albums);

        splitter->addWidget(widget);

        verticalLayout_2->addWidget(splitter);

        CoverManager->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CoverManager);
        statusBar->setObjectName("statusBar");
        CoverManager->setStatusBar(statusBar);
        QWidget::setTabOrder(artists, view);
        QWidget::setTabOrder(view, button_fetch);
        QWidget::setTabOrder(button_fetch, export_covers);
        QWidget::setTabOrder(export_covers, albums);

        retranslateUi(CoverManager);

        QMetaObject::connectSlotsByName(CoverManager);
    } // setupUi

    void retranslateUi(QMainWindow *CoverManager)
    {
        CoverManager->setWindowTitle(QCoreApplication::translate("CoverManager", "Cover Manager", nullptr));
        action_fetch->setText(QCoreApplication::translate("CoverManager", "Fetch automatically", nullptr));
        action_load->setText(QCoreApplication::translate("CoverManager", "Load", nullptr));
        action_add_to_playlist->setText(QCoreApplication::translate("CoverManager", "Add to playlist", nullptr));
        filter->setProperty("placeholderText", QVariant(QCoreApplication::translate("CoverManager", "Enter search terms here", nullptr)));
#if QT_CONFIG(accessibility)
        view->setAccessibleName(QCoreApplication::translate("CoverManager", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
        view->setText(QCoreApplication::translate("CoverManager", "View", nullptr));
        label_3->setText(QCoreApplication::translate("CoverManager", "Total albums:", nullptr));
        label_2->setText(QCoreApplication::translate("CoverManager", "Without cover:", nullptr));
        total_albums->setText(QCoreApplication::translate("CoverManager", "0", nullptr));
        without_cover->setText(QCoreApplication::translate("CoverManager", "0", nullptr));
        button_fetch->setText(QCoreApplication::translate("CoverManager", "Fetch Missing Covers", nullptr));
        export_covers->setText(QCoreApplication::translate("CoverManager", "Export Covers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoverManager: public Ui_CoverManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMCOVERMANAGER_H
