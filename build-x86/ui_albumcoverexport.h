/********************************************************************************
** Form generated from reading UI file 'albumcoverexport.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMCOVEREXPORT_H
#define UI_ALBUMCOVEREXPORT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AlbumCoverExport
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupbox_output;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *fileName;
    QCheckBox *export_downloaded;
    QCheckBox *export_embedded;
    QGroupBox *groupbox_existing_covers;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *doNotOverwrite;
    QRadioButton *overwriteAll;
    QRadioButton *overwriteSmaller;
    QGroupBox *groupbox_size;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *forceSize;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *width;
    QLabel *label_2;
    QLineEdit *height;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlbumCoverExport)
    {
        if (AlbumCoverExport->objectName().isEmpty())
            AlbumCoverExport->setObjectName("AlbumCoverExport");
        AlbumCoverExport->resize(608, 434);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AlbumCoverExport->sizePolicy().hasHeightForWidth());
        AlbumCoverExport->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlbumCoverExport->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AlbumCoverExport);
        verticalLayout->setObjectName("verticalLayout");
        groupbox_output = new QGroupBox(AlbumCoverExport);
        groupbox_output->setObjectName("groupbox_output");
        verticalLayout_2 = new QVBoxLayout(groupbox_output);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(groupbox_output);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        fileName = new QLineEdit(groupbox_output);
        fileName->setObjectName("fileName");

        verticalLayout_2->addWidget(fileName);

        export_downloaded = new QCheckBox(groupbox_output);
        export_downloaded->setObjectName("export_downloaded");
        export_downloaded->setChecked(true);

        verticalLayout_2->addWidget(export_downloaded);

        export_embedded = new QCheckBox(groupbox_output);
        export_embedded->setObjectName("export_embedded");
        export_embedded->setChecked(false);

        verticalLayout_2->addWidget(export_embedded);


        verticalLayout->addWidget(groupbox_output);

        groupbox_existing_covers = new QGroupBox(AlbumCoverExport);
        groupbox_existing_covers->setObjectName("groupbox_existing_covers");
        verticalLayout_3 = new QVBoxLayout(groupbox_existing_covers);
        verticalLayout_3->setObjectName("verticalLayout_3");
        doNotOverwrite = new QRadioButton(groupbox_existing_covers);
        doNotOverwrite->setObjectName("doNotOverwrite");

        verticalLayout_3->addWidget(doNotOverwrite);

        overwriteAll = new QRadioButton(groupbox_existing_covers);
        overwriteAll->setObjectName("overwriteAll");

        verticalLayout_3->addWidget(overwriteAll);

        overwriteSmaller = new QRadioButton(groupbox_existing_covers);
        overwriteSmaller->setObjectName("overwriteSmaller");

        verticalLayout_3->addWidget(overwriteSmaller);


        verticalLayout->addWidget(groupbox_existing_covers);

        groupbox_size = new QGroupBox(AlbumCoverExport);
        groupbox_size->setObjectName("groupbox_size");
        verticalLayout_4 = new QVBoxLayout(groupbox_size);
        verticalLayout_4->setObjectName("verticalLayout_4");
        forceSize = new QCheckBox(groupbox_size);
        forceSize->setObjectName("forceSize");
        QFont font;
        font.setBold(false);
        forceSize->setFont(font);

        verticalLayout_4->addWidget(forceSize);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(groupbox_size);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        width = new QLineEdit(groupbox_size);
        width->setObjectName("width");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(width->sizePolicy().hasHeightForWidth());
        width->setSizePolicy(sizePolicy1);
        width->setInputMethodHints(Qt::ImhDigitsOnly);
        width->setInputMask(QString::fromUtf8(""));
        width->setMaxLength(4);

        horizontalLayout->addWidget(width);

        label_2 = new QLabel(groupbox_size);
        label_2->setObjectName("label_2");
        label_2->setText(QString::fromUtf8("\303\227"));

        horizontalLayout->addWidget(label_2);

        height = new QLineEdit(groupbox_size);
        height->setObjectName("height");
        height->setInputMethodHints(Qt::ImhDigitsOnly);
        height->setInputMask(QString::fromUtf8(""));
        height->setMaxLength(4);

        horizontalLayout->addWidget(height);

        label_3 = new QLabel(groupbox_size);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupbox_size);

        buttonBox = new QDialogButtonBox(AlbumCoverExport);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AlbumCoverExport);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AlbumCoverExport, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AlbumCoverExport, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AlbumCoverExport);
    } // setupUi

    void retranslateUi(QDialog *AlbumCoverExport)
    {
        AlbumCoverExport->setWindowTitle(QCoreApplication::translate("AlbumCoverExport", "Export covers", nullptr));
        groupbox_output->setTitle(QCoreApplication::translate("AlbumCoverExport", "Output", nullptr));
        label->setText(QCoreApplication::translate("AlbumCoverExport", "Enter a filename for exported covers (no extension):", nullptr));
        export_downloaded->setText(QCoreApplication::translate("AlbumCoverExport", "Export downloaded covers", nullptr));
        export_embedded->setText(QCoreApplication::translate("AlbumCoverExport", "Export embedded covers", nullptr));
        groupbox_existing_covers->setTitle(QCoreApplication::translate("AlbumCoverExport", "Existing covers", nullptr));
        doNotOverwrite->setText(QCoreApplication::translate("AlbumCoverExport", "Do not overwrite", nullptr));
        overwriteAll->setText(QCoreApplication::translate("AlbumCoverExport", "O&verwrite all", nullptr));
        overwriteSmaller->setText(QCoreApplication::translate("AlbumCoverExport", "Overwrite s&maller ones only", nullptr));
        groupbox_size->setTitle(QCoreApplication::translate("AlbumCoverExport", "Size", nullptr));
        forceSize->setText(QCoreApplication::translate("AlbumCoverExport", "Scale size", nullptr));
        label_4->setText(QCoreApplication::translate("AlbumCoverExport", "Size:", nullptr));
        label_3->setText(QCoreApplication::translate("AlbumCoverExport", "Pixel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlbumCoverExport: public Ui_AlbumCoverExport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMCOVEREXPORT_H
