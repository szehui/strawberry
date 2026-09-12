/********************************************************************************
** Form generated from reading UI file 'appearancesettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCESETTINGSPAGE_H
#define UI_APPEARANCESETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceSettingsPage
{
public:
    QVBoxLayout *layout_appearancesettingspage;
    QGroupBox *groupbox_style;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_style;
    QLabel *label_style;
    QComboBox *combobox_style;
    QCheckBox *checkbox_dark_mode;
    QCheckBox *checkbox_system_icons;
    QSpacerItem *spacer_style;
    QGroupBox *groupbox_colors;
    QVBoxLayout *layout_colors;
    QRadioButton *use_system_color_set;
    QRadioButton *use_custom_color_set;
    QWidget *widget_custom_colors;
    QFormLayout *layout_custom_colors;
    QHBoxLayout *layout_color_presets;
    QPushButton *button_dark_colors;
    QPushButton *button_reset_colors;
    QSpacerItem *spacer_color_presets;
    QGroupBox *groupbox_tabbar_colors;
    QVBoxLayout *layout_tabbar_colors;
    QRadioButton *tabbar_system_color;
    QRadioButton *tabbar_custom_color;
    QCheckBox *tabbar_gradient;
    QHBoxLayout *layout_tabbar_color;
    QLabel *label_tabbar_color;
    QPushButton *select_tabbar_color;
    QGroupBox *playlist_playing_song_color;
    QVBoxLayout *layout_playlist_playing_song_color;
    QRadioButton *playlist_playing_song_color_system;
    QRadioButton *playlist_playing_song_color_custom;
    QHBoxLayout *layout_playlist_playing_song_color_custom;
    QLabel *label_select_playlist_playing_song_color;
    QPushButton *select_playlist_playing_song_color;
    QGroupBox *groupbox_background_image;
    QVBoxLayout *layout_background_image;
    QRadioButton *use_default_background;
    QRadioButton *use_no_background;
    QRadioButton *use_album_cover_background;
    QRadioButton *use_strawbs_background;
    QHBoxLayout *layout_custom_image;
    QRadioButton *use_custom_background_image;
    QLineEdit *background_image_filename;
    QPushButton *select_background_image_filename_button;
    QWidget *widget_background_image_options;
    QVBoxLayout *layout_custom_background_image_options;
    QWidget *widget_background_image_custom_position;
    QHBoxLayout *layout_custom_position;
    QLabel *label_background_image_position;
    QComboBox *combobox_background_image_position;
    QLabel *label_background_image_max_cover_size;
    QSpinBox *spinbox_background_image_maxsize;
    QSpacerItem *spacer_background_image_position;
    QWidget *widget_background_image_stretch;
    QHBoxLayout *layout_background_image_stretch;
    QCheckBox *checkbox_background_image_stretch;
    QCheckBox *checkbox_background_image_keep_aspect_ratio;
    QCheckBox *checkbox_background_image_do_not_cut;
    QSpacerItem *spacer_background_image_stretch;
    QGridLayout *layout_background_image_blur_opacity;
    QLabel *label_background_image_blur;
    QSlider *slider_background_image_blur;
    QLabel *label_background_image_blur_radius;
    QLabel *label_background_image_opacity;
    QSlider *slider_background_image_opacity;
    QLabel *label_background_image_opacity_2;
    QGroupBox *groupbox_icon_sizes;
    QHBoxLayout *layout_groupbox_icon_sizes;
    QGridLayout *layout_icon_sizes;
    QLabel *label_icon_size_playlist_buttons;
    QLabel *label_icon_size_tabbar_large_mode;
    QLabel *label_icon_size_play_control_buttons;
    QSpinBox *spinbox_icon_size_play_control_buttons;
    QSpinBox *spinbox_icon_size_left_panel_buttons;
    QLabel *label_icon_size_configure_buttons;
    QSpinBox *spinbox_icon_size_playlist_buttons;
    QSpinBox *spinbox_icon_size_configure_buttons;
    QLabel *label_icon_size_left_panel_buttons;
    QSpinBox *spinbox_icon_size_tabbar_large_mode;
    QLabel *label_icon_size_tabbar_small_mode;
    QSpinBox *spinbox_icon_size_tabbar_small_mode;
    QSpacerItem *spacer_icon_sizes;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *AppearanceSettingsPage)
    {
        if (AppearanceSettingsPage->objectName().isEmpty())
            AppearanceSettingsPage->setObjectName("AppearanceSettingsPage");
        AppearanceSettingsPage->resize(612, 1166);
        layout_appearancesettingspage = new QVBoxLayout(AppearanceSettingsPage);
        layout_appearancesettingspage->setObjectName("layout_appearancesettingspage");
        groupbox_style = new QGroupBox(AppearanceSettingsPage);
        groupbox_style->setObjectName("groupbox_style");
        verticalLayout = new QVBoxLayout(groupbox_style);
        verticalLayout->setObjectName("verticalLayout");
        layout_style = new QHBoxLayout();
        layout_style->setObjectName("layout_style");
        label_style = new QLabel(groupbox_style);
        label_style->setObjectName("label_style");

        layout_style->addWidget(label_style);

        combobox_style = new QComboBox(groupbox_style);
        combobox_style->setObjectName("combobox_style");

        layout_style->addWidget(combobox_style);

        checkbox_dark_mode = new QCheckBox(groupbox_style);
        checkbox_dark_mode->setObjectName("checkbox_dark_mode");

        layout_style->addWidget(checkbox_dark_mode);

        checkbox_system_icons = new QCheckBox(groupbox_style);
        checkbox_system_icons->setObjectName("checkbox_system_icons");

        layout_style->addWidget(checkbox_system_icons);

        spacer_style = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_style->addItem(spacer_style);


        verticalLayout->addLayout(layout_style);


        layout_appearancesettingspage->addWidget(groupbox_style);

        groupbox_colors = new QGroupBox(AppearanceSettingsPage);
        groupbox_colors->setObjectName("groupbox_colors");
        layout_colors = new QVBoxLayout(groupbox_colors);
        layout_colors->setObjectName("layout_colors");
        use_system_color_set = new QRadioButton(groupbox_colors);
        use_system_color_set->setObjectName("use_system_color_set");

        layout_colors->addWidget(use_system_color_set);

        use_custom_color_set = new QRadioButton(groupbox_colors);
        use_custom_color_set->setObjectName("use_custom_color_set");

        layout_colors->addWidget(use_custom_color_set);

        widget_custom_colors = new QWidget(groupbox_colors);
        widget_custom_colors->setObjectName("widget_custom_colors");
        layout_custom_colors = new QFormLayout(widget_custom_colors);
        layout_custom_colors->setObjectName("layout_custom_colors");

        layout_colors->addWidget(widget_custom_colors);

        layout_color_presets = new QHBoxLayout();
        layout_color_presets->setObjectName("layout_color_presets");
        button_dark_colors = new QPushButton(groupbox_colors);
        button_dark_colors->setObjectName("button_dark_colors");

        layout_color_presets->addWidget(button_dark_colors);

        button_reset_colors = new QPushButton(groupbox_colors);
        button_reset_colors->setObjectName("button_reset_colors");

        layout_color_presets->addWidget(button_reset_colors);

        spacer_color_presets = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_color_presets->addItem(spacer_color_presets);


        layout_colors->addLayout(layout_color_presets);


        layout_appearancesettingspage->addWidget(groupbox_colors);

        groupbox_tabbar_colors = new QGroupBox(AppearanceSettingsPage);
        groupbox_tabbar_colors->setObjectName("groupbox_tabbar_colors");
        layout_tabbar_colors = new QVBoxLayout(groupbox_tabbar_colors);
        layout_tabbar_colors->setObjectName("layout_tabbar_colors");
        tabbar_system_color = new QRadioButton(groupbox_tabbar_colors);
        tabbar_system_color->setObjectName("tabbar_system_color");

        layout_tabbar_colors->addWidget(tabbar_system_color);

        tabbar_custom_color = new QRadioButton(groupbox_tabbar_colors);
        tabbar_custom_color->setObjectName("tabbar_custom_color");

        layout_tabbar_colors->addWidget(tabbar_custom_color);

        tabbar_gradient = new QCheckBox(groupbox_tabbar_colors);
        tabbar_gradient->setObjectName("tabbar_gradient");

        layout_tabbar_colors->addWidget(tabbar_gradient);

        layout_tabbar_color = new QHBoxLayout();
        layout_tabbar_color->setObjectName("layout_tabbar_color");
        label_tabbar_color = new QLabel(groupbox_tabbar_colors);
        label_tabbar_color->setObjectName("label_tabbar_color");
        label_tabbar_color->setEnabled(true);

        layout_tabbar_color->addWidget(label_tabbar_color);

        select_tabbar_color = new QPushButton(groupbox_tabbar_colors);
        select_tabbar_color->setObjectName("select_tabbar_color");
        select_tabbar_color->setEnabled(false);
        select_tabbar_color->setText(QString::fromUtf8(""));

        layout_tabbar_color->addWidget(select_tabbar_color);


        layout_tabbar_colors->addLayout(layout_tabbar_color);


        layout_appearancesettingspage->addWidget(groupbox_tabbar_colors);

        playlist_playing_song_color = new QGroupBox(AppearanceSettingsPage);
        playlist_playing_song_color->setObjectName("playlist_playing_song_color");
        layout_playlist_playing_song_color = new QVBoxLayout(playlist_playing_song_color);
        layout_playlist_playing_song_color->setObjectName("layout_playlist_playing_song_color");
        playlist_playing_song_color_system = new QRadioButton(playlist_playing_song_color);
        playlist_playing_song_color_system->setObjectName("playlist_playing_song_color_system");

        layout_playlist_playing_song_color->addWidget(playlist_playing_song_color_system);

        playlist_playing_song_color_custom = new QRadioButton(playlist_playing_song_color);
        playlist_playing_song_color_custom->setObjectName("playlist_playing_song_color_custom");

        layout_playlist_playing_song_color->addWidget(playlist_playing_song_color_custom);

        layout_playlist_playing_song_color_custom = new QHBoxLayout();
        layout_playlist_playing_song_color_custom->setObjectName("layout_playlist_playing_song_color_custom");
        label_select_playlist_playing_song_color = new QLabel(playlist_playing_song_color);
        label_select_playlist_playing_song_color->setObjectName("label_select_playlist_playing_song_color");

        layout_playlist_playing_song_color_custom->addWidget(label_select_playlist_playing_song_color);

        select_playlist_playing_song_color = new QPushButton(playlist_playing_song_color);
        select_playlist_playing_song_color->setObjectName("select_playlist_playing_song_color");

        layout_playlist_playing_song_color_custom->addWidget(select_playlist_playing_song_color);


        layout_playlist_playing_song_color->addLayout(layout_playlist_playing_song_color_custom);


        layout_appearancesettingspage->addWidget(playlist_playing_song_color);

        groupbox_background_image = new QGroupBox(AppearanceSettingsPage);
        groupbox_background_image->setObjectName("groupbox_background_image");
        layout_background_image = new QVBoxLayout(groupbox_background_image);
        layout_background_image->setObjectName("layout_background_image");
        use_default_background = new QRadioButton(groupbox_background_image);
        use_default_background->setObjectName("use_default_background");

        layout_background_image->addWidget(use_default_background);

        use_no_background = new QRadioButton(groupbox_background_image);
        use_no_background->setObjectName("use_no_background");

        layout_background_image->addWidget(use_no_background);

        use_album_cover_background = new QRadioButton(groupbox_background_image);
        use_album_cover_background->setObjectName("use_album_cover_background");

        layout_background_image->addWidget(use_album_cover_background);

        use_strawbs_background = new QRadioButton(groupbox_background_image);
        use_strawbs_background->setObjectName("use_strawbs_background");
        use_strawbs_background->setText(QString::fromUtf8("A Taste of Strawbs"));

        layout_background_image->addWidget(use_strawbs_background);

        layout_custom_image = new QHBoxLayout();
        layout_custom_image->setObjectName("layout_custom_image");
        use_custom_background_image = new QRadioButton(groupbox_background_image);
        use_custom_background_image->setObjectName("use_custom_background_image");

        layout_custom_image->addWidget(use_custom_background_image);

        background_image_filename = new QLineEdit(groupbox_background_image);
        background_image_filename->setObjectName("background_image_filename");
        background_image_filename->setEnabled(false);
        background_image_filename->setText(QString::fromUtf8(""));

        layout_custom_image->addWidget(background_image_filename);

        select_background_image_filename_button = new QPushButton(groupbox_background_image);
        select_background_image_filename_button->setObjectName("select_background_image_filename_button");
        select_background_image_filename_button->setEnabled(false);

        layout_custom_image->addWidget(select_background_image_filename_button);


        layout_background_image->addLayout(layout_custom_image);

        widget_background_image_options = new QWidget(groupbox_background_image);
        widget_background_image_options->setObjectName("widget_background_image_options");
        layout_custom_background_image_options = new QVBoxLayout(widget_background_image_options);
        layout_custom_background_image_options->setObjectName("layout_custom_background_image_options");
        layout_custom_background_image_options->setContentsMargins(0, 0, 0, 0);
        widget_background_image_custom_position = new QWidget(widget_background_image_options);
        widget_background_image_custom_position->setObjectName("widget_background_image_custom_position");
        layout_custom_position = new QHBoxLayout(widget_background_image_custom_position);
        layout_custom_position->setObjectName("layout_custom_position");
        layout_custom_position->setContentsMargins(0, 0, 0, 0);
        label_background_image_position = new QLabel(widget_background_image_custom_position);
        label_background_image_position->setObjectName("label_background_image_position");

        layout_custom_position->addWidget(label_background_image_position);

        combobox_background_image_position = new QComboBox(widget_background_image_custom_position);
        combobox_background_image_position->addItem(QString());
        combobox_background_image_position->addItem(QString());
        combobox_background_image_position->addItem(QString());
        combobox_background_image_position->addItem(QString());
        combobox_background_image_position->addItem(QString());
        combobox_background_image_position->setObjectName("combobox_background_image_position");

        layout_custom_position->addWidget(combobox_background_image_position);

        label_background_image_max_cover_size = new QLabel(widget_background_image_custom_position);
        label_background_image_max_cover_size->setObjectName("label_background_image_max_cover_size");

        layout_custom_position->addWidget(label_background_image_max_cover_size);

        spinbox_background_image_maxsize = new QSpinBox(widget_background_image_custom_position);
        spinbox_background_image_maxsize->setObjectName("spinbox_background_image_maxsize");
        spinbox_background_image_maxsize->setMinimum(0);
        spinbox_background_image_maxsize->setMaximum(9000);

        layout_custom_position->addWidget(spinbox_background_image_maxsize);

        spacer_background_image_position = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_custom_position->addItem(spacer_background_image_position);


        layout_custom_background_image_options->addWidget(widget_background_image_custom_position);

        widget_background_image_stretch = new QWidget(widget_background_image_options);
        widget_background_image_stretch->setObjectName("widget_background_image_stretch");
        layout_background_image_stretch = new QHBoxLayout(widget_background_image_stretch);
        layout_background_image_stretch->setObjectName("layout_background_image_stretch");
        layout_background_image_stretch->setContentsMargins(0, 0, 0, 0);
        checkbox_background_image_stretch = new QCheckBox(widget_background_image_stretch);
        checkbox_background_image_stretch->setObjectName("checkbox_background_image_stretch");

        layout_background_image_stretch->addWidget(checkbox_background_image_stretch);

        checkbox_background_image_keep_aspect_ratio = new QCheckBox(widget_background_image_stretch);
        checkbox_background_image_keep_aspect_ratio->setObjectName("checkbox_background_image_keep_aspect_ratio");

        layout_background_image_stretch->addWidget(checkbox_background_image_keep_aspect_ratio);

        checkbox_background_image_do_not_cut = new QCheckBox(widget_background_image_stretch);
        checkbox_background_image_do_not_cut->setObjectName("checkbox_background_image_do_not_cut");

        layout_background_image_stretch->addWidget(checkbox_background_image_do_not_cut);

        spacer_background_image_stretch = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_background_image_stretch->addItem(spacer_background_image_stretch);


        layout_custom_background_image_options->addWidget(widget_background_image_stretch);

        layout_background_image_blur_opacity = new QGridLayout();
        layout_background_image_blur_opacity->setObjectName("layout_background_image_blur_opacity");
        label_background_image_blur = new QLabel(widget_background_image_options);
        label_background_image_blur->setObjectName("label_background_image_blur");
        label_background_image_blur->setEnabled(true);

        layout_background_image_blur_opacity->addWidget(label_background_image_blur, 0, 0, 1, 1);

        slider_background_image_blur = new QSlider(widget_background_image_options);
        slider_background_image_blur->setObjectName("slider_background_image_blur");
        slider_background_image_blur->setMinimum(0);
        slider_background_image_blur->setMaximum(100);
        slider_background_image_blur->setOrientation(Qt::Horizontal);
        slider_background_image_blur->setTickPosition(QSlider::TicksBelow);
        slider_background_image_blur->setTickInterval(10);

        layout_background_image_blur_opacity->addWidget(slider_background_image_blur, 0, 1, 1, 1);

        label_background_image_blur_radius = new QLabel(widget_background_image_options);
        label_background_image_blur_radius->setObjectName("label_background_image_blur_radius");
        label_background_image_blur_radius->setEnabled(true);

        layout_background_image_blur_opacity->addWidget(label_background_image_blur_radius, 0, 2, 1, 1);

        label_background_image_opacity = new QLabel(widget_background_image_options);
        label_background_image_opacity->setObjectName("label_background_image_opacity");

        layout_background_image_blur_opacity->addWidget(label_background_image_opacity, 1, 0, 1, 1);

        slider_background_image_opacity = new QSlider(widget_background_image_options);
        slider_background_image_opacity->setObjectName("slider_background_image_opacity");
        slider_background_image_opacity->setMaximum(100);
        slider_background_image_opacity->setSingleStep(10);
        slider_background_image_opacity->setOrientation(Qt::Horizontal);
        slider_background_image_opacity->setTickPosition(QSlider::TicksBelow);
        slider_background_image_opacity->setTickInterval(10);

        layout_background_image_blur_opacity->addWidget(slider_background_image_opacity, 1, 1, 1, 1);

        label_background_image_opacity_2 = new QLabel(widget_background_image_options);
        label_background_image_opacity_2->setObjectName("label_background_image_opacity_2");

        layout_background_image_blur_opacity->addWidget(label_background_image_opacity_2, 1, 2, 1, 1);


        layout_custom_background_image_options->addLayout(layout_background_image_blur_opacity);


        layout_background_image->addWidget(widget_background_image_options);


        layout_appearancesettingspage->addWidget(groupbox_background_image);

        groupbox_icon_sizes = new QGroupBox(AppearanceSettingsPage);
        groupbox_icon_sizes->setObjectName("groupbox_icon_sizes");
        layout_groupbox_icon_sizes = new QHBoxLayout(groupbox_icon_sizes);
        layout_groupbox_icon_sizes->setObjectName("layout_groupbox_icon_sizes");
        layout_icon_sizes = new QGridLayout();
        layout_icon_sizes->setObjectName("layout_icon_sizes");
        label_icon_size_playlist_buttons = new QLabel(groupbox_icon_sizes);
        label_icon_size_playlist_buttons->setObjectName("label_icon_size_playlist_buttons");

        layout_icon_sizes->addWidget(label_icon_size_playlist_buttons, 3, 0, 1, 1);

        label_icon_size_tabbar_large_mode = new QLabel(groupbox_icon_sizes);
        label_icon_size_tabbar_large_mode->setObjectName("label_icon_size_tabbar_large_mode");

        layout_icon_sizes->addWidget(label_icon_size_tabbar_large_mode, 1, 0, 1, 1);

        label_icon_size_play_control_buttons = new QLabel(groupbox_icon_sizes);
        label_icon_size_play_control_buttons->setObjectName("label_icon_size_play_control_buttons");

        layout_icon_sizes->addWidget(label_icon_size_play_control_buttons, 2, 0, 1, 1);

        spinbox_icon_size_play_control_buttons = new QSpinBox(groupbox_icon_sizes);
        spinbox_icon_size_play_control_buttons->setObjectName("spinbox_icon_size_play_control_buttons");
        spinbox_icon_size_play_control_buttons->setMinimum(16);
        spinbox_icon_size_play_control_buttons->setMaximum(64);

        layout_icon_sizes->addWidget(spinbox_icon_size_play_control_buttons, 2, 1, 1, 1);

        spinbox_icon_size_left_panel_buttons = new QSpinBox(groupbox_icon_sizes);
        spinbox_icon_size_left_panel_buttons->setObjectName("spinbox_icon_size_left_panel_buttons");
        spinbox_icon_size_left_panel_buttons->setMinimum(16);
        spinbox_icon_size_left_panel_buttons->setMaximum(64);

        layout_icon_sizes->addWidget(spinbox_icon_size_left_panel_buttons, 4, 1, 1, 1);

        label_icon_size_configure_buttons = new QLabel(groupbox_icon_sizes);
        label_icon_size_configure_buttons->setObjectName("label_icon_size_configure_buttons");

        layout_icon_sizes->addWidget(label_icon_size_configure_buttons, 5, 0, 1, 1);

        spinbox_icon_size_playlist_buttons = new QSpinBox(groupbox_icon_sizes);
        spinbox_icon_size_playlist_buttons->setObjectName("spinbox_icon_size_playlist_buttons");
        spinbox_icon_size_playlist_buttons->setMinimum(16);
        spinbox_icon_size_playlist_buttons->setMaximum(64);

        layout_icon_sizes->addWidget(spinbox_icon_size_playlist_buttons, 3, 1, 1, 1);

        spinbox_icon_size_configure_buttons = new QSpinBox(groupbox_icon_sizes);
        spinbox_icon_size_configure_buttons->setObjectName("spinbox_icon_size_configure_buttons");
        spinbox_icon_size_configure_buttons->setMinimum(16);
        spinbox_icon_size_configure_buttons->setMaximum(64);

        layout_icon_sizes->addWidget(spinbox_icon_size_configure_buttons, 5, 1, 1, 1);

        label_icon_size_left_panel_buttons = new QLabel(groupbox_icon_sizes);
        label_icon_size_left_panel_buttons->setObjectName("label_icon_size_left_panel_buttons");

        layout_icon_sizes->addWidget(label_icon_size_left_panel_buttons, 4, 0, 1, 1);

        spinbox_icon_size_tabbar_large_mode = new QSpinBox(groupbox_icon_sizes);
        spinbox_icon_size_tabbar_large_mode->setObjectName("spinbox_icon_size_tabbar_large_mode");
        spinbox_icon_size_tabbar_large_mode->setMinimum(16);
        spinbox_icon_size_tabbar_large_mode->setMaximum(64);

        layout_icon_sizes->addWidget(spinbox_icon_size_tabbar_large_mode, 1, 1, 1, 1);

        label_icon_size_tabbar_small_mode = new QLabel(groupbox_icon_sizes);
        label_icon_size_tabbar_small_mode->setObjectName("label_icon_size_tabbar_small_mode");

        layout_icon_sizes->addWidget(label_icon_size_tabbar_small_mode, 0, 0, 1, 1);

        spinbox_icon_size_tabbar_small_mode = new QSpinBox(groupbox_icon_sizes);
        spinbox_icon_size_tabbar_small_mode->setObjectName("spinbox_icon_size_tabbar_small_mode");
        spinbox_icon_size_tabbar_small_mode->setMinimum(16);
        spinbox_icon_size_tabbar_small_mode->setMaximum(64);

        layout_icon_sizes->addWidget(spinbox_icon_size_tabbar_small_mode, 0, 1, 1, 1);


        layout_groupbox_icon_sizes->addLayout(layout_icon_sizes);

        spacer_icon_sizes = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_groupbox_icon_sizes->addItem(spacer_icon_sizes);


        layout_appearancesettingspage->addWidget(groupbox_icon_sizes);

        spacer_bottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_appearancesettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(combobox_style, checkbox_dark_mode);
        QWidget::setTabOrder(checkbox_dark_mode, checkbox_system_icons);
        QWidget::setTabOrder(checkbox_system_icons, use_system_color_set);
        QWidget::setTabOrder(use_system_color_set, use_custom_color_set);
        QWidget::setTabOrder(use_custom_color_set, button_dark_colors);
        QWidget::setTabOrder(button_dark_colors, button_reset_colors);
        QWidget::setTabOrder(button_reset_colors, tabbar_system_color);
        QWidget::setTabOrder(tabbar_system_color, tabbar_custom_color);
        QWidget::setTabOrder(tabbar_custom_color, tabbar_gradient);
        QWidget::setTabOrder(tabbar_gradient, select_tabbar_color);
        QWidget::setTabOrder(select_tabbar_color, playlist_playing_song_color_system);
        QWidget::setTabOrder(playlist_playing_song_color_system, playlist_playing_song_color_custom);
        QWidget::setTabOrder(playlist_playing_song_color_custom, select_playlist_playing_song_color);
        QWidget::setTabOrder(select_playlist_playing_song_color, use_default_background);
        QWidget::setTabOrder(use_default_background, use_no_background);
        QWidget::setTabOrder(use_no_background, use_album_cover_background);
        QWidget::setTabOrder(use_album_cover_background, use_strawbs_background);
        QWidget::setTabOrder(use_strawbs_background, use_custom_background_image);
        QWidget::setTabOrder(use_custom_background_image, background_image_filename);
        QWidget::setTabOrder(background_image_filename, select_background_image_filename_button);
        QWidget::setTabOrder(select_background_image_filename_button, combobox_background_image_position);
        QWidget::setTabOrder(combobox_background_image_position, spinbox_background_image_maxsize);
        QWidget::setTabOrder(spinbox_background_image_maxsize, checkbox_background_image_stretch);
        QWidget::setTabOrder(checkbox_background_image_stretch, checkbox_background_image_keep_aspect_ratio);
        QWidget::setTabOrder(checkbox_background_image_keep_aspect_ratio, checkbox_background_image_do_not_cut);
        QWidget::setTabOrder(checkbox_background_image_do_not_cut, slider_background_image_blur);
        QWidget::setTabOrder(slider_background_image_blur, slider_background_image_opacity);
        QWidget::setTabOrder(slider_background_image_opacity, spinbox_icon_size_tabbar_small_mode);
        QWidget::setTabOrder(spinbox_icon_size_tabbar_small_mode, spinbox_icon_size_tabbar_large_mode);
        QWidget::setTabOrder(spinbox_icon_size_tabbar_large_mode, spinbox_icon_size_play_control_buttons);
        QWidget::setTabOrder(spinbox_icon_size_play_control_buttons, spinbox_icon_size_playlist_buttons);
        QWidget::setTabOrder(spinbox_icon_size_playlist_buttons, spinbox_icon_size_left_panel_buttons);
        QWidget::setTabOrder(spinbox_icon_size_left_panel_buttons, spinbox_icon_size_configure_buttons);

        retranslateUi(AppearanceSettingsPage);

        QMetaObject::connectSlotsByName(AppearanceSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *AppearanceSettingsPage)
    {
        AppearanceSettingsPage->setWindowTitle(QCoreApplication::translate("AppearanceSettingsPage", "Appearance", nullptr));
        groupbox_style->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Style", nullptr));
        label_style->setText(QCoreApplication::translate("AppearanceSettingsPage", "Style", nullptr));
#if QT_CONFIG(tooltip)
        combobox_style->setToolTip(QCoreApplication::translate("AppearanceSettingsPage", "You might need to restart Strawberry for this setting to fully apply", nullptr));
#endif // QT_CONFIG(tooltip)
        checkbox_dark_mode->setText(QCoreApplication::translate("AppearanceSettingsPage", "Dark mode", nullptr));
#if QT_CONFIG(tooltip)
        checkbox_system_icons->setToolTip(QCoreApplication::translate("AppearanceSettingsPage", "You need to restart Strawberry for this setting to take affect", nullptr));
#endif // QT_CONFIG(tooltip)
        checkbox_system_icons->setText(QCoreApplication::translate("AppearanceSettingsPage", "System icons", nullptr));
#if QT_CONFIG(tooltip)
        groupbox_colors->setToolTip(QCoreApplication::translate("AppearanceSettingsPage", "Changing colors is only supported with some styles", nullptr));
#endif // QT_CONFIG(tooltip)
        groupbox_colors->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Colors", nullptr));
        use_system_color_set->setText(QCoreApplication::translate("AppearanceSettingsPage", "&Use the system default color set", nullptr));
        use_custom_color_set->setText(QCoreApplication::translate("AppearanceSettingsPage", "Use a custom color set", nullptr));
#if QT_CONFIG(tooltip)
        button_dark_colors->setToolTip(QCoreApplication::translate("AppearanceSettingsPage", "Set a custom color set suitable for a dark theme", nullptr));
#endif // QT_CONFIG(tooltip)
        button_dark_colors->setText(QCoreApplication::translate("AppearanceSettingsPage", "Dark colors", nullptr));
#if QT_CONFIG(tooltip)
        button_reset_colors->setToolTip(QCoreApplication::translate("AppearanceSettingsPage", "Reset the custom color set to the system default colors", nullptr));
#endif // QT_CONFIG(tooltip)
        button_reset_colors->setText(QCoreApplication::translate("AppearanceSettingsPage", "Reset to default", nullptr));
        groupbox_tabbar_colors->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Tabbar colors", nullptr));
        tabbar_system_color->setText(QCoreApplication::translate("AppearanceSettingsPage", "&Use the system default color", nullptr));
        tabbar_custom_color->setText(QCoreApplication::translate("AppearanceSettingsPage", "Use custom color", nullptr));
        tabbar_gradient->setText(QCoreApplication::translate("AppearanceSettingsPage", "Use gradient background", nullptr));
        label_tabbar_color->setText(QCoreApplication::translate("AppearanceSettingsPage", "Select tabbar color:", nullptr));
        playlist_playing_song_color->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Playlist playing song color", nullptr));
        playlist_playing_song_color_system->setText(QCoreApplication::translate("AppearanceSettingsPage", "System highlight color", nullptr));
        playlist_playing_song_color_custom->setText(QCoreApplication::translate("AppearanceSettingsPage", "Custom color", nullptr));
        label_select_playlist_playing_song_color->setText(QCoreApplication::translate("AppearanceSettingsPage", "Select playlist playing song color:", nullptr));
        select_playlist_playing_song_color->setText(QString());
        groupbox_background_image->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Background image", nullptr));
        use_default_background->setText(QCoreApplication::translate("AppearanceSettingsPage", "Default bac&kground image", nullptr));
        use_no_background->setText(QCoreApplication::translate("AppearanceSettingsPage", "&No background image", nullptr));
#if QT_CONFIG(tooltip)
        use_album_cover_background->setToolTip(QCoreApplication::translate("AppearanceSettingsPage", "The album cover of the currently playing song", nullptr));
#endif // QT_CONFIG(tooltip)
        use_album_cover_background->setText(QCoreApplication::translate("AppearanceSettingsPage", "Albu&m cover", nullptr));
        use_custom_background_image->setText(QCoreApplication::translate("AppearanceSettingsPage", "Custom image:", nullptr));
        select_background_image_filename_button->setText(QCoreApplication::translate("AppearanceSettingsPage", "Browse...", nullptr));
        label_background_image_position->setText(QCoreApplication::translate("AppearanceSettingsPage", "Position", nullptr));
        combobox_background_image_position->setItemText(0, QCoreApplication::translate("AppearanceSettingsPage", "Upper Left", nullptr));
        combobox_background_image_position->setItemText(1, QCoreApplication::translate("AppearanceSettingsPage", "Upper Right", nullptr));
        combobox_background_image_position->setItemText(2, QCoreApplication::translate("AppearanceSettingsPage", "Middle", nullptr));
        combobox_background_image_position->setItemText(3, QCoreApplication::translate("AppearanceSettingsPage", "Bottom Left", nullptr));
        combobox_background_image_position->setItemText(4, QCoreApplication::translate("AppearanceSettingsPage", "Bottom Right", nullptr));

        label_background_image_max_cover_size->setText(QCoreApplication::translate("AppearanceSettingsPage", "Max cover size", nullptr));
        checkbox_background_image_stretch->setText(QCoreApplication::translate("AppearanceSettingsPage", "Stretch image to fill playlist", nullptr));
        checkbox_background_image_keep_aspect_ratio->setText(QCoreApplication::translate("AppearanceSettingsPage", "Keep aspect ratio", nullptr));
        checkbox_background_image_do_not_cut->setText(QCoreApplication::translate("AppearanceSettingsPage", "Do not cut image", nullptr));
        label_background_image_blur->setText(QCoreApplication::translate("AppearanceSettingsPage", "Blur amount", nullptr));
        label_background_image_blur_radius->setText(QCoreApplication::translate("AppearanceSettingsPage", "0px", nullptr));
        label_background_image_opacity->setText(QCoreApplication::translate("AppearanceSettingsPage", "Opacity", nullptr));
        label_background_image_opacity_2->setText(QCoreApplication::translate("AppearanceSettingsPage", "40%", nullptr));
        groupbox_icon_sizes->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Icon sizes", nullptr));
        label_icon_size_playlist_buttons->setText(QCoreApplication::translate("AppearanceSettingsPage", "Playlist buttons", nullptr));
        label_icon_size_tabbar_large_mode->setText(QCoreApplication::translate("AppearanceSettingsPage", "Tabbar large mode", nullptr));
        label_icon_size_play_control_buttons->setText(QCoreApplication::translate("AppearanceSettingsPage", "Play control buttons", nullptr));
        label_icon_size_configure_buttons->setText(QCoreApplication::translate("AppearanceSettingsPage", "Configure buttons", nullptr));
        label_icon_size_left_panel_buttons->setText(QCoreApplication::translate("AppearanceSettingsPage", "Files, playlists and queue buttons", nullptr));
        label_icon_size_tabbar_small_mode->setText(QCoreApplication::translate("AppearanceSettingsPage", "Tabbar small mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppearanceSettingsPage: public Ui_AppearanceSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCESETTINGSPAGE_H
