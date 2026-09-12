/********************************************************************************
** Form generated from reading UI file 'smartplaylistsearchpreview.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTPLAYLISTSEARCHPREVIEW_H
#define UI_SMARTPLAYLISTSEARCHPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "playlist/playlistview.h"
#include "widgets/busyindicator.h"

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistSearchPreview
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *preview_label;
    QSpacerItem *horizontalSpacer;
    QLabel *count_label;
    QWidget *busy_container;
    QHBoxLayout *horizontalLayout;
    BusyIndicator *widget;
    QLabel *label_2;
    PlaylistView *tree;

    void setupUi(QWidget *SmartPlaylistSearchPreview)
    {
        if (SmartPlaylistSearchPreview->objectName().isEmpty())
            SmartPlaylistSearchPreview->setObjectName("SmartPlaylistSearchPreview");
        SmartPlaylistSearchPreview->resize(651, 377);
        verticalLayout = new QVBoxLayout(SmartPlaylistSearchPreview);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        preview_label = new QLabel(SmartPlaylistSearchPreview);
        preview_label->setObjectName("preview_label");

        horizontalLayout_2->addWidget(preview_label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        count_label = new QLabel(SmartPlaylistSearchPreview);
        count_label->setObjectName("count_label");

        horizontalLayout_2->addWidget(count_label);

        busy_container = new QWidget(SmartPlaylistSearchPreview);
        busy_container->setObjectName("busy_container");
        horizontalLayout = new QHBoxLayout(busy_container);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new BusyIndicator(busy_container);
        widget->setObjectName("widget");

        horizontalLayout->addWidget(widget);

        label_2 = new QLabel(busy_container);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);


        horizontalLayout_2->addWidget(busy_container);


        verticalLayout->addLayout(horizontalLayout_2);

        tree = new PlaylistView(SmartPlaylistSearchPreview);
        tree->setObjectName("tree");
        tree->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tree->setRootIsDecorated(false);
        tree->setItemsExpandable(false);
        tree->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(tree);


        retranslateUi(SmartPlaylistSearchPreview);

        QMetaObject::connectSlotsByName(SmartPlaylistSearchPreview);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistSearchPreview)
    {
        SmartPlaylistSearchPreview->setWindowTitle(QCoreApplication::translate("SmartPlaylistSearchPreview", "Form", nullptr));
        preview_label->setText(QCoreApplication::translate("SmartPlaylistSearchPreview", "Preview", nullptr));
        label_2->setText(QCoreApplication::translate("SmartPlaylistSearchPreview", "Loading...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistSearchPreview: public Ui_SmartPlaylistSearchPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTPLAYLISTSEARCHPREVIEW_H
