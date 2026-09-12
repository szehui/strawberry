/********************************************************************************
** Form generated from reading UI file 'smartplaylistsviewcontainer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTPLAYLISTSVIEWCONTAINER_H
#define UI_SMARTPLAYLISTSVIEWCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "smartplaylists/smartplaylistsview.h"

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistsViewContainer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *new_;
    QToolButton *edit_;
    QToolButton *delete_;
    QToolButton *restore_;
    QSpacerItem *spacer_buttons;
    SmartPlaylistsView *view;

    void setupUi(QWidget *SmartPlaylistsViewContainer)
    {
        if (SmartPlaylistsViewContainer->objectName().isEmpty())
            SmartPlaylistsViewContainer->setObjectName("SmartPlaylistsViewContainer");
        SmartPlaylistsViewContainer->resize(415, 495);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmartPlaylistsViewContainer->sizePolicy().hasHeightForWidth());
        SmartPlaylistsViewContainer->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SmartPlaylistsViewContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(SmartPlaylistsViewContainer);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        new_ = new QToolButton(widget);
        new_->setObjectName("new_");
        new_->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(new_);

        edit_ = new QToolButton(widget);
        edit_->setObjectName("edit_");
        edit_->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(edit_);

        delete_ = new QToolButton(widget);
        delete_->setObjectName("delete_");
        delete_->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(delete_);

        restore_ = new QToolButton(widget);
        restore_->setObjectName("restore_");
        restore_->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(restore_);

        spacer_buttons = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_buttons);


        verticalLayout->addWidget(widget);

        view = new SmartPlaylistsView(SmartPlaylistsViewContainer);
        view->setObjectName("view");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(view);


        retranslateUi(SmartPlaylistsViewContainer);

        QMetaObject::connectSlotsByName(SmartPlaylistsViewContainer);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistsViewContainer)
    {
#if QT_CONFIG(tooltip)
        new_->setToolTip(QCoreApplication::translate("SmartPlaylistsViewContainer", "New smart playlist", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        edit_->setToolTip(QCoreApplication::translate("SmartPlaylistsViewContainer", "Edit smart playlist", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        delete_->setToolTip(QCoreApplication::translate("SmartPlaylistsViewContainer", "Delete smart playlist", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        restore_->setToolTip(QCoreApplication::translate("SmartPlaylistsViewContainer", "Restore defaults", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)SmartPlaylistsViewContainer;
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistsViewContainer: public Ui_SmartPlaylistsViewContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTPLAYLISTSVIEWCONTAINER_H
