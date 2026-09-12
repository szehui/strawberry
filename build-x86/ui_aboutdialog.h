/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *layout_about;
    QVBoxLayout *layout_left;
    QLabel *label_icon;
    QSpacerItem *spacer_left;
    QFrame *line;
    QVBoxLayout *layout_right;
    QLabel *label_title;
    QLabel *label_text;
    QSpacerItem *spacer_middle;
    QTextBrowser *text_contributors;
    QSpacerItem *spacer_bottom;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(500, 500);
        AboutDialog->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        AboutDialog->setStyleSheet(QString::fromUtf8("#line {\n"
"  color: lightgrey;\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(AboutDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        layout_about = new QHBoxLayout();
        layout_about->setObjectName("layout_about");
        layout_about->setSizeConstraint(QLayout::SetMinimumSize);
        layout_left = new QVBoxLayout();
        layout_left->setObjectName("layout_left");
        label_icon = new QLabel(AboutDialog);
        label_icon->setObjectName("label_icon");
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/64x64/strawberry.png")));
        label_icon->setScaledContents(false);

        layout_left->addWidget(label_icon);

        spacer_left = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_left->addItem(spacer_left);


        layout_about->addLayout(layout_left);

        line = new QFrame(AboutDialog);
        line->setObjectName("line");
        line->setMinimumSize(QSize(2, 2));
        line->setBaseSize(QSize(1, 1));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::VLine);

        layout_about->addWidget(line);

        layout_right = new QVBoxLayout();
        layout_right->setObjectName("layout_right");
        layout_right->setSizeConstraint(QLayout::SetMinimumSize);
        label_title = new QLabel(AboutDialog);
        label_title->setObjectName("label_title");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy);
        label_title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_title->setWordWrap(true);

        layout_right->addWidget(label_title);

        label_text = new QLabel(AboutDialog);
        label_text->setObjectName("label_text");
        sizePolicy.setHeightForWidth(label_text->sizePolicy().hasHeightForWidth());
        label_text->setSizePolicy(sizePolicy);
        label_text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_text->setWordWrap(true);
        label_text->setOpenExternalLinks(true);
        label_text->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        layout_right->addWidget(label_text);

        spacer_middle = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout_right->addItem(spacer_middle);

        text_contributors = new QTextBrowser(AboutDialog);
        text_contributors->setObjectName("text_contributors");
        text_contributors->setMinimumSize(QSize(0, 200));
        text_contributors->setOpenExternalLinks(true);

        layout_right->addWidget(text_contributors);

        spacer_bottom = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        layout_right->addItem(spacer_bottom);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        layout_right->addWidget(buttonBox);


        layout_about->addLayout(layout_right);


        horizontalLayout_2->addLayout(layout_about);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        label_title->setText(QString());
        label_text->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
