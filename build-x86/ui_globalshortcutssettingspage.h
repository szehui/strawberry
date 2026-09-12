/********************************************************************************
** Form generated from reading UI file 'globalshortcutssettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHORTCUTSSETTINGSPAGE_H
#define UI_GLOBALSHORTCUTSSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlobalShortcutsSettingsPage
{
public:
    QVBoxLayout *layout_globalshortcutssettingspage;
    QWidget *widget_kglobalaccel;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkbox_kglobalaccel;
    QWidget *widget_x11;
    QHBoxLayout *layout_x11;
    QCheckBox *checkbox_x11;
    QWidget *widget_warning;
    QHBoxLayout *layout_warning;
    QLabel *label_warn_icon;
    QLabel *label_warn_text;
    QWidget *widget_macos_access;
    QHBoxLayout *layout_macos;
    QLabel *label_macos_access_icon;
    QLabel *label_macos_access;
    QPushButton *button_macos_preferences;
    QTreeWidget *list;
    QGroupBox *shortcut_options;
    QHBoxLayout *layout_shortcut_options;
    QRadioButton *radio_none;
    QRadioButton *radio_default;
    QRadioButton *radio_custom;
    QSpacerItem *spacer_bottom;
    QPushButton *button_change;

    void setupUi(QWidget *GlobalShortcutsSettingsPage)
    {
        if (GlobalShortcutsSettingsPage->objectName().isEmpty())
            GlobalShortcutsSettingsPage->setObjectName("GlobalShortcutsSettingsPage");
        GlobalShortcutsSettingsPage->resize(460, 475);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        GlobalShortcutsSettingsPage->setWindowIcon(icon);
        layout_globalshortcutssettingspage = new QVBoxLayout(GlobalShortcutsSettingsPage);
        layout_globalshortcutssettingspage->setObjectName("layout_globalshortcutssettingspage");
        widget_kglobalaccel = new QWidget(GlobalShortcutsSettingsPage);
        widget_kglobalaccel->setObjectName("widget_kglobalaccel");
        verticalLayout = new QVBoxLayout(widget_kglobalaccel);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkbox_kglobalaccel = new QCheckBox(widget_kglobalaccel);
        checkbox_kglobalaccel->setObjectName("checkbox_kglobalaccel");

        verticalLayout->addWidget(checkbox_kglobalaccel);


        layout_globalshortcutssettingspage->addWidget(widget_kglobalaccel);

        widget_x11 = new QWidget(GlobalShortcutsSettingsPage);
        widget_x11->setObjectName("widget_x11");
        layout_x11 = new QHBoxLayout(widget_x11);
        layout_x11->setSpacing(0);
        layout_x11->setObjectName("layout_x11");
        layout_x11->setContentsMargins(0, 0, 0, 0);
        checkbox_x11 = new QCheckBox(widget_x11);
        checkbox_x11->setObjectName("checkbox_x11");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkbox_x11->sizePolicy().hasHeightForWidth());
        checkbox_x11->setSizePolicy(sizePolicy);

        layout_x11->addWidget(checkbox_x11);


        layout_globalshortcutssettingspage->addWidget(widget_x11);

        widget_warning = new QWidget(GlobalShortcutsSettingsPage);
        widget_warning->setObjectName("widget_warning");
        layout_warning = new QHBoxLayout(widget_warning);
        layout_warning->setObjectName("layout_warning");
        layout_warning->setContentsMargins(0, 0, 0, 0);
        label_warn_icon = new QLabel(widget_warning);
        label_warn_icon->setObjectName("label_warn_icon");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_warn_icon->sizePolicy().hasHeightForWidth());
        label_warn_icon->setSizePolicy(sizePolicy1);
        label_warn_icon->setMinimumSize(QSize(48, 48));
        label_warn_icon->setMaximumSize(QSize(48, 48));
        label_warn_icon->setBaseSize(QSize(64, 64));
        label_warn_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/48x48/dialog-warning.png")));

        layout_warning->addWidget(label_warn_icon);

        label_warn_text = new QLabel(widget_warning);
        label_warn_text->setObjectName("label_warn_text");
        sizePolicy1.setHeightForWidth(label_warn_text->sizePolicy().hasHeightForWidth());
        label_warn_text->setSizePolicy(sizePolicy1);
        label_warn_text->setWordWrap(true);

        layout_warning->addWidget(label_warn_text);


        layout_globalshortcutssettingspage->addWidget(widget_warning);

        widget_macos_access = new QWidget(GlobalShortcutsSettingsPage);
        widget_macos_access->setObjectName("widget_macos_access");
        layout_macos = new QHBoxLayout(widget_macos_access);
        layout_macos->setObjectName("layout_macos");
        layout_macos->setContentsMargins(0, 0, 0, 0);
        label_macos_access_icon = new QLabel(widget_macos_access);
        label_macos_access_icon->setObjectName("label_macos_access_icon");
        sizePolicy1.setHeightForWidth(label_macos_access_icon->sizePolicy().hasHeightForWidth());
        label_macos_access_icon->setSizePolicy(sizePolicy1);
        label_macos_access_icon->setMinimumSize(QSize(48, 48));
        label_macos_access_icon->setMaximumSize(QSize(48, 48));
        label_macos_access_icon->setBaseSize(QSize(64, 64));
        label_macos_access_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/48x48/dialog-warning.png")));

        layout_macos->addWidget(label_macos_access_icon);

        label_macos_access = new QLabel(widget_macos_access);
        label_macos_access->setObjectName("label_macos_access");
        sizePolicy1.setHeightForWidth(label_macos_access->sizePolicy().hasHeightForWidth());
        label_macos_access->setSizePolicy(sizePolicy1);
        label_macos_access->setWordWrap(true);

        layout_macos->addWidget(label_macos_access);

        button_macos_preferences = new QPushButton(widget_macos_access);
        button_macos_preferences->setObjectName("button_macos_preferences");

        layout_macos->addWidget(button_macos_preferences);


        layout_globalshortcutssettingspage->addWidget(widget_macos_access);

        list = new QTreeWidget(GlobalShortcutsSettingsPage);
        list->setObjectName("list");
        list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        list->setAlternatingRowColors(true);
        list->setRootIsDecorated(false);
        list->setAllColumnsShowFocus(true);

        layout_globalshortcutssettingspage->addWidget(list);

        shortcut_options = new QGroupBox(GlobalShortcutsSettingsPage);
        shortcut_options->setObjectName("shortcut_options");
        shortcut_options->setEnabled(true);
        layout_shortcut_options = new QHBoxLayout(shortcut_options);
        layout_shortcut_options->setObjectName("layout_shortcut_options");
        radio_none = new QRadioButton(shortcut_options);
        radio_none->setObjectName("radio_none");
        radio_none->setEnabled(true);
        radio_none->setChecked(true);

        layout_shortcut_options->addWidget(radio_none);

        radio_default = new QRadioButton(shortcut_options);
        radio_default->setObjectName("radio_default");

        layout_shortcut_options->addWidget(radio_default);

        radio_custom = new QRadioButton(shortcut_options);
        radio_custom->setObjectName("radio_custom");

        layout_shortcut_options->addWidget(radio_custom);

        spacer_bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_shortcut_options->addItem(spacer_bottom);

        button_change = new QPushButton(shortcut_options);
        button_change->setObjectName("button_change");

        layout_shortcut_options->addWidget(button_change);


        layout_globalshortcutssettingspage->addWidget(shortcut_options);

        QWidget::setTabOrder(checkbox_kglobalaccel, checkbox_x11);
        QWidget::setTabOrder(checkbox_x11, button_macos_preferences);
        QWidget::setTabOrder(button_macos_preferences, list);
        QWidget::setTabOrder(list, radio_none);
        QWidget::setTabOrder(radio_none, radio_default);
        QWidget::setTabOrder(radio_default, radio_custom);
        QWidget::setTabOrder(radio_custom, button_change);

        retranslateUi(GlobalShortcutsSettingsPage);

        QMetaObject::connectSlotsByName(GlobalShortcutsSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *GlobalShortcutsSettingsPage)
    {
        GlobalShortcutsSettingsPage->setWindowTitle(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Global Shortcuts", nullptr));
        checkbox_kglobalaccel->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Use KGlobalAccel shortcuts when available", nullptr));
        checkbox_x11->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Use X11 shortcuts when available", nullptr));
        label_warn_icon->setText(QString());
        label_warn_text->setText(QString());
        label_macos_access_icon->setText(QString());
        label_macos_access->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "You need to launch System Preferences and allow Strawberry to \"<span style=\"font-style:italic\">control your computer</span>\" to use global shortcuts in Strawberry.", nullptr));
        button_macos_preferences->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Open...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = list->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("GlobalShortcutsSettingsPage", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("GlobalShortcutsSettingsPage", "Action", "Category label"));
        shortcut_options->setTitle(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Shortcut for %1", nullptr));
        radio_none->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "&None", nullptr));
        radio_default->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "&Default", nullptr));
        radio_custom->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "&Custom", nullptr));
        button_change->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Change shortcut...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlobalShortcutsSettingsPage: public Ui_GlobalShortcutsSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHORTCUTSSETTINGSPAGE_H
