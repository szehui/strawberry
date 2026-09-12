/********************************************************************************
** Form generated from reading UI file 'collectionviewcontainer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLECTIONVIEWCONTAINER_H
#define UI_COLLECTIONVIEWCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "collection/collectionfilterwidget.h"
#include "collection/collectionview.h"

QT_BEGIN_NAMESPACE

class Ui_CollectionViewContainer
{
public:
    QVBoxLayout *verticalLayout;
    CollectionFilterWidget *filter;
    CollectionView *view;

    void setupUi(QWidget *CollectionViewContainer)
    {
        if (CollectionViewContainer->objectName().isEmpty())
            CollectionViewContainer->setObjectName("CollectionViewContainer");
        CollectionViewContainer->resize(300, 300);
        verticalLayout = new QVBoxLayout(CollectionViewContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        filter = new CollectionFilterWidget(CollectionViewContainer);
        filter->setObjectName("filter");

        verticalLayout->addWidget(filter);

        view = new CollectionView(CollectionViewContainer);
        view->setObjectName("view");

        verticalLayout->addWidget(view);


        retranslateUi(CollectionViewContainer);

        QMetaObject::connectSlotsByName(CollectionViewContainer);
    } // setupUi

    void retranslateUi(QWidget *CollectionViewContainer)
    {
        CollectionViewContainer->setWindowTitle(QCoreApplication::translate("CollectionViewContainer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CollectionViewContainer: public Ui_CollectionViewContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLECTIONVIEWCONTAINER_H
