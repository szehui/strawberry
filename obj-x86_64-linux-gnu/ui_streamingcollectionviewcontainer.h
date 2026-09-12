/********************************************************************************
** Form generated from reading UI file 'streamingcollectionviewcontainer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMINGCOLLECTIONVIEWCONTAINER_H
#define UI_STREAMINGCOLLECTIONVIEWCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <streaming/streamingcollectionview.h>
#include "collection/collectionfilterwidget.h"

QT_BEGIN_NAMESPACE

class Ui_StreamingCollectionViewContainer
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stacked;
    QWidget *help_page;
    QVBoxLayout *verticalLayout_4;
    QLabel *status;
    QProgressBar *progressbar;
    QHBoxLayout *layout_buttons;
    QSpacerItem *spacer_buttons;
    QPushButton *close;
    QPushButton *abort;
    QSpacerItem *verticalSpacer;
    QWidget *streamingcollection_page;
    QVBoxLayout *verticalLayout_3;
    CollectionFilterWidget *filter_widget;
    QPushButton *refresh;
    StreamingCollectionView *view;

    void setupUi(QWidget *StreamingCollectionViewContainer)
    {
        if (StreamingCollectionViewContainer->objectName().isEmpty())
            StreamingCollectionViewContainer->setObjectName("StreamingCollectionViewContainer");
        StreamingCollectionViewContainer->resize(300, 300);
        verticalLayout = new QVBoxLayout(StreamingCollectionViewContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stacked = new QStackedWidget(StreamingCollectionViewContainer);
        stacked->setObjectName("stacked");
        help_page = new QWidget();
        help_page->setObjectName("help_page");
        verticalLayout_4 = new QVBoxLayout(help_page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        status = new QLabel(help_page);
        status->setObjectName("status");
        status->setEnabled(true);
        status->setMinimumSize(QSize(0, 40));
        status->setWordWrap(true);
        status->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(status);

        progressbar = new QProgressBar(help_page);
        progressbar->setObjectName("progressbar");
        progressbar->setEnabled(true);
        progressbar->setValue(0);

        verticalLayout_4->addWidget(progressbar);

        layout_buttons = new QHBoxLayout();
        layout_buttons->setObjectName("layout_buttons");
        spacer_buttons = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_buttons->addItem(spacer_buttons);

        close = new QPushButton(help_page);
        close->setObjectName("close");

        layout_buttons->addWidget(close);

        abort = new QPushButton(help_page);
        abort->setObjectName("abort");

        layout_buttons->addWidget(abort);


        verticalLayout_4->addLayout(layout_buttons);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        stacked->addWidget(help_page);
        streamingcollection_page = new QWidget();
        streamingcollection_page->setObjectName("streamingcollection_page");
        verticalLayout_3 = new QVBoxLayout(streamingcollection_page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        filter_widget = new CollectionFilterWidget(streamingcollection_page);
        filter_widget->setObjectName("filter_widget");

        verticalLayout_3->addWidget(filter_widget);

        refresh = new QPushButton(streamingcollection_page);
        refresh->setObjectName("refresh");

        verticalLayout_3->addWidget(refresh);

        view = new StreamingCollectionView(streamingcollection_page);
        view->setObjectName("view");

        verticalLayout_3->addWidget(view);

        stacked->addWidget(streamingcollection_page);

        verticalLayout->addWidget(stacked);


        retranslateUi(StreamingCollectionViewContainer);

        QMetaObject::connectSlotsByName(StreamingCollectionViewContainer);
    } // setupUi

    void retranslateUi(QWidget *StreamingCollectionViewContainer)
    {
        StreamingCollectionViewContainer->setWindowTitle(QCoreApplication::translate("StreamingCollectionViewContainer", "Form", nullptr));
        status->setText(QString());
        close->setText(QCoreApplication::translate("StreamingCollectionViewContainer", "Close", nullptr));
        abort->setText(QCoreApplication::translate("StreamingCollectionViewContainer", "Abort", nullptr));
        refresh->setText(QCoreApplication::translate("StreamingCollectionViewContainer", "Refresh catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StreamingCollectionViewContainer: public Ui_StreamingCollectionViewContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMINGCOLLECTIONVIEWCONTAINER_H
