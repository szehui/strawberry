/********************************************************************************
** Form generated from reading UI file 'transcodersettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODERSETTINGSPAGE_H
#define UI_TRANSCODERSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "transcoder/transcoderoptionsaac.h"
#include "transcoder/transcoderoptionsasf.h"
#include "transcoder/transcoderoptionsflac.h"
#include "transcoder/transcoderoptionsmp3.h"
#include "transcoder/transcoderoptionsopus.h"
#include "transcoder/transcoderoptionsspeex.h"
#include "transcoder/transcoderoptionsvorbis.h"
#include "transcoder/transcoderoptionswavpack.h"

QT_BEGIN_NAMESPACE

class Ui_TranscoderSettingsPage
{
public:
    QVBoxLayout *layout_transcodersettingspage;
    QLabel *label_top;
    QTabWidget *tabWidget;
    QWidget *tab_flac;
    QVBoxLayout *layout_flac;
    TranscoderOptionsFLAC *transcoding_flac;
    QWidget *tab_wavpack;
    QVBoxLayout *layout_wavpack;
    TranscoderOptionsWavPack *transcoding_wavpack;
    QWidget *tab_vorbis;
    QVBoxLayout *layout_vorbis;
    TranscoderOptionsVorbis *transcoding_vorbis;
    QWidget *tab_opus;
    QVBoxLayout *layout_opus;
    TranscoderOptionsOpus *transcoding_opus;
    QWidget *tab_speex;
    QVBoxLayout *layout_speex;
    TranscoderOptionsSpeex *transcoding_speex;
    QWidget *tab_aac;
    QVBoxLayout *layout_aac;
    TranscoderOptionsAAC *transcoding_aac;
    QWidget *tab_asf;
    QVBoxLayout *layout_asf;
    TranscoderOptionsASF *transcoding_asf;
    QWidget *tab_mp3;
    QVBoxLayout *layout_mp3;
    TranscoderOptionsMP3 *transcoding_mp3;

    void setupUi(QWidget *TranscoderSettingsPage)
    {
        if (TranscoderSettingsPage->objectName().isEmpty())
            TranscoderSettingsPage->setObjectName("TranscoderSettingsPage");
        TranscoderSettingsPage->resize(460, 300);
        layout_transcodersettingspage = new QVBoxLayout(TranscoderSettingsPage);
        layout_transcodersettingspage->setObjectName("layout_transcodersettingspage");
        label_top = new QLabel(TranscoderSettingsPage);
        label_top->setObjectName("label_top");
        label_top->setWordWrap(true);

        layout_transcodersettingspage->addWidget(label_top);

        tabWidget = new QTabWidget(TranscoderSettingsPage);
        tabWidget->setObjectName("tabWidget");
        tab_flac = new QWidget();
        tab_flac->setObjectName("tab_flac");
        layout_flac = new QVBoxLayout(tab_flac);
        layout_flac->setSpacing(0);
        layout_flac->setObjectName("layout_flac");
        layout_flac->setContentsMargins(0, 0, 0, 0);
        transcoding_flac = new TranscoderOptionsFLAC(tab_flac);
        transcoding_flac->setObjectName("transcoding_flac");

        layout_flac->addWidget(transcoding_flac);

        tabWidget->addTab(tab_flac, QString());
        tab_wavpack = new QWidget();
        tab_wavpack->setObjectName("tab_wavpack");
        layout_wavpack = new QVBoxLayout(tab_wavpack);
        layout_wavpack->setSpacing(0);
        layout_wavpack->setObjectName("layout_wavpack");
        layout_wavpack->setContentsMargins(0, 0, 0, 0);
        transcoding_wavpack = new TranscoderOptionsWavPack(tab_wavpack);
        transcoding_wavpack->setObjectName("transcoding_wavpack");

        layout_wavpack->addWidget(transcoding_wavpack);

        tabWidget->addTab(tab_wavpack, QString());
        tab_vorbis = new QWidget();
        tab_vorbis->setObjectName("tab_vorbis");
        layout_vorbis = new QVBoxLayout(tab_vorbis);
        layout_vorbis->setSpacing(0);
        layout_vorbis->setObjectName("layout_vorbis");
        layout_vorbis->setContentsMargins(0, 0, 0, 0);
        transcoding_vorbis = new TranscoderOptionsVorbis(tab_vorbis);
        transcoding_vorbis->setObjectName("transcoding_vorbis");

        layout_vorbis->addWidget(transcoding_vorbis);

        tabWidget->addTab(tab_vorbis, QString());
        tab_opus = new QWidget();
        tab_opus->setObjectName("tab_opus");
        layout_opus = new QVBoxLayout(tab_opus);
        layout_opus->setSpacing(0);
        layout_opus->setObjectName("layout_opus");
        layout_opus->setContentsMargins(0, 0, 0, 0);
        transcoding_opus = new TranscoderOptionsOpus(tab_opus);
        transcoding_opus->setObjectName("transcoding_opus");

        layout_opus->addWidget(transcoding_opus);

        tabWidget->addTab(tab_opus, QString());
        tab_speex = new QWidget();
        tab_speex->setObjectName("tab_speex");
        layout_speex = new QVBoxLayout(tab_speex);
        layout_speex->setSpacing(0);
        layout_speex->setObjectName("layout_speex");
        layout_speex->setContentsMargins(0, 0, 0, 0);
        transcoding_speex = new TranscoderOptionsSpeex(tab_speex);
        transcoding_speex->setObjectName("transcoding_speex");

        layout_speex->addWidget(transcoding_speex);

        tabWidget->addTab(tab_speex, QString());
        tab_aac = new QWidget();
        tab_aac->setObjectName("tab_aac");
        layout_aac = new QVBoxLayout(tab_aac);
        layout_aac->setSpacing(0);
        layout_aac->setObjectName("layout_aac");
        layout_aac->setContentsMargins(0, 0, 0, 0);
        transcoding_aac = new TranscoderOptionsAAC(tab_aac);
        transcoding_aac->setObjectName("transcoding_aac");

        layout_aac->addWidget(transcoding_aac);

        tabWidget->addTab(tab_aac, QString());
        tab_asf = new QWidget();
        tab_asf->setObjectName("tab_asf");
        layout_asf = new QVBoxLayout(tab_asf);
        layout_asf->setSpacing(0);
        layout_asf->setObjectName("layout_asf");
        layout_asf->setContentsMargins(0, 0, 0, 0);
        transcoding_asf = new TranscoderOptionsASF(tab_asf);
        transcoding_asf->setObjectName("transcoding_asf");

        layout_asf->addWidget(transcoding_asf);

        tabWidget->addTab(tab_asf, QString());
        tab_mp3 = new QWidget();
        tab_mp3->setObjectName("tab_mp3");
        layout_mp3 = new QVBoxLayout(tab_mp3);
        layout_mp3->setSpacing(0);
        layout_mp3->setObjectName("layout_mp3");
        layout_mp3->setContentsMargins(0, 0, 0, 0);
        transcoding_mp3 = new TranscoderOptionsMP3(tab_mp3);
        transcoding_mp3->setObjectName("transcoding_mp3");

        layout_mp3->addWidget(transcoding_mp3);

        tabWidget->addTab(tab_mp3, QString());

        layout_transcodersettingspage->addWidget(tabWidget);


        retranslateUi(TranscoderSettingsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TranscoderSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *TranscoderSettingsPage)
    {
        TranscoderSettingsPage->setWindowTitle(QCoreApplication::translate("TranscoderSettingsPage", "Transcoding", nullptr));
        label_top->setText(QCoreApplication::translate("TranscoderSettingsPage", "These settings are used in the \"Transcode Music\" dialog, and when converting music before copying it to a device.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_flac), QCoreApplication::translate("TranscoderSettingsPage", "FLAC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_wavpack), QCoreApplication::translate("TranscoderSettingsPage", "WavPack", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vorbis), QCoreApplication::translate("TranscoderSettingsPage", "Vorbis", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_opus), QCoreApplication::translate("TranscoderSettingsPage", "Opus", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_speex), QCoreApplication::translate("TranscoderSettingsPage", "Speex", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_aac), QCoreApplication::translate("TranscoderSettingsPage", "AAC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_asf), QCoreApplication::translate("TranscoderSettingsPage", "ASF (WMA)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_mp3), QCoreApplication::translate("TranscoderSettingsPage", "MP3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderSettingsPage: public Ui_TranscoderSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODERSETTINGSPAGE_H
