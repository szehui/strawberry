/********************************************************************************
** Form generated from reading UI file 'backendsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKENDSETTINGSPAGE_H
#define UI_BACKENDSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/lineedit.h"
#include "widgets/stickyslider.h"

QT_BEGIN_NAMESPACE

class Ui_BackendSettingsPage
{
public:
    QVBoxLayout *layout_backendsettingspage;
    QGroupBox *groupbox_audio_output;
    QVBoxLayout *layout_audio_output;
    QGridLayout *layout_engine_output_device;
    QLabel *label_output;
    QComboBox *combobox_device;
    QLabel *label_device;
    LineEdit *lineedit_device;
    QComboBox *combobox_output;
    QWidget *widget_alsa_plugin;
    QHBoxLayout *layout_alsa_plugin;
    QLabel *label_alsaplugin;
    QRadioButton *radiobutton_alsa_hw;
    QRadioButton *radiobutton_alsa_plughw;
    QRadioButton *radiobutton_alsa_pcm;
    QSpacerItem *spacer_alsaplugin;
    QWidget *widget_exclusive_mode;
    QHBoxLayout *layout_exclusive_mode;
    QCheckBox *checkbox_exclusive_mode;
    QSpacerItem *spacer_exclusive_mode;
    QGroupBox *groupbox_options;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkbox_volume_control;
    QCheckBox *checkbox_volume_exponential;
    QWidget *widget_channels_enabled;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkbox_channels;
    QWidget *widget_channels;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinbox_channels;
    QLabel *label_channels;
    QSpacerItem *spacer_channels;
    QCheckBox *checkbox_bs2b;
    QCheckBox *checkbox_playbin3;
    QCheckBox *checkbox_http2;
    QCheckBox *checkbox_strict_ssl;
    QGroupBox *groupbox_buffer;
    QVBoxLayout *verticalLayout;
    QGridLayout *layout_buffer;
    QSpinBox *spinbox_bufferduration;
    QDoubleSpinBox *spinbox_high_watermark;
    QLabel *label_bufferduration;
    QLabel *label_highwatermark;
    QLabel *label_lowwatermark;
    QDoubleSpinBox *spinbox_low_watermark;
    QSpacerItem *spacer_buffer_3;
    QSpacerItem *spacer_buffer_2;
    QSpacerItem *spacer_buffer_1;
    QLabel *label_device_warmup;
    QSpinBox *spinbox_device_warmup;
    QSpacerItem *spacer_buffer_4;
    QHBoxLayout *layout_buffer_defaults;
    QPushButton *button_buffer_defaults;
    QSpacerItem *spacer_buffer_defaults;
    QGroupBox *groupbox_audio_normalization;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radiobutton_no_audio_normalization;
    QGroupBox *groupbox_replaygain;
    QVBoxLayout *layout_replay_gain;
    QRadioButton *radiobutton_replaygain;
    QWidget *widget_replaygain;
    QFormLayout *formLayout_4;
    QLabel *label_regainmode;
    QComboBox *combobox_replaygainmode;
    QLabel *label_preamp;
    QHBoxLayout *layout_replayagainpreamp;
    QLabel *label_replaygainpreamp;
    StickySlider *stickyslider_replaygainpreamp;
    QCheckBox *checkbox_replaygaincompression;
    QHBoxLayout *layout_replaygainfallbackgain;
    QLabel *label_replaygainfallbackgain;
    StickySlider *stickyslider_replaygainfallbackgain;
    QLabel *label_fallbackgain;
    QGroupBox *groupbox_ebur128;
    QVBoxLayout *layout_ebur128;
    QRadioButton *radiobutton_ebur128_loudness_normalization;
    QWidget *widget_ebur128;
    QFormLayout *formLayout_ebur128;
    QLabel *label_ebur128_target_level_label;
    QHBoxLayout *layout_ebur128_target_level;
    QLabel *label_ebur128_target_level;
    StickySlider *stickyslider_ebur128_target_level;
    QGroupBox *groupbox_fading;
    QVBoxLayout *layout_fading;
    QCheckBox *checkbox_fadeout_stop;
    QCheckBox *checkbox_fadeout_cross;
    QCheckBox *checkbox_fadeout_auto;
    QCheckBox *checkbox_fadeout_samealbum;
    QWidget *widget_fading_options;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_fadingduration_1;
    QSpinBox *spinbox_fadeduration;
    QSpacerItem *spacer_fading_1;
    QCheckBox *checkbox_fadeout_pauseresume;
    QHBoxLayout *layout_fading_duration;
    QLabel *label_fading_duration_1;
    QSpinBox *spinbox_fadeduration_pauseresume;
    QSpacerItem *spacer_fading_duration_1;
    QSpacerItem *spacer_bottom;
    QButtonGroup *buttonGroup_audio_normalization;

    void setupUi(QWidget *BackendSettingsPage)
    {
        if (BackendSettingsPage->objectName().isEmpty())
            BackendSettingsPage->setObjectName("BackendSettingsPage");
        BackendSettingsPage->resize(717, 1259);
        layout_backendsettingspage = new QVBoxLayout(BackendSettingsPage);
        layout_backendsettingspage->setObjectName("layout_backendsettingspage");
        groupbox_audio_output = new QGroupBox(BackendSettingsPage);
        groupbox_audio_output->setObjectName("groupbox_audio_output");
        layout_audio_output = new QVBoxLayout(groupbox_audio_output);
        layout_audio_output->setObjectName("layout_audio_output");
        layout_engine_output_device = new QGridLayout();
        layout_engine_output_device->setObjectName("layout_engine_output_device");
        label_output = new QLabel(groupbox_audio_output);
        label_output->setObjectName("label_output");

        layout_engine_output_device->addWidget(label_output, 2, 0, 1, 1);

        combobox_device = new QComboBox(groupbox_audio_output);
        combobox_device->setObjectName("combobox_device");
        combobox_device->setEnabled(false);
        combobox_device->setCurrentText(QString::fromUtf8(""));

        layout_engine_output_device->addWidget(combobox_device, 3, 1, 1, 1);

        label_device = new QLabel(groupbox_audio_output);
        label_device->setObjectName("label_device");

        layout_engine_output_device->addWidget(label_device, 3, 0, 1, 1);

        lineedit_device = new LineEdit(groupbox_audio_output);
        lineedit_device->setObjectName("lineedit_device");
        lineedit_device->setEnabled(true);
        lineedit_device->setMinimumSize(QSize(0, 28));

        layout_engine_output_device->addWidget(lineedit_device, 4, 1, 1, 1);

        combobox_output = new QComboBox(groupbox_audio_output);
        combobox_output->setObjectName("combobox_output");
        combobox_output->setEnabled(false);
        combobox_output->setCurrentText(QString::fromUtf8(""));

        layout_engine_output_device->addWidget(combobox_output, 2, 1, 1, 1);


        layout_audio_output->addLayout(layout_engine_output_device);

        widget_alsa_plugin = new QWidget(groupbox_audio_output);
        widget_alsa_plugin->setObjectName("widget_alsa_plugin");
        widget_alsa_plugin->setEnabled(false);
        layout_alsa_plugin = new QHBoxLayout(widget_alsa_plugin);
        layout_alsa_plugin->setObjectName("layout_alsa_plugin");
        layout_alsa_plugin->setContentsMargins(0, 0, 0, 0);
        label_alsaplugin = new QLabel(widget_alsa_plugin);
        label_alsaplugin->setObjectName("label_alsaplugin");

        layout_alsa_plugin->addWidget(label_alsaplugin);

        radiobutton_alsa_hw = new QRadioButton(widget_alsa_plugin);
        radiobutton_alsa_hw->setObjectName("radiobutton_alsa_hw");
        radiobutton_alsa_hw->setEnabled(false);

        layout_alsa_plugin->addWidget(radiobutton_alsa_hw);

        radiobutton_alsa_plughw = new QRadioButton(widget_alsa_plugin);
        radiobutton_alsa_plughw->setObjectName("radiobutton_alsa_plughw");
        radiobutton_alsa_plughw->setEnabled(false);

        layout_alsa_plugin->addWidget(radiobutton_alsa_plughw);

        radiobutton_alsa_pcm = new QRadioButton(widget_alsa_plugin);
        radiobutton_alsa_pcm->setObjectName("radiobutton_alsa_pcm");
        radiobutton_alsa_pcm->setEnabled(false);

        layout_alsa_plugin->addWidget(radiobutton_alsa_pcm);

        spacer_alsaplugin = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_alsa_plugin->addItem(spacer_alsaplugin);


        layout_audio_output->addWidget(widget_alsa_plugin);

        widget_exclusive_mode = new QWidget(groupbox_audio_output);
        widget_exclusive_mode->setObjectName("widget_exclusive_mode");
        layout_exclusive_mode = new QHBoxLayout(widget_exclusive_mode);
        layout_exclusive_mode->setSpacing(0);
        layout_exclusive_mode->setObjectName("layout_exclusive_mode");
        layout_exclusive_mode->setContentsMargins(0, 0, 0, 0);
        checkbox_exclusive_mode = new QCheckBox(widget_exclusive_mode);
        checkbox_exclusive_mode->setObjectName("checkbox_exclusive_mode");

        layout_exclusive_mode->addWidget(checkbox_exclusive_mode);

        spacer_exclusive_mode = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_exclusive_mode->addItem(spacer_exclusive_mode);


        layout_audio_output->addWidget(widget_exclusive_mode);


        layout_backendsettingspage->addWidget(groupbox_audio_output);

        groupbox_options = new QGroupBox(BackendSettingsPage);
        groupbox_options->setObjectName("groupbox_options");
        verticalLayout_2 = new QVBoxLayout(groupbox_options);
        verticalLayout_2->setObjectName("verticalLayout_2");
        checkbox_volume_control = new QCheckBox(groupbox_options);
        checkbox_volume_control->setObjectName("checkbox_volume_control");

        verticalLayout_2->addWidget(checkbox_volume_control);

        checkbox_volume_exponential = new QCheckBox(groupbox_options);
        checkbox_volume_exponential->setObjectName("checkbox_volume_exponential");

        verticalLayout_2->addWidget(checkbox_volume_exponential);

        widget_channels_enabled = new QWidget(groupbox_options);
        widget_channels_enabled->setObjectName("widget_channels_enabled");
        horizontalLayout = new QHBoxLayout(widget_channels_enabled);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkbox_channels = new QCheckBox(widget_channels_enabled);
        checkbox_channels->setObjectName("checkbox_channels");

        horizontalLayout->addWidget(checkbox_channels);

        widget_channels = new QWidget(widget_channels_enabled);
        widget_channels->setObjectName("widget_channels");
        horizontalLayout_3 = new QHBoxLayout(widget_channels);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinbox_channels = new QSpinBox(widget_channels);
        spinbox_channels->setObjectName("spinbox_channels");
        spinbox_channels->setMinimum(1);
        spinbox_channels->setMaximum(20);
        spinbox_channels->setValue(2);

        horizontalLayout_3->addWidget(spinbox_channels);

        label_channels = new QLabel(widget_channels);
        label_channels->setObjectName("label_channels");

        horizontalLayout_3->addWidget(label_channels);


        horizontalLayout->addWidget(widget_channels);

        spacer_channels = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_channels);


        verticalLayout_2->addWidget(widget_channels_enabled);

        checkbox_bs2b = new QCheckBox(groupbox_options);
        checkbox_bs2b->setObjectName("checkbox_bs2b");

        verticalLayout_2->addWidget(checkbox_bs2b);

        checkbox_playbin3 = new QCheckBox(groupbox_options);
        checkbox_playbin3->setObjectName("checkbox_playbin3");

        verticalLayout_2->addWidget(checkbox_playbin3);

        checkbox_http2 = new QCheckBox(groupbox_options);
        checkbox_http2->setObjectName("checkbox_http2");

        verticalLayout_2->addWidget(checkbox_http2);

        checkbox_strict_ssl = new QCheckBox(groupbox_options);
        checkbox_strict_ssl->setObjectName("checkbox_strict_ssl");

        verticalLayout_2->addWidget(checkbox_strict_ssl);


        layout_backendsettingspage->addWidget(groupbox_options);

        groupbox_buffer = new QGroupBox(BackendSettingsPage);
        groupbox_buffer->setObjectName("groupbox_buffer");
        verticalLayout = new QVBoxLayout(groupbox_buffer);
        verticalLayout->setObjectName("verticalLayout");
        layout_buffer = new QGridLayout();
        layout_buffer->setObjectName("layout_buffer");
        spinbox_bufferduration = new QSpinBox(groupbox_buffer);
        spinbox_bufferduration->setObjectName("spinbox_bufferduration");
        spinbox_bufferduration->setMaximum(60000);
        spinbox_bufferduration->setSingleStep(100);
        spinbox_bufferduration->setValue(4000);

        layout_buffer->addWidget(spinbox_bufferduration, 0, 1, 1, 1);

        spinbox_high_watermark = new QDoubleSpinBox(groupbox_buffer);
        spinbox_high_watermark->setObjectName("spinbox_high_watermark");
        spinbox_high_watermark->setMaximum(1.000000000000000);
        spinbox_high_watermark->setSingleStep(0.010000000000000);
        spinbox_high_watermark->setValue(0.990000000000000);

        layout_buffer->addWidget(spinbox_high_watermark, 2, 1, 1, 1);

        label_bufferduration = new QLabel(groupbox_buffer);
        label_bufferduration->setObjectName("label_bufferduration");

        layout_buffer->addWidget(label_bufferduration, 0, 0, 1, 1);

        label_highwatermark = new QLabel(groupbox_buffer);
        label_highwatermark->setObjectName("label_highwatermark");

        layout_buffer->addWidget(label_highwatermark, 2, 0, 1, 1);

        label_lowwatermark = new QLabel(groupbox_buffer);
        label_lowwatermark->setObjectName("label_lowwatermark");

        layout_buffer->addWidget(label_lowwatermark, 1, 0, 1, 1);

        spinbox_low_watermark = new QDoubleSpinBox(groupbox_buffer);
        spinbox_low_watermark->setObjectName("spinbox_low_watermark");
        spinbox_low_watermark->setMaximum(1.000000000000000);
        spinbox_low_watermark->setSingleStep(0.010000000000000);
        spinbox_low_watermark->setValue(0.330000000000000);

        layout_buffer->addWidget(spinbox_low_watermark, 1, 1, 1, 1);

        spacer_buffer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_buffer->addItem(spacer_buffer_3, 2, 2, 1, 1);

        spacer_buffer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_buffer->addItem(spacer_buffer_2, 1, 2, 1, 1);

        spacer_buffer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_buffer->addItem(spacer_buffer_1, 0, 2, 1, 1);

        label_device_warmup = new QLabel(groupbox_buffer);
        label_device_warmup->setObjectName("label_device_warmup");

        layout_buffer->addWidget(label_device_warmup, 3, 0, 1, 1);

        spinbox_device_warmup = new QSpinBox(groupbox_buffer);
        spinbox_device_warmup->setObjectName("spinbox_device_warmup");
        spinbox_device_warmup->setMaximum(5000);
        spinbox_device_warmup->setSingleStep(50);
        spinbox_device_warmup->setValue(500);

        layout_buffer->addWidget(spinbox_device_warmup, 3, 1, 1, 1);

        spacer_buffer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_buffer->addItem(spacer_buffer_4, 3, 2, 1, 1);


        verticalLayout->addLayout(layout_buffer);

        layout_buffer_defaults = new QHBoxLayout();
        layout_buffer_defaults->setObjectName("layout_buffer_defaults");
        button_buffer_defaults = new QPushButton(groupbox_buffer);
        button_buffer_defaults->setObjectName("button_buffer_defaults");

        layout_buffer_defaults->addWidget(button_buffer_defaults);

        spacer_buffer_defaults = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_buffer_defaults->addItem(spacer_buffer_defaults);


        verticalLayout->addLayout(layout_buffer_defaults);


        layout_backendsettingspage->addWidget(groupbox_buffer);

        groupbox_audio_normalization = new QGroupBox(BackendSettingsPage);
        groupbox_audio_normalization->setObjectName("groupbox_audio_normalization");
        verticalLayout_3 = new QVBoxLayout(groupbox_audio_normalization);
        verticalLayout_3->setObjectName("verticalLayout_3");
        radiobutton_no_audio_normalization = new QRadioButton(groupbox_audio_normalization);
        buttonGroup_audio_normalization = new QButtonGroup(BackendSettingsPage);
        buttonGroup_audio_normalization->setObjectName("buttonGroup_audio_normalization");
        buttonGroup_audio_normalization->setExclusive(true);
        buttonGroup_audio_normalization->addButton(radiobutton_no_audio_normalization);
        radiobutton_no_audio_normalization->setObjectName("radiobutton_no_audio_normalization");
        radiobutton_no_audio_normalization->setChecked(true);

        verticalLayout_3->addWidget(radiobutton_no_audio_normalization);

        groupbox_replaygain = new QGroupBox(groupbox_audio_normalization);
        groupbox_replaygain->setObjectName("groupbox_replaygain");
        groupbox_replaygain->setEnabled(true);
        layout_replay_gain = new QVBoxLayout(groupbox_replaygain);
        layout_replay_gain->setObjectName("layout_replay_gain");
        radiobutton_replaygain = new QRadioButton(groupbox_replaygain);
        buttonGroup_audio_normalization->addButton(radiobutton_replaygain);
        radiobutton_replaygain->setObjectName("radiobutton_replaygain");
        radiobutton_replaygain->setEnabled(true);

        layout_replay_gain->addWidget(radiobutton_replaygain);

        widget_replaygain = new QWidget(groupbox_replaygain);
        widget_replaygain->setObjectName("widget_replaygain");
        widget_replaygain->setEnabled(false);
        formLayout_4 = new QFormLayout(widget_replaygain);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_regainmode = new QLabel(widget_replaygain);
        label_regainmode->setObjectName("label_regainmode");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_regainmode);

        combobox_replaygainmode = new QComboBox(widget_replaygain);
        combobox_replaygainmode->addItem(QString());
        combobox_replaygainmode->addItem(QString());
        combobox_replaygainmode->setObjectName("combobox_replaygainmode");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, combobox_replaygainmode);

        label_preamp = new QLabel(widget_replaygain);
        label_preamp->setObjectName("label_preamp");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_preamp);

        layout_replayagainpreamp = new QHBoxLayout();
        layout_replayagainpreamp->setObjectName("layout_replayagainpreamp");
        label_replaygainpreamp = new QLabel(widget_replaygain);
        label_replaygainpreamp->setObjectName("label_replaygainpreamp");

        layout_replayagainpreamp->addWidget(label_replaygainpreamp);

        stickyslider_replaygainpreamp = new StickySlider(widget_replaygain);
        stickyslider_replaygainpreamp->setObjectName("stickyslider_replaygainpreamp");
        stickyslider_replaygainpreamp->setMaximum(1200);
        stickyslider_replaygainpreamp->setValue(600);
        stickyslider_replaygainpreamp->setOrientation(Qt::Horizontal);
        stickyslider_replaygainpreamp->setProperty("sticky_center", QVariant(600));

        layout_replayagainpreamp->addWidget(stickyslider_replaygainpreamp);


        formLayout_4->setLayout(1, QFormLayout::FieldRole, layout_replayagainpreamp);

        checkbox_replaygaincompression = new QCheckBox(widget_replaygain);
        checkbox_replaygaincompression->setObjectName("checkbox_replaygaincompression");

        formLayout_4->setWidget(4, QFormLayout::SpanningRole, checkbox_replaygaincompression);

        layout_replaygainfallbackgain = new QHBoxLayout();
        layout_replaygainfallbackgain->setObjectName("layout_replaygainfallbackgain");
        label_replaygainfallbackgain = new QLabel(widget_replaygain);
        label_replaygainfallbackgain->setObjectName("label_replaygainfallbackgain");

        layout_replaygainfallbackgain->addWidget(label_replaygainfallbackgain);

        stickyslider_replaygainfallbackgain = new StickySlider(widget_replaygain);
        stickyslider_replaygainfallbackgain->setObjectName("stickyslider_replaygainfallbackgain");
        stickyslider_replaygainfallbackgain->setMinimum(0);
        stickyslider_replaygainfallbackgain->setMaximum(1200);
        stickyslider_replaygainfallbackgain->setValue(600);
        stickyslider_replaygainfallbackgain->setOrientation(Qt::Horizontal);
        stickyslider_replaygainfallbackgain->setProperty("sticky_center", QVariant(600));

        layout_replaygainfallbackgain->addWidget(stickyslider_replaygainfallbackgain);


        formLayout_4->setLayout(2, QFormLayout::FieldRole, layout_replaygainfallbackgain);

        label_fallbackgain = new QLabel(widget_replaygain);
        label_fallbackgain->setObjectName("label_fallbackgain");

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_fallbackgain);


        layout_replay_gain->addWidget(widget_replaygain);


        verticalLayout_3->addWidget(groupbox_replaygain);

        groupbox_ebur128 = new QGroupBox(groupbox_audio_normalization);
        groupbox_ebur128->setObjectName("groupbox_ebur128");
        groupbox_ebur128->setEnabled(true);
        layout_ebur128 = new QVBoxLayout(groupbox_ebur128);
        layout_ebur128->setObjectName("layout_ebur128");
        radiobutton_ebur128_loudness_normalization = new QRadioButton(groupbox_ebur128);
        buttonGroup_audio_normalization->addButton(radiobutton_ebur128_loudness_normalization);
        radiobutton_ebur128_loudness_normalization->setObjectName("radiobutton_ebur128_loudness_normalization");
        radiobutton_ebur128_loudness_normalization->setEnabled(true);

        layout_ebur128->addWidget(radiobutton_ebur128_loudness_normalization);

        widget_ebur128 = new QWidget(groupbox_ebur128);
        widget_ebur128->setObjectName("widget_ebur128");
        widget_ebur128->setEnabled(false);
        formLayout_ebur128 = new QFormLayout(widget_ebur128);
        formLayout_ebur128->setObjectName("formLayout_ebur128");
        formLayout_ebur128->setContentsMargins(0, 0, 0, 0);
        label_ebur128_target_level_label = new QLabel(widget_ebur128);
        label_ebur128_target_level_label->setObjectName("label_ebur128_target_level_label");

        formLayout_ebur128->setWidget(0, QFormLayout::LabelRole, label_ebur128_target_level_label);

        layout_ebur128_target_level = new QHBoxLayout();
        layout_ebur128_target_level->setObjectName("layout_ebur128_target_level");
        label_ebur128_target_level = new QLabel(widget_ebur128);
        label_ebur128_target_level->setObjectName("label_ebur128_target_level");

        layout_ebur128_target_level->addWidget(label_ebur128_target_level);

        stickyslider_ebur128_target_level = new StickySlider(widget_ebur128);
        stickyslider_ebur128_target_level->setObjectName("stickyslider_ebur128_target_level");
        stickyslider_ebur128_target_level->setMinimum(-480);
        stickyslider_ebur128_target_level->setMaximum(0);
        stickyslider_ebur128_target_level->setValue(-230);
        stickyslider_ebur128_target_level->setOrientation(Qt::Horizontal);
        stickyslider_ebur128_target_level->setProperty("sticky_center", QVariant(-230));

        layout_ebur128_target_level->addWidget(stickyslider_ebur128_target_level);


        formLayout_ebur128->setLayout(0, QFormLayout::FieldRole, layout_ebur128_target_level);


        layout_ebur128->addWidget(widget_ebur128);


        verticalLayout_3->addWidget(groupbox_ebur128);


        layout_backendsettingspage->addWidget(groupbox_audio_normalization);

        groupbox_fading = new QGroupBox(BackendSettingsPage);
        groupbox_fading->setObjectName("groupbox_fading");
        layout_fading = new QVBoxLayout(groupbox_fading);
        layout_fading->setObjectName("layout_fading");
        checkbox_fadeout_stop = new QCheckBox(groupbox_fading);
        checkbox_fadeout_stop->setObjectName("checkbox_fadeout_stop");
        checkbox_fadeout_stop->setChecked(true);

        layout_fading->addWidget(checkbox_fadeout_stop);

        checkbox_fadeout_cross = new QCheckBox(groupbox_fading);
        checkbox_fadeout_cross->setObjectName("checkbox_fadeout_cross");
        checkbox_fadeout_cross->setChecked(true);

        layout_fading->addWidget(checkbox_fadeout_cross);

        checkbox_fadeout_auto = new QCheckBox(groupbox_fading);
        checkbox_fadeout_auto->setObjectName("checkbox_fadeout_auto");

        layout_fading->addWidget(checkbox_fadeout_auto);

        checkbox_fadeout_samealbum = new QCheckBox(groupbox_fading);
        checkbox_fadeout_samealbum->setObjectName("checkbox_fadeout_samealbum");
        checkbox_fadeout_samealbum->setEnabled(false);

        layout_fading->addWidget(checkbox_fadeout_samealbum);

        widget_fading_options = new QWidget(groupbox_fading);
        widget_fading_options->setObjectName("widget_fading_options");
        horizontalLayout_2 = new QHBoxLayout(widget_fading_options);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_fadingduration_1 = new QLabel(widget_fading_options);
        label_fadingduration_1->setObjectName("label_fadingduration_1");
        label_fadingduration_1->setIndent(22);

        horizontalLayout_2->addWidget(label_fadingduration_1);

        spinbox_fadeduration = new QSpinBox(widget_fading_options);
        spinbox_fadeduration->setObjectName("spinbox_fadeduration");
        spinbox_fadeduration->setMaximum(10000);
        spinbox_fadeduration->setSingleStep(1000);
        spinbox_fadeduration->setValue(2000);

        horizontalLayout_2->addWidget(spinbox_fadeduration);

        spacer_fading_1 = new QSpacerItem(257, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer_fading_1);


        layout_fading->addWidget(widget_fading_options);

        checkbox_fadeout_pauseresume = new QCheckBox(groupbox_fading);
        checkbox_fadeout_pauseresume->setObjectName("checkbox_fadeout_pauseresume");

        layout_fading->addWidget(checkbox_fadeout_pauseresume);

        layout_fading_duration = new QHBoxLayout();
        layout_fading_duration->setObjectName("layout_fading_duration");
        label_fading_duration_1 = new QLabel(groupbox_fading);
        label_fading_duration_1->setObjectName("label_fading_duration_1");
        label_fading_duration_1->setIndent(22);

        layout_fading_duration->addWidget(label_fading_duration_1);

        spinbox_fadeduration_pauseresume = new QSpinBox(groupbox_fading);
        spinbox_fadeduration_pauseresume->setObjectName("spinbox_fadeduration_pauseresume");
        spinbox_fadeduration_pauseresume->setMaximum(10000);
        spinbox_fadeduration_pauseresume->setSingleStep(50);
        spinbox_fadeduration_pauseresume->setValue(250);

        layout_fading_duration->addWidget(spinbox_fadeduration_pauseresume);

        spacer_fading_duration_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_fading_duration->addItem(spacer_fading_duration_1);


        layout_fading->addLayout(layout_fading_duration);


        layout_backendsettingspage->addWidget(groupbox_fading);

        spacer_bottom = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_backendsettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(combobox_output, combobox_device);
        QWidget::setTabOrder(combobox_device, radiobutton_alsa_hw);
        QWidget::setTabOrder(radiobutton_alsa_hw, radiobutton_alsa_plughw);
        QWidget::setTabOrder(radiobutton_alsa_plughw, radiobutton_alsa_pcm);
        QWidget::setTabOrder(radiobutton_alsa_pcm, checkbox_exclusive_mode);
        QWidget::setTabOrder(checkbox_exclusive_mode, checkbox_volume_control);
        QWidget::setTabOrder(checkbox_volume_control, checkbox_volume_exponential);
        QWidget::setTabOrder(checkbox_volume_exponential, checkbox_channels);
        QWidget::setTabOrder(checkbox_channels, spinbox_channels);
        QWidget::setTabOrder(spinbox_channels, checkbox_bs2b);
        QWidget::setTabOrder(checkbox_bs2b, checkbox_playbin3);
        QWidget::setTabOrder(checkbox_playbin3, checkbox_http2);
        QWidget::setTabOrder(checkbox_http2, checkbox_strict_ssl);
        QWidget::setTabOrder(checkbox_strict_ssl, spinbox_bufferduration);
        QWidget::setTabOrder(spinbox_bufferduration, spinbox_low_watermark);
        QWidget::setTabOrder(spinbox_low_watermark, spinbox_high_watermark);
        QWidget::setTabOrder(spinbox_high_watermark, spinbox_device_warmup);
        QWidget::setTabOrder(spinbox_device_warmup, button_buffer_defaults);
        QWidget::setTabOrder(button_buffer_defaults, radiobutton_no_audio_normalization);
        QWidget::setTabOrder(radiobutton_no_audio_normalization, radiobutton_replaygain);
        QWidget::setTabOrder(radiobutton_replaygain, combobox_replaygainmode);
        QWidget::setTabOrder(combobox_replaygainmode, stickyslider_replaygainpreamp);
        QWidget::setTabOrder(stickyslider_replaygainpreamp, stickyslider_replaygainfallbackgain);
        QWidget::setTabOrder(stickyslider_replaygainfallbackgain, checkbox_replaygaincompression);
        QWidget::setTabOrder(checkbox_replaygaincompression, radiobutton_ebur128_loudness_normalization);
        QWidget::setTabOrder(radiobutton_ebur128_loudness_normalization, stickyslider_ebur128_target_level);
        QWidget::setTabOrder(stickyslider_ebur128_target_level, checkbox_fadeout_stop);
        QWidget::setTabOrder(checkbox_fadeout_stop, checkbox_fadeout_cross);
        QWidget::setTabOrder(checkbox_fadeout_cross, checkbox_fadeout_auto);
        QWidget::setTabOrder(checkbox_fadeout_auto, checkbox_fadeout_samealbum);
        QWidget::setTabOrder(checkbox_fadeout_samealbum, spinbox_fadeduration);
        QWidget::setTabOrder(spinbox_fadeduration, checkbox_fadeout_pauseresume);
        QWidget::setTabOrder(checkbox_fadeout_pauseresume, spinbox_fadeduration_pauseresume);

        retranslateUi(BackendSettingsPage);
        QObject::connect(radiobutton_ebur128_loudness_normalization, &QRadioButton::toggled, widget_ebur128, &QWidget::setEnabled);
        QObject::connect(radiobutton_replaygain, &QRadioButton::toggled, widget_replaygain, &QWidget::setEnabled);

        QMetaObject::connectSlotsByName(BackendSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *BackendSettingsPage)
    {
        BackendSettingsPage->setWindowTitle(QCoreApplication::translate("BackendSettingsPage", "Backend", nullptr));
        groupbox_audio_output->setTitle(QCoreApplication::translate("BackendSettingsPage", "Audio output", nullptr));
        label_output->setText(QCoreApplication::translate("BackendSettingsPage", "Output", nullptr));
        label_device->setText(QCoreApplication::translate("BackendSettingsPage", "Device", nullptr));
        lineedit_device->setProperty("hint", QVariant(QString()));
        label_alsaplugin->setText(QCoreApplication::translate("BackendSettingsPage", "ALSA plugin:", nullptr));
        radiobutton_alsa_hw->setText(QCoreApplication::translate("BackendSettingsPage", "hw", nullptr));
        radiobutton_alsa_plughw->setText(QCoreApplication::translate("BackendSettingsPage", "p&lughw", nullptr));
        radiobutton_alsa_pcm->setText(QCoreApplication::translate("BackendSettingsPage", "pcm", nullptr));
        checkbox_exclusive_mode->setText(QCoreApplication::translate("BackendSettingsPage", "Exclusive mode (Experimental)", nullptr));
        groupbox_options->setTitle(QCoreApplication::translate("BackendSettingsPage", "Options", nullptr));
        checkbox_volume_control->setText(QCoreApplication::translate("BackendSettingsPage", "Enable volume control", nullptr));
#if QT_CONFIG(tooltip)
        checkbox_volume_exponential->setToolTip(QCoreApplication::translate("BackendSettingsPage", "Map the volume slider to a decibel scale so that perceived loudness changes evenly. Each 1% step equals 0.5 dB, 100% is 0 dB and 0% is silence.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkbox_volume_exponential->setText(QCoreApplication::translate("BackendSettingsPage", "Exponential volume scaling", nullptr));
        checkbox_channels->setText(QCoreApplication::translate("BackendSettingsPage", "Upmix / downmix to", nullptr));
        label_channels->setText(QCoreApplication::translate("BackendSettingsPage", "channels", nullptr));
        checkbox_bs2b->setText(QCoreApplication::translate("BackendSettingsPage", "Improve headphone listening of stereo audio records (bs2b)", nullptr));
        checkbox_playbin3->setText(QCoreApplication::translate("BackendSettingsPage", "Use playbin3 when available", nullptr));
#if QT_CONFIG(tooltip)
        checkbox_http2->setToolTip(QCoreApplication::translate("BackendSettingsPage", "You need to restart Strawberry for this setting to take affect", nullptr));
#endif // QT_CONFIG(tooltip)
        checkbox_http2->setText(QCoreApplication::translate("BackendSettingsPage", "Enable HTTP/2 for streaming", nullptr));
        checkbox_strict_ssl->setText(QCoreApplication::translate("BackendSettingsPage", "Use strict SSL mode", nullptr));
        groupbox_buffer->setTitle(QCoreApplication::translate("BackendSettingsPage", "Buffer", nullptr));
        spinbox_bufferduration->setSuffix(QCoreApplication::translate("BackendSettingsPage", " ms", nullptr));
        label_bufferduration->setText(QCoreApplication::translate("BackendSettingsPage", "Buffer duration", nullptr));
        label_highwatermark->setText(QCoreApplication::translate("BackendSettingsPage", "High watermark", nullptr));
        label_lowwatermark->setText(QCoreApplication::translate("BackendSettingsPage", "Low watermark", nullptr));
        label_device_warmup->setText(QCoreApplication::translate("BackendSettingsPage", "Device warm-up", nullptr));
#if QT_CONFIG(tooltip)
        spinbox_device_warmup->setToolTip(QCoreApplication::translate("BackendSettingsPage", "Delay between opening the audio device and starting playback, to avoid the start of the track being cut off while the device (DAC) is still becoming ready.  Set to 0 to disable.", nullptr));
#endif // QT_CONFIG(tooltip)
        spinbox_device_warmup->setSuffix(QCoreApplication::translate("BackendSettingsPage", " ms", nullptr));
        button_buffer_defaults->setText(QCoreApplication::translate("BackendSettingsPage", "Defaults", nullptr));
        groupbox_audio_normalization->setTitle(QCoreApplication::translate("BackendSettingsPage", "Audio normalization", nullptr));
        radiobutton_no_audio_normalization->setText(QCoreApplication::translate("BackendSettingsPage", "No audio normalization", nullptr));
        groupbox_replaygain->setTitle(QCoreApplication::translate("BackendSettingsPage", "Replay Gain", nullptr));
        radiobutton_replaygain->setText(QCoreApplication::translate("BackendSettingsPage", "Use Replay Gain metadata if it is available", nullptr));
        label_regainmode->setText(QCoreApplication::translate("BackendSettingsPage", "Replay Gain mode", nullptr));
        combobox_replaygainmode->setItemText(0, QCoreApplication::translate("BackendSettingsPage", "Radio (equal loudness for all tracks)", nullptr));
        combobox_replaygainmode->setItemText(1, QCoreApplication::translate("BackendSettingsPage", "Album (ideal loudness for all tracks)", nullptr));

        label_preamp->setText(QCoreApplication::translate("BackendSettingsPage", "Pre-amp", nullptr));
        checkbox_replaygaincompression->setText(QCoreApplication::translate("BackendSettingsPage", "Apply compression to prevent clipping", nullptr));
        label_fallbackgain->setText(QCoreApplication::translate("BackendSettingsPage", "Fallback-gain", nullptr));
        groupbox_ebur128->setTitle(QCoreApplication::translate("BackendSettingsPage", "EBU R 128 Loudness Normalization", nullptr));
        radiobutton_ebur128_loudness_normalization->setText(QCoreApplication::translate("BackendSettingsPage", "Perform track loudness normalization", nullptr));
        label_ebur128_target_level_label->setText(QCoreApplication::translate("BackendSettingsPage", "Target Level", nullptr));
        groupbox_fading->setTitle(QCoreApplication::translate("BackendSettingsPage", "Fading", nullptr));
        checkbox_fadeout_stop->setText(QCoreApplication::translate("BackendSettingsPage", "Fade out when stopping a track", nullptr));
        checkbox_fadeout_cross->setText(QCoreApplication::translate("BackendSettingsPage", "Cross-fade when changing tracks manually", nullptr));
        checkbox_fadeout_auto->setText(QCoreApplication::translate("BackendSettingsPage", "Cross-fade when changing tracks automatically", nullptr));
        checkbox_fadeout_samealbum->setText(QCoreApplication::translate("BackendSettingsPage", "Except between tracks on the same album or in the same CUE sheet", nullptr));
        label_fadingduration_1->setText(QCoreApplication::translate("BackendSettingsPage", "Fading duration", nullptr));
        spinbox_fadeduration->setSuffix(QCoreApplication::translate("BackendSettingsPage", " ms", nullptr));
        checkbox_fadeout_pauseresume->setText(QCoreApplication::translate("BackendSettingsPage", "Fade out on pause / fade in on resume", nullptr));
        label_fading_duration_1->setText(QCoreApplication::translate("BackendSettingsPage", "Fading duration", nullptr));
        spinbox_fadeduration_pauseresume->setSuffix(QCoreApplication::translate("BackendSettingsPage", " ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BackendSettingsPage: public Ui_BackendSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKENDSETTINGSPAGE_H
