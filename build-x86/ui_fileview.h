/********************************************************************************
** Form generated from reading UI file 'fileview.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEVIEW_H
#define UI_FILEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fileview/fileviewlist.h"
#include "fileview/fileviewtree.h"

QT_BEGIN_NAMESPACE

class Ui_FileView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *back;
    QToolButton *forward;
    QToolButton *up;
    QToolButton *home;
    QLineEdit *path;
    QToolButton *add_tree_root;
    QToolButton *remove_tree_root;
    QToolButton *toggle_view;
    QStackedWidget *view_stack;
    QWidget *list_page;
    QVBoxLayout *list_layout;
    FileViewList *list;
    QWidget *tree_page;
    QVBoxLayout *tree_layout;
    FileViewTree *tree;

    void setupUi(QWidget *FileView)
    {
        if (FileView->objectName().isEmpty())
            FileView->setObjectName("FileView");
        FileView->resize(400, 300);
        verticalLayout = new QVBoxLayout(FileView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        back = new QToolButton(FileView);
        back->setObjectName("back");
        back->setEnabled(false);
        back->setIconSize(QSize(22, 22));
        back->setAutoRaise(true);

        horizontalLayout->addWidget(back);

        forward = new QToolButton(FileView);
        forward->setObjectName("forward");
        forward->setEnabled(false);
        forward->setIconSize(QSize(22, 22));
        forward->setAutoRaise(true);

        horizontalLayout->addWidget(forward);

        up = new QToolButton(FileView);
        up->setObjectName("up");
        up->setIconSize(QSize(22, 22));
        up->setAutoRaise(true);

        horizontalLayout->addWidget(up);

        home = new QToolButton(FileView);
        home->setObjectName("home");
        home->setIconSize(QSize(22, 22));
        home->setAutoRaise(true);

        horizontalLayout->addWidget(home);

        path = new QLineEdit(FileView);
        path->setObjectName("path");

        horizontalLayout->addWidget(path);

        add_tree_root = new QToolButton(FileView);
        add_tree_root->setObjectName("add_tree_root");
        add_tree_root->setIconSize(QSize(22, 22));
        add_tree_root->setAutoRaise(true);

        horizontalLayout->addWidget(add_tree_root);

        remove_tree_root = new QToolButton(FileView);
        remove_tree_root->setObjectName("remove_tree_root");
        remove_tree_root->setIconSize(QSize(22, 22));
        remove_tree_root->setAutoRaise(true);

        horizontalLayout->addWidget(remove_tree_root);

        toggle_view = new QToolButton(FileView);
        toggle_view->setObjectName("toggle_view");
        toggle_view->setIconSize(QSize(22, 22));
        toggle_view->setAutoRaise(true);

        horizontalLayout->addWidget(toggle_view);


        verticalLayout->addLayout(horizontalLayout);

        view_stack = new QStackedWidget(FileView);
        view_stack->setObjectName("view_stack");
        list_page = new QWidget();
        list_page->setObjectName("list_page");
        list_layout = new QVBoxLayout(list_page);
        list_layout->setSpacing(0);
        list_layout->setObjectName("list_layout");
        list_layout->setContentsMargins(0, 0, 0, 0);
        list = new FileViewList(list_page);
        list->setObjectName("list");
        list->setDragEnabled(true);
        list->setDragDropMode(QAbstractItemView::DragOnly);
        list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        list->setSelectionBehavior(QAbstractItemView::SelectRows);
        list->setIconSize(QSize(16, 16));

        list_layout->addWidget(list);

        view_stack->addWidget(list_page);
        tree_page = new QWidget();
        tree_page->setObjectName("tree_page");
        tree_layout = new QVBoxLayout(tree_page);
        tree_layout->setSpacing(0);
        tree_layout->setObjectName("tree_layout");
        tree_layout->setContentsMargins(0, 0, 0, 0);
        tree = new FileViewTree(tree_page);
        tree->setObjectName("tree");
        tree->setDragEnabled(true);
        tree->setDragDropMode(QAbstractItemView::DragOnly);
        tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tree->setSelectionBehavior(QAbstractItemView::SelectRows);
        tree->setIconSize(QSize(16, 16));

        tree_layout->addWidget(tree);

        view_stack->addWidget(tree_page);

        verticalLayout->addWidget(view_stack);


        retranslateUi(FileView);

        view_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FileView);
    } // setupUi

    void retranslateUi(QWidget *FileView)
    {
        FileView->setWindowTitle(QCoreApplication::translate("FileView", "Form", nullptr));
#if QT_CONFIG(tooltip)
        add_tree_root->setToolTip(QCoreApplication::translate("FileView", "Add root directory", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        remove_tree_root->setToolTip(QCoreApplication::translate("FileView", "Remove selected root directory", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        toggle_view->setToolTip(QCoreApplication::translate("FileView", "Toggle between list and tree view", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class FileView: public Ui_FileView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEVIEW_H
