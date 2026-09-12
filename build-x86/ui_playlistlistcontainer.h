/********************************************************************************
** Form generated from reading UI file 'playlistlistcontainer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTLISTCONTAINER_H
#define UI_PLAYLISTLISTCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "playlist/playlistlistview.h"
#include "widgets/autoexpandingtreeview.h"

QT_BEGIN_NAMESPACE

class Ui_PlaylistListContainer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *new_folder;
    QToolButton *remove;
    QFrame *line_1;
    QToolButton *save_playlist;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer;
    PlaylistListView *tree;

    void setupUi(QWidget *PlaylistListContainer)
    {
        if (PlaylistListContainer->objectName().isEmpty())
            PlaylistListContainer->setObjectName("PlaylistListContainer");
        PlaylistListContainer->resize(160, 503);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlaylistListContainer->sizePolicy().hasHeightForWidth());
        PlaylistListContainer->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(PlaylistListContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(PlaylistListContainer);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        new_folder = new QToolButton(widget);
        new_folder->setObjectName("new_folder");
        new_folder->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(new_folder);

        remove = new QToolButton(widget);
        remove->setObjectName("remove");
        remove->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(remove);

        line_1 = new QFrame(widget);
        line_1->setObjectName("line_1");
        line_1->setFrameShape(QFrame::VLine);
        line_1->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_1);

        save_playlist = new QToolButton(widget);
        save_playlist->setObjectName("save_playlist");
        save_playlist->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(save_playlist);

        line_2 = new QFrame(widget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        tree = new PlaylistListView(PlaylistListContainer);
        tree->setObjectName("tree");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tree->sizePolicy().hasHeightForWidth());
        tree->setSizePolicy(sizePolicy1);
        tree->setAcceptDrops(true);
        tree->setDragEnabled(true);
        tree->setDragDropMode(QAbstractItemView::InternalMove);
        tree->setDefaultDropAction(Qt::MoveAction);
        tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tree->setIconSize(QSize(16, 16));
        tree->header()->setVisible(false);

        verticalLayout->addWidget(tree);


        retranslateUi(PlaylistListContainer);

        QMetaObject::connectSlotsByName(PlaylistListContainer);
    } // setupUi

    void retranslateUi(QWidget *PlaylistListContainer)
    {
        PlaylistListContainer->setWindowTitle(QCoreApplication::translate("PlaylistListContainer", "Form", nullptr));
#if QT_CONFIG(tooltip)
        new_folder->setToolTip(QCoreApplication::translate("PlaylistListContainer", "New folder", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        remove->setToolTip(QCoreApplication::translate("PlaylistListContainer", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class PlaylistListContainer: public Ui_PlaylistListContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTLISTCONTAINER_H
