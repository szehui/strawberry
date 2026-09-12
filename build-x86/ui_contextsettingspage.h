/********************************************************************************
** Form generated from reading UI file 'contextsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEXTSETTINGSPAGE_H
#define UI_CONTEXTSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContextSettingsPage
{
public:
    QAction *action_artist;
    QAction *action_album;
    QAction *action_title;
    QAction *action_albumartist;
    QAction *action_year;
    QAction *action_composer;
    QAction *action_performer;
    QAction *action_grouping;
    QAction *action_disc;
    QAction *action_track;
    QAction *action_genre;
    QAction *action_length;
    QAction *action_playcount;
    QAction *action_skipcount;
    QAction *action_newline;
    QAction *action_filename;
    QAction *action_url;
    QAction *action_rating;
    QAction *action_originalyear;
    QAction *action_artistsort;
    QAction *action_albumartistsort;
    QAction *action_titlesort;
    QAction *action_composersort;
    QAction *action_performersort;
    QAction *action_albumsort;
    QVBoxLayout *layout_contextsettingspage;
    QGroupBox *context_custom_text_group;
    QVBoxLayout *layout_context_custom_text_group;
    QFrame *frame_custom_context1;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame1;
    QGridLayout *gridLayout1;
    QLineEdit *context_custom_text1;
    QToolButton *context_exp_chooser1;
    QLabel *label_title;
    QLabel *label_summary;
    QLineEdit *context_custom_text2;
    QToolButton *context_exp_chooser2;
    QGroupBox *context_order_group;
    QVBoxLayout *layout_context_order_group;
    QFrame *frame_custom_context2;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *checkbox_album;
    QCheckBox *checkbox_technical_data;
    QCheckBox *checkbox_song_lyrics;
    QCheckBox *checkbox_search_cover;
    QCheckBox *checkbox_search_lyrics;
    QGroupBox *groupbox_font_headline;
    QFormLayout *formLayout;
    QLabel *label_1_font;
    QLabel *label_1_font_size;
    QDoubleSpinBox *font_size_headline;
    QFontComboBox *font_headline;
    QLabel *label_1_preview;
    QTextEdit *preview_headline;
    QGroupBox *groupbox_font_normal;
    QFormLayout *formLayout_2;
    QLabel *label_2_font;
    QFontComboBox *font_normal;
    QLabel *label_2_font_size;
    QDoubleSpinBox *font_size_normal;
    QLabel *label_1_preview_2;
    QTextEdit *preview_normal;
    QSpacerItem *spacer_bottom;

    void setupUi(QWidget *ContextSettingsPage)
    {
        if (ContextSettingsPage->objectName().isEmpty())
            ContextSettingsPage->setObjectName("ContextSettingsPage");
        ContextSettingsPage->resize(510, 874);
        action_artist = new QAction(ContextSettingsPage);
        action_artist->setObjectName("action_artist");
        action_artist->setText(QString::fromUtf8("%artist%"));
        action_artist->setIconText(QString::fromUtf8("%artist%"));
        action_album = new QAction(ContextSettingsPage);
        action_album->setObjectName("action_album");
        action_album->setText(QString::fromUtf8("%album%"));
        action_album->setIconText(QString::fromUtf8("%album%"));
        action_title = new QAction(ContextSettingsPage);
        action_title->setObjectName("action_title");
        action_title->setText(QString::fromUtf8("%title%"));
        action_title->setIconText(QString::fromUtf8("%title%"));
        action_albumartist = new QAction(ContextSettingsPage);
        action_albumartist->setObjectName("action_albumartist");
        action_albumartist->setText(QString::fromUtf8("%albumartist%"));
        action_albumartist->setIconText(QString::fromUtf8("%albumartist%"));
        action_year = new QAction(ContextSettingsPage);
        action_year->setObjectName("action_year");
        action_year->setText(QString::fromUtf8("%year%"));
        action_year->setIconText(QString::fromUtf8("%year%"));
        action_composer = new QAction(ContextSettingsPage);
        action_composer->setObjectName("action_composer");
        action_composer->setText(QString::fromUtf8("%composer%"));
        action_composer->setIconText(QString::fromUtf8("%composer%"));
        action_performer = new QAction(ContextSettingsPage);
        action_performer->setObjectName("action_performer");
        action_performer->setText(QString::fromUtf8("%performer%"));
        action_performer->setIconText(QString::fromUtf8("%performer%"));
        action_grouping = new QAction(ContextSettingsPage);
        action_grouping->setObjectName("action_grouping");
        action_grouping->setText(QString::fromUtf8("%grouping%"));
        action_grouping->setIconText(QString::fromUtf8("%grouping%"));
        action_disc = new QAction(ContextSettingsPage);
        action_disc->setObjectName("action_disc");
        action_disc->setText(QString::fromUtf8("%disc%"));
        action_disc->setIconText(QString::fromUtf8("%disc%"));
        action_track = new QAction(ContextSettingsPage);
        action_track->setObjectName("action_track");
        action_track->setText(QString::fromUtf8("%track%"));
        action_track->setIconText(QString::fromUtf8("%track%"));
        action_genre = new QAction(ContextSettingsPage);
        action_genre->setObjectName("action_genre");
        action_genre->setText(QString::fromUtf8("%genre%"));
        action_genre->setIconText(QString::fromUtf8("%genre%"));
        action_length = new QAction(ContextSettingsPage);
        action_length->setObjectName("action_length");
        action_length->setText(QString::fromUtf8("%length%"));
        action_length->setIconText(QString::fromUtf8("%length%"));
        action_playcount = new QAction(ContextSettingsPage);
        action_playcount->setObjectName("action_playcount");
        action_playcount->setText(QString::fromUtf8("%playcount%"));
        action_playcount->setIconText(QString::fromUtf8("%playcount%"));
        action_skipcount = new QAction(ContextSettingsPage);
        action_skipcount->setObjectName("action_skipcount");
        action_skipcount->setText(QString::fromUtf8("%skipcount%"));
        action_skipcount->setIconText(QString::fromUtf8("%skipcount%"));
        action_newline = new QAction(ContextSettingsPage);
        action_newline->setObjectName("action_newline");
        action_newline->setText(QString::fromUtf8("%newline%"));
        action_newline->setIconText(QString::fromUtf8("%newline%"));
        action_filename = new QAction(ContextSettingsPage);
        action_filename->setObjectName("action_filename");
        action_filename->setIconText(QString::fromUtf8("%filename%"));
        action_url = new QAction(ContextSettingsPage);
        action_url->setObjectName("action_url");
        action_url->setIconText(QString::fromUtf8("%url%"));
        action_rating = new QAction(ContextSettingsPage);
        action_rating->setObjectName("action_rating");
        action_rating->setIconText(QString::fromUtf8("%rating%"));
        action_originalyear = new QAction(ContextSettingsPage);
        action_originalyear->setObjectName("action_originalyear");
        action_originalyear->setText(QString::fromUtf8("%originalyear%"));
        action_originalyear->setIconText(QString::fromUtf8("%originalyear%"));
        action_artistsort = new QAction(ContextSettingsPage);
        action_artistsort->setObjectName("action_artistsort");
        action_artistsort->setText(QString::fromUtf8("%artistsort%"));
        action_artistsort->setIconText(QString::fromUtf8("%artistsort%"));
        action_albumartistsort = new QAction(ContextSettingsPage);
        action_albumartistsort->setObjectName("action_albumartistsort");
        action_albumartistsort->setText(QString::fromUtf8("%albumartistsort%"));
        action_albumartistsort->setIconText(QString::fromUtf8("%albumartistsort%"));
        action_titlesort = new QAction(ContextSettingsPage);
        action_titlesort->setObjectName("action_titlesort");
        action_titlesort->setText(QString::fromUtf8("%titlesort%"));
        action_titlesort->setIconText(QString::fromUtf8("%titlesort%"));
        action_composersort = new QAction(ContextSettingsPage);
        action_composersort->setObjectName("action_composersort");
        action_composersort->setText(QString::fromUtf8("%composersort%"));
        action_composersort->setIconText(QString::fromUtf8("%composersort%"));
        action_performersort = new QAction(ContextSettingsPage);
        action_performersort->setObjectName("action_performersort");
        action_performersort->setText(QString::fromUtf8("%performersort%"));
        action_performersort->setIconText(QString::fromUtf8("%performersort%"));
        action_albumsort = new QAction(ContextSettingsPage);
        action_albumsort->setObjectName("action_albumsort");
        action_albumsort->setText(QString::fromUtf8("%albumsort%"));
        action_albumsort->setIconText(QString::fromUtf8("%albumsort%"));
        layout_contextsettingspage = new QVBoxLayout(ContextSettingsPage);
        layout_contextsettingspage->setObjectName("layout_contextsettingspage");
        context_custom_text_group = new QGroupBox(ContextSettingsPage);
        context_custom_text_group->setObjectName("context_custom_text_group");
        layout_context_custom_text_group = new QVBoxLayout(context_custom_text_group);
        layout_context_custom_text_group->setObjectName("layout_context_custom_text_group");
        frame_custom_context1 = new QFrame(context_custom_text_group);
        frame_custom_context1->setObjectName("frame_custom_context1");
        frame_custom_context1->setFrameShape(QFrame::NoFrame);
        frame_custom_context1->setFrameShadow(QFrame::Plain);
        frame_custom_context1->setLineWidth(0);
        horizontalLayout_7 = new QHBoxLayout(frame_custom_context1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);

        layout_context_custom_text_group->addWidget(frame_custom_context1);

        frame1 = new QFrame(context_custom_text_group);
        frame1->setObjectName("frame1");
        frame1->setFrameShape(QFrame::NoFrame);
        frame1->setFrameShadow(QFrame::Plain);
        frame1->setLineWidth(0);
        gridLayout1 = new QGridLayout(frame1);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout1->setContentsMargins(-1, 0, -1, 0);
        context_custom_text1 = new QLineEdit(frame1);
        context_custom_text1->setObjectName("context_custom_text1");
#if QT_CONFIG(accessibility)
        context_custom_text1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        context_custom_text1->setText(QString::fromUtf8("%title - %artist%"));

        gridLayout1->addWidget(context_custom_text1, 0, 1, 1, 1);

        context_exp_chooser1 = new QToolButton(frame1);
        context_exp_chooser1->setObjectName("context_exp_chooser1");

        gridLayout1->addWidget(context_exp_chooser1, 0, 2, 1, 1);

        label_title = new QLabel(frame1);
        label_title->setObjectName("label_title");

        gridLayout1->addWidget(label_title, 0, 0, 1, 1);

        label_summary = new QLabel(frame1);
        label_summary->setObjectName("label_summary");

        gridLayout1->addWidget(label_summary, 1, 0, 1, 1);

        context_custom_text2 = new QLineEdit(frame1);
        context_custom_text2->setObjectName("context_custom_text2");
#if QT_CONFIG(accessibility)
        context_custom_text2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        context_custom_text2->setText(QString::fromUtf8("%album%"));

        gridLayout1->addWidget(context_custom_text2, 1, 1, 1, 1);

        context_exp_chooser2 = new QToolButton(frame1);
        context_exp_chooser2->setObjectName("context_exp_chooser2");

        gridLayout1->addWidget(context_exp_chooser2, 1, 2, 1, 1);


        layout_context_custom_text_group->addWidget(frame1);


        layout_contextsettingspage->addWidget(context_custom_text_group);

        context_order_group = new QGroupBox(ContextSettingsPage);
        context_order_group->setObjectName("context_order_group");
        layout_context_order_group = new QVBoxLayout(context_order_group);
        layout_context_order_group->setObjectName("layout_context_order_group");
        frame_custom_context2 = new QFrame(context_order_group);
        frame_custom_context2->setObjectName("frame_custom_context2");
        frame_custom_context2->setFrameShape(QFrame::NoFrame);
        frame_custom_context2->setFrameShadow(QFrame::Plain);
        frame_custom_context2->setLineWidth(0);
        horizontalLayout_17 = new QHBoxLayout(frame_custom_context2);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);

        layout_context_order_group->addWidget(frame_custom_context2);

        checkbox_album = new QCheckBox(context_order_group);
        checkbox_album->setObjectName("checkbox_album");
        checkbox_album->setChecked(true);

        layout_context_order_group->addWidget(checkbox_album);

        checkbox_technical_data = new QCheckBox(context_order_group);
        checkbox_technical_data->setObjectName("checkbox_technical_data");

        layout_context_order_group->addWidget(checkbox_technical_data);

        checkbox_song_lyrics = new QCheckBox(context_order_group);
        checkbox_song_lyrics->setObjectName("checkbox_song_lyrics");
        checkbox_song_lyrics->setChecked(true);

        layout_context_order_group->addWidget(checkbox_song_lyrics);

        checkbox_search_cover = new QCheckBox(context_order_group);
        checkbox_search_cover->setObjectName("checkbox_search_cover");
        checkbox_search_cover->setChecked(true);

        layout_context_order_group->addWidget(checkbox_search_cover);

        checkbox_search_lyrics = new QCheckBox(context_order_group);
        checkbox_search_lyrics->setObjectName("checkbox_search_lyrics");
        checkbox_search_lyrics->setChecked(true);

        layout_context_order_group->addWidget(checkbox_search_lyrics);


        layout_contextsettingspage->addWidget(context_order_group);

        groupbox_font_headline = new QGroupBox(ContextSettingsPage);
        groupbox_font_headline->setObjectName("groupbox_font_headline");
        formLayout = new QFormLayout(groupbox_font_headline);
        formLayout->setObjectName("formLayout");
        label_1_font = new QLabel(groupbox_font_headline);
        label_1_font->setObjectName("label_1_font");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1_font);

        label_1_font_size = new QLabel(groupbox_font_headline);
        label_1_font_size->setObjectName("label_1_font_size");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_1_font_size);

        font_size_headline = new QDoubleSpinBox(groupbox_font_headline);
        font_size_headline->setObjectName("font_size_headline");
        font_size_headline->setDecimals(1);
        font_size_headline->setMinimum(2.000000000000000);
        font_size_headline->setMaximum(50.000000000000000);
        font_size_headline->setSingleStep(0.500000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, font_size_headline);

        font_headline = new QFontComboBox(groupbox_font_headline);
        font_headline->setObjectName("font_headline");

        formLayout->setWidget(0, QFormLayout::FieldRole, font_headline);

        label_1_preview = new QLabel(groupbox_font_headline);
        label_1_preview->setObjectName("label_1_preview");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_1_preview);

        preview_headline = new QTextEdit(groupbox_font_headline);
        preview_headline->setObjectName("preview_headline");
        preview_headline->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, preview_headline);


        layout_contextsettingspage->addWidget(groupbox_font_headline);

        groupbox_font_normal = new QGroupBox(ContextSettingsPage);
        groupbox_font_normal->setObjectName("groupbox_font_normal");
        formLayout_2 = new QFormLayout(groupbox_font_normal);
        formLayout_2->setObjectName("formLayout_2");
        label_2_font = new QLabel(groupbox_font_normal);
        label_2_font->setObjectName("label_2_font");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2_font);

        font_normal = new QFontComboBox(groupbox_font_normal);
        font_normal->setObjectName("font_normal");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, font_normal);

        label_2_font_size = new QLabel(groupbox_font_normal);
        label_2_font_size->setObjectName("label_2_font_size");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2_font_size);

        font_size_normal = new QDoubleSpinBox(groupbox_font_normal);
        font_size_normal->setObjectName("font_size_normal");
        font_size_normal->setDecimals(1);
        font_size_normal->setMinimum(2.000000000000000);
        font_size_normal->setMaximum(50.000000000000000);
        font_size_normal->setSingleStep(0.500000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, font_size_normal);

        label_1_preview_2 = new QLabel(groupbox_font_normal);
        label_1_preview_2->setObjectName("label_1_preview_2");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_1_preview_2);

        preview_normal = new QTextEdit(groupbox_font_normal);
        preview_normal->setObjectName("preview_normal");
        preview_normal->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, preview_normal);


        layout_contextsettingspage->addWidget(groupbox_font_normal);

        spacer_bottom = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_contextsettingspage->addItem(spacer_bottom);

        QWidget::setTabOrder(context_custom_text1, context_exp_chooser1);
        QWidget::setTabOrder(context_exp_chooser1, context_custom_text2);
        QWidget::setTabOrder(context_custom_text2, context_exp_chooser2);
        QWidget::setTabOrder(context_exp_chooser2, checkbox_album);
        QWidget::setTabOrder(checkbox_album, checkbox_technical_data);
        QWidget::setTabOrder(checkbox_technical_data, checkbox_song_lyrics);
        QWidget::setTabOrder(checkbox_song_lyrics, checkbox_search_cover);
        QWidget::setTabOrder(checkbox_search_cover, checkbox_search_lyrics);
        QWidget::setTabOrder(checkbox_search_lyrics, font_headline);
        QWidget::setTabOrder(font_headline, font_size_headline);
        QWidget::setTabOrder(font_size_headline, preview_headline);
        QWidget::setTabOrder(preview_headline, font_normal);
        QWidget::setTabOrder(font_normal, font_size_normal);
        QWidget::setTabOrder(font_size_normal, preview_normal);

        retranslateUi(ContextSettingsPage);

        QMetaObject::connectSlotsByName(ContextSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *ContextSettingsPage)
    {
        ContextSettingsPage->setWindowTitle(QCoreApplication::translate("ContextSettingsPage", "Context", nullptr));
#if QT_CONFIG(tooltip)
        action_artist->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song artist tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_album->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song album tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_title->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song title tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_albumartist->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song albumartist tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_year->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song year tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_composer->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song composer tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_performer->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song performer tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_grouping->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song grouping tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_disc->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song disc tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_track->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song track tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_genre->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song genre tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_length->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song length tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_playcount->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song play count", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_skipcount->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song skip count", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_newline->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add a new line if supported by the notification type", nullptr));
#endif // QT_CONFIG(tooltip)
        action_filename->setText(QCoreApplication::translate("ContextSettingsPage", "%filename%", nullptr));
#if QT_CONFIG(tooltip)
        action_filename->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song filename", nullptr));
#endif // QT_CONFIG(tooltip)
        action_url->setText(QCoreApplication::translate("ContextSettingsPage", "%url%", nullptr));
#if QT_CONFIG(tooltip)
        action_url->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song URL", nullptr));
#endif // QT_CONFIG(tooltip)
        action_rating->setText(QCoreApplication::translate("ContextSettingsPage", "%rating%", nullptr));
#if QT_CONFIG(tooltip)
        action_rating->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song rating", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_originalyear->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song original year tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_artistsort->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song artistsort tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_albumartistsort->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song albumartistsort tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_titlesort->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song titlesort tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_composersort->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song composersort tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_performersort->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song performersort tag", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        action_albumsort->setToolTip(QCoreApplication::translate("ContextSettingsPage", "Add song albumsort tag", nullptr));
#endif // QT_CONFIG(tooltip)
        context_custom_text_group->setTitle(QCoreApplication::translate("ContextSettingsPage", "Custom text settings", nullptr));
#if QT_CONFIG(accessibility)
        context_exp_chooser1->setAccessibleName(QCoreApplication::translate("ContextSettingsPage", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
        context_exp_chooser1->setText(QString());
        label_title->setText(QCoreApplication::translate("ContextSettingsPage", "Title", nullptr));
        label_summary->setText(QCoreApplication::translate("ContextSettingsPage", "Summary", nullptr));
#if QT_CONFIG(accessibility)
        context_exp_chooser2->setAccessibleName(QCoreApplication::translate("ContextSettingsPage", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
        context_exp_chooser2->setText(QString());
        context_order_group->setTitle(QCoreApplication::translate("ContextSettingsPage", "Enable Items", nullptr));
        checkbox_album->setText(QCoreApplication::translate("ContextSettingsPage", "Album", nullptr));
        checkbox_technical_data->setText(QCoreApplication::translate("ContextSettingsPage", "Technical Data", nullptr));
        checkbox_song_lyrics->setText(QCoreApplication::translate("ContextSettingsPage", "Song Lyrics", nullptr));
        checkbox_search_cover->setText(QCoreApplication::translate("ContextSettingsPage", "Automatically search for album cover", nullptr));
        checkbox_search_lyrics->setText(QCoreApplication::translate("ContextSettingsPage", "Automatically search for song lyrics", nullptr));
        groupbox_font_headline->setTitle(QCoreApplication::translate("ContextSettingsPage", "Font for headline", nullptr));
        label_1_font->setText(QCoreApplication::translate("ContextSettingsPage", "Font", nullptr));
        label_1_font_size->setText(QCoreApplication::translate("ContextSettingsPage", "Font size", nullptr));
        font_size_headline->setSuffix(QCoreApplication::translate("ContextSettingsPage", " pt", nullptr));
        label_1_preview->setText(QCoreApplication::translate("ContextSettingsPage", "Preview", nullptr));
        groupbox_font_normal->setTitle(QCoreApplication::translate("ContextSettingsPage", "Font for data and lyrics", nullptr));
        label_2_font->setText(QCoreApplication::translate("ContextSettingsPage", "Font", nullptr));
        label_2_font_size->setText(QCoreApplication::translate("ContextSettingsPage", "Font size", nullptr));
        font_size_normal->setSuffix(QCoreApplication::translate("ContextSettingsPage", " pt", nullptr));
        label_1_preview_2->setText(QCoreApplication::translate("ContextSettingsPage", "Preview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContextSettingsPage: public Ui_ContextSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEXTSETTINGSPAGE_H
