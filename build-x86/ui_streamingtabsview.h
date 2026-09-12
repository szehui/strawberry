/********************************************************************************
** Form generated from reading UI file 'streamingtabsview.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMINGTABSVIEW_H
#define UI_STREAMINGTABSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "streaming/streamingcollectionviewcontainer.h"
#include "streaming/streamingsearchview.h"

QT_BEGIN_NAMESPACE

class Ui_StreamingTabsView
{
public:
    QVBoxLayout *layout_streamingtabsview;
    QTabWidget *tabs;
    QWidget *artists;
    QVBoxLayout *verticalLayout_7;
    StreamingCollectionViewContainer *artists_collection;
    QWidget *albums;
    QVBoxLayout *verticalLayout_8;
    StreamingCollectionViewContainer *albums_collection;
    QWidget *songs;
    QVBoxLayout *verticalLayout_9;
    StreamingCollectionViewContainer *songs_collection;
    QWidget *search;
    QVBoxLayout *verticalLayout_2;
    StreamingSearchView *search_view;

    void setupUi(QWidget *StreamingTabsView)
    {
        if (StreamingTabsView->objectName().isEmpty())
            StreamingTabsView->setObjectName("StreamingTabsView");
        StreamingTabsView->resize(400, 660);
        layout_streamingtabsview = new QVBoxLayout(StreamingTabsView);
        layout_streamingtabsview->setObjectName("layout_streamingtabsview");
        tabs = new QTabWidget(StreamingTabsView);
        tabs->setObjectName("tabs");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabs->sizePolicy().hasHeightForWidth());
        tabs->setSizePolicy(sizePolicy);
        artists = new QWidget();
        artists->setObjectName("artists");
        verticalLayout_7 = new QVBoxLayout(artists);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        artists_collection = new StreamingCollectionViewContainer(artists);
        artists_collection->setObjectName("artists_collection");

        verticalLayout_7->addWidget(artists_collection);

        tabs->addTab(artists, QString());
        albums = new QWidget();
        albums->setObjectName("albums");
        verticalLayout_8 = new QVBoxLayout(albums);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        albums_collection = new StreamingCollectionViewContainer(albums);
        albums_collection->setObjectName("albums_collection");

        verticalLayout_8->addWidget(albums_collection);

        tabs->addTab(albums, QString());
        songs = new QWidget();
        songs->setObjectName("songs");
        verticalLayout_9 = new QVBoxLayout(songs);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        songs_collection = new StreamingCollectionViewContainer(songs);
        songs_collection->setObjectName("songs_collection");

        verticalLayout_9->addWidget(songs_collection);

        tabs->addTab(songs, QString());
        search = new QWidget();
        search->setObjectName("search");
        verticalLayout_2 = new QVBoxLayout(search);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        search_view = new StreamingSearchView(search);
        search_view->setObjectName("search_view");

        verticalLayout_2->addWidget(search_view);

        tabs->addTab(search, QString());

        layout_streamingtabsview->addWidget(tabs);


        retranslateUi(StreamingTabsView);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StreamingTabsView);
    } // setupUi

    void retranslateUi(QWidget *StreamingTabsView)
    {
        StreamingTabsView->setWindowTitle(QCoreApplication::translate("StreamingTabsView", "Streaming Tabs View", nullptr));
        tabs->setTabText(tabs->indexOf(artists), QCoreApplication::translate("StreamingTabsView", "Artists", nullptr));
        tabs->setTabText(tabs->indexOf(albums), QCoreApplication::translate("StreamingTabsView", "Albums", nullptr));
        tabs->setTabText(tabs->indexOf(songs), QCoreApplication::translate("StreamingTabsView", "Songs", nullptr));
        tabs->setTabText(tabs->indexOf(search), QCoreApplication::translate("StreamingTabsView", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StreamingTabsView: public Ui_StreamingTabsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMINGTABSVIEW_H
