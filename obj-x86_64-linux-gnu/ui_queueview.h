/********************************************************************************
** Form generated from reading UI file 'queueview.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUEVIEW_H
#define UI_QUEUEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueueView
{
public:
    QVBoxLayout *layout_queueview;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *move_down;
    QToolButton *move_up;
    QToolButton *remove;
    QToolButton *clear;
    QSpacerItem *spacer;
    QLabel *summary;
    QTreeView *list;

    void setupUi(QWidget *QueueView)
    {
        if (QueueView->objectName().isEmpty())
            QueueView->setObjectName("QueueView");
        QueueView->resize(582, 363);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        QueueView->setWindowIcon(icon);
        layout_queueview = new QVBoxLayout(QueueView);
        layout_queueview->setSpacing(0);
        layout_queueview->setObjectName("layout_queueview");
        layout_queueview->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        move_down = new QToolButton(QueueView);
        move_down->setObjectName("move_down");
        move_down->setEnabled(false);
        move_down->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(move_down);

        move_up = new QToolButton(QueueView);
        move_up->setObjectName("move_up");
        move_up->setEnabled(false);
        move_up->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(move_up);

        remove = new QToolButton(QueueView);
        remove->setObjectName("remove");
        remove->setEnabled(false);
        remove->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(remove);

        clear = new QToolButton(QueueView);
        clear->setObjectName("clear");
        clear->setEnabled(false);
        clear->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(clear);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer);

        summary = new QLabel(QueueView);
        summary->setObjectName("summary");

        horizontalLayout->addWidget(summary);


        verticalLayout->addLayout(horizontalLayout);

        list = new QTreeView(QueueView);
        list->setObjectName("list");
        list->setAcceptDrops(true);
        list->setProperty("showDropIndicator", QVariant(true));
        list->setDragEnabled(true);
        list->setDragDropMode(QAbstractItemView::DragDrop);
        list->setDefaultDropAction(Qt::MoveAction);
        list->setAlternatingRowColors(true);
        list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        list->setSelectionBehavior(QAbstractItemView::SelectRows);
        list->setRootIsDecorated(false);
        list->header()->setVisible(false);

        verticalLayout->addWidget(list);


        layout_queueview->addLayout(verticalLayout);


        retranslateUi(QueueView);

        QMetaObject::connectSlotsByName(QueueView);
    } // setupUi

    void retranslateUi(QWidget *QueueView)
    {
        QueueView->setWindowTitle(QCoreApplication::translate("QueueView", "QueueView", nullptr));
#if QT_CONFIG(tooltip)
        move_down->setToolTip(QCoreApplication::translate("QueueView", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        move_down->setShortcut(QCoreApplication::translate("QueueView", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        move_up->setToolTip(QCoreApplication::translate("QueueView", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        move_up->setShortcut(QCoreApplication::translate("QueueView", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        remove->setToolTip(QCoreApplication::translate("QueueView", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
        remove->setText(QString());
#if QT_CONFIG(tooltip)
        clear->setToolTip(QCoreApplication::translate("QueueView", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        clear->setShortcut(QCoreApplication::translate("QueueView", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        summary->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QueueView: public Ui_QueueView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUEVIEW_H
