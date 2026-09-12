/********************************************************************************
** Form generated from reading UI file 'streamingsearchview.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMINGSEARCHVIEW_H
#define UI_STREAMINGSEARCHVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/autoexpandingtreeview.h"
#include "widgets/searchfield.h"

QT_BEGIN_NAMESPACE

class Ui_StreamingSearchView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_search;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *layout_top;
    QHBoxLayout *layout_search;
    SearchField *search;
    QToolButton *settings;
    QWidget *widget_searchby;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radiobutton_search_artists;
    QRadioButton *radiobutton_search_albums;
    QRadioButton *radiobutton_search_songs;
    QSpacerItem *spacer_searchby;
    QVBoxLayout *layout_progress;
    QLabel *label_status;
    QProgressBar *progressbar;
    QStackedWidget *results_stack;
    QWidget *results_page;
    QVBoxLayout *verticalLayout_3;
    AutoExpandingTreeView *results;
    QWidget *help_page;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *help_frame;
    QWidget *help_frame_contents;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_helptext;
    QSpacerItem *spacer_helptext;

    void setupUi(QWidget *StreamingSearchView)
    {
        if (StreamingSearchView->objectName().isEmpty())
            StreamingSearchView->setObjectName("StreamingSearchView");
        StreamingSearchView->resize(400, 660);
        verticalLayout = new QVBoxLayout(StreamingSearchView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_search = new QWidget(StreamingSearchView);
        widget_search->setObjectName("widget_search");
        horizontalLayout = new QHBoxLayout(widget_search);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        layout_top = new QVBoxLayout();
        layout_top->setObjectName("layout_top");
        layout_search = new QHBoxLayout();
        layout_search->setObjectName("layout_search");
        search = new SearchField(widget_search);
        search->setObjectName("search");

        layout_search->addWidget(search);

        settings = new QToolButton(widget_search);
        settings->setObjectName("settings");
        settings->setMinimumSize(QSize(20, 0));
        settings->setIconSize(QSize(16, 16));
        settings->setPopupMode(QToolButton::MenuButtonPopup);
        settings->setAutoRaise(true);

        layout_search->addWidget(settings);


        layout_top->addLayout(layout_search);

        widget_searchby = new QWidget(widget_search);
        widget_searchby->setObjectName("widget_searchby");
        widget_searchby->setMinimumSize(QSize(0, 20));
        horizontalLayout_2 = new QHBoxLayout(widget_searchby);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radiobutton_search_artists = new QRadioButton(widget_searchby);
        radiobutton_search_artists->setObjectName("radiobutton_search_artists");

        horizontalLayout_2->addWidget(radiobutton_search_artists);

        radiobutton_search_albums = new QRadioButton(widget_searchby);
        radiobutton_search_albums->setObjectName("radiobutton_search_albums");

        horizontalLayout_2->addWidget(radiobutton_search_albums);

        radiobutton_search_songs = new QRadioButton(widget_searchby);
        radiobutton_search_songs->setObjectName("radiobutton_search_songs");

        horizontalLayout_2->addWidget(radiobutton_search_songs);

        spacer_searchby = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_searchby);


        layout_top->addWidget(widget_searchby);

        layout_progress = new QVBoxLayout();
        layout_progress->setObjectName("layout_progress");
        label_status = new QLabel(widget_search);
        label_status->setObjectName("label_status");
        label_status->setWordWrap(true);

        layout_progress->addWidget(label_status);

        progressbar = new QProgressBar(widget_search);
        progressbar->setObjectName("progressbar");
        progressbar->setValue(0);

        layout_progress->addWidget(progressbar);


        layout_top->addLayout(layout_progress);


        horizontalLayout->addLayout(layout_top);


        verticalLayout->addWidget(widget_search);

        results_stack = new QStackedWidget(StreamingSearchView);
        results_stack->setObjectName("results_stack");
        results_page = new QWidget();
        results_page->setObjectName("results_page");
        verticalLayout_3 = new QVBoxLayout(results_page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        results = new AutoExpandingTreeView(results_page);
        results->setObjectName("results");
        results->setEditTriggers(QAbstractItemView::NoEditTriggers);
        results->setDragEnabled(true);
        results->setDragDropMode(QAbstractItemView::DragOnly);
        results->setSelectionMode(QAbstractItemView::ExtendedSelection);
        results->setAllColumnsShowFocus(true);
        results->header()->setVisible(false);

        verticalLayout_3->addWidget(results);

        results_stack->addWidget(results_page);
        help_page = new QWidget();
        help_page->setObjectName("help_page");
        verticalLayout_6 = new QVBoxLayout(help_page);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        help_frame = new QScrollArea(help_page);
        help_frame->setObjectName("help_frame");
        help_frame->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        help_frame->setWidgetResizable(true);
        help_frame_contents = new QWidget();
        help_frame_contents->setObjectName("help_frame_contents");
        help_frame_contents->setGeometry(QRect(0, 0, 398, 518));
        verticalLayout_5 = new QVBoxLayout(help_frame_contents);
        verticalLayout_5->setObjectName("verticalLayout_5");
        widget = new QWidget(help_frame_contents);
        widget->setObjectName("widget");
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(32, 16, 32, 64);
        label_helptext = new QLabel(widget);
        label_helptext->setObjectName("label_helptext");
        label_helptext->setAlignment(Qt::AlignCenter);
        label_helptext->setWordWrap(true);
        label_helptext->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(label_helptext);

        spacer_helptext = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(spacer_helptext);


        verticalLayout_5->addWidget(widget);

        help_frame->setWidget(help_frame_contents);

        verticalLayout_6->addWidget(help_frame);

        results_stack->addWidget(help_page);

        verticalLayout->addWidget(results_stack);


        retranslateUi(StreamingSearchView);

        results_stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(StreamingSearchView);
    } // setupUi

    void retranslateUi(QWidget *StreamingSearchView)
    {
        StreamingSearchView->setWindowTitle(QCoreApplication::translate("StreamingSearchView", "Streaming Search View", nullptr));
        search->setProperty("placeholderText", QVariant(QString()));
#if QT_CONFIG(accessibility)
        settings->setAccessibleName(QCoreApplication::translate("StreamingSearchView", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
        radiobutton_search_artists->setText(QCoreApplication::translate("StreamingSearchView", "artists", nullptr));
        radiobutton_search_albums->setText(QCoreApplication::translate("StreamingSearchView", "albums", nullptr));
        radiobutton_search_songs->setText(QCoreApplication::translate("StreamingSearchView", "songs", nullptr));
        label_status->setText(QString());
        label_helptext->setText(QCoreApplication::translate("StreamingSearchView", "Enter search terms above to find music", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StreamingSearchView: public Ui_StreamingSearchView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMINGSEARCHVIEW_H
