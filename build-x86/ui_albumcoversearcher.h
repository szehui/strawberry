/********************************************************************************
** Form generated from reading UI file 'albumcoversearcher.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMCOVERSEARCHER_H
#define UI_ALBUMCOVERSEARCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "widgets/busyindicator.h"
#include "widgets/groupediconview.h"
#include "widgets/searchfield.h"

QT_BEGIN_NAMESPACE

class Ui_AlbumCoverSearcher
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    SearchField *artist;
    SearchField *album;
    QPushButton *search;
    BusyIndicator *busy;
    GroupedIconView *covers;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlbumCoverSearcher)
    {
        if (AlbumCoverSearcher->objectName().isEmpty())
            AlbumCoverSearcher->setObjectName("AlbumCoverSearcher");
        AlbumCoverSearcher->resize(829, 518);
        verticalLayout = new QVBoxLayout(AlbumCoverSearcher);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        artist = new SearchField(AlbumCoverSearcher);
        artist->setObjectName("artist");

        horizontalLayout->addWidget(artist);

        album = new SearchField(AlbumCoverSearcher);
        album->setObjectName("album");

        horizontalLayout->addWidget(album);

        search = new QPushButton(AlbumCoverSearcher);
        search->setObjectName("search");

        horizontalLayout->addWidget(search);

        busy = new BusyIndicator(AlbumCoverSearcher);
        busy->setObjectName("busy");

        horizontalLayout->addWidget(busy);


        verticalLayout->addLayout(horizontalLayout);

        covers = new GroupedIconView(AlbumCoverSearcher);
        covers->setObjectName("covers");
        covers->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        covers->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        covers->setIconSize(QSize(120, 120));
        covers->setSpacing(2);

        verticalLayout->addWidget(covers);

        buttonBox = new QDialogButtonBox(AlbumCoverSearcher);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(artist, album);
        QWidget::setTabOrder(album, search);
        QWidget::setTabOrder(search, covers);
        QWidget::setTabOrder(covers, buttonBox);

        retranslateUi(AlbumCoverSearcher);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AlbumCoverSearcher, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AlbumCoverSearcher, qOverload<>(&QDialog::reject));
        QObject::connect(artist, &SearchField::returnPressed, search, qOverload<>(&QPushButton::click));
        QObject::connect(album, &SearchField::returnPressed, search, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(AlbumCoverSearcher);
    } // setupUi

    void retranslateUi(QDialog *AlbumCoverSearcher)
    {
        AlbumCoverSearcher->setWindowTitle(QCoreApplication::translate("AlbumCoverSearcher", "Cover Manager", nullptr));
#if QT_CONFIG(tooltip)
        artist->setToolTip(QCoreApplication::translate("AlbumCoverSearcher", "Artist", nullptr));
#endif // QT_CONFIG(tooltip)
        artist->setProperty("placeholderText", QVariant(QCoreApplication::translate("AlbumCoverSearcher", "Artist", nullptr)));
#if QT_CONFIG(tooltip)
        album->setToolTip(QCoreApplication::translate("AlbumCoverSearcher", "Album", nullptr));
#endif // QT_CONFIG(tooltip)
        album->setProperty("placeholderText", QVariant(QCoreApplication::translate("AlbumCoverSearcher", "Album", nullptr)));
        search->setText(QCoreApplication::translate("AlbumCoverSearcher", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlbumCoverSearcher: public Ui_AlbumCoverSearcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMCOVERSEARCHER_H
