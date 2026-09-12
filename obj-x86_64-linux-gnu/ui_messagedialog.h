/********************************************************************************
** Form generated from reading UI file 'messagedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEDIALOG_H
#define UI_MESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *layout_left;
    QLabel *label_logo;
    QSpacerItem *spacer_left;
    QVBoxLayout *layout_right;
    QLabel *label_text;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkbox_do_not_show_message_again;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MessageDialog)
    {
        if (MessageDialog->objectName().isEmpty())
            MessageDialog->setObjectName("MessageDialog");
        MessageDialog->resize(600, 400);
        MessageDialog->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        MessageDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(MessageDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        layout_left = new QVBoxLayout();
        layout_left->setObjectName("layout_left");
        label_logo = new QLabel(MessageDialog);
        label_logo->setObjectName("label_logo");
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/icons/64x64/dialog-warning.png")));

        layout_left->addWidget(label_logo);

        spacer_left = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_left->addItem(spacer_left);


        horizontalLayout->addLayout(layout_left);

        layout_right = new QVBoxLayout();
        layout_right->setObjectName("layout_right");
        layout_right->setSizeConstraint(QLayout::SetMinimumSize);
        label_text = new QLabel(MessageDialog);
        label_text->setObjectName("label_text");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_text->sizePolicy().hasHeightForWidth());
        label_text->setSizePolicy(sizePolicy);
        label_text->setWordWrap(true);
        label_text->setOpenExternalLinks(true);
        label_text->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        layout_right->addWidget(label_text);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_right->addItem(verticalSpacer);

        checkbox_do_not_show_message_again = new QCheckBox(MessageDialog);
        checkbox_do_not_show_message_again->setObjectName("checkbox_do_not_show_message_again");

        layout_right->addWidget(checkbox_do_not_show_message_again);

        buttonBox = new QDialogButtonBox(MessageDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        layout_right->addWidget(buttonBox);


        horizontalLayout->addLayout(layout_right);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MessageDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MessageDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MessageDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MessageDialog);
    } // setupUi

    void retranslateUi(QDialog *MessageDialog)
    {
        MessageDialog->setWindowTitle(QCoreApplication::translate("MessageDialog", "Message Dialog", nullptr));
        label_logo->setText(QString());
        label_text->setText(QString());
        checkbox_do_not_show_message_again->setText(QCoreApplication::translate("MessageDialog", "Do not show this message again.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageDialog: public Ui_MessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEDIALOG_H
