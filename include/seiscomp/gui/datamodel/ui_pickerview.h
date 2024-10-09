/********************************************************************************
** Form generated from reading UI file 'pickerview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKERVIEW_H
#define UI_PICKERVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "seiscomp/gui/datamodel/pickerzoomframe.h"

QT_BEGIN_NAMESPACE

class Ui_PickerView
{
public:
    QAction *actionIncreaseAmplitudeScale;
    QAction *actionDecreaseAmplitudeScale;
    QAction *actionTimeScaleUp;
    QAction *actionTimeScaleDown;
    QAction *actionScrollLeft;
    QAction *actionScrollRight;
    QAction *actionSelectNextTrace;
    QAction *actionSelectPreviousTrace;
    QAction *actionScrollFineLeft;
    QAction *actionScrollFineRight;
    QAction *actionIncreaseRowHeight;
    QAction *actionDecreaseRowHeight;
    QAction *actionIncreaseRowTimescale;
    QAction *actionDecreaseRowTimescale;
    QAction *actionSelectFirstRow;
    QAction *actionSelectLastRow;
    QAction *actionAlignOnPArrival;
    QAction *actionAlignOnSArrival;
    QAction *actionAlignOnOriginTime;
    QAction *actionDefaultView;
    QAction *actionSortAlphabetically;
    QAction *actionSortByDistance;
    QAction *actionToggleFilter;
    QAction *actionMaximizeAmplitudes;
    QAction *actionPickP;
    QAction *actionPickS;
    QAction *actionPickOther;
    QAction *actionDisablePicking;
    QAction *actionConfirmPick;
    QAction *actionDeletePick;
    QAction *actionRelocate;
    QAction *actionShowAllStations;
    QAction *actionShowUsedStations;
    QAction *actionSortByResidual;
    QAction *actionShowZComponent;
    QAction *actionShowNComponent;
    QAction *actionShowEComponent;
    QAction *actionGotoNextMarker;
    QAction *actionGotoPreviousMarker;
    QAction *actionCreatePick;
    QAction *actionSwitchFullscreen;
    QAction *actionAddStations;
    QAction *actionSearchStation;
    QAction *actionModifyOrigin;
    QAction *actionLimitFilterToZoomTrace;
    QAction *actionRepickAutomatically;
    QAction *actionShowTraceValuesInNmS;
    QAction *actionClipComponentsToViewport;
    QAction *actionSetPolarityPositive;
    QAction *actionSetPolarityNegative;
    QAction *actionSetPolarityUndecidable;
    QAction *actionSetPolarityUnset;
    QAction *actionSetPick;
    QAction *actionShowTheoreticalArrivals;
    QAction *actionShowUnassociatedPicks;
    QAction *actionNextFilter;
    QAction *actionPreviousFilter;
    QAction *actionShowSpectrogram;
    QAction *actionSortByAzimuth;
    QAction *actionOpenSpectrum;
    QAction *actionResetScale;
    QAction *actionShowAllComponents;
    QAction *actionSetPickOnsetEmergent;
    QAction *actionSetPickOnsetImpulsive;
    QAction *actionSetPickOnsetQuestionable;
    QAction *actionSetPickOnsetUnset;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QFrame *frameZoomWrapper;
    QVBoxLayout *vboxLayout1;
    Seiscomp::Gui::ZoomRecordFrame *frameZoom;
    QVBoxLayout *vboxLayout2;
    QFrame *frameCurrentRowLabel;
    QHBoxLayout *hboxLayout;
    QLabel *labelStationCode;
    QHBoxLayout *hboxLayout1;
    QLabel *labelCode;
    QLabel *label;
    QLabel *labelDistance;
    QLabel *label1;
    QLabel *labelAzimuth;
    QSpacerItem *spacerItem;
    QFrame *frameCurrentRow;
    QHBoxLayout *hboxLayout2;
    QFrame *frameZoomControls;
    QHBoxLayout *hboxLayout3;
    QPushButton *btnRowAccept;
    QPushButton *btnRowRemove;
    QPushButton *btnRowReset;
    QFrame *frameTimeScale;
    QFrame *framePickList;
    QStatusBar *statusbar;
    QToolBar *toolBarScale;
    QToolBar *toolBarSort;
    QToolBar *toolBarAlign;
    QToolBar *toolBarComponent;
    QToolBar *toolBarStations;
    QToolBar *toolBarPicking;
    QToolBar *toolBarFilter;
    QToolBar *toolBarSpectrogram;
    QToolBar *toolBarTTT;
    QToolBar *toolBarRelocate;
    QMenuBar *menuBar;
    QMenu *menu_Filter;
    QMenu *menu_Locate;
    QMenu *menu_Tools;
    QMenu *menuPicking;
    QMenu *menu_Navigation;
    QMenu *menuView;
    QMenu *menuComponents;
    QMenu *menuTraces;
    QMenu *menuAlignArrival;
    QMenu *menu_Zoomtrace;

    void setupUi(QMainWindow *PickerView)
    {
        if (PickerView->objectName().isEmpty())
            PickerView->setObjectName(QString::fromUtf8("PickerView"));
        PickerView->resize(945, 738);
        PickerView->setIconSize(QSize(16, 16));
        actionIncreaseAmplitudeScale = new QAction(PickerView);
        actionIncreaseAmplitudeScale->setObjectName(QString::fromUtf8("actionIncreaseAmplitudeScale"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/vzoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncreaseAmplitudeScale->setIcon(icon);
        actionDecreaseAmplitudeScale = new QAction(PickerView);
        actionDecreaseAmplitudeScale->setObjectName(QString::fromUtf8("actionDecreaseAmplitudeScale"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/vzoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecreaseAmplitudeScale->setIcon(icon1);
        actionTimeScaleUp = new QAction(PickerView);
        actionTimeScaleUp->setObjectName(QString::fromUtf8("actionTimeScaleUp"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeScaleUp->setIcon(icon2);
        actionTimeScaleDown = new QAction(PickerView);
        actionTimeScaleDown->setObjectName(QString::fromUtf8("actionTimeScaleDown"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeScaleDown->setIcon(icon3);
        actionScrollLeft = new QAction(PickerView);
        actionScrollLeft->setObjectName(QString::fromUtf8("actionScrollLeft"));
        actionScrollRight = new QAction(PickerView);
        actionScrollRight->setObjectName(QString::fromUtf8("actionScrollRight"));
        actionSelectNextTrace = new QAction(PickerView);
        actionSelectNextTrace->setObjectName(QString::fromUtf8("actionSelectNextTrace"));
        actionSelectPreviousTrace = new QAction(PickerView);
        actionSelectPreviousTrace->setObjectName(QString::fromUtf8("actionSelectPreviousTrace"));
        actionScrollFineLeft = new QAction(PickerView);
        actionScrollFineLeft->setObjectName(QString::fromUtf8("actionScrollFineLeft"));
        actionScrollFineRight = new QAction(PickerView);
        actionScrollFineRight->setObjectName(QString::fromUtf8("actionScrollFineRight"));
        actionIncreaseRowHeight = new QAction(PickerView);
        actionIncreaseRowHeight->setObjectName(QString::fromUtf8("actionIncreaseRowHeight"));
        actionIncreaseRowHeight->setIcon(icon);
        actionDecreaseRowHeight = new QAction(PickerView);
        actionDecreaseRowHeight->setObjectName(QString::fromUtf8("actionDecreaseRowHeight"));
        actionDecreaseRowHeight->setIcon(icon1);
        actionIncreaseRowTimescale = new QAction(PickerView);
        actionIncreaseRowTimescale->setObjectName(QString::fromUtf8("actionIncreaseRowTimescale"));
        actionIncreaseRowTimescale->setIcon(icon3);
        actionDecreaseRowTimescale = new QAction(PickerView);
        actionDecreaseRowTimescale->setObjectName(QString::fromUtf8("actionDecreaseRowTimescale"));
        actionDecreaseRowTimescale->setIcon(icon2);
        actionSelectFirstRow = new QAction(PickerView);
        actionSelectFirstRow->setObjectName(QString::fromUtf8("actionSelectFirstRow"));
        actionSelectLastRow = new QAction(PickerView);
        actionSelectLastRow->setObjectName(QString::fromUtf8("actionSelectLastRow"));
        actionAlignOnPArrival = new QAction(PickerView);
        actionAlignOnPArrival->setObjectName(QString::fromUtf8("actionAlignOnPArrival"));
        actionAlignOnPArrival->setCheckable(false);
        actionAlignOnPArrival->setChecked(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/align_p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnPArrival->setIcon(icon4);
        actionAlignOnSArrival = new QAction(PickerView);
        actionAlignOnSArrival->setObjectName(QString::fromUtf8("actionAlignOnSArrival"));
        actionAlignOnSArrival->setCheckable(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/align_s.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnSArrival->setIcon(icon5);
        actionAlignOnOriginTime = new QAction(PickerView);
        actionAlignOnOriginTime->setObjectName(QString::fromUtf8("actionAlignOnOriginTime"));
        actionAlignOnOriginTime->setCheckable(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/align_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnOriginTime->setIcon(icon6);
        actionDefaultView = new QAction(PickerView);
        actionDefaultView->setObjectName(QString::fromUtf8("actionDefaultView"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDefaultView->setIcon(icon7);
        actionSortAlphabetically = new QAction(PickerView);
        actionSortAlphabetically->setObjectName(QString::fromUtf8("actionSortAlphabetically"));
        actionSortAlphabetically->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/sort_abc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortAlphabetically->setIcon(icon8);
        actionSortByDistance = new QAction(PickerView);
        actionSortByDistance->setObjectName(QString::fromUtf8("actionSortByDistance"));
        actionSortByDistance->setCheckable(true);
        actionSortByDistance->setChecked(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/sort_dist.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByDistance->setIcon(icon9);
        actionToggleFilter = new QAction(PickerView);
        actionToggleFilter->setObjectName(QString::fromUtf8("actionToggleFilter"));
        actionToggleFilter->setCheckable(false);
        actionToggleFilter->setChecked(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleFilter->setIcon(icon10);
        actionMaximizeAmplitudes = new QAction(PickerView);
        actionMaximizeAmplitudes->setObjectName(QString::fromUtf8("actionMaximizeAmplitudes"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/vmax.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMaximizeAmplitudes->setIcon(icon11);
        actionPickP = new QAction(PickerView);
        actionPickP->setObjectName(QString::fromUtf8("actionPickP"));
        actionPickP->setCheckable(false);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/pick_p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickP->setIcon(icon12);
        actionPickS = new QAction(PickerView);
        actionPickS->setObjectName(QString::fromUtf8("actionPickS"));
        actionPickS->setCheckable(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/icons/pick_s.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickS->setIcon(icon13);
        actionPickOther = new QAction(PickerView);
        actionPickOther->setObjectName(QString::fromUtf8("actionPickOther"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/icons/pick_other.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickOther->setIcon(icon14);
        actionDisablePicking = new QAction(PickerView);
        actionDisablePicking->setObjectName(QString::fromUtf8("actionDisablePicking"));
        actionConfirmPick = new QAction(PickerView);
        actionConfirmPick->setObjectName(QString::fromUtf8("actionConfirmPick"));
        actionDeletePick = new QAction(PickerView);
        actionDeletePick->setObjectName(QString::fromUtf8("actionDeletePick"));
        actionRelocate = new QAction(PickerView);
        actionRelocate->setObjectName(QString::fromUtf8("actionRelocate"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/icons/locate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRelocate->setIcon(icon15);
        actionShowAllStations = new QAction(PickerView);
        actionShowAllStations->setObjectName(QString::fromUtf8("actionShowAllStations"));
        actionShowAllStations->setCheckable(false);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/icons/mindistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowAllStations->setIcon(icon16);
        actionShowUsedStations = new QAction(PickerView);
        actionShowUsedStations->setObjectName(QString::fromUtf8("actionShowUsedStations"));
        actionShowUsedStations->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/icons/withpick.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowUsedStations->setIcon(icon17);
        actionSortByResidual = new QAction(PickerView);
        actionSortByResidual->setObjectName(QString::fromUtf8("actionSortByResidual"));
        actionSortByResidual->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/icons/sort_res.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByResidual->setIcon(icon18);
        actionShowZComponent = new QAction(PickerView);
        actionShowZComponent->setObjectName(QString::fromUtf8("actionShowZComponent"));
        actionShowZComponent->setCheckable(true);
        actionShowZComponent->setChecked(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/icons/channelZ.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowZComponent->setIcon(icon19);
        actionShowNComponent = new QAction(PickerView);
        actionShowNComponent->setObjectName(QString::fromUtf8("actionShowNComponent"));
        actionShowNComponent->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/icons/channelN.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowNComponent->setIcon(icon20);
        actionShowEComponent = new QAction(PickerView);
        actionShowEComponent->setObjectName(QString::fromUtf8("actionShowEComponent"));
        actionShowEComponent->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/icons/channelE.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowEComponent->setIcon(icon21);
        actionGotoNextMarker = new QAction(PickerView);
        actionGotoNextMarker->setObjectName(QString::fromUtf8("actionGotoNextMarker"));
        actionGotoPreviousMarker = new QAction(PickerView);
        actionGotoPreviousMarker->setObjectName(QString::fromUtf8("actionGotoPreviousMarker"));
        actionCreatePick = new QAction(PickerView);
        actionCreatePick->setObjectName(QString::fromUtf8("actionCreatePick"));
        actionSwitchFullscreen = new QAction(PickerView);
        actionSwitchFullscreen->setObjectName(QString::fromUtf8("actionSwitchFullscreen"));
        actionSwitchFullscreen->setCheckable(true);
        actionAddStations = new QAction(PickerView);
        actionAddStations->setObjectName(QString::fromUtf8("actionAddStations"));
        actionSearchStation = new QAction(PickerView);
        actionSearchStation->setObjectName(QString::fromUtf8("actionSearchStation"));
        actionModifyOrigin = new QAction(PickerView);
        actionModifyOrigin->setObjectName(QString::fromUtf8("actionModifyOrigin"));
        actionLimitFilterToZoomTrace = new QAction(PickerView);
        actionLimitFilterToZoomTrace->setObjectName(QString::fromUtf8("actionLimitFilterToZoomTrace"));
        actionLimitFilterToZoomTrace->setCheckable(true);
        actionRepickAutomatically = new QAction(PickerView);
        actionRepickAutomatically->setObjectName(QString::fromUtf8("actionRepickAutomatically"));
        actionShowTraceValuesInNmS = new QAction(PickerView);
        actionShowTraceValuesInNmS->setObjectName(QString::fromUtf8("actionShowTraceValuesInNmS"));
        actionShowTraceValuesInNmS->setCheckable(true);
        actionClipComponentsToViewport = new QAction(PickerView);
        actionClipComponentsToViewport->setObjectName(QString::fromUtf8("actionClipComponentsToViewport"));
        actionClipComponentsToViewport->setCheckable(true);
        actionClipComponentsToViewport->setChecked(false);
        actionSetPolarityPositive = new QAction(PickerView);
        actionSetPolarityPositive->setObjectName(QString::fromUtf8("actionSetPolarityPositive"));
        actionSetPolarityNegative = new QAction(PickerView);
        actionSetPolarityNegative->setObjectName(QString::fromUtf8("actionSetPolarityNegative"));
        actionSetPolarityUndecidable = new QAction(PickerView);
        actionSetPolarityUndecidable->setObjectName(QString::fromUtf8("actionSetPolarityUndecidable"));
        actionSetPolarityUnset = new QAction(PickerView);
        actionSetPolarityUnset->setObjectName(QString::fromUtf8("actionSetPolarityUnset"));
        actionSetPick = new QAction(PickerView);
        actionSetPick->setObjectName(QString::fromUtf8("actionSetPick"));
        actionShowTheoreticalArrivals = new QAction(PickerView);
        actionShowTheoreticalArrivals->setObjectName(QString::fromUtf8("actionShowTheoreticalArrivals"));
        actionShowTheoreticalArrivals->setCheckable(true);
        actionShowTheoreticalArrivals->setChecked(true);
        actionShowUnassociatedPicks = new QAction(PickerView);
        actionShowUnassociatedPicks->setObjectName(QString::fromUtf8("actionShowUnassociatedPicks"));
        actionShowUnassociatedPicks->setCheckable(true);
        actionNextFilter = new QAction(PickerView);
        actionNextFilter->setObjectName(QString::fromUtf8("actionNextFilter"));
        actionPreviousFilter = new QAction(PickerView);
        actionPreviousFilter->setObjectName(QString::fromUtf8("actionPreviousFilter"));
        actionShowSpectrogram = new QAction(PickerView);
        actionShowSpectrogram->setObjectName(QString::fromUtf8("actionShowSpectrogram"));
        actionShowSpectrogram->setCheckable(true);
        actionSortByAzimuth = new QAction(PickerView);
        actionSortByAzimuth->setObjectName(QString::fromUtf8("actionSortByAzimuth"));
        actionSortByAzimuth->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons/icons/sort_az.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByAzimuth->setIcon(icon22);
        actionOpenSpectrum = new QAction(PickerView);
        actionOpenSpectrum->setObjectName(QString::fromUtf8("actionOpenSpectrum"));
        actionResetScale = new QAction(PickerView);
        actionResetScale->setObjectName(QString::fromUtf8("actionResetScale"));
        actionResetScale->setIcon(icon7);
        actionResetScale->setVisible(true);
        actionShowAllComponents = new QAction(PickerView);
        actionShowAllComponents->setObjectName(QString::fromUtf8("actionShowAllComponents"));
        actionShowAllComponents->setCheckable(true);
        actionSetPickOnsetEmergent = new QAction(PickerView);
        actionSetPickOnsetEmergent->setObjectName(QString::fromUtf8("actionSetPickOnsetEmergent"));
        actionSetPickOnsetImpulsive = new QAction(PickerView);
        actionSetPickOnsetImpulsive->setObjectName(QString::fromUtf8("actionSetPickOnsetImpulsive"));
        actionSetPickOnsetQuestionable = new QAction(PickerView);
        actionSetPickOnsetQuestionable->setObjectName(QString::fromUtf8("actionSetPickOnsetQuestionable"));
        actionSetPickOnsetUnset = new QAction(PickerView);
        actionSetPickOnsetUnset->setObjectName(QString::fromUtf8("actionSetPickOnsetUnset"));
        centralwidget = new QWidget(PickerView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frameZoomWrapper = new QFrame(splitter);
        frameZoomWrapper->setObjectName(QString::fromUtf8("frameZoomWrapper"));
        frameZoomWrapper->setFrameShape(QFrame::StyledPanel);
        frameZoomWrapper->setFrameShadow(QFrame::Sunken);
        vboxLayout1 = new QVBoxLayout(frameZoomWrapper);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        frameZoom = new Seiscomp::Gui::ZoomRecordFrame(frameZoomWrapper);
        frameZoom->setObjectName(QString::fromUtf8("frameZoom"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameZoom->sizePolicy().hasHeightForWidth());
        frameZoom->setSizePolicy(sizePolicy);
        frameZoom->setFrameShape(QFrame::NoFrame);
        frameZoom->setFrameShadow(QFrame::Sunken);
        vboxLayout2 = new QVBoxLayout(frameZoom);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(6, 6, 6, 6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        frameCurrentRowLabel = new QFrame(frameZoom);
        frameCurrentRowLabel->setObjectName(QString::fromUtf8("frameCurrentRowLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(frameCurrentRowLabel->sizePolicy().hasHeightForWidth());
        frameCurrentRowLabel->setSizePolicy(sizePolicy1);
        frameCurrentRowLabel->setFrameShape(QFrame::NoFrame);
        frameCurrentRowLabel->setFrameShadow(QFrame::Plain);
        hboxLayout = new QHBoxLayout(frameCurrentRowLabel);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        labelStationCode = new QLabel(frameCurrentRowLabel);
        labelStationCode->setObjectName(QString::fromUtf8("labelStationCode"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelStationCode->sizePolicy().hasHeightForWidth());
        labelStationCode->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(labelStationCode);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        labelCode = new QLabel(frameCurrentRowLabel);
        labelCode->setObjectName(QString::fromUtf8("labelCode"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelCode->sizePolicy().hasHeightForWidth());
        labelCode->setSizePolicy(sizePolicy3);
        labelCode->setMinimumSize(QSize(20, 0));

        hboxLayout1->addWidget(labelCode);

        label = new QLabel(frameCurrentRowLabel);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        labelDistance = new QLabel(frameCurrentRowLabel);
        labelDistance->setObjectName(QString::fromUtf8("labelDistance"));

        hboxLayout1->addWidget(labelDistance);

        label1 = new QLabel(frameCurrentRowLabel);
        label1->setObjectName(QString::fromUtf8("label1"));

        hboxLayout1->addWidget(label1);

        labelAzimuth = new QLabel(frameCurrentRowLabel);
        labelAzimuth->setObjectName(QString::fromUtf8("labelAzimuth"));

        hboxLayout1->addWidget(labelAzimuth);


        hboxLayout->addLayout(hboxLayout1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout2->addWidget(frameCurrentRowLabel);

        frameCurrentRow = new QFrame(frameZoom);
        frameCurrentRow->setObjectName(QString::fromUtf8("frameCurrentRow"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frameCurrentRow->sizePolicy().hasHeightForWidth());
        frameCurrentRow->setSizePolicy(sizePolicy4);
        frameCurrentRow->setFrameShape(QFrame::NoFrame);
        frameCurrentRow->setFrameShadow(QFrame::Raised);

        vboxLayout2->addWidget(frameCurrentRow);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        frameZoomControls = new QFrame(frameZoom);
        frameZoomControls->setObjectName(QString::fromUtf8("frameZoomControls"));
        sizePolicy2.setHeightForWidth(frameZoomControls->sizePolicy().hasHeightForWidth());
        frameZoomControls->setSizePolicy(sizePolicy2);
        frameZoomControls->setFrameShape(QFrame::NoFrame);
        frameZoomControls->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frameZoomControls);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        btnRowAccept = new QPushButton(frameZoomControls);
        btnRowAccept->setObjectName(QString::fromUtf8("btnRowAccept"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnRowAccept->sizePolicy().hasHeightForWidth());
        btnRowAccept->setSizePolicy(sizePolicy5);
        btnRowAccept->setMinimumSize(QSize(32, 32));
        btnRowAccept->setMaximumSize(QSize(32, 32));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowAccept->setIcon(icon23);
        btnRowAccept->setIconSize(QSize(24, 24));
        btnRowAccept->setCheckable(true);
        btnRowAccept->setFlat(false);

        hboxLayout3->addWidget(btnRowAccept);

        btnRowRemove = new QPushButton(frameZoomControls);
        btnRowRemove->setObjectName(QString::fromUtf8("btnRowRemove"));
        sizePolicy5.setHeightForWidth(btnRowRemove->sizePolicy().hasHeightForWidth());
        btnRowRemove->setSizePolicy(sizePolicy5);
        btnRowRemove->setMinimumSize(QSize(32, 32));
        btnRowRemove->setMaximumSize(QSize(32, 32));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowRemove->setIcon(icon24);
        btnRowRemove->setIconSize(QSize(24, 24));
        btnRowRemove->setCheckable(true);

        hboxLayout3->addWidget(btnRowRemove);

        btnRowReset = new QPushButton(frameZoomControls);
        btnRowReset->setObjectName(QString::fromUtf8("btnRowReset"));
        sizePolicy5.setHeightForWidth(btnRowReset->sizePolicy().hasHeightForWidth());
        btnRowReset->setSizePolicy(sizePolicy5);
        btnRowReset->setMinimumSize(QSize(32, 32));
        btnRowReset->setMaximumSize(QSize(32, 32));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icons/icons/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowReset->setIcon(icon25);
        btnRowReset->setIconSize(QSize(24, 24));

        hboxLayout3->addWidget(btnRowReset);


        hboxLayout2->addWidget(frameZoomControls);

        frameTimeScale = new QFrame(frameZoom);
        frameTimeScale->setObjectName(QString::fromUtf8("frameTimeScale"));
        frameTimeScale->setFrameShape(QFrame::NoFrame);
        frameTimeScale->setFrameShadow(QFrame::Raised);

        hboxLayout2->addWidget(frameTimeScale);


        vboxLayout2->addLayout(hboxLayout2);


        vboxLayout1->addWidget(frameZoom);

        splitter->addWidget(frameZoomWrapper);
        framePickList = new QFrame(splitter);
        framePickList->setObjectName(QString::fromUtf8("framePickList"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(framePickList->sizePolicy().hasHeightForWidth());
        framePickList->setSizePolicy(sizePolicy6);
        framePickList->setFrameShape(QFrame::StyledPanel);
        framePickList->setFrameShadow(QFrame::Sunken);
        splitter->addWidget(framePickList);

        vboxLayout->addWidget(splitter);

        PickerView->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PickerView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PickerView->setStatusBar(statusbar);
        toolBarScale = new QToolBar(PickerView);
        toolBarScale->setObjectName(QString::fromUtf8("toolBarScale"));
        toolBarScale->setOrientation(Qt::Horizontal);
        toolBarScale->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarScale);
        toolBarSort = new QToolBar(PickerView);
        toolBarSort->setObjectName(QString::fromUtf8("toolBarSort"));
        toolBarSort->setOrientation(Qt::Horizontal);
        toolBarSort->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarSort);
        toolBarAlign = new QToolBar(PickerView);
        toolBarAlign->setObjectName(QString::fromUtf8("toolBarAlign"));
        toolBarAlign->setOrientation(Qt::Horizontal);
        toolBarAlign->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarAlign);
        toolBarComponent = new QToolBar(PickerView);
        toolBarComponent->setObjectName(QString::fromUtf8("toolBarComponent"));
        toolBarComponent->setOrientation(Qt::Horizontal);
        toolBarComponent->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarComponent);
        toolBarStations = new QToolBar(PickerView);
        toolBarStations->setObjectName(QString::fromUtf8("toolBarStations"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(toolBarStations->sizePolicy().hasHeightForWidth());
        toolBarStations->setSizePolicy(sizePolicy7);
        toolBarStations->setOrientation(Qt::Horizontal);
        toolBarStations->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarStations);
        toolBarPicking = new QToolBar(PickerView);
        toolBarPicking->setObjectName(QString::fromUtf8("toolBarPicking"));
        toolBarPicking->setMovable(true);
        toolBarPicking->setOrientation(Qt::Horizontal);
        toolBarPicking->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarPicking);
        toolBarFilter = new QToolBar(PickerView);
        toolBarFilter->setObjectName(QString::fromUtf8("toolBarFilter"));
        toolBarFilter->setOrientation(Qt::Horizontal);
        toolBarFilter->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarFilter);
        toolBarSpectrogram = new QToolBar(PickerView);
        toolBarSpectrogram->setObjectName(QString::fromUtf8("toolBarSpectrogram"));
        toolBarSpectrogram->setOrientation(Qt::Horizontal);
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarSpectrogram);
        toolBarTTT = new QToolBar(PickerView);
        toolBarTTT->setObjectName(QString::fromUtf8("toolBarTTT"));
        toolBarTTT->setOrientation(Qt::Horizontal);
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarTTT);
        toolBarRelocate = new QToolBar(PickerView);
        toolBarRelocate->setObjectName(QString::fromUtf8("toolBarRelocate"));
        toolBarRelocate->setOrientation(Qt::Horizontal);
        toolBarRelocate->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarRelocate);
        menuBar = new QMenuBar(PickerView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 945, 38));
        menu_Filter = new QMenu(menuBar);
        menu_Filter->setObjectName(QString::fromUtf8("menu_Filter"));
        menu_Locate = new QMenu(menuBar);
        menu_Locate->setObjectName(QString::fromUtf8("menu_Locate"));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        menuPicking = new QMenu(menuBar);
        menuPicking->setObjectName(QString::fromUtf8("menuPicking"));
        menu_Navigation = new QMenu(menuBar);
        menu_Navigation->setObjectName(QString::fromUtf8("menu_Navigation"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuComponents = new QMenu(menuView);
        menuComponents->setObjectName(QString::fromUtf8("menuComponents"));
        menuTraces = new QMenu(menuView);
        menuTraces->setObjectName(QString::fromUtf8("menuTraces"));
        menuAlignArrival = new QMenu(menuTraces);
        menuAlignArrival->setObjectName(QString::fromUtf8("menuAlignArrival"));
        menu_Zoomtrace = new QMenu(menuView);
        menu_Zoomtrace->setObjectName(QString::fromUtf8("menu_Zoomtrace"));
        PickerView->setMenuBar(menuBar);

        toolBarScale->addAction(actionDefaultView);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionIncreaseRowHeight);
        toolBarScale->addAction(actionDecreaseRowHeight);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionIncreaseRowTimescale);
        toolBarScale->addAction(actionDecreaseRowTimescale);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionMaximizeAmplitudes);
        toolBarSort->addAction(actionSortByDistance);
        toolBarSort->addAction(actionSortByAzimuth);
        toolBarSort->addAction(actionSortAlphabetically);
        toolBarSort->addAction(actionSortByResidual);
        toolBarAlign->addAction(actionAlignOnPArrival);
        toolBarAlign->addAction(actionAlignOnSArrival);
        toolBarAlign->addAction(actionAlignOnOriginTime);
        toolBarComponent->addAction(actionShowZComponent);
        toolBarComponent->addAction(actionShowNComponent);
        toolBarComponent->addAction(actionShowEComponent);
        toolBarStations->addAction(actionShowAllStations);
        toolBarStations->addAction(actionShowUsedStations);
        toolBarPicking->addAction(actionPickP);
        toolBarPicking->addAction(actionPickS);
        toolBarRelocate->addAction(actionRelocate);
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menu_Navigation->menuAction());
        menuBar->addAction(menuPicking->menuAction());
        menuBar->addAction(menu_Filter->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_Locate->menuAction());
        menu_Filter->addAction(actionToggleFilter);
        menu_Filter->addAction(actionLimitFilterToZoomTrace);
        menu_Locate->addAction(actionRelocate);
        menu_Locate->addAction(actionModifyOrigin);
        menu_Tools->addAction(actionOpenSpectrum);
        menuPicking->addAction(actionRepickAutomatically);
        menuPicking->addSeparator();
        menu_Navigation->addAction(actionScrollLeft);
        menu_Navigation->addAction(actionScrollRight);
        menu_Navigation->addAction(actionScrollFineLeft);
        menu_Navigation->addAction(actionScrollFineRight);
        menuView->addAction(actionDefaultView);
        menuView->addAction(actionShowAllComponents);
        menuView->addAction(actionShowUsedStations);
        menuView->addAction(actionShowTraceValuesInNmS);
        menuView->addAction(actionShowUnassociatedPicks);
        menuView->addAction(actionShowTheoreticalArrivals);
        menuView->addAction(actionShowSpectrogram);
        menuView->addSeparator();
        menuView->addAction(menu_Zoomtrace->menuAction());
        menuView->addAction(menuTraces->menuAction());
        menuView->addAction(menuComponents->menuAction());
        menuComponents->addAction(actionShowZComponent);
        menuComponents->addAction(actionShowNComponent);
        menuComponents->addAction(actionShowEComponent);
        menuTraces->addAction(actionIncreaseRowHeight);
        menuTraces->addAction(actionDecreaseRowHeight);
        menuTraces->addAction(actionIncreaseRowTimescale);
        menuTraces->addAction(actionDecreaseRowTimescale);
        menuTraces->addAction(actionMaximizeAmplitudes);
        menuTraces->addSeparator();
        menuTraces->addAction(menuAlignArrival->menuAction());
        menuAlignArrival->addAction(actionAlignOnOriginTime);
        menu_Zoomtrace->addAction(actionIncreaseAmplitudeScale);
        menu_Zoomtrace->addAction(actionDecreaseAmplitudeScale);
        menu_Zoomtrace->addAction(actionTimeScaleUp);
        menu_Zoomtrace->addAction(actionTimeScaleDown);
        menu_Zoomtrace->addAction(actionResetScale);
        menu_Zoomtrace->addSeparator();
        menu_Zoomtrace->addAction(actionClipComponentsToViewport);

        retranslateUi(PickerView);

        QMetaObject::connectSlotsByName(PickerView);
    } // setupUi

    void retranslateUi(QMainWindow *PickerView)
    {
        PickerView->setWindowTitle(QCoreApplication::translate("PickerView", "Picker", nullptr));
        actionIncreaseAmplitudeScale->setText(QCoreApplication::translate("PickerView", "Scale amplitudes up", nullptr));
        actionIncreaseAmplitudeScale->setIconText(QCoreApplication::translate("PickerView", "Scale amplitudes up", nullptr));
#if QT_CONFIG(tooltip)
        actionIncreaseAmplitudeScale->setToolTip(QCoreApplication::translate("PickerView", "Increase amplitude scale of current trace", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionIncreaseAmplitudeScale->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDecreaseAmplitudeScale->setText(QCoreApplication::translate("PickerView", "Scale amplitudes down", nullptr));
        actionDecreaseAmplitudeScale->setIconText(QCoreApplication::translate("PickerView", "Scale amplitudes down", nullptr));
#if QT_CONFIG(tooltip)
        actionDecreaseAmplitudeScale->setToolTip(QCoreApplication::translate("PickerView", "Descrease amplitude scale of current trace", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDecreaseAmplitudeScale->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTimeScaleUp->setText(QCoreApplication::translate("PickerView", "Increase visible timespan", nullptr));
#if QT_CONFIG(tooltip)
        actionTimeScaleUp->setToolTip(QCoreApplication::translate("PickerView", "Increase visible timespan", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTimeScaleUp->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTimeScaleDown->setText(QCoreApplication::translate("PickerView", "Decrease visible timespan", nullptr));
        actionTimeScaleDown->setIconText(QCoreApplication::translate("PickerView", "Decrease visible timespan", nullptr));
#if QT_CONFIG(tooltip)
        actionTimeScaleDown->setToolTip(QCoreApplication::translate("PickerView", "Decrease visible timespan", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTimeScaleDown->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScrollLeft->setText(QCoreApplication::translate("PickerView", "Scroll left", nullptr));
#if QT_CONFIG(tooltip)
        actionScrollLeft->setToolTip(QCoreApplication::translate("PickerView", "Scroll current trace left", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScrollLeft->setShortcut(QCoreApplication::translate("PickerView", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScrollRight->setText(QCoreApplication::translate("PickerView", "Scroll right", nullptr));
#if QT_CONFIG(tooltip)
        actionScrollRight->setToolTip(QCoreApplication::translate("PickerView", "Scroll current trace right", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScrollRight->setShortcut(QCoreApplication::translate("PickerView", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectNextTrace->setText(QCoreApplication::translate("PickerView", "Next trace", nullptr));
        actionSelectNextTrace->setIconText(QCoreApplication::translate("PickerView", "Next trace", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectNextTrace->setShortcut(QCoreApplication::translate("PickerView", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectPreviousTrace->setText(QCoreApplication::translate("PickerView", "Previous trace", nullptr));
        actionSelectPreviousTrace->setIconText(QCoreApplication::translate("PickerView", "Previous trace", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectPreviousTrace->setShortcut(QCoreApplication::translate("PickerView", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScrollFineLeft->setText(QCoreApplication::translate("PickerView", "Scroll fine left", nullptr));
        actionScrollFineLeft->setIconText(QCoreApplication::translate("PickerView", "Scroll fine left", nullptr));
#if QT_CONFIG(tooltip)
        actionScrollFineLeft->setToolTip(QCoreApplication::translate("PickerView", "Scroll current trace left with finer steps", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScrollFineLeft->setShortcut(QCoreApplication::translate("PickerView", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScrollFineRight->setText(QCoreApplication::translate("PickerView", "Scroll fine right", nullptr));
        actionScrollFineRight->setIconText(QCoreApplication::translate("PickerView", "Scroll fine right", nullptr));
#if QT_CONFIG(tooltip)
        actionScrollFineRight->setToolTip(QCoreApplication::translate("PickerView", "Scroll current trace right with finer steps", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScrollFineRight->setShortcut(QCoreApplication::translate("PickerView", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIncreaseRowHeight->setText(QCoreApplication::translate("PickerView", "Increase row height", nullptr));
#if QT_CONFIG(tooltip)
        actionIncreaseRowHeight->setToolTip(QCoreApplication::translate("PickerView", "Increases the row height in traceview (Shift+Y)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionIncreaseRowHeight->setShortcut(QCoreApplication::translate("PickerView", "Shift+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDecreaseRowHeight->setText(QCoreApplication::translate("PickerView", "Decrease row height", nullptr));
#if QT_CONFIG(tooltip)
        actionDecreaseRowHeight->setToolTip(QCoreApplication::translate("PickerView", "Decreases the row height in traceview (Y)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDecreaseRowHeight->setShortcut(QCoreApplication::translate("PickerView", "Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIncreaseRowTimescale->setText(QCoreApplication::translate("PickerView", "Increase row timescale", nullptr));
#if QT_CONFIG(tooltip)
        actionIncreaseRowTimescale->setToolTip(QCoreApplication::translate("PickerView", "Increases the timescale in traceview (>)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionIncreaseRowTimescale->setShortcut(QCoreApplication::translate("PickerView", ">", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDecreaseRowTimescale->setText(QCoreApplication::translate("PickerView", "Decrease row timescale", nullptr));
#if QT_CONFIG(tooltip)
        actionDecreaseRowTimescale->setToolTip(QCoreApplication::translate("PickerView", "Decreases the timescale in traceview (<)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDecreaseRowTimescale->setShortcut(QCoreApplication::translate("PickerView", "<", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectFirstRow->setText(QCoreApplication::translate("PickerView", "Select first row", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectFirstRow->setShortcut(QCoreApplication::translate("PickerView", "Home", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectLastRow->setText(QCoreApplication::translate("PickerView", "Select last row", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectLastRow->setShortcut(QCoreApplication::translate("PickerView", "End", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlignOnPArrival->setText(QCoreApplication::translate("PickerView", "Align on P arrival", nullptr));
        actionAlignOnPArrival->setIconText(QCoreApplication::translate("PickerView", "Align on P arrival", nullptr));
#if QT_CONFIG(tooltip)
        actionAlignOnPArrival->setToolTip(QCoreApplication::translate("PickerView", "Align on P arrival", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAlignOnPArrival->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlignOnSArrival->setText(QCoreApplication::translate("PickerView", "Align on S arrival", nullptr));
        actionAlignOnSArrival->setIconText(QCoreApplication::translate("PickerView", "Align on S arrival", nullptr));
#if QT_CONFIG(tooltip)
        actionAlignOnSArrival->setToolTip(QCoreApplication::translate("PickerView", "Align on S arrival", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAlignOnSArrival->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlignOnOriginTime->setText(QCoreApplication::translate("PickerView", "Align on origin time", nullptr));
        actionAlignOnOriginTime->setIconText(QCoreApplication::translate("PickerView", "Align on origin time", nullptr));
#if QT_CONFIG(tooltip)
        actionAlignOnOriginTime->setToolTip(QCoreApplication::translate("PickerView", "Align on origin time (Ctrl+0)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAlignOnOriginTime->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDefaultView->setText(QCoreApplication::translate("PickerView", "&Default view", nullptr));
#if QT_CONFIG(tooltip)
        actionDefaultView->setToolTip(QCoreApplication::translate("PickerView", "Default view (Shift+N)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDefaultView->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSortAlphabetically->setText(QCoreApplication::translate("PickerView", "Sort by names", nullptr));
        actionSortAlphabetically->setIconText(QCoreApplication::translate("PickerView", "Sort by names", nullptr));
#if QT_CONFIG(tooltip)
        actionSortAlphabetically->setToolTip(QCoreApplication::translate("PickerView", "Sorts the traces by name (Alt+A)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSortAlphabetically->setShortcut(QCoreApplication::translate("PickerView", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSortByDistance->setText(QCoreApplication::translate("PickerView", "Sort by distance", nullptr));
#if QT_CONFIG(tooltip)
        actionSortByDistance->setToolTip(QCoreApplication::translate("PickerView", "Sort by distance (Alt+D)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSortByDistance->setShortcut(QCoreApplication::translate("PickerView", "Alt+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleFilter->setText(QCoreApplication::translate("PickerView", "&Toggle filter", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleFilter->setToolTip(QCoreApplication::translate("PickerView", "Toggles using a filter before displaying the traces (F)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleFilter->setShortcut(QCoreApplication::translate("PickerView", "F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMaximizeAmplitudes->setText(QCoreApplication::translate("PickerView", "Maximize visible amplitudes", nullptr));
        actionMaximizeAmplitudes->setIconText(QCoreApplication::translate("PickerView", "Maximize visible amplitudes", nullptr));
#if QT_CONFIG(tooltip)
        actionMaximizeAmplitudes->setToolTip(QCoreApplication::translate("PickerView", "Maximize visible amplitudes (S)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMaximizeAmplitudes->setShortcut(QCoreApplication::translate("PickerView", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPickP->setText(QCoreApplication::translate("PickerView", "Pick P phase", nullptr));
#if QT_CONFIG(shortcut)
        actionPickP->setShortcut(QCoreApplication::translate("PickerView", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPickS->setText(QCoreApplication::translate("PickerView", "Pick S phase", nullptr));
#if QT_CONFIG(shortcut)
        actionPickS->setShortcut(QCoreApplication::translate("PickerView", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPickOther->setText(QCoreApplication::translate("PickerView", "Pick other phase", nullptr));
        actionDisablePicking->setText(QCoreApplication::translate("PickerView", "Leave picking mode", nullptr));
        actionDisablePicking->setIconText(QCoreApplication::translate("PickerView", "Leave picking mode", nullptr));
#if QT_CONFIG(tooltip)
        actionDisablePicking->setToolTip(QCoreApplication::translate("PickerView", "Leaves the picking mode (Esc)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDisablePicking->setShortcut(QCoreApplication::translate("PickerView", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConfirmPick->setText(QCoreApplication::translate("PickerView", "Confirm pick", nullptr));
#if QT_CONFIG(tooltip)
        actionConfirmPick->setToolTip(QCoreApplication::translate("PickerView", "Confirm pick (Shift+Return)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionConfirmPick->setShortcut(QCoreApplication::translate("PickerView", "Shift+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeletePick->setText(QCoreApplication::translate("PickerView", "Delete pick", nullptr));
#if QT_CONFIG(tooltip)
        actionDeletePick->setToolTip(QCoreApplication::translate("PickerView", "Delete pick (Del)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDeletePick->setShortcut(QCoreApplication::translate("PickerView", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRelocate->setText(QCoreApplication::translate("PickerView", "&Apply", nullptr));
        actionRelocate->setIconText(QCoreApplication::translate("PickerView", "Apply", nullptr));
#if QT_CONFIG(tooltip)
        actionRelocate->setToolTip(QCoreApplication::translate("PickerView", "Apply the changed picks to the origin and update the residuals. \"Relocate\" has to be done manually! (F5)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionRelocate->setStatusTip(QCoreApplication::translate("PickerView", "Apply the changed picks to the origin and update the residuals. \"Relocate\" has to be done manually! (F5)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionRelocate->setShortcut(QCoreApplication::translate("PickerView", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowAllStations->setText(QCoreApplication::translate("PickerView", "Add stations in range", nullptr));
        actionShowAllStations->setIconText(QCoreApplication::translate("PickerView", "Add stations in range", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAllStations->setToolTip(QCoreApplication::translate("PickerView", "Adds all stations next to the origin with distance lower or equal than the entered value that haven't triggered. When view mode is \"used stations only\" you won't see the new stations until leaving this mode.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowUsedStations->setText(QCoreApplication::translate("PickerView", "&Show used stations only", nullptr));
        actionShowUsedStations->setIconText(QCoreApplication::translate("PickerView", "Used stations only", nullptr));
#if QT_CONFIG(tooltip)
        actionShowUsedStations->setToolTip(QCoreApplication::translate("PickerView", "Toggles between hiding unpicked and deactivated stations and showing all stations", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSortByResidual->setText(QCoreApplication::translate("PickerView", "Sort by residual", nullptr));
#if QT_CONFIG(shortcut)
        actionSortByResidual->setShortcut(QCoreApplication::translate("PickerView", "Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowZComponent->setText(QCoreApplication::translate("PickerView", "Vertical", nullptr));
        actionShowZComponent->setIconText(QCoreApplication::translate("PickerView", "Vertical", nullptr));
#if QT_CONFIG(tooltip)
        actionShowZComponent->setToolTip(QCoreApplication::translate("PickerView", "Show Vertical Component (Z)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowZComponent->setShortcut(QCoreApplication::translate("PickerView", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowNComponent->setText(QCoreApplication::translate("PickerView", "North", nullptr));
        actionShowNComponent->setIconText(QCoreApplication::translate("PickerView", "North", nullptr));
#if QT_CONFIG(tooltip)
        actionShowNComponent->setToolTip(QCoreApplication::translate("PickerView", "Show North Component (N)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowNComponent->setShortcut(QCoreApplication::translate("PickerView", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowEComponent->setText(QCoreApplication::translate("PickerView", "East", nullptr));
        actionShowEComponent->setIconText(QCoreApplication::translate("PickerView", "East", nullptr));
#if QT_CONFIG(tooltip)
        actionShowEComponent->setToolTip(QCoreApplication::translate("PickerView", "Show East Component (E)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowEComponent->setShortcut(QCoreApplication::translate("PickerView", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGotoNextMarker->setText(QCoreApplication::translate("PickerView", "Goto next marker", nullptr));
        actionGotoNextMarker->setIconText(QCoreApplication::translate("PickerView", "Goto next marker", nullptr));
#if QT_CONFIG(tooltip)
        actionGotoNextMarker->setToolTip(QCoreApplication::translate("PickerView", "Goto next marker", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGotoNextMarker->setShortcut(QCoreApplication::translate("PickerView", "Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGotoPreviousMarker->setText(QCoreApplication::translate("PickerView", "Goto previous marker", nullptr));
        actionGotoPreviousMarker->setIconText(QCoreApplication::translate("PickerView", "Goto previous marker", nullptr));
#if QT_CONFIG(tooltip)
        actionGotoPreviousMarker->setToolTip(QCoreApplication::translate("PickerView", "Goto previous marker", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGotoPreviousMarker->setShortcut(QCoreApplication::translate("PickerView", "Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreatePick->setText(QCoreApplication::translate("PickerView", "Create pick", nullptr));
        actionCreatePick->setIconText(QCoreApplication::translate("PickerView", "Create pick", nullptr));
#if QT_CONFIG(tooltip)
        actionCreatePick->setToolTip(QCoreApplication::translate("PickerView", "Create pick (Return)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCreatePick->setShortcut(QCoreApplication::translate("PickerView", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwitchFullscreen->setText(QCoreApplication::translate("PickerView", "Toggle fullscreen", nullptr));
        actionSwitchFullscreen->setIconText(QCoreApplication::translate("PickerView", "Toggle fullscreen", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchFullscreen->setToolTip(QCoreApplication::translate("PickerView", "Toggle fullscreen", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchFullscreen->setShortcut(QCoreApplication::translate("PickerView", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddStations->setText(QCoreApplication::translate("PickerView", "Add stations", nullptr));
#if QT_CONFIG(shortcut)
        actionAddStations->setShortcut(QCoreApplication::translate("PickerView", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSearchStation->setText(QCoreApplication::translate("PickerView", "Search station", nullptr));
#if QT_CONFIG(shortcut)
        actionSearchStation->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionModifyOrigin->setText(QCoreApplication::translate("PickerView", "&Modify origin", nullptr));
#if QT_CONFIG(tooltip)
        actionModifyOrigin->setToolTip(QCoreApplication::translate("PickerView", "Modify origin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionModifyOrigin->setStatusTip(QCoreApplication::translate("PickerView", "Modify the location and origin time of the current origin and recalculate the theoretical arrivals and the residuals.", nullptr));
#endif // QT_CONFIG(statustip)
        actionLimitFilterToZoomTrace->setText(QCoreApplication::translate("PickerView", "&Limit filter to zoom trace", nullptr));
#if QT_CONFIG(tooltip)
        actionLimitFilterToZoomTrace->setToolTip(QCoreApplication::translate("PickerView", "Limit filter to zoom trace", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionLimitFilterToZoomTrace->setStatusTip(QCoreApplication::translate("PickerView", "Limits filtering to zoom trace. All other traces are not filtered. This is mostly used to gain performance.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionLimitFilterToZoomTrace->setShortcut(QCoreApplication::translate("PickerView", "Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRepickAutomatically->setText(QCoreApplication::translate("PickerView", "Repick automatically", nullptr));
#if QT_CONFIG(shortcut)
        actionRepickAutomatically->setShortcut(QCoreApplication::translate("PickerView", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowTraceValuesInNmS->setText(QCoreApplication::translate("PickerView", "Show trace values in nano sensor units", nullptr));
        actionClipComponentsToViewport->setText(QCoreApplication::translate("PickerView", "Clip components to viewport", nullptr));
#if QT_CONFIG(shortcut)
        actionClipComponentsToViewport->setShortcut(QCoreApplication::translate("PickerView", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPolarityPositive->setText(QCoreApplication::translate("PickerView", "positive", nullptr));
#if QT_CONFIG(shortcut)
        actionSetPolarityPositive->setShortcut(QCoreApplication::translate("PickerView", "Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPolarityNegative->setText(QCoreApplication::translate("PickerView", "negative", nullptr));
#if QT_CONFIG(shortcut)
        actionSetPolarityNegative->setShortcut(QCoreApplication::translate("PickerView", "Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPolarityUndecidable->setText(QCoreApplication::translate("PickerView", "undecidable", nullptr));
#if QT_CONFIG(shortcut)
        actionSetPolarityUndecidable->setShortcut(QCoreApplication::translate("PickerView", "Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPolarityUnset->setText(QCoreApplication::translate("PickerView", "unset", nullptr));
#if QT_CONFIG(shortcut)
        actionSetPolarityUnset->setShortcut(QCoreApplication::translate("PickerView", "Shift+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPick->setText(QCoreApplication::translate("PickerView", "Set pick", nullptr));
#if QT_CONFIG(shortcut)
        actionSetPick->setShortcut(QCoreApplication::translate("PickerView", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowTheoreticalArrivals->setText(QCoreApplication::translate("PickerView", "Show theoretical arrivals", nullptr));
        actionShowTheoreticalArrivals->setIconText(QCoreApplication::translate("PickerView", "Show theoretical arrivals", nullptr));
#if QT_CONFIG(tooltip)
        actionShowTheoreticalArrivals->setToolTip(QCoreApplication::translate("PickerView", "Shows theoretical arrivals as blue bars in the traces", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowTheoreticalArrivals->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowUnassociatedPicks->setText(QCoreApplication::translate("PickerView", "Show unassociated picks", nullptr));
#if QT_CONFIG(shortcut)
        actionShowUnassociatedPicks->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNextFilter->setText(QCoreApplication::translate("PickerView", "Next filter", nullptr));
#if QT_CONFIG(shortcut)
        actionNextFilter->setShortcut(QCoreApplication::translate("PickerView", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreviousFilter->setText(QCoreApplication::translate("PickerView", "Previous filter", nullptr));
#if QT_CONFIG(shortcut)
        actionPreviousFilter->setShortcut(QCoreApplication::translate("PickerView", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowSpectrogram->setText(QCoreApplication::translate("PickerView", "Show spectrogram", nullptr));
#if QT_CONFIG(statustip)
        actionShowSpectrogram->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionShowSpectrogram->setShortcut(QCoreApplication::translate("PickerView", "Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSortByAzimuth->setText(QCoreApplication::translate("PickerView", "Sort by azimuth", nullptr));
        actionOpenSpectrum->setText(QCoreApplication::translate("PickerView", "Spectrum for current component", nullptr));
        actionOpenSpectrum->setIconText(QCoreApplication::translate("PickerView", "Spectrum for current component", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenSpectrum->setToolTip(QCoreApplication::translate("PickerView", "Spectrum for current component. This can be also achieved by pressing Space while not in picking mode. (SPACE)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpenSpectrum->setShortcut(QCoreApplication::translate("PickerView", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResetScale->setText(QCoreApplication::translate("PickerView", "Reset scale", nullptr));
#if QT_CONFIG(shortcut)
        actionResetScale->setShortcut(QCoreApplication::translate("PickerView", "W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowAllComponents->setText(QCoreApplication::translate("PickerView", "Show all components", nullptr));
        actionShowAllComponents->setIconText(QCoreApplication::translate("PickerView", "Show all components", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAllComponents->setToolTip(QCoreApplication::translate("PickerView", "Toggles between showing all three components or the active component only", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowAllComponents->setShortcut(QCoreApplication::translate("PickerView", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPickOnsetEmergent->setText(QCoreApplication::translate("PickerView", "emergent", nullptr));
#if QT_CONFIG(shortcut)
        actionSetPickOnsetEmergent->setShortcut(QCoreApplication::translate("PickerView", "Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPickOnsetImpulsive->setText(QCoreApplication::translate("PickerView", "impulsive", nullptr));
#if QT_CONFIG(shortcut)
        actionSetPickOnsetImpulsive->setShortcut(QCoreApplication::translate("PickerView", "Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPickOnsetQuestionable->setText(QCoreApplication::translate("PickerView", "questionable", nullptr));
#if QT_CONFIG(shortcut)
        actionSetPickOnsetQuestionable->setShortcut(QCoreApplication::translate("PickerView", "Shift+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPickOnsetUnset->setText(QCoreApplication::translate("PickerView", "unset", nullptr));
        labelStationCode->setText(QCoreApplication::translate("PickerView", "ABCD", nullptr));
        labelCode->setText(QCoreApplication::translate("PickerView", "AB  BHZ", nullptr));
        label->setText(QCoreApplication::translate("PickerView", ", distance: ", nullptr));
        labelDistance->setText(QCoreApplication::translate("PickerView", "-1\302\260", nullptr));
        label1->setText(QCoreApplication::translate("PickerView", ", azimuth: ", nullptr));
        labelAzimuth->setText(QCoreApplication::translate("PickerView", "-1\302\260", nullptr));
#if QT_CONFIG(tooltip)
        btnRowAccept->setToolTip(QCoreApplication::translate("PickerView", "Accept picked phase", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRowAccept->setText(QString());
#if QT_CONFIG(tooltip)
        btnRowRemove->setToolTip(QCoreApplication::translate("PickerView", "Deactivate current pick or trace depending on the picking mode", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRowRemove->setText(QString());
#if QT_CONFIG(shortcut)
        btnRowRemove->setShortcut(QCoreApplication::translate("PickerView", "X", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnRowReset->setToolTip(QCoreApplication::translate("PickerView", "Reset manual picks", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRowReset->setText(QString());
        toolBarScale->setWindowTitle(QCoreApplication::translate("PickerView", "Zooming", nullptr));
        toolBarSort->setWindowTitle(QCoreApplication::translate("PickerView", "Sort", nullptr));
        toolBarAlign->setWindowTitle(QCoreApplication::translate("PickerView", "Alignment", nullptr));
        toolBarComponent->setWindowTitle(QCoreApplication::translate("PickerView", "Components", nullptr));
        toolBarStations->setWindowTitle(QCoreApplication::translate("PickerView", "Add stations", nullptr));
        toolBarPicking->setWindowTitle(QCoreApplication::translate("PickerView", "Picking", nullptr));
        toolBarFilter->setWindowTitle(QCoreApplication::translate("PickerView", "Filter", nullptr));
        toolBarSpectrogram->setWindowTitle(QCoreApplication::translate("PickerView", "Spectrogram", nullptr));
        toolBarTTT->setWindowTitle(QCoreApplication::translate("PickerView", "Travel times", nullptr));
        toolBarRelocate->setWindowTitle(QCoreApplication::translate("PickerView", "Apply", nullptr));
        menu_Filter->setTitle(QCoreApplication::translate("PickerView", "&Filter", nullptr));
        menu_Locate->setTitle(QCoreApplication::translate("PickerView", "&Locator", nullptr));
        menu_Tools->setTitle(QCoreApplication::translate("PickerView", "&Tools", nullptr));
        menuPicking->setTitle(QCoreApplication::translate("PickerView", "&Picking", nullptr));
        menu_Navigation->setTitle(QCoreApplication::translate("PickerView", "&Navigation", nullptr));
        menuView->setTitle(QCoreApplication::translate("PickerView", "&View", nullptr));
        menuComponents->setTitle(QCoreApplication::translate("PickerView", "&Components", nullptr));
        menuTraces->setTitle(QCoreApplication::translate("PickerView", "&Traces", nullptr));
        menuAlignArrival->setTitle(QCoreApplication::translate("PickerView", "Align", nullptr));
        menu_Zoomtrace->setTitle(QCoreApplication::translate("PickerView", "&Zoomtrace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PickerView: public Ui_PickerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKERVIEW_H
