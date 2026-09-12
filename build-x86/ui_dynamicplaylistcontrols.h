/********************************************************************************
** Form generated from reading UI file 'dynamicplaylistcontrols.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DYNAMICPLAYLISTCONTROLS_H
#define UI_DYNAMICPLAYLISTCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DynamicPlaylistControls
{
public:
    QVBoxLayout *layout_dynamic_playlist_controls;
    QFrame *container;
    QHBoxLayout *layout_container;
    QVBoxLayout *layout_labels;
    QLabel *label1;
    QLabel *label2;
    QPushButton *expand;
    QPushButton *repopulate;
    QPushButton *off;

    void setupUi(QWidget *DynamicPlaylistControls)
    {
        if (DynamicPlaylistControls->objectName().isEmpty())
            DynamicPlaylistControls->setObjectName("DynamicPlaylistControls");
        DynamicPlaylistControls->resize(483, 54);
        layout_dynamic_playlist_controls = new QVBoxLayout(DynamicPlaylistControls);
        layout_dynamic_playlist_controls->setObjectName("layout_dynamic_playlist_controls");
        layout_dynamic_playlist_controls->setContentsMargins(0, 0, 0, 0);
        container = new QFrame(DynamicPlaylistControls);
        container->setObjectName("container");
        container->setFrameShape(QFrame::Shape::StyledPanel);
        container->setFrameShadow(QFrame::Shadow::Raised);
        layout_container = new QHBoxLayout(container);
        layout_container->setObjectName("layout_container");
        layout_labels = new QVBoxLayout();
        layout_labels->setSpacing(0);
        layout_labels->setObjectName("layout_labels");
        label1 = new QLabel(container);
        label1->setObjectName("label1");

        layout_labels->addWidget(label1);

        label2 = new QLabel(container);
        label2->setObjectName("label2");

        layout_labels->addWidget(label2);


        layout_container->addLayout(layout_labels);

        expand = new QPushButton(container);
        expand->setObjectName("expand");

        layout_container->addWidget(expand);

        repopulate = new QPushButton(container);
        repopulate->setObjectName("repopulate");

        layout_container->addWidget(repopulate);

        off = new QPushButton(container);
        off->setObjectName("off");

        layout_container->addWidget(off);


        layout_dynamic_playlist_controls->addWidget(container);


        retranslateUi(DynamicPlaylistControls);

        QMetaObject::connectSlotsByName(DynamicPlaylistControls);
    } // setupUi

    void retranslateUi(QWidget *DynamicPlaylistControls)
    {
        label1->setText(QCoreApplication::translate("DynamicPlaylistControls", "Dynamic mode is on", nullptr));
        label2->setText(QCoreApplication::translate("DynamicPlaylistControls", "New tracks will be added automatically.", nullptr));
        expand->setText(QCoreApplication::translate("DynamicPlaylistControls", "Expand", nullptr));
        repopulate->setText(QCoreApplication::translate("DynamicPlaylistControls", "Repopulate", nullptr));
        off->setText(QCoreApplication::translate("DynamicPlaylistControls", "Turn off", nullptr));
        (void)DynamicPlaylistControls;
    } // retranslateUi

};

namespace Ui {
    class DynamicPlaylistControls: public Ui_DynamicPlaylistControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DYNAMICPLAYLISTCONTROLS_H
