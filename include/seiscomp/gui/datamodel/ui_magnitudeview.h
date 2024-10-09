/********************************************************************************
** Form generated from reading UI file 'magnitudeview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGNITUDEVIEW_H
#define UI_MAGNITUDEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MagnitudeView
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frameMagnitudeTypes;
    QHBoxLayout *hboxLayout;
    QFrame *groupSummary;
    QVBoxLayout *vboxLayout1;
    QLabel *labelRegion;
    QFrame *frameMap;
    QVBoxLayout *vboxLayout2;
    QFrame *groupMagnitude;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *lbAgencyID;
    QLabel *labelAuthor;
    QLabel *lbAuthor;
    QSpacerItem *spacerItem;
    QLabel *label_8;
    QLabel *label;
    QLabel *labelAgencyID;
    QLabel *label_2;
    QLabel *labelMagnitude;
    QLabel *labelRMS;
    QLabel *labelMinMag;
    QLabel *labelMaxMag;
    QLabel *labelNumStaMags;
    QLabel *label_7;
    QLabel *lbMethod;
    QLabel *labelMethod;
    QFrame *frame;
    QLabel *lbEvaluation;
    QLabel *labelEvaluation;
    QFrame *groupMagnitudes;
    QVBoxLayout *vboxLayout3;
    QTableView *tableStationMagnitudes;
    QFrame *groupReview;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout1;
    QFrame *groupSettings;
    QHBoxLayout *hboxLayout2;
    QRadioButton *btnDefault;
    QRadioButton *btnMean;
    QRadioButton *btnMedian;
    QRadioButton *btnTrimmedMean;
    QSpinBox *spinTrimmedMeanValue;
    QRadioButton *btnTrimmedMedian;
    QDoubleSpinBox *spinTrimmedMedianValue;
    QSpacerItem *spacerItem1;
    QHBoxLayout *layoutActions;
    QToolButton *btnRecalculate;
    QToolButton *btnSelect;
    QToolButton *btnActivate;
    QToolButton *btnDeactivate;
    QLabel *label_4;
    QComboBox *cbEvalStatus;
    QSpacerItem *spacerItem2;
    QToolButton *btnWaveforms;
    QToolButton *btnCommit;

    void setupUi(QWidget *MagnitudeView)
    {
        if (MagnitudeView->objectName().isEmpty())
            MagnitudeView->setObjectName(QString::fromUtf8("MagnitudeView"));
        MagnitudeView->resize(894, 864);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MagnitudeView->sizePolicy().hasHeightForWidth());
        MagnitudeView->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(MagnitudeView);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frameMagnitudeTypes = new QFrame(MagnitudeView);
        frameMagnitudeTypes->setObjectName(QString::fromUtf8("frameMagnitudeTypes"));
        frameMagnitudeTypes->setFrameShape(QFrame::NoFrame);

        vboxLayout->addWidget(frameMagnitudeTypes);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupSummary = new QFrame(MagnitudeView);
        groupSummary->setObjectName(QString::fromUtf8("groupSummary"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSummary->sizePolicy().hasHeightForWidth());
        groupSummary->setSizePolicy(sizePolicy1);
        vboxLayout1 = new QVBoxLayout(groupSummary);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        labelRegion = new QLabel(groupSummary);
        labelRegion->setObjectName(QString::fromUtf8("labelRegion"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelRegion->sizePolicy().hasHeightForWidth());
        labelRegion->setSizePolicy(sizePolicy2);
        labelRegion->setMinimumSize(QSize(100, 0));
        labelRegion->setFrameShape(QFrame::NoFrame);

        vboxLayout1->addWidget(labelRegion);

        frameMap = new QFrame(groupSummary);
        frameMap->setObjectName(QString::fromUtf8("frameMap"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy3);
        frameMap->setMinimumSize(QSize(120, 200));
        frameMap->setFrameShape(QFrame::NoFrame);
        frameMap->setFrameShadow(QFrame::Plain);

        vboxLayout1->addWidget(frameMap);


        hboxLayout->addWidget(groupSummary);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        groupMagnitude = new QFrame(MagnitudeView);
        groupMagnitude->setObjectName(QString::fromUtf8("groupMagnitude"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(groupMagnitude->sizePolicy().hasHeightForWidth());
        groupMagnitude->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(groupMagnitude);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupMagnitude);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        lbAgencyID = new QLabel(groupMagnitude);
        lbAgencyID->setObjectName(QString::fromUtf8("lbAgencyID"));
        sizePolicy.setHeightForWidth(lbAgencyID->sizePolicy().hasHeightForWidth());
        lbAgencyID->setSizePolicy(sizePolicy);
        lbAgencyID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbAgencyID, 7, 0, 1, 1);

        labelAuthor = new QLabel(groupMagnitude);
        labelAuthor->setObjectName(QString::fromUtf8("labelAuthor"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelAuthor->sizePolicy().hasHeightForWidth());
        labelAuthor->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelAuthor, 8, 1, 1, 1);

        lbAuthor = new QLabel(groupMagnitude);
        lbAuthor->setObjectName(QString::fromUtf8("lbAuthor"));
        lbAuthor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbAuthor, 8, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 0, 1, 2);

        label_8 = new QLabel(groupMagnitude);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label = new QLabel(groupMagnitude);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        labelAgencyID = new QLabel(groupMagnitude);
        labelAgencyID->setObjectName(QString::fromUtf8("labelAgencyID"));
        sizePolicy5.setHeightForWidth(labelAgencyID->sizePolicy().hasHeightForWidth());
        labelAgencyID->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelAgencyID, 7, 1, 1, 1);

        label_2 = new QLabel(groupMagnitude);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        labelMagnitude = new QLabel(groupMagnitude);
        labelMagnitude->setObjectName(QString::fromUtf8("labelMagnitude"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelMagnitude->sizePolicy().hasHeightForWidth());
        labelMagnitude->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelMagnitude, 0, 1, 1, 1);

        labelRMS = new QLabel(groupMagnitude);
        labelRMS->setObjectName(QString::fromUtf8("labelRMS"));
        sizePolicy6.setHeightForWidth(labelRMS->sizePolicy().hasHeightForWidth());
        labelRMS->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelRMS, 1, 1, 1, 1);

        labelMinMag = new QLabel(groupMagnitude);
        labelMinMag->setObjectName(QString::fromUtf8("labelMinMag"));
        sizePolicy6.setHeightForWidth(labelMinMag->sizePolicy().hasHeightForWidth());
        labelMinMag->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelMinMag, 3, 1, 1, 1);

        labelMaxMag = new QLabel(groupMagnitude);
        labelMaxMag->setObjectName(QString::fromUtf8("labelMaxMag"));
        sizePolicy6.setHeightForWidth(labelMaxMag->sizePolicy().hasHeightForWidth());
        labelMaxMag->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelMaxMag, 4, 1, 1, 1);

        labelNumStaMags = new QLabel(groupMagnitude);
        labelNumStaMags->setObjectName(QString::fromUtf8("labelNumStaMags"));
        sizePolicy6.setHeightForWidth(labelNumStaMags->sizePolicy().hasHeightForWidth());
        labelNumStaMags->setSizePolicy(sizePolicy6);
        labelNumStaMags->setLayoutDirection(Qt::LeftToRight);
        labelNumStaMags->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelNumStaMags, 2, 1, 1, 1);

        label_7 = new QLabel(groupMagnitude);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        lbMethod = new QLabel(groupMagnitude);
        lbMethod->setObjectName(QString::fromUtf8("lbMethod"));
        sizePolicy.setHeightForWidth(lbMethod->sizePolicy().hasHeightForWidth());
        lbMethod->setSizePolicy(sizePolicy);
        lbMethod->setLayoutDirection(Qt::LeftToRight);
        lbMethod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbMethod, 10, 0, 1, 1);

        labelMethod = new QLabel(groupMagnitude);
        labelMethod->setObjectName(QString::fromUtf8("labelMethod"));
        sizePolicy.setHeightForWidth(labelMethod->sizePolicy().hasHeightForWidth());
        labelMethod->setSizePolicy(sizePolicy);
        labelMethod->setScaledContents(false);

        gridLayout->addWidget(labelMethod, 10, 1, 1, 1);

        frame = new QFrame(groupMagnitude);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy7);
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(frame, 6, 0, 1, 2);

        lbEvaluation = new QLabel(groupMagnitude);
        lbEvaluation->setObjectName(QString::fromUtf8("lbEvaluation"));
        lbEvaluation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEvaluation, 9, 0, 1, 1);

        labelEvaluation = new QLabel(groupMagnitude);
        labelEvaluation->setObjectName(QString::fromUtf8("labelEvaluation"));

        gridLayout->addWidget(labelEvaluation, 9, 1, 1, 1);


        vboxLayout2->addWidget(groupMagnitude);


        hboxLayout->addLayout(vboxLayout2);

        groupMagnitudes = new QFrame(MagnitudeView);
        groupMagnitudes->setObjectName(QString::fromUtf8("groupMagnitudes"));
        sizePolicy1.setHeightForWidth(groupMagnitudes->sizePolicy().hasHeightForWidth());
        groupMagnitudes->setSizePolicy(sizePolicy1);
        vboxLayout3 = new QVBoxLayout(groupMagnitudes);
        vboxLayout3->setSpacing(4);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));

        hboxLayout->addWidget(groupMagnitudes);


        vboxLayout->addLayout(hboxLayout);

        tableStationMagnitudes = new QTableView(MagnitudeView);
        tableStationMagnitudes->setObjectName(QString::fromUtf8("tableStationMagnitudes"));
        tableStationMagnitudes->setFrameShape(QFrame::NoFrame);
        tableStationMagnitudes->setFrameShadow(QFrame::Plain);
        tableStationMagnitudes->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableStationMagnitudes->setAlternatingRowColors(true);
        tableStationMagnitudes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableStationMagnitudes->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(tableStationMagnitudes);

        groupReview = new QFrame(MagnitudeView);
        groupReview->setObjectName(QString::fromUtf8("groupReview"));
        groupReview->setFrameShape(QFrame::NoFrame);
        groupReview->setFrameShadow(QFrame::Raised);
        vboxLayout4 = new QVBoxLayout(groupReview);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        groupSettings = new QFrame(groupReview);
        groupSettings->setObjectName(QString::fromUtf8("groupSettings"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(1);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupSettings->sizePolicy().hasHeightForWidth());
        groupSettings->setSizePolicy(sizePolicy8);
        hboxLayout2 = new QHBoxLayout(groupSettings);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        btnDefault = new QRadioButton(groupSettings);
        btnDefault->setObjectName(QString::fromUtf8("btnDefault"));
        QSizePolicy sizePolicy9(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(btnDefault->sizePolicy().hasHeightForWidth());
        btnDefault->setSizePolicy(sizePolicy9);
        btnDefault->setChecked(true);

        hboxLayout2->addWidget(btnDefault);

        btnMean = new QRadioButton(groupSettings);
        btnMean->setObjectName(QString::fromUtf8("btnMean"));
        sizePolicy9.setHeightForWidth(btnMean->sizePolicy().hasHeightForWidth());
        btnMean->setSizePolicy(sizePolicy9);

        hboxLayout2->addWidget(btnMean);

        btnMedian = new QRadioButton(groupSettings);
        btnMedian->setObjectName(QString::fromUtf8("btnMedian"));

        hboxLayout2->addWidget(btnMedian);

        btnTrimmedMean = new QRadioButton(groupSettings);
        btnTrimmedMean->setObjectName(QString::fromUtf8("btnTrimmedMean"));
        sizePolicy9.setHeightForWidth(btnTrimmedMean->sizePolicy().hasHeightForWidth());
        btnTrimmedMean->setSizePolicy(sizePolicy9);

        hboxLayout2->addWidget(btnTrimmedMean);

        spinTrimmedMeanValue = new QSpinBox(groupSettings);
        spinTrimmedMeanValue->setObjectName(QString::fromUtf8("spinTrimmedMeanValue"));
        sizePolicy9.setHeightForWidth(spinTrimmedMeanValue->sizePolicy().hasHeightForWidth());
        spinTrimmedMeanValue->setSizePolicy(sizePolicy9);
        spinTrimmedMeanValue->setMaximum(100);
        spinTrimmedMeanValue->setValue(25);

        hboxLayout2->addWidget(spinTrimmedMeanValue);

        btnTrimmedMedian = new QRadioButton(groupSettings);
        btnTrimmedMedian->setObjectName(QString::fromUtf8("btnTrimmedMedian"));
        sizePolicy9.setHeightForWidth(btnTrimmedMedian->sizePolicy().hasHeightForWidth());
        btnTrimmedMedian->setSizePolicy(sizePolicy9);

        hboxLayout2->addWidget(btnTrimmedMedian);

        spinTrimmedMedianValue = new QDoubleSpinBox(groupSettings);
        spinTrimmedMedianValue->setObjectName(QString::fromUtf8("spinTrimmedMedianValue"));
        sizePolicy9.setHeightForWidth(spinTrimmedMedianValue->sizePolicy().hasHeightForWidth());
        spinTrimmedMedianValue->setSizePolicy(sizePolicy9);
        spinTrimmedMedianValue->setMaximum(100.000000000000000);
        spinTrimmedMedianValue->setSingleStep(0.100000000000000);
        spinTrimmedMedianValue->setValue(0.500000000000000);

        hboxLayout2->addWidget(spinTrimmedMedianValue);


        hboxLayout1->addWidget(groupSettings);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout4->addLayout(hboxLayout1);

        layoutActions = new QHBoxLayout();
        layoutActions->setSpacing(6);
        layoutActions->setContentsMargins(0, 0, 0, 0);
        layoutActions->setObjectName(QString::fromUtf8("layoutActions"));
        btnRecalculate = new QToolButton(groupReview);
        btnRecalculate->setObjectName(QString::fromUtf8("btnRecalculate"));

        layoutActions->addWidget(btnRecalculate);

        btnSelect = new QToolButton(groupReview);
        btnSelect->setObjectName(QString::fromUtf8("btnSelect"));

        layoutActions->addWidget(btnSelect);

        btnActivate = new QToolButton(groupReview);
        btnActivate->setObjectName(QString::fromUtf8("btnActivate"));

        layoutActions->addWidget(btnActivate);

        btnDeactivate = new QToolButton(groupReview);
        btnDeactivate->setObjectName(QString::fromUtf8("btnDeactivate"));

        layoutActions->addWidget(btnDeactivate);

        label_4 = new QLabel(groupReview);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        layoutActions->addWidget(label_4);

        cbEvalStatus = new QComboBox(groupReview);
        cbEvalStatus->setObjectName(QString::fromUtf8("cbEvalStatus"));

        layoutActions->addWidget(cbEvalStatus);

        spacerItem2 = new QSpacerItem(474, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutActions->addItem(spacerItem2);

        btnWaveforms = new QToolButton(groupReview);
        btnWaveforms->setObjectName(QString::fromUtf8("btnWaveforms"));

        layoutActions->addWidget(btnWaveforms);

        btnCommit = new QToolButton(groupReview);
        btnCommit->setObjectName(QString::fromUtf8("btnCommit"));
        btnCommit->setEnabled(false);

        layoutActions->addWidget(btnCommit);


        vboxLayout4->addLayout(layoutActions);


        vboxLayout->addWidget(groupReview);


        retranslateUi(MagnitudeView);
        QObject::connect(btnTrimmedMean, SIGNAL(toggled(bool)), spinTrimmedMeanValue, SLOT(setEnabled(bool)));
        QObject::connect(btnTrimmedMedian, SIGNAL(toggled(bool)), spinTrimmedMedianValue, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MagnitudeView);
    } // setupUi

    void retranslateUi(QWidget *MagnitudeView)
    {
        MagnitudeView->setWindowTitle(QCoreApplication::translate("MagnitudeView", "MagnitudeView", nullptr));
        labelRegion->setText(QCoreApplication::translate("MagnitudeView", "Region", nullptr));
        label_3->setText(QCoreApplication::translate("MagnitudeView", "Min: ", nullptr));
        lbAgencyID->setText(QCoreApplication::translate("MagnitudeView", "Agency: ", nullptr));
        labelAuthor->setText(QCoreApplication::translate("MagnitudeView", "-", nullptr));
        lbAuthor->setText(QCoreApplication::translate("MagnitudeView", "Author: ", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("MagnitudeView", "Station Magnitude Count", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("MagnitudeView", "Count: ", nullptr));
        label->setText(QCoreApplication::translate("MagnitudeView", "+/-: ", nullptr));
        labelAgencyID->setText(QCoreApplication::translate("MagnitudeView", "MagTool@GFZ", nullptr));
        label_2->setText(QCoreApplication::translate("MagnitudeView", "Max: ", nullptr));
        labelMagnitude->setText(QCoreApplication::translate("MagnitudeView", "-.-", nullptr));
        labelRMS->setText(QCoreApplication::translate("MagnitudeView", "-.-", nullptr));
        labelMinMag->setText(QCoreApplication::translate("MagnitudeView", "-.-", nullptr));
        labelMaxMag->setText(QCoreApplication::translate("MagnitudeView", "-.-", nullptr));
        labelNumStaMags->setText(QCoreApplication::translate("MagnitudeView", "0", nullptr));
        label_7->setText(QCoreApplication::translate("MagnitudeView", "Value: ", nullptr));
        lbMethod->setText(QCoreApplication::translate("MagnitudeView", "Method: ", nullptr));
        labelMethod->setText(QCoreApplication::translate("MagnitudeView", "average", nullptr));
        lbEvaluation->setText(QCoreApplication::translate("MagnitudeView", "Evaluation:", nullptr));
        labelEvaluation->setText(QCoreApplication::translate("MagnitudeView", "-", nullptr));
        btnDefault->setText(QCoreApplication::translate("MagnitudeView", "Default", nullptr));
        btnMean->setText(QCoreApplication::translate("MagnitudeView", "Mean", nullptr));
        btnMedian->setText(QCoreApplication::translate("MagnitudeView", "Median", nullptr));
        btnTrimmedMean->setText(QCoreApplication::translate("MagnitudeView", "Trimmed mean", nullptr));
        spinTrimmedMeanValue->setSuffix(QCoreApplication::translate("MagnitudeView", "%", nullptr));
        btnTrimmedMedian->setText(QCoreApplication::translate("MagnitudeView", "Median trimmed mean", nullptr));
#if QT_CONFIG(tooltip)
        btnRecalculate->setToolTip(QCoreApplication::translate("MagnitudeView", "Recalculate the network magnitude", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRecalculate->setText(QCoreApplication::translate("MagnitudeView", "Recalculate", nullptr));
#if QT_CONFIG(tooltip)
        btnSelect->setToolTip(QCoreApplication::translate("MagnitudeView", "Selects channels passing the current filter", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSelect->setText(QCoreApplication::translate("MagnitudeView", "Select", nullptr));
#if QT_CONFIG(shortcut)
        btnSelect->setShortcut(QCoreApplication::translate("MagnitudeView", "S", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnActivate->setToolTip(QCoreApplication::translate("MagnitudeView", "Activate selected channels", nullptr));
#endif // QT_CONFIG(tooltip)
        btnActivate->setText(QCoreApplication::translate("MagnitudeView", "+", nullptr));
#if QT_CONFIG(shortcut)
        btnActivate->setShortcut(QCoreApplication::translate("MagnitudeView", "+", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnDeactivate->setToolTip(QCoreApplication::translate("MagnitudeView", "Deactivate selected channels", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDeactivate->setText(QCoreApplication::translate("MagnitudeView", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnDeactivate->setShortcut(QCoreApplication::translate("MagnitudeView", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        label_4->setText(QCoreApplication::translate("MagnitudeView", "Evaluation:", nullptr));
        btnWaveforms->setText(QCoreApplication::translate("MagnitudeView", "Waveforms", nullptr));
        btnCommit->setText(QCoreApplication::translate("MagnitudeView", "Commit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MagnitudeView: public Ui_MagnitudeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGNITUDEVIEW_H
