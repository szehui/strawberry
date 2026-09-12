/********************************************************************************
** Form generated from reading UI file 'edittagdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTAGDIALOG_H
#define UI_EDITTAGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/busyindicator.h"
#include "widgets/lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditTagDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollarea;
    QWidget *widget_scrollarea;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *song_list;
    QTabWidget *tab_widget;
    QWidget *tab_summary;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *layout_summary_top;
    QVBoxLayout *layout_summary_left;
    QLabel *summary_art;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *layout_summary_right;
    QTextEdit *summary;
    QFrame *line;
    QGridLayout *layout_summary_bottom;
    QLineEdit *art_embedded;
    QLabel *filesize;
    QLabel *label_ctime;
    QLabel *filetype;
    QLabel *label_art_automatic;
    QLabel *bitrate;
    QLabel *label_mtime;
    QLabel *label_art_embedded;
    QLabel *label_lastplayed;
    QLabel *lastplayed;
    QLabel *label_filetype;
    QLabel *label_length;
    QLabel *label_playcount;
    QLabel *label_bitdepth;
    QLabel *skipcount;
    QLabel *bitdepth;
    QLabel *length;
    QLineEdit *art_unset;
    QLabel *label_ebur128_integrated_loudness;
    QLabel *samplerate;
    QLabel *label_bitrate;
    QLabel *label_skipcount;
    QLineEdit *path;
    QLabel *label_samplerate;
    QLabel *label_path;
    QLabel *ctime;
    QLabel *label_filename;
    QLabel *label_art_unset;
    QLabel *label_filesize;
    QLabel *label_art_manual;
    QLabel *playcount;
    QLabel *mtime;
    QLineEdit *filename;
    QLineEdit *art_automatic;
    QLineEdit *art_manual;
    QLabel *label_ebur128_loudness_range;
    QLabel *ebur128_integrated_loudness;
    QLabel *ebur128_loudness_range;
    QPushButton *playcount_reset;
    QSpacerItem *spacer_summary_bottom;
    QWidget *tab_tags;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *layout_albumart;
    QVBoxLayout *layout_albumart_left;
    QLabel *tags_art;
    QPushButton *tags_art_button;
    QCheckBox *checkbox_embedded_cover;
    QHBoxLayout *layout_id3v2_version;
    QLabel *label_id3v2_version;
    QComboBox *combobox_id3v2_version;
    QSpacerItem *spacer_id3v2_version;
    QSpacerItem *spacer_albumart_bottom;
    QVBoxLayout *layout_albumart_right;
    QTextEdit *tags_summary;
    QGridLayout *layout_tags;
    QLabel *label_year;
    QPushButton *fetch_tag;
    QLabel *label_performersort;
    QLabel *label_compilation;
    LineEdit *albumartistsort;
    QLabel *label_titlesort;
    QLabel *label_albumartist;
    LineEdit *title;
    QLabel *label_performer;
    LineEdit *genre;
    SpinBox *year;
    RatingBox *rating;
    LineEdit *album;
    TextEdit *comment;
    LineEdit *artistsort;
    QLabel *label_title;
    LineEdit *grouping;
    SpinBox *disc;
    CheckBox *compilation;
    LineEdit *titlesort;
    QLabel *label_rating;
    QLabel *label_disc;
    LineEdit *performer;
    SpinBox *track;
    QLabel *label_albumartistsort;
    LineEdit *artist;
    QLabel *label_artistsort;
    QLabel *label_album;
    QLabel *label_track;
    QLabel *label_composer;
    LineEdit *albumartist;
    LineEdit *composersort;
    LineEdit *performersort;
    QLabel *label_grouping;
    QLabel *label_albumsort;
    QLabel *label_artist;
    QLabel *label_genre;
    LineEdit *composer;
    QLabel *label_comment;
    QLabel *label_composersort;
    LineEdit *albumsort;
    QSpacerItem *verticalSpacer;
    QWidget *tab_lyrics;
    QVBoxLayout *verticalLayout_7;
    TextEdit *lyrics;
    QLabel *label_lyrics;
    QPushButton *fetch_lyrics;
    BusyIndicator *loading_label;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *EditTagDialog)
    {
        if (EditTagDialog->objectName().isEmpty())
            EditTagDialog->setObjectName("EditTagDialog");
        EditTagDialog->resize(813, 930);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/64x64/strawberry.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditTagDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(EditTagDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollarea = new QScrollArea(EditTagDialog);
        scrollarea->setObjectName("scrollarea");
        scrollarea->setFrameShape(QFrame::NoFrame);
        scrollarea->setWidgetResizable(true);
        widget_scrollarea = new QWidget();
        widget_scrollarea->setObjectName("widget_scrollarea");
        widget_scrollarea->setGeometry(QRect(0, 0, 781, 1047));
        verticalLayout = new QVBoxLayout(widget_scrollarea);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(widget_scrollarea);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        song_list = new QListWidget(splitter);
        song_list->setObjectName("song_list");
        song_list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        splitter->addWidget(song_list);
        tab_widget = new QTabWidget(splitter);
        tab_widget->setObjectName("tab_widget");
        tab_summary = new QWidget();
        tab_summary->setObjectName("tab_summary");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab_summary->sizePolicy().hasHeightForWidth());
        tab_summary->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(tab_summary);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        layout_summary_top = new QHBoxLayout();
        layout_summary_top->setObjectName("layout_summary_top");
        layout_summary_top->setSizeConstraint(QLayout::SetMinimumSize);
        layout_summary_left = new QVBoxLayout();
        layout_summary_left->setObjectName("layout_summary_left");
        layout_summary_left->setSizeConstraint(QLayout::SetMinimumSize);
        summary_art = new QLabel(tab_summary);
        summary_art->setObjectName("summary_art");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(summary_art->sizePolicy().hasHeightForWidth());
        summary_art->setSizePolicy(sizePolicy1);
        summary_art->setMinimumSize(QSize(128, 128));
        summary_art->setFrameShape(QFrame::StyledPanel);
        summary_art->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        summary_art->setMargin(2);

        layout_summary_left->addWidget(summary_art);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

        layout_summary_left->addItem(verticalSpacer_2);


        layout_summary_top->addLayout(layout_summary_left);

        layout_summary_right = new QVBoxLayout();
        layout_summary_right->setObjectName("layout_summary_right");
        layout_summary_right->setSizeConstraint(QLayout::SetMinimumSize);
        summary = new QTextEdit(tab_summary);
        summary->setObjectName("summary");
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(summary->sizePolicy().hasHeightForWidth());
        summary->setSizePolicy(sizePolicy2);
        summary->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"  background: transparent;\n"
"}"));
        summary->setFrameShape(QFrame::NoFrame);
        summary->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_right->addWidget(summary);


        layout_summary_top->addLayout(layout_summary_right);


        verticalLayout_2->addLayout(layout_summary_top);

        line = new QFrame(tab_summary);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        layout_summary_bottom = new QGridLayout();
        layout_summary_bottom->setObjectName("layout_summary_bottom");
        layout_summary_bottom->setSizeConstraint(QLayout::SetMinimumSize);
        art_embedded = new QLineEdit(tab_summary);
        art_embedded->setObjectName("art_embedded");
        art_embedded->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background: transparent;\n"
"}"));
        art_embedded->setFrame(false);

        layout_summary_bottom->addWidget(art_embedded, 21, 1, 1, 1);

        filesize = new QLabel(tab_summary);
        filesize->setObjectName("filesize");
        filesize->setWordWrap(true);
        filesize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(filesize, 5, 1, 1, 1);

        label_ctime = new QLabel(tab_summary);
        label_ctime->setObjectName("label_ctime");
        label_ctime->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_ctime, 6, 0, 1, 1);

        filetype = new QLabel(tab_summary);
        filetype->setObjectName("filetype");
        filetype->setWordWrap(true);
        filetype->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(filetype, 2, 1, 1, 1);

        label_art_automatic = new QLabel(tab_summary);
        label_art_automatic->setObjectName("label_art_automatic");

        layout_summary_bottom->addWidget(label_art_automatic, 23, 0, 1, 1);

        bitrate = new QLabel(tab_summary);
        bitrate->setObjectName("bitrate");
        bitrate->setBaseSize(QSize(0, 0));
        bitrate->setWordWrap(true);
        bitrate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(bitrate, 12, 1, 1, 1);

        label_mtime = new QLabel(tab_summary);
        label_mtime->setObjectName("label_mtime");
        label_mtime->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_mtime, 7, 0, 1, 1);

        label_art_embedded = new QLabel(tab_summary);
        label_art_embedded->setObjectName("label_art_embedded");

        layout_summary_bottom->addWidget(label_art_embedded, 21, 0, 1, 1);

        label_lastplayed = new QLabel(tab_summary);
        label_lastplayed->setObjectName("label_lastplayed");
        label_lastplayed->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_lastplayed, 8, 0, 1, 1);

        lastplayed = new QLabel(tab_summary);
        lastplayed->setObjectName("lastplayed");
        lastplayed->setWordWrap(true);
        lastplayed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(lastplayed, 8, 1, 1, 1);

        label_filetype = new QLabel(tab_summary);
        label_filetype->setObjectName("label_filetype");
        label_filetype->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_filetype, 2, 0, 1, 1);

        label_length = new QLabel(tab_summary);
        label_length->setObjectName("label_length");
        label_length->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_length, 9, 0, 1, 1);

        label_playcount = new QLabel(tab_summary);
        label_playcount->setObjectName("label_playcount");
        label_playcount->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_playcount, 19, 0, 1, 1);

        label_bitdepth = new QLabel(tab_summary);
        label_bitdepth->setObjectName("label_bitdepth");
        label_bitdepth->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_bitdepth, 16, 0, 1, 1);

        skipcount = new QLabel(tab_summary);
        skipcount->setObjectName("skipcount");
        skipcount->setWordWrap(true);
        skipcount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(skipcount, 20, 1, 1, 1);

        bitdepth = new QLabel(tab_summary);
        bitdepth->setObjectName("bitdepth");
        bitdepth->setWordWrap(true);
        bitdepth->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(bitdepth, 16, 1, 1, 1);

        length = new QLabel(tab_summary);
        length->setObjectName("length");
        length->setBaseSize(QSize(150, 0));
        length->setWordWrap(true);
        length->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(length, 9, 1, 1, 1);

        art_unset = new QLineEdit(tab_summary);
        art_unset->setObjectName("art_unset");
        art_unset->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background: transparent;\n"
"}"));
        art_unset->setFrame(false);

        layout_summary_bottom->addWidget(art_unset, 24, 1, 1, 1);

        label_ebur128_integrated_loudness = new QLabel(tab_summary);
        label_ebur128_integrated_loudness->setObjectName("label_ebur128_integrated_loudness");

        layout_summary_bottom->addWidget(label_ebur128_integrated_loudness, 17, 0, 1, 1);

        samplerate = new QLabel(tab_summary);
        samplerate->setObjectName("samplerate");
        samplerate->setWordWrap(true);
        samplerate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(samplerate, 15, 1, 1, 1);

        label_bitrate = new QLabel(tab_summary);
        label_bitrate->setObjectName("label_bitrate");
        label_bitrate->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_bitrate, 12, 0, 1, 1);

        label_skipcount = new QLabel(tab_summary);
        label_skipcount->setObjectName("label_skipcount");
        label_skipcount->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_skipcount, 20, 0, 1, 1);

        path = new QLineEdit(tab_summary);
        path->setObjectName("path");
        path->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background: transparent;\n"
"}"));
        path->setFrame(false);
        path->setReadOnly(true);

        layout_summary_bottom->addWidget(path, 1, 1, 1, 1);

        label_samplerate = new QLabel(tab_summary);
        label_samplerate->setObjectName("label_samplerate");
        label_samplerate->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_samplerate, 15, 0, 1, 1);

        label_path = new QLabel(tab_summary);
        label_path->setObjectName("label_path");

        layout_summary_bottom->addWidget(label_path, 1, 0, 1, 1);

        ctime = new QLabel(tab_summary);
        ctime->setObjectName("ctime");
        ctime->setWordWrap(true);
        ctime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(ctime, 6, 1, 1, 1);

        label_filename = new QLabel(tab_summary);
        label_filename->setObjectName("label_filename");
        label_filename->setWordWrap(true);
        label_filename->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_filename, 0, 0, 1, 1);

        label_art_unset = new QLabel(tab_summary);
        label_art_unset->setObjectName("label_art_unset");

        layout_summary_bottom->addWidget(label_art_unset, 24, 0, 1, 1);

        label_filesize = new QLabel(tab_summary);
        label_filesize->setObjectName("label_filesize");
        label_filesize->setProperty("field_label", QVariant(true));

        layout_summary_bottom->addWidget(label_filesize, 5, 0, 1, 1);

        label_art_manual = new QLabel(tab_summary);
        label_art_manual->setObjectName("label_art_manual");

        layout_summary_bottom->addWidget(label_art_manual, 22, 0, 1, 1);

        playcount = new QLabel(tab_summary);
        playcount->setObjectName("playcount");
        playcount->setWordWrap(true);
        playcount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(playcount, 19, 1, 1, 1);

        mtime = new QLabel(tab_summary);
        mtime->setObjectName("mtime");
        mtime->setWordWrap(true);
        mtime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layout_summary_bottom->addWidget(mtime, 7, 1, 1, 1);

        filename = new QLineEdit(tab_summary);
        filename->setObjectName("filename");
        filename->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background: transparent;\n"
"}"));
        filename->setFrame(false);
        filename->setReadOnly(true);

        layout_summary_bottom->addWidget(filename, 0, 1, 1, 1);

        art_automatic = new QLineEdit(tab_summary);
        art_automatic->setObjectName("art_automatic");
        art_automatic->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background: transparent;\n"
"}"));
        art_automatic->setFrame(false);

        layout_summary_bottom->addWidget(art_automatic, 23, 1, 1, 1);

        art_manual = new QLineEdit(tab_summary);
        art_manual->setObjectName("art_manual");
        art_manual->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background: transparent;\n"
"}"));
        art_manual->setFrame(false);

        layout_summary_bottom->addWidget(art_manual, 22, 1, 1, 1);

        label_ebur128_loudness_range = new QLabel(tab_summary);
        label_ebur128_loudness_range->setObjectName("label_ebur128_loudness_range");

        layout_summary_bottom->addWidget(label_ebur128_loudness_range, 18, 0, 1, 1);

        ebur128_integrated_loudness = new QLabel(tab_summary);
        ebur128_integrated_loudness->setObjectName("ebur128_integrated_loudness");

        layout_summary_bottom->addWidget(ebur128_integrated_loudness, 17, 1, 1, 1);

        ebur128_loudness_range = new QLabel(tab_summary);
        ebur128_loudness_range->setObjectName("ebur128_loudness_range");

        layout_summary_bottom->addWidget(ebur128_loudness_range, 18, 1, 1, 1);


        verticalLayout_2->addLayout(layout_summary_bottom);

        playcount_reset = new QPushButton(tab_summary);
        playcount_reset->setObjectName("playcount_reset");
        sizePolicy1.setHeightForWidth(playcount_reset->sizePolicy().hasHeightForWidth());
        playcount_reset->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(playcount_reset);

        spacer_summary_bottom = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(spacer_summary_bottom);

        tab_widget->addTab(tab_summary, QString());
        tab_tags = new QWidget();
        tab_tags->setObjectName("tab_tags");
        verticalLayout_4 = new QVBoxLayout(tab_tags);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        layout_albumart = new QHBoxLayout();
        layout_albumart->setObjectName("layout_albumart");
        layout_albumart->setSizeConstraint(QLayout::SetMinimumSize);
        layout_albumart_left = new QVBoxLayout();
        layout_albumart_left->setObjectName("layout_albumart_left");
        layout_albumart_left->setSizeConstraint(QLayout::SetMinimumSize);
        tags_art = new QLabel(tab_tags);
        tags_art->setObjectName("tags_art");
        sizePolicy1.setHeightForWidth(tags_art->sizePolicy().hasHeightForWidth());
        tags_art->setSizePolicy(sizePolicy1);
        tags_art->setMinimumSize(QSize(128, 128));
        tags_art->setFrameShape(QFrame::StyledPanel);
        tags_art->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        tags_art->setWordWrap(true);
        tags_art->setMargin(2);

        layout_albumart_left->addWidget(tags_art);

        tags_art_button = new QPushButton(tab_tags);
        tags_art_button->setObjectName("tags_art_button");

        layout_albumart_left->addWidget(tags_art_button);

        checkbox_embedded_cover = new QCheckBox(tab_tags);
        checkbox_embedded_cover->setObjectName("checkbox_embedded_cover");

        layout_albumart_left->addWidget(checkbox_embedded_cover);

        layout_id3v2_version = new QHBoxLayout();
        layout_id3v2_version->setObjectName("layout_id3v2_version");
        label_id3v2_version = new QLabel(tab_tags);
        label_id3v2_version->setObjectName("label_id3v2_version");

        layout_id3v2_version->addWidget(label_id3v2_version);

        combobox_id3v2_version = new QComboBox(tab_tags);
        combobox_id3v2_version->addItem(QString());
        combobox_id3v2_version->addItem(QString());
        combobox_id3v2_version->setObjectName("combobox_id3v2_version");
        combobox_id3v2_version->setEnabled(true);

        layout_id3v2_version->addWidget(combobox_id3v2_version);

        spacer_id3v2_version = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_id3v2_version->addItem(spacer_id3v2_version);


        layout_albumart_left->addLayout(layout_id3v2_version);

        spacer_albumart_bottom = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_albumart_left->addItem(spacer_albumart_bottom);


        layout_albumart->addLayout(layout_albumart_left);

        layout_albumart_right = new QVBoxLayout();
        layout_albumart_right->setObjectName("layout_albumart_right");
        layout_albumart_right->setSizeConstraint(QLayout::SetMinimumSize);
        tags_summary = new QTextEdit(tab_tags);
        tags_summary->setObjectName("tags_summary");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tags_summary->sizePolicy().hasHeightForWidth());
        tags_summary->setSizePolicy(sizePolicy3);
        tags_summary->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"  background: transparent;\n"
"}"));
        tags_summary->setFrameShape(QFrame::NoFrame);
        tags_summary->setReadOnly(true);

        layout_albumart_right->addWidget(tags_summary);


        layout_albumart->addLayout(layout_albumart_right);


        verticalLayout_4->addLayout(layout_albumart);

        layout_tags = new QGridLayout();
        layout_tags->setObjectName("layout_tags");
        layout_tags->setSizeConstraint(QLayout::SetMinimumSize);
        label_year = new QLabel(tab_tags);
        label_year->setObjectName("label_year");

        layout_tags->addWidget(label_year, 3, 2, 1, 1);

        fetch_tag = new QPushButton(tab_tags);
        fetch_tag->setObjectName("fetch_tag");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pictures/musicbrainz.png"), QSize(), QIcon::Normal, QIcon::Off);
        fetch_tag->setIcon(icon1);
        fetch_tag->setIconSize(QSize(38, 22));

        layout_tags->addWidget(fetch_tag, 25, 1, 1, 1);

        label_performersort = new QLabel(tab_tags);
        label_performersort->setObjectName("label_performersort");
        label_performersort->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_performersort, 13, 0, 1, 1);

        label_compilation = new QLabel(tab_tags);
        label_compilation->setObjectName("label_compilation");
        label_compilation->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_compilation, 19, 0, 1, 1);

        albumartistsort = new LineEdit(tab_tags);
        albumartistsort->setObjectName("albumartistsort");
        albumartistsort->setProperty("has_reset_button", QVariant(true));
        albumartistsort->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(albumartistsort, 8, 1, 1, 1);

        label_titlesort = new QLabel(tab_tags);
        label_titlesort->setObjectName("label_titlesort");
        label_titlesort->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_titlesort, 1, 0, 1, 1);

        label_albumartist = new QLabel(tab_tags);
        label_albumartist->setObjectName("label_albumartist");
        label_albumartist->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_albumartist, 7, 0, 1, 1);

        title = new LineEdit(tab_tags);
        title->setObjectName("title");
        title->setProperty("has_reset_button", QVariant(true));
        title->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(title, 0, 1, 1, 1);

        label_performer = new QLabel(tab_tags);
        label_performer->setObjectName("label_performer");
        label_performer->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_performer, 12, 0, 1, 1);

        genre = new LineEdit(tab_tags);
        genre->setObjectName("genre");
        genre->setProperty("has_reset_button", QVariant(true));
        genre->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(genre, 18, 1, 1, 1);

        year = new SpinBox(tab_tags);
        year->setObjectName("year");
        year->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        year->setMaximum(9999);
        year->setProperty("has_clear_button", QVariant(false));
        year->setProperty("has_reset_button", QVariant(true));

        layout_tags->addWidget(year, 3, 3, 1, 1);

        rating = new RatingBox(tab_tags);
        rating->setObjectName("rating");
        rating->setMaximumSize(QSize(140, 16777215));
        rating->setProperty("has_reset_button", QVariant(true));
        rating->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(rating, 20, 1, 1, 1);

        album = new LineEdit(tab_tags);
        album->setObjectName("album");
        album->setProperty("has_reset_button", QVariant(true));
        album->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(album, 5, 1, 1, 1);

        comment = new TextEdit(tab_tags);
        comment->setObjectName("comment");
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comment->sizePolicy().hasHeightForWidth());
        comment->setSizePolicy(sizePolicy4);
        comment->setTabChangesFocus(true);
        comment->setProperty("has_reset_button", QVariant(true));
        comment->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(comment, 26, 1, 1, 1);

        artistsort = new LineEdit(tab_tags);
        artistsort->setObjectName("artistsort");
        artistsort->setProperty("has_reset_button", QVariant(true));
        artistsort->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(artistsort, 4, 1, 1, 1);

        label_title = new QLabel(tab_tags);
        label_title->setObjectName("label_title");
        label_title->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_title, 0, 0, 1, 1);

        grouping = new LineEdit(tab_tags);
        grouping->setObjectName("grouping");
        grouping->setProperty("has_reset_button", QVariant(true));
        grouping->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(grouping, 17, 1, 1, 1);

        disc = new SpinBox(tab_tags);
        disc->setObjectName("disc");
        disc->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        disc->setMaximum(9999);
        disc->setProperty("has_clear_button", QVariant(false));
        disc->setProperty("has_reset_button", QVariant(true));

        layout_tags->addWidget(disc, 1, 3, 1, 1);

        compilation = new CheckBox(tab_tags);
        compilation->setObjectName("compilation");
        compilation->setProperty("has_reset_button", QVariant(true));
        compilation->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(compilation, 19, 1, 1, 1);

        titlesort = new LineEdit(tab_tags);
        titlesort->setObjectName("titlesort");
        titlesort->setProperty("has_reset_button", QVariant(true));
        titlesort->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(titlesort, 1, 1, 1, 1);

        label_rating = new QLabel(tab_tags);
        label_rating->setObjectName("label_rating");

        layout_tags->addWidget(label_rating, 20, 0, 1, 1);

        label_disc = new QLabel(tab_tags);
        label_disc->setObjectName("label_disc");

        layout_tags->addWidget(label_disc, 1, 2, 1, 1);

        performer = new LineEdit(tab_tags);
        performer->setObjectName("performer");
        performer->setProperty("has_reset_button", QVariant(true));
        performer->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(performer, 12, 1, 1, 1);

        track = new SpinBox(tab_tags);
        track->setObjectName("track");
        track->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        track->setMaximum(9999);
        track->setProperty("has_clear_button", QVariant(false));
        track->setProperty("has_reset_button", QVariant(true));

        layout_tags->addWidget(track, 0, 3, 1, 1);

        label_albumartistsort = new QLabel(tab_tags);
        label_albumartistsort->setObjectName("label_albumartistsort");
        label_albumartistsort->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_albumartistsort, 8, 0, 1, 1);

        artist = new LineEdit(tab_tags);
        artist->setObjectName("artist");
        artist->setProperty("has_reset_button", QVariant(true));
        artist->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(artist, 3, 1, 1, 1);

        label_artistsort = new QLabel(tab_tags);
        label_artistsort->setObjectName("label_artistsort");
        label_artistsort->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_artistsort, 4, 0, 1, 1);

        label_album = new QLabel(tab_tags);
        label_album->setObjectName("label_album");
        label_album->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_album, 5, 0, 1, 1);

        label_track = new QLabel(tab_tags);
        label_track->setObjectName("label_track");

        layout_tags->addWidget(label_track, 0, 2, 1, 1);

        label_composer = new QLabel(tab_tags);
        label_composer->setObjectName("label_composer");
        label_composer->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_composer, 10, 0, 1, 1);

        albumartist = new LineEdit(tab_tags);
        albumartist->setObjectName("albumartist");
        albumartist->setProperty("has_reset_button", QVariant(true));
        albumartist->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(albumartist, 7, 1, 1, 1);

        composersort = new LineEdit(tab_tags);
        composersort->setObjectName("composersort");
        composersort->setProperty("has_reset_button", QVariant(true));
        composersort->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(composersort, 11, 1, 1, 1);

        performersort = new LineEdit(tab_tags);
        performersort->setObjectName("performersort");
        performersort->setProperty("has_reset_button", QVariant(true));
        performersort->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(performersort, 13, 1, 1, 1);

        label_grouping = new QLabel(tab_tags);
        label_grouping->setObjectName("label_grouping");
        label_grouping->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_grouping, 17, 0, 1, 1);

        label_albumsort = new QLabel(tab_tags);
        label_albumsort->setObjectName("label_albumsort");
        label_albumsort->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_albumsort, 6, 0, 1, 1);

        label_artist = new QLabel(tab_tags);
        label_artist->setObjectName("label_artist");
        label_artist->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_artist, 3, 0, 1, 1);

        label_genre = new QLabel(tab_tags);
        label_genre->setObjectName("label_genre");
        label_genre->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_genre, 18, 0, 1, 1);

        composer = new LineEdit(tab_tags);
        composer->setObjectName("composer");
        composer->setProperty("has_reset_button", QVariant(true));
        composer->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(composer, 10, 1, 1, 1);

        label_comment = new QLabel(tab_tags);
        label_comment->setObjectName("label_comment");
        label_comment->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_comment, 26, 0, 1, 1);

        label_composersort = new QLabel(tab_tags);
        label_composersort->setObjectName("label_composersort");
        label_composersort->setMinimumSize(QSize(80, 0));

        layout_tags->addWidget(label_composersort, 11, 0, 1, 1);

        albumsort = new LineEdit(tab_tags);
        albumsort->setObjectName("albumsort");
        albumsort->setProperty("has_reset_button", QVariant(true));
        albumsort->setProperty("has_clear_button", QVariant(false));

        layout_tags->addWidget(albumsort, 6, 1, 1, 1);


        verticalLayout_4->addLayout(layout_tags);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer);

        tab_widget->addTab(tab_tags, QString());
        tab_lyrics = new QWidget();
        tab_lyrics->setObjectName("tab_lyrics");
        verticalLayout_7 = new QVBoxLayout(tab_lyrics);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setSizeConstraint(QLayout::SetMaximumSize);
        lyrics = new TextEdit(tab_lyrics);
        lyrics->setObjectName("lyrics");
        lyrics->setProperty("has_reset_button", QVariant(true));
        lyrics->setProperty("has_clear_button", QVariant(false));

        verticalLayout_7->addWidget(lyrics);

        label_lyrics = new QLabel(tab_lyrics);
        label_lyrics->setObjectName("label_lyrics");
        label_lyrics->setEnabled(false);
        label_lyrics->setMaximumSize(QSize(1, 1));

        verticalLayout_7->addWidget(label_lyrics);

        fetch_lyrics = new QPushButton(tab_lyrics);
        fetch_lyrics->setObjectName("fetch_lyrics");

        verticalLayout_7->addWidget(fetch_lyrics);

        tab_widget->addTab(tab_lyrics, QString());
        splitter->addWidget(tab_widget);

        verticalLayout->addWidget(splitter);

        loading_label = new BusyIndicator(widget_scrollarea);
        loading_label->setObjectName("loading_label");

        verticalLayout->addWidget(loading_label);

        button_box = new QDialogButtonBox(widget_scrollarea);
        button_box->setObjectName("button_box");
        button_box->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Save);

        verticalLayout->addWidget(button_box);

        scrollarea->setWidget(widget_scrollarea);

        verticalLayout_3->addWidget(scrollarea);

#if QT_CONFIG(shortcut)
        label_year->setBuddy(year);
        label_performersort->setBuddy(performersort);
        label_compilation->setBuddy(compilation);
        label_titlesort->setBuddy(titlesort);
        label_albumartist->setBuddy(albumartist);
        label_performer->setBuddy(performer);
        label_title->setBuddy(title);
        label_rating->setBuddy(rating);
        label_disc->setBuddy(disc);
        label_albumartistsort->setBuddy(albumartistsort);
        label_artistsort->setBuddy(artistsort);
        label_album->setBuddy(album);
        label_track->setBuddy(track);
        label_composer->setBuddy(composer);
        label_grouping->setBuddy(grouping);
        label_albumsort->setBuddy(albumsort);
        label_artist->setBuddy(artist);
        label_genre->setBuddy(genre);
        label_comment->setBuddy(comment);
        label_composersort->setBuddy(composersort);
        label_lyrics->setBuddy(lyrics);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollarea, song_list);
        QWidget::setTabOrder(song_list, tab_widget);
        QWidget::setTabOrder(tab_widget, summary);
        QWidget::setTabOrder(summary, filename);
        QWidget::setTabOrder(filename, path);
        QWidget::setTabOrder(path, art_embedded);
        QWidget::setTabOrder(art_embedded, art_manual);
        QWidget::setTabOrder(art_manual, art_automatic);
        QWidget::setTabOrder(art_automatic, art_unset);
        QWidget::setTabOrder(art_unset, playcount_reset);
        QWidget::setTabOrder(playcount_reset, tags_summary);
        QWidget::setTabOrder(tags_summary, tags_art_button);
        QWidget::setTabOrder(tags_art_button, checkbox_embedded_cover);
        QWidget::setTabOrder(checkbox_embedded_cover, combobox_id3v2_version);
        QWidget::setTabOrder(combobox_id3v2_version, title);
        QWidget::setTabOrder(title, track);
        QWidget::setTabOrder(track, titlesort);
        QWidget::setTabOrder(titlesort, disc);
        QWidget::setTabOrder(disc, artist);
        QWidget::setTabOrder(artist, year);
        QWidget::setTabOrder(year, artistsort);
        QWidget::setTabOrder(artistsort, album);
        QWidget::setTabOrder(album, albumsort);
        QWidget::setTabOrder(albumsort, albumartist);
        QWidget::setTabOrder(albumartist, albumartistsort);
        QWidget::setTabOrder(albumartistsort, composer);
        QWidget::setTabOrder(composer, composersort);
        QWidget::setTabOrder(composersort, performer);
        QWidget::setTabOrder(performer, performersort);
        QWidget::setTabOrder(performersort, grouping);
        QWidget::setTabOrder(grouping, genre);
        QWidget::setTabOrder(genre, compilation);
        QWidget::setTabOrder(compilation, fetch_tag);
        QWidget::setTabOrder(fetch_tag, comment);
        QWidget::setTabOrder(comment, lyrics);
        QWidget::setTabOrder(lyrics, fetch_lyrics);

        retranslateUi(EditTagDialog);
        QObject::connect(button_box, &QDialogButtonBox::accepted, EditTagDialog, qOverload<>(&QDialog::accept));
        QObject::connect(button_box, &QDialogButtonBox::rejected, EditTagDialog, qOverload<>(&QDialog::reject));

        tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditTagDialog);
    } // setupUi

    void retranslateUi(QDialog *EditTagDialog)
    {
        EditTagDialog->setWindowTitle(QCoreApplication::translate("EditTagDialog", "Edit track information", nullptr));
        summary_art->setText(QString());
        label_ctime->setText(QCoreApplication::translate("EditTagDialog", "Date created", nullptr));
        filetype->setText(QString());
        label_art_automatic->setText(QCoreApplication::translate("EditTagDialog", "Art Automatic", nullptr));
        label_mtime->setText(QCoreApplication::translate("EditTagDialog", "Date modified", nullptr));
        label_art_embedded->setText(QCoreApplication::translate("EditTagDialog", "Art Embedded", nullptr));
        label_lastplayed->setText(QCoreApplication::translate("EditTagDialog", "Last played", "A playlist's tag."));
        label_filetype->setText(QCoreApplication::translate("EditTagDialog", "File type", nullptr));
        label_length->setText(QCoreApplication::translate("EditTagDialog", "Length", nullptr));
        label_playcount->setText(QCoreApplication::translate("EditTagDialog", "Play count", nullptr));
        label_bitdepth->setText(QCoreApplication::translate("EditTagDialog", "Bit depth", nullptr));
        label_ebur128_integrated_loudness->setText(QCoreApplication::translate("EditTagDialog", "EBU R 128 integrated loudness", nullptr));
        label_bitrate->setText(QCoreApplication::translate("EditTagDialog", "Bit rate", nullptr));
        label_skipcount->setText(QCoreApplication::translate("EditTagDialog", "Skip count", nullptr));
        label_samplerate->setText(QCoreApplication::translate("EditTagDialog", "Sample rate", nullptr));
        label_path->setText(QCoreApplication::translate("EditTagDialog", "Path", nullptr));
        label_filename->setText(QCoreApplication::translate("EditTagDialog", "Filename", nullptr));
        label_art_unset->setText(QCoreApplication::translate("EditTagDialog", "Art Unset", nullptr));
        label_filesize->setText(QCoreApplication::translate("EditTagDialog", "File size", nullptr));
        label_art_manual->setText(QCoreApplication::translate("EditTagDialog", "Art Manual", nullptr));
        label_ebur128_loudness_range->setText(QCoreApplication::translate("EditTagDialog", "EBU R 128 loudness range", nullptr));
        ebur128_integrated_loudness->setText(QString());
        ebur128_loudness_range->setText(QString());
        playcount_reset->setText(QCoreApplication::translate("EditTagDialog", "Reset play counts", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(tab_summary), QCoreApplication::translate("EditTagDialog", "Summary", nullptr));
        tags_art->setText(QString());
#if QT_CONFIG(accessibility)
        tags_art_button->setAccessibleName(QCoreApplication::translate("EditTagDialog", "MenuPopupToolButton", nullptr));
#endif // QT_CONFIG(accessibility)
        tags_art_button->setText(QCoreApplication::translate("EditTagDialog", "Change art", nullptr));
        checkbox_embedded_cover->setText(QCoreApplication::translate("EditTagDialog", "Embedded cover", nullptr));
        label_id3v2_version->setText(QCoreApplication::translate("EditTagDialog", "ID3v2 version:", nullptr));
        combobox_id3v2_version->setItemText(0, QCoreApplication::translate("EditTagDialog", "2.3", nullptr));
        combobox_id3v2_version->setItemText(1, QCoreApplication::translate("EditTagDialog", "2.4", nullptr));

        label_year->setText(QCoreApplication::translate("EditTagDialog", "Year", nullptr));
        fetch_tag->setText(QCoreApplication::translate("EditTagDialog", "Complete tags automatically", nullptr));
        label_performersort->setText(QCoreApplication::translate("EditTagDialog", "Performer sort", nullptr));
        label_compilation->setText(QCoreApplication::translate("EditTagDialog", "Compilation", nullptr));
        label_titlesort->setText(QCoreApplication::translate("EditTagDialog", "Title sort", nullptr));
        label_albumartist->setText(QCoreApplication::translate("EditTagDialog", "Album artist", nullptr));
        label_performer->setText(QCoreApplication::translate("EditTagDialog", "Performer", nullptr));
        label_title->setText(QCoreApplication::translate("EditTagDialog", "Title", nullptr));
        label_rating->setText(QCoreApplication::translate("EditTagDialog", "Rating", nullptr));
        label_disc->setText(QCoreApplication::translate("EditTagDialog", "Disc", nullptr));
        label_albumartistsort->setText(QCoreApplication::translate("EditTagDialog", "Album artist sort", nullptr));
        label_artistsort->setText(QCoreApplication::translate("EditTagDialog", "Artist sort", nullptr));
        label_album->setText(QCoreApplication::translate("EditTagDialog", "Album", nullptr));
        label_track->setText(QCoreApplication::translate("EditTagDialog", "Track", nullptr));
        label_composer->setText(QCoreApplication::translate("EditTagDialog", "Composer", nullptr));
        label_grouping->setText(QCoreApplication::translate("EditTagDialog", "Grouping", nullptr));
        label_albumsort->setText(QCoreApplication::translate("EditTagDialog", "Album sort", nullptr));
        label_artist->setText(QCoreApplication::translate("EditTagDialog", "Artist", nullptr));
        label_genre->setText(QCoreApplication::translate("EditTagDialog", "Genre", nullptr));
        label_comment->setText(QCoreApplication::translate("EditTagDialog", "Comment", nullptr));
        label_composersort->setText(QCoreApplication::translate("EditTagDialog", "Composer sort", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(tab_tags), QCoreApplication::translate("EditTagDialog", "Tags", nullptr));
        label_lyrics->setText(QString());
        fetch_lyrics->setText(QCoreApplication::translate("EditTagDialog", "Complete lyrics automatically", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(tab_lyrics), QCoreApplication::translate("EditTagDialog", "Lyrics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTagDialog: public Ui_EditTagDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTAGDIALOG_H
