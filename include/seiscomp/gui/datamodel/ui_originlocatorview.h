/********************************************************************************
** Form generated from reading UI file 'originlocatorview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINLOCATORVIEW_H
#define UI_ORIGINLOCATORVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OriginLocatorView
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QFrame *groupSummary;
    QVBoxLayout *vboxLayout1;
    QLabel *labelRegion;
    QFrame *frameMap;
    QFrame *groupBox;
    QGridLayout *gridLayout;
    QLabel *labelNumPhases;
    QLabel *labelAgency;
    QLabel *labelMinDistUnit;
    QLabel *labelDepth;
    QLabel *labelStdErrorUnit;
    QLabel *lbEventID;
    QLabel *labelLatitudeErrorUnit;
    QLabel *labelLatitudeError;
    QLabel *label_13;
    QLabel *labelLongitude;
    QLabel *labelCreated;
    QLabel *label_11;
    QLabel *labelLongitudeErrorUnit;
    QLabel *labelUser;
    QLabel *labelEarthModel;
    QFrame *frameInfoSeparator;
    QLabel *labelNumPhasesError;
    QLabel *labelLatitudeUnit;
    QLabel *labelStdError;
    QLabel *labelLatitude;
    QLabel *label_7;
    QLabel *labelEventID;
    QLabel *labelDepthErrorUnit;
    QLabel *labelTime;
    QLabel *label_12;
    QLabel *lbEarthModel;
    QLabel *lbMethod;
    QLabel *labelMinDist;
    QLabel *lbAgencyID;
    QLabel *label_8;
    QLabel *labelMethod;
    QLabel *label_10;
    QSpacerItem *spacerItem;
    QLabel *label_16;
    QLabel *labelNumPhasesUnit;
    QLabel *lbUser;
    QLabel *label_9;
    QLabel *labelLongitudeError;
    QLabel *labelDepthError;
    QLabel *labelEvaluation;
    QLabel *labelLongitudeUnit;
    QLabel *label_15;
    QLabel *labelAzimuthGap;
    QLabel *labelDepthUnit;
    QLabel *labelAzimuthGapUnit;
    QLabel *lbEvaluation;
    QLabel *lbComment;
    QLabel *labelComment;
    QFrame *groupResiduals;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QLabel *label_5;
    QLabel *labelPlotFilter;
    QTableView *tableArrivals;
    QFrame *toolButtonGroupBox;
    QGridLayout *gridLayout1;
    QFrame *frameDepthType;
    QHBoxLayout *hboxLayout2;
    QComboBox *cbDepthType;
    QFrame *frameActionsLeft;
    QHBoxLayout *hboxLayout3;
    QToolButton *btnRelocate;
    QToolButton *btnCustom0;
    QToolButton *btnCustom1;
    QSpacerItem *spacerItem2;
    QFrame *frameLocator;
    QHBoxLayout *hboxLayout4;
    QComboBox *cbLocator;
    QToolButton *btnLocatorSettings;
    QSpacerItem *spacerItem3;
    QLabel *label_2;
    QComboBox *cbLocatorProfile;
    QSpacerItem *spacerItem4;
    QFrame *frameFixDepth;
    QHBoxLayout *hboxLayout5;
    QCheckBox *cbFixedDepth;
    QLineEdit *editFixedDepth;
    QLabel *label_3;
    QSpacerItem *spacerItem5;
    QFrame *frame;
    QHBoxLayout *hboxLayout6;
    QCheckBox *cbDistanceCutOff;
    QLineEdit *editDistanceCutOff;
    QLabel *label;
    QSpacerItem *spacerItem6;
    QCheckBox *cbIgnoreInitialLocation;
    QSpacerItem *spacerItem7;
    QToolButton *buttonEditComment;
    QFrame *frameActionsRight;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacerItem8;
    QToolButton *btnShowWaveforms;
    QToolButton *btnImportAllArrivals;
    QToolButton *btnMagnitudes;
    QToolButton *btnCommit;

    void setupUi(QWidget *OriginLocatorView)
    {
        if (OriginLocatorView->objectName().isEmpty())
            OriginLocatorView->setObjectName(QString::fromUtf8("OriginLocatorView"));
        OriginLocatorView->resize(1734, 1127);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OriginLocatorView->sizePolicy().hasHeightForWidth());
        OriginLocatorView->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(OriginLocatorView);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupSummary = new QFrame(OriginLocatorView);
        groupSummary->setObjectName(QString::fromUtf8("groupSummary"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSummary->sizePolicy().hasHeightForWidth());
        groupSummary->setSizePolicy(sizePolicy1);
        groupSummary->setFrameShape(QFrame::NoFrame);
        groupSummary->setFrameShadow(QFrame::Plain);
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
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        labelRegion->setFont(font);
        labelRegion->setFrameShape(QFrame::NoFrame);

        vboxLayout1->addWidget(labelRegion);

        frameMap = new QFrame(groupSummary);
        frameMap->setObjectName(QString::fromUtf8("frameMap"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy3);
        frameMap->setMinimumSize(QSize(120, 200));
        frameMap->setMaximumSize(QSize(2000, 2000));
        QPalette palette;
        palette.setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 0));
        palette.setColor(QPalette::Active, QPalette::Button, QColor(221, 223, 228));
        palette.setColor(QPalette::Active, QPalette::Light, QColor(255, 255, 255));
        palette.setColor(QPalette::Active, QPalette::Midlight, QColor(255, 255, 255));
        palette.setColor(QPalette::Active, QPalette::Dark, QColor(85, 85, 85));
        palette.setColor(QPalette::Active, QPalette::Mid, QColor(199, 199, 199));
        palette.setColor(QPalette::Active, QPalette::Text, QColor(0, 0, 0));
        palette.setColor(QPalette::Active, QPalette::BrightText, QColor(255, 255, 255));
        palette.setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 0));
        palette.setColor(QPalette::Active, QPalette::Base, QColor(255, 255, 255));
        palette.setColor(QPalette::Active, QPalette::Window, QColor(239, 239, 239));
        palette.setColor(QPalette::Active, QPalette::Shadow, QColor(0, 0, 0));
        palette.setColor(QPalette::Active, QPalette::Highlight, QColor(103, 141, 178));
        palette.setColor(QPalette::Active, QPalette::HighlightedText, QColor(255, 255, 255));
        palette.setColor(QPalette::Active, QPalette::Link, QColor(0, 0, 238));
        palette.setColor(QPalette::Active, QPalette::LinkVisited, QColor(82, 24, 139));
        palette.setColor(QPalette::Active, QPalette::AlternateBase, QColor(232, 232, 232));
        palette.setColor(QPalette::Inactive, QPalette::WindowText, QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, QPalette::Button, QColor(221, 223, 228));
        palette.setColor(QPalette::Inactive, QPalette::Light, QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, QPalette::Midlight, QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, QPalette::Dark, QColor(85, 85, 85));
        palette.setColor(QPalette::Inactive, QPalette::Mid, QColor(199, 199, 199));
        palette.setColor(QPalette::Inactive, QPalette::Text, QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, QPalette::BrightText, QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, QPalette::ButtonText, QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, QPalette::Window, QColor(239, 239, 239));
        palette.setColor(QPalette::Inactive, QPalette::Shadow, QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, QPalette::Highlight, QColor(103, 141, 178));
        palette.setColor(QPalette::Inactive, QPalette::HighlightedText, QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, QPalette::Link, QColor(0, 0, 238));
        palette.setColor(QPalette::Inactive, QPalette::LinkVisited, QColor(82, 24, 139));
        palette.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(232, 232, 232));
        palette.setColor(QPalette::Disabled, QPalette::WindowText, QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, QPalette::Button, QColor(221, 223, 228));
        palette.setColor(QPalette::Disabled, QPalette::Light, QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, QPalette::Midlight, QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, QPalette::Dark, QColor(85, 85, 85));
        palette.setColor(QPalette::Disabled, QPalette::Mid, QColor(199, 199, 199));
        palette.setColor(QPalette::Disabled, QPalette::Text, QColor(199, 199, 199));
        palette.setColor(QPalette::Disabled, QPalette::BrightText, QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, QPalette::ButtonText, QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, QPalette::Base, QColor(239, 239, 239));
        palette.setColor(QPalette::Disabled, QPalette::Window, QColor(239, 239, 239));
        palette.setColor(QPalette::Disabled, QPalette::Shadow, QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, QPalette::Highlight, QColor(86, 117, 148));
        palette.setColor(QPalette::Disabled, QPalette::HighlightedText, QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, QPalette::Link, QColor(0, 0, 238));
        palette.setColor(QPalette::Disabled, QPalette::LinkVisited, QColor(82, 24, 139));
        palette.setColor(QPalette::Disabled, QPalette::AlternateBase, QColor(232, 232, 232));
        frameMap->setPalette(palette);
        frameMap->setFrameShape(QFrame::NoFrame);
        frameMap->setFrameShadow(QFrame::Plain);

        vboxLayout1->addWidget(frameMap);


        hboxLayout->addWidget(groupSummary);

        groupBox = new QFrame(OriginLocatorView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelNumPhases = new QLabel(groupBox);
        labelNumPhases->setObjectName(QString::fromUtf8("labelNumPhases"));
        labelNumPhases->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelNumPhases, 4, 1, 1, 1);

        labelAgency = new QLabel(groupBox);
        labelAgency->setObjectName(QString::fromUtf8("labelAgency"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelAgency->sizePolicy().hasHeightForWidth());
        labelAgency->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelAgency, 12, 1, 1, 4);

        labelMinDistUnit = new QLabel(groupBox);
        labelMinDistUnit->setObjectName(QString::fromUtf8("labelMinDistUnit"));

        gridLayout->addWidget(labelMinDistUnit, 8, 2, 1, 1);

        labelDepth = new QLabel(groupBox);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));
        labelDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelDepth, 1, 1, 1, 1);

        labelStdErrorUnit = new QLabel(groupBox);
        labelStdErrorUnit->setObjectName(QString::fromUtf8("labelStdErrorUnit"));

        gridLayout->addWidget(labelStdErrorUnit, 5, 2, 1, 1);

        lbEventID = new QLabel(groupBox);
        lbEventID->setObjectName(QString::fromUtf8("lbEventID"));
        lbEventID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEventID, 11, 0, 1, 1);

        labelLatitudeErrorUnit = new QLabel(groupBox);
        labelLatitudeErrorUnit->setObjectName(QString::fromUtf8("labelLatitudeErrorUnit"));

        gridLayout->addWidget(labelLatitudeErrorUnit, 2, 4, 1, 1);

        labelLatitudeError = new QLabel(groupBox);
        labelLatitudeError->setObjectName(QString::fromUtf8("labelLatitudeError"));
        labelLatitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelLatitudeError, 2, 3, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        labelLongitude = new QLabel(groupBox);
        labelLongitude->setObjectName(QString::fromUtf8("labelLongitude"));
        labelLongitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLongitude, 3, 1, 1, 1);

        labelCreated = new QLabel(groupBox);
        labelCreated->setObjectName(QString::fromUtf8("labelCreated"));

        gridLayout->addWidget(labelCreated, 17, 1, 1, 4);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        labelLongitudeErrorUnit = new QLabel(groupBox);
        labelLongitudeErrorUnit->setObjectName(QString::fromUtf8("labelLongitudeErrorUnit"));

        gridLayout->addWidget(labelLongitudeErrorUnit, 3, 4, 1, 1);

        labelUser = new QLabel(groupBox);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        sizePolicy5.setHeightForWidth(labelUser->sizePolicy().hasHeightForWidth());
        labelUser->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelUser, 13, 1, 1, 4);

        labelEarthModel = new QLabel(groupBox);
        labelEarthModel->setObjectName(QString::fromUtf8("labelEarthModel"));
        sizePolicy5.setHeightForWidth(labelEarthModel->sizePolicy().hasHeightForWidth());
        labelEarthModel->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelEarthModel, 16, 1, 1, 4);

        frameInfoSeparator = new QFrame(groupBox);
        frameInfoSeparator->setObjectName(QString::fromUtf8("frameInfoSeparator"));
        frameInfoSeparator->setFrameShape(QFrame::HLine);
        frameInfoSeparator->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frameInfoSeparator, 10, 0, 1, 5);

        labelNumPhasesError = new QLabel(groupBox);
        labelNumPhasesError->setObjectName(QString::fromUtf8("labelNumPhasesError"));
        labelNumPhasesError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelNumPhasesError, 4, 3, 1, 1);

        labelLatitudeUnit = new QLabel(groupBox);
        labelLatitudeUnit->setObjectName(QString::fromUtf8("labelLatitudeUnit"));

        gridLayout->addWidget(labelLatitudeUnit, 2, 2, 1, 1);

        labelStdError = new QLabel(groupBox);
        labelStdError->setObjectName(QString::fromUtf8("labelStdError"));
        labelStdError->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelStdError, 5, 1, 1, 1);

        labelLatitude = new QLabel(groupBox);
        labelLatitude->setObjectName(QString::fromUtf8("labelLatitude"));
        labelLatitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLatitude, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        labelEventID = new QLabel(groupBox);
        labelEventID->setObjectName(QString::fromUtf8("labelEventID"));
        sizePolicy5.setHeightForWidth(labelEventID->sizePolicy().hasHeightForWidth());
        labelEventID->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelEventID, 11, 1, 1, 4);

        labelDepthErrorUnit = new QLabel(groupBox);
        labelDepthErrorUnit->setObjectName(QString::fromUtf8("labelDepthErrorUnit"));

        gridLayout->addWidget(labelDepthErrorUnit, 1, 4, 1, 1);

        labelTime = new QLabel(groupBox);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));
        labelTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelTime, 0, 1, 1, 4);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        lbEarthModel = new QLabel(groupBox);
        lbEarthModel->setObjectName(QString::fromUtf8("lbEarthModel"));
        lbEarthModel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEarthModel, 16, 0, 1, 1);

        lbMethod = new QLabel(groupBox);
        lbMethod->setObjectName(QString::fromUtf8("lbMethod"));
        lbMethod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbMethod, 15, 0, 1, 1);

        labelMinDist = new QLabel(groupBox);
        labelMinDist->setObjectName(QString::fromUtf8("labelMinDist"));
        labelMinDist->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMinDist, 8, 1, 1, 1);

        lbAgencyID = new QLabel(groupBox);
        lbAgencyID->setObjectName(QString::fromUtf8("lbAgencyID"));
        lbAgencyID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbAgencyID, 12, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        labelMethod = new QLabel(groupBox);
        labelMethod->setObjectName(QString::fromUtf8("labelMethod"));
        sizePolicy5.setHeightForWidth(labelMethod->sizePolicy().hasHeightForWidth());
        labelMethod->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelMethod, 15, 1, 1, 4);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        spacerItem = new QSpacerItem(201, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 9, 0, 1, 5);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_16, 17, 0, 1, 1);

        labelNumPhasesUnit = new QLabel(groupBox);
        labelNumPhasesUnit->setObjectName(QString::fromUtf8("labelNumPhasesUnit"));
        labelNumPhasesUnit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelNumPhasesUnit, 4, 2, 1, 1);

        lbUser = new QLabel(groupBox);
        lbUser->setObjectName(QString::fromUtf8("lbUser"));
        lbUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbUser, 13, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        labelLongitudeError = new QLabel(groupBox);
        labelLongitudeError->setObjectName(QString::fromUtf8("labelLongitudeError"));
        labelLongitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelLongitudeError, 3, 3, 1, 1);

        labelDepthError = new QLabel(groupBox);
        labelDepthError->setObjectName(QString::fromUtf8("labelDepthError"));
        labelDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelDepthError, 1, 3, 1, 1);

        labelEvaluation = new QLabel(groupBox);
        labelEvaluation->setObjectName(QString::fromUtf8("labelEvaluation"));

        gridLayout->addWidget(labelEvaluation, 14, 1, 1, 4);

        labelLongitudeUnit = new QLabel(groupBox);
        labelLongitudeUnit->setObjectName(QString::fromUtf8("labelLongitudeUnit"));

        gridLayout->addWidget(labelLongitudeUnit, 3, 2, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        labelAzimuthGap = new QLabel(groupBox);
        labelAzimuthGap->setObjectName(QString::fromUtf8("labelAzimuthGap"));
        labelAzimuthGap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAzimuthGap, 7, 1, 1, 1);

        labelDepthUnit = new QLabel(groupBox);
        labelDepthUnit->setObjectName(QString::fromUtf8("labelDepthUnit"));

        gridLayout->addWidget(labelDepthUnit, 1, 2, 1, 1);

        labelAzimuthGapUnit = new QLabel(groupBox);
        labelAzimuthGapUnit->setObjectName(QString::fromUtf8("labelAzimuthGapUnit"));

        gridLayout->addWidget(labelAzimuthGapUnit, 7, 2, 1, 1);

        lbEvaluation = new QLabel(groupBox);
        lbEvaluation->setObjectName(QString::fromUtf8("lbEvaluation"));
        lbEvaluation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEvaluation, 14, 0, 1, 1);

        lbComment = new QLabel(groupBox);
        lbComment->setObjectName(QString::fromUtf8("lbComment"));
        lbComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbComment, 6, 0, 1, 1);

        labelComment = new QLabel(groupBox);
        labelComment->setObjectName(QString::fromUtf8("labelComment"));
        labelComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelComment, 6, 1, 1, 1);


        hboxLayout->addWidget(groupBox);

        groupResiduals = new QFrame(OriginLocatorView);
        groupResiduals->setObjectName(QString::fromUtf8("groupResiduals"));
        sizePolicy1.setHeightForWidth(groupResiduals->sizePolicy().hasHeightForWidth());
        groupResiduals->setSizePolicy(sizePolicy1);
        groupResiduals->setFrameShape(QFrame::NoFrame);
        vboxLayout2 = new QVBoxLayout(groupResiduals);
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem1 = new QSpacerItem(40, 4, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        label_5 = new QLabel(groupResiduals);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy6);

        hboxLayout1->addWidget(label_5);

        labelPlotFilter = new QLabel(groupResiduals);
        labelPlotFilter->setObjectName(QString::fromUtf8("labelPlotFilter"));
        sizePolicy6.setHeightForWidth(labelPlotFilter->sizePolicy().hasHeightForWidth());
        labelPlotFilter->setSizePolicy(sizePolicy6);

        hboxLayout1->addWidget(labelPlotFilter);


        vboxLayout2->addLayout(hboxLayout1);


        hboxLayout->addWidget(groupResiduals);


        vboxLayout->addLayout(hboxLayout);

        tableArrivals = new QTableView(OriginLocatorView);
        tableArrivals->setObjectName(QString::fromUtf8("tableArrivals"));
        tableArrivals->setFrameShape(QFrame::NoFrame);
        tableArrivals->setFrameShadow(QFrame::Plain);
        tableArrivals->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableArrivals->setAlternatingRowColors(true);
        tableArrivals->setSelectionMode(QAbstractItemView::SingleSelection);
        tableArrivals->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(tableArrivals);

        toolButtonGroupBox = new QFrame(OriginLocatorView);
        toolButtonGroupBox->setObjectName(QString::fromUtf8("toolButtonGroupBox"));
        sizePolicy6.setHeightForWidth(toolButtonGroupBox->sizePolicy().hasHeightForWidth());
        toolButtonGroupBox->setSizePolicy(sizePolicy6);
        toolButtonGroupBox->setFrameShape(QFrame::NoFrame);
        gridLayout1 = new QGridLayout(toolButtonGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        frameDepthType = new QFrame(toolButtonGroupBox);
        frameDepthType->setObjectName(QString::fromUtf8("frameDepthType"));
        frameDepthType->setFrameShape(QFrame::NoFrame);
        frameDepthType->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frameDepthType);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        cbDepthType = new QComboBox(frameDepthType);
        cbDepthType->setObjectName(QString::fromUtf8("cbDepthType"));
        cbDepthType->setEnabled(false);

        hboxLayout2->addWidget(cbDepthType);


        gridLayout1->addWidget(frameDepthType, 1, 1, 1, 1);

        frameActionsLeft = new QFrame(toolButtonGroupBox);
        frameActionsLeft->setObjectName(QString::fromUtf8("frameActionsLeft"));
        sizePolicy.setHeightForWidth(frameActionsLeft->sizePolicy().hasHeightForWidth());
        frameActionsLeft->setSizePolicy(sizePolicy);
        frameActionsLeft->setFrameShape(QFrame::NoFrame);
        frameActionsLeft->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frameActionsLeft);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        btnRelocate = new QToolButton(frameActionsLeft);
        btnRelocate->setObjectName(QString::fromUtf8("btnRelocate"));
        btnRelocate->setEnabled(false);

        hboxLayout3->addWidget(btnRelocate);

        btnCustom0 = new QToolButton(frameActionsLeft);
        btnCustom0->setObjectName(QString::fromUtf8("btnCustom0"));
        btnCustom0->setEnabled(false);

        hboxLayout3->addWidget(btnCustom0);

        btnCustom1 = new QToolButton(frameActionsLeft);
        btnCustom1->setObjectName(QString::fromUtf8("btnCustom1"));
        btnCustom1->setEnabled(false);

        hboxLayout3->addWidget(btnCustom1);

        spacerItem2 = new QSpacerItem(31, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);


        gridLayout1->addWidget(frameActionsLeft, 1, 0, 1, 1);

        frameLocator = new QFrame(toolButtonGroupBox);
        frameLocator->setObjectName(QString::fromUtf8("frameLocator"));
        sizePolicy.setHeightForWidth(frameLocator->sizePolicy().hasHeightForWidth());
        frameLocator->setSizePolicy(sizePolicy);
        frameLocator->setFrameShape(QFrame::NoFrame);
        frameLocator->setFrameShadow(QFrame::Raised);
        hboxLayout4 = new QHBoxLayout(frameLocator);
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        cbLocator = new QComboBox(frameLocator);
        cbLocator->setObjectName(QString::fromUtf8("cbLocator"));
        cbLocator->setEnabled(false);

        hboxLayout4->addWidget(cbLocator);

        btnLocatorSettings = new QToolButton(frameLocator);
        btnLocatorSettings->setObjectName(QString::fromUtf8("btnLocatorSettings"));
        btnLocatorSettings->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/configure.png"));
        btnLocatorSettings->setIcon(icon);
        btnLocatorSettings->setAutoRaise(true);

        hboxLayout4->addWidget(btnLocatorSettings);

        spacerItem3 = new QSpacerItem(20, 27, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);

        label_2 = new QLabel(frameLocator);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout4->addWidget(label_2);

        cbLocatorProfile = new QComboBox(frameLocator);
        cbLocatorProfile->setObjectName(QString::fromUtf8("cbLocatorProfile"));
        cbLocatorProfile->setEnabled(false);
        cbLocatorProfile->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout4->addWidget(cbLocatorProfile);

        spacerItem4 = new QSpacerItem(20, 27, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem4);


        gridLayout1->addWidget(frameLocator, 0, 0, 1, 1);

        frameFixDepth = new QFrame(toolButtonGroupBox);
        frameFixDepth->setObjectName(QString::fromUtf8("frameFixDepth"));
        frameFixDepth->setFrameShape(QFrame::NoFrame);
        frameFixDepth->setFrameShadow(QFrame::Raised);
        hboxLayout5 = new QHBoxLayout(frameFixDepth);
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        cbFixedDepth = new QCheckBox(frameFixDepth);
        cbFixedDepth->setObjectName(QString::fromUtf8("cbFixedDepth"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(cbFixedDepth->sizePolicy().hasHeightForWidth());
        cbFixedDepth->setSizePolicy(sizePolicy7);

        hboxLayout5->addWidget(cbFixedDepth);

        editFixedDepth = new QLineEdit(frameFixDepth);
        editFixedDepth->setObjectName(QString::fromUtf8("editFixedDepth"));
        editFixedDepth->setEnabled(false);
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(editFixedDepth->sizePolicy().hasHeightForWidth());
        editFixedDepth->setSizePolicy(sizePolicy8);
        editFixedDepth->setMinimumSize(QSize(60, 0));
        editFixedDepth->setAlignment(Qt::AlignRight);

        hboxLayout5->addWidget(editFixedDepth);

        label_3 = new QLabel(frameFixDepth);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy9(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy9);

        hboxLayout5->addWidget(label_3);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);


        gridLayout1->addWidget(frameFixDepth, 0, 1, 1, 1);

        frame = new QFrame(toolButtonGroupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(1);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy10);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout6 = new QHBoxLayout(frame);
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        cbDistanceCutOff = new QCheckBox(frame);
        cbDistanceCutOff->setObjectName(QString::fromUtf8("cbDistanceCutOff"));

        hboxLayout6->addWidget(cbDistanceCutOff);

        editDistanceCutOff = new QLineEdit(frame);
        editDistanceCutOff->setObjectName(QString::fromUtf8("editDistanceCutOff"));
        editDistanceCutOff->setEnabled(false);
        editDistanceCutOff->setMinimumSize(QSize(60, 0));
        editDistanceCutOff->setMaximumSize(QSize(60, 16777215));
        editDistanceCutOff->setAlignment(Qt::AlignRight);

        hboxLayout6->addWidget(editDistanceCutOff);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout6->addWidget(label);

        spacerItem6 = new QSpacerItem(20, 27, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem6);

        cbIgnoreInitialLocation = new QCheckBox(frame);
        cbIgnoreInitialLocation->setObjectName(QString::fromUtf8("cbIgnoreInitialLocation"));

        hboxLayout6->addWidget(cbIgnoreInitialLocation);

        spacerItem7 = new QSpacerItem(120, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem7);

        buttonEditComment = new QToolButton(frame);
        buttonEditComment->setObjectName(QString::fromUtf8("buttonEditComment"));
        buttonEditComment->setEnabled(false);
        buttonEditComment->setMaximumSize(QSize(25, 25));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/icons/comment.png"));
        buttonEditComment->setIcon(icon1);
        buttonEditComment->setIconSize(QSize(24, 24));
        buttonEditComment->setAutoRaise(true);

        hboxLayout6->addWidget(buttonEditComment);


        gridLayout1->addWidget(frame, 0, 2, 1, 1);

        frameActionsRight = new QFrame(toolButtonGroupBox);
        frameActionsRight->setObjectName(QString::fromUtf8("frameActionsRight"));
        sizePolicy10.setHeightForWidth(frameActionsRight->sizePolicy().hasHeightForWidth());
        frameActionsRight->setSizePolicy(sizePolicy10);
        frameActionsRight->setFrameShape(QFrame::NoFrame);
        frameActionsRight->setFrameShadow(QFrame::Raised);
        hboxLayout7 = new QHBoxLayout(frameActionsRight);
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem8);

        btnShowWaveforms = new QToolButton(frameActionsRight);
        btnShowWaveforms->setObjectName(QString::fromUtf8("btnShowWaveforms"));
        btnShowWaveforms->setEnabled(false);

        hboxLayout7->addWidget(btnShowWaveforms);

        btnImportAllArrivals = new QToolButton(frameActionsRight);
        btnImportAllArrivals->setObjectName(QString::fromUtf8("btnImportAllArrivals"));
        btnImportAllArrivals->setEnabled(false);

        hboxLayout7->addWidget(btnImportAllArrivals);

        btnMagnitudes = new QToolButton(frameActionsRight);
        btnMagnitudes->setObjectName(QString::fromUtf8("btnMagnitudes"));
        btnMagnitudes->setEnabled(false);

        hboxLayout7->addWidget(btnMagnitudes);

        btnCommit = new QToolButton(frameActionsRight);
        btnCommit->setObjectName(QString::fromUtf8("btnCommit"));
        btnCommit->setEnabled(false);

        hboxLayout7->addWidget(btnCommit);


        gridLayout1->addWidget(frameActionsRight, 1, 2, 1, 1);


        vboxLayout->addWidget(toolButtonGroupBox);

        QWidget::setTabOrder(tableArrivals, cbLocator);
        QWidget::setTabOrder(cbLocator, btnLocatorSettings);
        QWidget::setTabOrder(btnLocatorSettings, cbLocatorProfile);
        QWidget::setTabOrder(cbLocatorProfile, cbFixedDepth);
        QWidget::setTabOrder(cbFixedDepth, editFixedDepth);
        QWidget::setTabOrder(editFixedDepth, cbDistanceCutOff);
        QWidget::setTabOrder(cbDistanceCutOff, editDistanceCutOff);

        retranslateUi(OriginLocatorView);
        QObject::connect(cbFixedDepth, SIGNAL(toggled(bool)), editFixedDepth, SLOT(setEnabled(bool)));
        QObject::connect(cbFixedDepth, SIGNAL(toggled(bool)), cbDepthType, SLOT(setEnabled(bool)));
        QObject::connect(cbDistanceCutOff, SIGNAL(toggled(bool)), editDistanceCutOff, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OriginLocatorView);
    } // setupUi

    void retranslateUi(QWidget *OriginLocatorView)
    {
        OriginLocatorView->setWindowTitle(QCoreApplication::translate("OriginLocatorView", "OriginLocatorView", nullptr));
        labelRegion->setText(QCoreApplication::translate("OriginLocatorView", "Region", nullptr));
        labelNumPhases->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        labelAgency->setText(QCoreApplication::translate("OriginLocatorView", "GFZ Potsdam", nullptr));
        labelMinDistUnit->setText(QCoreApplication::translate("OriginLocatorView", "\302\260", nullptr));
        labelDepth->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        labelStdErrorUnit->setText(QCoreApplication::translate("OriginLocatorView", "s", nullptr));
        lbEventID->setText(QCoreApplication::translate("OriginLocatorView", "EventID:", nullptr));
        labelLatitudeErrorUnit->setText(QCoreApplication::translate("OriginLocatorView", "km", nullptr));
        labelLatitudeError->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        label_13->setText(QCoreApplication::translate("OriginLocatorView", "RMS Res.:", nullptr));
        labelLongitude->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        labelCreated->setText(QString());
        label_11->setText(QCoreApplication::translate("OriginLocatorView", "Lon:", nullptr));
        labelLongitudeErrorUnit->setText(QCoreApplication::translate("OriginLocatorView", "km", nullptr));
        labelUser->setText(QString());
        labelEarthModel->setText(QString());
        labelNumPhasesError->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        labelLatitudeUnit->setText(QCoreApplication::translate("OriginLocatorView", "\302\260", nullptr));
        labelStdError->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        labelLatitude->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        label_7->setText(QCoreApplication::translate("OriginLocatorView", " Az. Gap:", nullptr));
        labelEventID->setText(QString());
        labelDepthErrorUnit->setText(QString());
        labelTime->setText(QString());
        label_12->setText(QCoreApplication::translate("OriginLocatorView", "Depth:", nullptr));
        lbEarthModel->setText(QCoreApplication::translate("OriginLocatorView", "Earth model:", nullptr));
        lbMethod->setText(QCoreApplication::translate("OriginLocatorView", "Method:", nullptr));
        labelMinDist->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        lbAgencyID->setText(QCoreApplication::translate("OriginLocatorView", "Agency:", nullptr));
        label_8->setText(QCoreApplication::translate("OriginLocatorView", "Phases:", nullptr));
        labelMethod->setText(QString());
        label_10->setText(QCoreApplication::translate("OriginLocatorView", "Lat:", nullptr));
        label_16->setText(QCoreApplication::translate("OriginLocatorView", "Updated:", nullptr));
        labelNumPhasesUnit->setText(QCoreApplication::translate("OriginLocatorView", "/", nullptr));
        lbUser->setText(QCoreApplication::translate("OriginLocatorView", "Author:", nullptr));
        label_9->setText(QCoreApplication::translate("OriginLocatorView", "Min. Dist.:", nullptr));
        labelLongitudeError->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        labelDepthError->setText(QString());
        labelEvaluation->setText(QCoreApplication::translate("OriginLocatorView", "- (-)", nullptr));
        labelLongitudeUnit->setText(QCoreApplication::translate("OriginLocatorView", "\302\260", nullptr));
        label_15->setText(QCoreApplication::translate("OriginLocatorView", "Time:", nullptr));
        labelAzimuthGap->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        labelDepthUnit->setText(QCoreApplication::translate("OriginLocatorView", "km", nullptr));
        labelAzimuthGapUnit->setText(QCoreApplication::translate("OriginLocatorView", "\302\260", nullptr));
        lbEvaluation->setText(QCoreApplication::translate("OriginLocatorView", "Evaluation:", nullptr));
        lbComment->setText(QCoreApplication::translate("OriginLocatorView", "Custom:", nullptr));
        labelComment->setText(QCoreApplication::translate("OriginLocatorView", "-", nullptr));
        label_5->setText(QCoreApplication::translate("OriginLocatorView", "Filter is", nullptr));
        labelPlotFilter->setText(QCoreApplication::translate("OriginLocatorView", "<a href=\"filter\">not active</a>", nullptr));
        btnRelocate->setText(QCoreApplication::translate("OriginLocatorView", "Relocate", nullptr));
        btnCustom0->setText(QCoreApplication::translate("OriginLocatorView", "Custom1", nullptr));
        btnCustom1->setText(QCoreApplication::translate("OriginLocatorView", "Custom2", nullptr));
#if QT_CONFIG(tooltip)
        btnLocatorSettings->setToolTip(QCoreApplication::translate("OriginLocatorView", "Change locator settings", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLocatorSettings->setText(QCoreApplication::translate("OriginLocatorView", "...", nullptr));
        label_2->setText(QCoreApplication::translate("OriginLocatorView", "Profile:", nullptr));
        cbFixedDepth->setText(QCoreApplication::translate("OriginLocatorView", "Fix depth", nullptr));
        label_3->setText(QCoreApplication::translate("OriginLocatorView", "km", nullptr));
        cbDistanceCutOff->setText(QCoreApplication::translate("OriginLocatorView", "Distance cutoff", nullptr));
        label->setText(QCoreApplication::translate("OriginLocatorView", "km", nullptr));
#if QT_CONFIG(tooltip)
        cbIgnoreInitialLocation->setToolTip(QCoreApplication::translate("OriginLocatorView", "Instructs the locator to ignore the passed initial location and to try to locate the event based on the given phases only.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cbIgnoreInitialLocation->setWhatsThis(QCoreApplication::translate("OriginLocatorView", "Instructs the locator to ignore the passed initial location and to try to locate the event based on the given phases only.", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbIgnoreInitialLocation->setText(QCoreApplication::translate("OriginLocatorView", "Ignore initial location", nullptr));
#if QT_CONFIG(tooltip)
        buttonEditComment->setToolTip(QCoreApplication::translate("OriginLocatorView", "Create a new comment on this event or edit an existing one.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonEditComment->setText(QString());
        btnShowWaveforms->setText(QCoreApplication::translate("OriginLocatorView", "Picker", nullptr));
        btnImportAllArrivals->setText(QCoreApplication::translate("OriginLocatorView", "Import picks", nullptr));
        btnMagnitudes->setText(QCoreApplication::translate("OriginLocatorView", "Compute magnitudes", nullptr));
        btnCommit->setText(QCoreApplication::translate("OriginLocatorView", "Commit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OriginLocatorView: public Ui_OriginLocatorView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINLOCATORVIEW_H
