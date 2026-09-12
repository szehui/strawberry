/********************************************************************************
** Form generated from reading UI file 'playlistcontainer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTCONTAINER_H
#define UI_PLAYLISTCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "playlist/playlisttabbar.h"
#include "playlist/playlistview.h"
#include "widgets/searchfield.h"

QT_BEGIN_NAMESPACE

class Ui_PlaylistContainer
{
public:
    QVBoxLayout *verticalLayout_2;
    PlaylistTabBar *tab_bar;
    QFrame *toolbar;
    QHBoxLayout *horizontalLayout;
    QToolButton *create_new;
    QToolButton *load;
    QToolButton *save;
    QToolButton *clear;
    QToolButton *undo;
    QToolButton *redo;
    QFrame *line;
    SearchField *search_field;
    PlaylistView *playlist;

    void setupUi(QWidget *PlaylistContainer)
    {
        if (PlaylistContainer->objectName().isEmpty())
            PlaylistContainer->setObjectName("PlaylistContainer");
        PlaylistContainer->resize(987, 707);
        PlaylistContainer->setStyleSheet(QString::fromUtf8("#toolbar {\n"
"  border-color: palette(dark);\n"
"  border-style: solid;\n"
"  border-width: 0px 1px 0px 1px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(PlaylistContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tab_bar = new PlaylistTabBar(PlaylistContainer);
        tab_bar->setObjectName("tab_bar");

        verticalLayout_2->addWidget(tab_bar);

        toolbar = new QFrame(PlaylistContainer);
        toolbar->setObjectName("toolbar");
        horizontalLayout = new QHBoxLayout(toolbar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        create_new = new QToolButton(toolbar);
        create_new->setObjectName("create_new");
        create_new->setIconSize(QSize(20, 20));
        create_new->setAutoRaise(true);

        horizontalLayout->addWidget(create_new);

        load = new QToolButton(toolbar);
        load->setObjectName("load");
        load->setIconSize(QSize(20, 20));
        load->setAutoRaise(true);

        horizontalLayout->addWidget(load);

        save = new QToolButton(toolbar);
        save->setObjectName("save");
        save->setIconSize(QSize(20, 20));
        save->setAutoRaise(true);

        horizontalLayout->addWidget(save);

        clear = new QToolButton(toolbar);
        clear->setObjectName("clear");
        clear->setIconSize(QSize(20, 20));
        clear->setAutoRaise(true);

        horizontalLayout->addWidget(clear);

        undo = new QToolButton(toolbar);
        undo->setObjectName("undo");
        undo->setIconSize(QSize(20, 20));
        undo->setAutoRaise(true);

        horizontalLayout->addWidget(undo);

        redo = new QToolButton(toolbar);
        redo->setObjectName("redo");
        redo->setIconSize(QSize(20, 20));
        redo->setAutoRaise(true);

        horizontalLayout->addWidget(redo);

        line = new QFrame(toolbar);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        search_field = new SearchField(toolbar);
        search_field->setObjectName("search_field");

        horizontalLayout->addWidget(search_field);


        verticalLayout_2->addWidget(toolbar);

        playlist = new PlaylistView(PlaylistContainer);
        playlist->setObjectName("playlist");
        playlist->setAcceptDrops(true);
        playlist->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        playlist->setDragEnabled(true);
        playlist->setDragDropMode(QAbstractItemView::DragDrop);
        playlist->setSelectionMode(QAbstractItemView::ExtendedSelection);
        playlist->setRootIsDecorated(false);
        playlist->setUniformRowHeights(true);
        playlist->setItemsExpandable(false);
        playlist->setSortingEnabled(true);
        playlist->setAllColumnsShowFocus(true);

        verticalLayout_2->addWidget(playlist);


        retranslateUi(PlaylistContainer);

        QMetaObject::connectSlotsByName(PlaylistContainer);
    } // setupUi

    void retranslateUi(QWidget *PlaylistContainer)
    {
        PlaylistContainer->setWindowTitle(QCoreApplication::translate("PlaylistContainer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaylistContainer: public Ui_PlaylistContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTCONTAINER_H
