/********************************************************************************
** Form generated from reading UI file 'amplitudeview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPLITUDEVIEW_H
#define UI_AMPLITUDEVIEW_H

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

class Ui_AmplitudeView
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
    QAction *actionResetDefaultConfig;
    QAction *actionAlignOnPArrival;
    QAction *actionAlignOnOriginTime;
    QAction *actionDefaultView;
    QAction *actionSortAlphabetically;
    QAction *actionSortByDistance;
    QAction *actionToggleFilter;
    QAction *actionMaximizeAmplitudes;
    QAction *actionComputeMagnitudes;
    QAction *actionShowTheoreticalArrivals;
    QAction *actionShowAllStations;
    QAction *actionShowUsedStations;
    QAction *actionShowZComponent;
    QAction *actionShowNComponent;
    QAction *actionShowEComponent;
    QAction *actionGotoNextMarker;
    QAction *actionGotoPreviousMarker;
    QAction *actionSwitchFullscreen;
    QAction *actionAddStations;
    QAction *actionSearchStation;
    QAction *actionLimitFilterToZoomTrace;
    QAction *actionShowTraceValuesInNmS;
    QAction *actionClipComponentsToViewport;
    QAction *actionCreateAmplitude;
    QAction *actionConfirmAmplitude;
    QAction *actionDeleteAmplitude;
    QAction *actionDisablePicking;
    QAction *actionRecalculateAmplitudes;
    QAction *actionPickAmplitude;
    QAction *actionRecalculateAmplitude;
    QAction *actionSetAmplitude;
    QAction *actionResetScale;
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
    QLabel *label_2;
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
    QFrame *frameTraces;
    QStatusBar *statusbar;
    QToolBar *toolBarScale;
    QToolBar *toolBarSort;
    QToolBar *toolBarAlign;
    QToolBar *toolBarComponent;
    QToolBar *toolBarStations;
    QToolBar *toolBarPicking;
    QMenuBar *menuBar;
    QMenu *menuView;
    QMenu *menuZoomtrace;
    QMenu *menuTraces;
    QMenu *menuAlignArrival;
    QMenu *menuComponents;
    QMenu *menuNavigation;
    QMenu *menuLocate;
    QMenu *menuFilter;
    QToolBar *toolBarTTT;
    QToolBar *toolBarFilter;
    QToolBar *toolBarSetup;
    QToolBar *toolBarComputeMagnitudes;

    void setupUi(QMainWindow *AmplitudeView)
    {
        if (AmplitudeView->objectName().isEmpty())
            AmplitudeView->setObjectName(QString::fromUtf8("AmplitudeView"));
        AmplitudeView->resize(917, 690);
        AmplitudeView->setIconSize(QSize(16, 16));
        actionIncreaseAmplitudeScale = new QAction(AmplitudeView);
        actionIncreaseAmplitudeScale->setObjectName(QString::fromUtf8("actionIncreaseAmplitudeScale"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/vzoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncreaseAmplitudeScale->setIcon(icon);
        actionDecreaseAmplitudeScale = new QAction(AmplitudeView);
        actionDecreaseAmplitudeScale->setObjectName(QString::fromUtf8("actionDecreaseAmplitudeScale"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/vzoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecreaseAmplitudeScale->setIcon(icon1);
        actionTimeScaleUp = new QAction(AmplitudeView);
        actionTimeScaleUp->setObjectName(QString::fromUtf8("actionTimeScaleUp"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeScaleUp->setIcon(icon2);
        actionTimeScaleDown = new QAction(AmplitudeView);
        actionTimeScaleDown->setObjectName(QString::fromUtf8("actionTimeScaleDown"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeScaleDown->setIcon(icon3);
        actionScrollLeft = new QAction(AmplitudeView);
        actionScrollLeft->setObjectName(QString::fromUtf8("actionScrollLeft"));
        actionScrollRight = new QAction(AmplitudeView);
        actionScrollRight->setObjectName(QString::fromUtf8("actionScrollRight"));
        actionSelectNextTrace = new QAction(AmplitudeView);
        actionSelectNextTrace->setObjectName(QString::fromUtf8("actionSelectNextTrace"));
        actionSelectPreviousTrace = new QAction(AmplitudeView);
        actionSelectPreviousTrace->setObjectName(QString::fromUtf8("actionSelectPreviousTrace"));
        actionScrollFineLeft = new QAction(AmplitudeView);
        actionScrollFineLeft->setObjectName(QString::fromUtf8("actionScrollFineLeft"));
        actionScrollFineRight = new QAction(AmplitudeView);
        actionScrollFineRight->setObjectName(QString::fromUtf8("actionScrollFineRight"));
        actionIncreaseRowHeight = new QAction(AmplitudeView);
        actionIncreaseRowHeight->setObjectName(QString::fromUtf8("actionIncreaseRowHeight"));
        actionIncreaseRowHeight->setIcon(icon);
        actionDecreaseRowHeight = new QAction(AmplitudeView);
        actionDecreaseRowHeight->setObjectName(QString::fromUtf8("actionDecreaseRowHeight"));
        actionDecreaseRowHeight->setIcon(icon1);
        actionIncreaseRowTimescale = new QAction(AmplitudeView);
        actionIncreaseRowTimescale->setObjectName(QString::fromUtf8("actionIncreaseRowTimescale"));
        actionIncreaseRowTimescale->setIcon(icon3);
        actionDecreaseRowTimescale = new QAction(AmplitudeView);
        actionDecreaseRowTimescale->setObjectName(QString::fromUtf8("actionDecreaseRowTimescale"));
        actionDecreaseRowTimescale->setIcon(icon2);
        actionSelectFirstRow = new QAction(AmplitudeView);
        actionSelectFirstRow->setObjectName(QString::fromUtf8("actionSelectFirstRow"));
        actionSelectLastRow = new QAction(AmplitudeView);
        actionSelectLastRow->setObjectName(QString::fromUtf8("actionSelectLastRow"));
        actionResetDefaultConfig = new QAction(AmplitudeView);
        actionResetDefaultConfig->setObjectName(QString::fromUtf8("actionResetDefaultConfig"));
        actionAlignOnPArrival = new QAction(AmplitudeView);
        actionAlignOnPArrival->setObjectName(QString::fromUtf8("actionAlignOnPArrival"));
        actionAlignOnPArrival->setCheckable(false);
        actionAlignOnPArrival->setChecked(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/align_p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnPArrival->setIcon(icon4);
        actionAlignOnOriginTime = new QAction(AmplitudeView);
        actionAlignOnOriginTime->setObjectName(QString::fromUtf8("actionAlignOnOriginTime"));
        actionAlignOnOriginTime->setCheckable(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/align_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnOriginTime->setIcon(icon5);
        actionDefaultView = new QAction(AmplitudeView);
        actionDefaultView->setObjectName(QString::fromUtf8("actionDefaultView"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDefaultView->setIcon(icon6);
        actionSortAlphabetically = new QAction(AmplitudeView);
        actionSortAlphabetically->setObjectName(QString::fromUtf8("actionSortAlphabetically"));
        actionSortAlphabetically->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/sort_abc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortAlphabetically->setIcon(icon7);
        actionSortByDistance = new QAction(AmplitudeView);
        actionSortByDistance->setObjectName(QString::fromUtf8("actionSortByDistance"));
        actionSortByDistance->setCheckable(true);
        actionSortByDistance->setChecked(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/sort_dist.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByDistance->setIcon(icon8);
        actionToggleFilter = new QAction(AmplitudeView);
        actionToggleFilter->setObjectName(QString::fromUtf8("actionToggleFilter"));
        actionToggleFilter->setCheckable(false);
        actionToggleFilter->setChecked(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleFilter->setIcon(icon9);
        actionMaximizeAmplitudes = new QAction(AmplitudeView);
        actionMaximizeAmplitudes->setObjectName(QString::fromUtf8("actionMaximizeAmplitudes"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/vmax.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMaximizeAmplitudes->setIcon(icon10);
        actionComputeMagnitudes = new QAction(AmplitudeView);
        actionComputeMagnitudes->setObjectName(QString::fromUtf8("actionComputeMagnitudes"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/locate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeMagnitudes->setIcon(icon11);
        actionShowTheoreticalArrivals = new QAction(AmplitudeView);
        actionShowTheoreticalArrivals->setObjectName(QString::fromUtf8("actionShowTheoreticalArrivals"));
        actionShowTheoreticalArrivals->setCheckable(true);
        actionShowTheoreticalArrivals->setChecked(true);
        actionShowAllStations = new QAction(AmplitudeView);
        actionShowAllStations->setObjectName(QString::fromUtf8("actionShowAllStations"));
        actionShowAllStations->setCheckable(false);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/mindistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowAllStations->setIcon(icon12);
        actionShowUsedStations = new QAction(AmplitudeView);
        actionShowUsedStations->setObjectName(QString::fromUtf8("actionShowUsedStations"));
        actionShowUsedStations->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/icons/withpick.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowUsedStations->setIcon(icon13);
        actionShowZComponent = new QAction(AmplitudeView);
        actionShowZComponent->setObjectName(QString::fromUtf8("actionShowZComponent"));
        actionShowZComponent->setCheckable(true);
        actionShowZComponent->setChecked(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/icons/channelZ.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowZComponent->setIcon(icon14);
        actionShowNComponent = new QAction(AmplitudeView);
        actionShowNComponent->setObjectName(QString::fromUtf8("actionShowNComponent"));
        actionShowNComponent->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/icons/channelN.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowNComponent->setIcon(icon15);
        actionShowEComponent = new QAction(AmplitudeView);
        actionShowEComponent->setObjectName(QString::fromUtf8("actionShowEComponent"));
        actionShowEComponent->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/icons/channelE.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowEComponent->setIcon(icon16);
        actionGotoNextMarker = new QAction(AmplitudeView);
        actionGotoNextMarker->setObjectName(QString::fromUtf8("actionGotoNextMarker"));
        actionGotoPreviousMarker = new QAction(AmplitudeView);
        actionGotoPreviousMarker->setObjectName(QString::fromUtf8("actionGotoPreviousMarker"));
        actionSwitchFullscreen = new QAction(AmplitudeView);
        actionSwitchFullscreen->setObjectName(QString::fromUtf8("actionSwitchFullscreen"));
        actionSwitchFullscreen->setCheckable(true);
        actionAddStations = new QAction(AmplitudeView);
        actionAddStations->setObjectName(QString::fromUtf8("actionAddStations"));
        actionSearchStation = new QAction(AmplitudeView);
        actionSearchStation->setObjectName(QString::fromUtf8("actionSearchStation"));
        actionLimitFilterToZoomTrace = new QAction(AmplitudeView);
        actionLimitFilterToZoomTrace->setObjectName(QString::fromUtf8("actionLimitFilterToZoomTrace"));
        actionLimitFilterToZoomTrace->setCheckable(true);
        actionLimitFilterToZoomTrace->setEnabled(false);
        actionShowTraceValuesInNmS = new QAction(AmplitudeView);
        actionShowTraceValuesInNmS->setObjectName(QString::fromUtf8("actionShowTraceValuesInNmS"));
        actionShowTraceValuesInNmS->setCheckable(true);
        actionClipComponentsToViewport = new QAction(AmplitudeView);
        actionClipComponentsToViewport->setObjectName(QString::fromUtf8("actionClipComponentsToViewport"));
        actionClipComponentsToViewport->setCheckable(true);
        actionClipComponentsToViewport->setChecked(false);
        actionCreateAmplitude = new QAction(AmplitudeView);
        actionCreateAmplitude->setObjectName(QString::fromUtf8("actionCreateAmplitude"));
        actionConfirmAmplitude = new QAction(AmplitudeView);
        actionConfirmAmplitude->setObjectName(QString::fromUtf8("actionConfirmAmplitude"));
        actionDeleteAmplitude = new QAction(AmplitudeView);
        actionDeleteAmplitude->setObjectName(QString::fromUtf8("actionDeleteAmplitude"));
        actionDisablePicking = new QAction(AmplitudeView);
        actionDisablePicking->setObjectName(QString::fromUtf8("actionDisablePicking"));
        actionRecalculateAmplitudes = new QAction(AmplitudeView);
        actionRecalculateAmplitudes->setObjectName(QString::fromUtf8("actionRecalculateAmplitudes"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecalculateAmplitudes->setIcon(icon17);
        actionPickAmplitude = new QAction(AmplitudeView);
        actionPickAmplitude->setObjectName(QString::fromUtf8("actionPickAmplitude"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/icons/pick_p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickAmplitude->setIcon(icon18);
        actionRecalculateAmplitude = new QAction(AmplitudeView);
        actionRecalculateAmplitude->setObjectName(QString::fromUtf8("actionRecalculateAmplitude"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/icons/ok_single.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecalculateAmplitude->setIcon(icon19);
        actionSetAmplitude = new QAction(AmplitudeView);
        actionSetAmplitude->setObjectName(QString::fromUtf8("actionSetAmplitude"));
        actionResetScale = new QAction(AmplitudeView);
        actionResetScale->setObjectName(QString::fromUtf8("actionResetScale"));
        actionResetScale->setIcon(icon6);
        centralwidget = new QWidget(AmplitudeView);
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

        label_2 = new QLabel(frameCurrentRowLabel);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

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
        btnRowAccept->setIcon(icon17);
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
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowRemove->setIcon(icon20);
        btnRowRemove->setIconSize(QSize(24, 24));
        btnRowRemove->setCheckable(true);

        hboxLayout3->addWidget(btnRowRemove);

        btnRowReset = new QPushButton(frameZoomControls);
        btnRowReset->setObjectName(QString::fromUtf8("btnRowReset"));
        sizePolicy5.setHeightForWidth(btnRowReset->sizePolicy().hasHeightForWidth());
        btnRowReset->setSizePolicy(sizePolicy5);
        btnRowReset->setMinimumSize(QSize(32, 32));
        btnRowReset->setMaximumSize(QSize(32, 32));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/icons/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowReset->setIcon(icon21);
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
        frameTraces = new QFrame(splitter);
        frameTraces->setObjectName(QString::fromUtf8("frameTraces"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frameTraces->sizePolicy().hasHeightForWidth());
        frameTraces->setSizePolicy(sizePolicy6);
        frameTraces->setFrameShape(QFrame::StyledPanel);
        frameTraces->setFrameShadow(QFrame::Sunken);
        splitter->addWidget(frameTraces);

        vboxLayout->addWidget(splitter);

        AmplitudeView->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AmplitudeView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AmplitudeView->setStatusBar(statusbar);
        toolBarScale = new QToolBar(AmplitudeView);
        toolBarScale->setObjectName(QString::fromUtf8("toolBarScale"));
        toolBarScale->setOrientation(Qt::Horizontal);
        toolBarScale->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarScale);
        toolBarSort = new QToolBar(AmplitudeView);
        toolBarSort->setObjectName(QString::fromUtf8("toolBarSort"));
        toolBarSort->setOrientation(Qt::Horizontal);
        toolBarSort->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarSort);
        toolBarAlign = new QToolBar(AmplitudeView);
        toolBarAlign->setObjectName(QString::fromUtf8("toolBarAlign"));
        toolBarAlign->setOrientation(Qt::Horizontal);
        toolBarAlign->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarAlign);
        toolBarComponent = new QToolBar(AmplitudeView);
        toolBarComponent->setObjectName(QString::fromUtf8("toolBarComponent"));
        toolBarComponent->setOrientation(Qt::Horizontal);
        toolBarComponent->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarComponent);
        toolBarStations = new QToolBar(AmplitudeView);
        toolBarStations->setObjectName(QString::fromUtf8("toolBarStations"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(toolBarStations->sizePolicy().hasHeightForWidth());
        toolBarStations->setSizePolicy(sizePolicy7);
        toolBarStations->setOrientation(Qt::Horizontal);
        toolBarStations->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarStations);
        toolBarPicking = new QToolBar(AmplitudeView);
        toolBarPicking->setObjectName(QString::fromUtf8("toolBarPicking"));
        toolBarPicking->setOrientation(Qt::Horizontal);
        toolBarPicking->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarPicking);
        menuBar = new QMenuBar(AmplitudeView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 917, 38));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuZoomtrace = new QMenu(menuView);
        menuZoomtrace->setObjectName(QString::fromUtf8("menuZoomtrace"));
        menuTraces = new QMenu(menuView);
        menuTraces->setObjectName(QString::fromUtf8("menuTraces"));
        menuAlignArrival = new QMenu(menuTraces);
        menuAlignArrival->setObjectName(QString::fromUtf8("menuAlignArrival"));
        menuComponents = new QMenu(menuView);
        menuComponents->setObjectName(QString::fromUtf8("menuComponents"));
        menuNavigation = new QMenu(menuBar);
        menuNavigation->setObjectName(QString::fromUtf8("menuNavigation"));
        menuLocate = new QMenu(menuBar);
        menuLocate->setObjectName(QString::fromUtf8("menuLocate"));
        menuFilter = new QMenu(menuBar);
        menuFilter->setObjectName(QString::fromUtf8("menuFilter"));
        AmplitudeView->setMenuBar(menuBar);
        toolBarTTT = new QToolBar(AmplitudeView);
        toolBarTTT->setObjectName(QString::fromUtf8("toolBarTTT"));
        toolBarTTT->setOrientation(Qt::Horizontal);
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarTTT);
        toolBarFilter = new QToolBar(AmplitudeView);
        toolBarFilter->setObjectName(QString::fromUtf8("toolBarFilter"));
        toolBarFilter->setOrientation(Qt::Horizontal);
        toolBarFilter->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarFilter);
        toolBarSetup = new QToolBar(AmplitudeView);
        toolBarSetup->setObjectName(QString::fromUtf8("toolBarSetup"));
        toolBarSetup->setOrientation(Qt::Horizontal);
        toolBarSetup->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarSetup);
        toolBarComputeMagnitudes = new QToolBar(AmplitudeView);
        toolBarComputeMagnitudes->setObjectName(QString::fromUtf8("toolBarComputeMagnitudes"));
        toolBarComputeMagnitudes->setOrientation(Qt::Horizontal);
        toolBarComputeMagnitudes->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarComputeMagnitudes);

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
        toolBarSort->addAction(actionSortAlphabetically);
        toolBarAlign->addAction(actionAlignOnPArrival);
        toolBarAlign->addAction(actionAlignOnOriginTime);
        toolBarComponent->addAction(actionShowZComponent);
        toolBarComponent->addAction(actionShowNComponent);
        toolBarComponent->addAction(actionShowEComponent);
        toolBarStations->addAction(actionShowAllStations);
        toolBarStations->addAction(actionShowUsedStations);
        toolBarPicking->addAction(actionPickAmplitude);
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuNavigation->menuAction());
        menuBar->addAction(menuFilter->menuAction());
        menuBar->addAction(menuLocate->menuAction());
        menuView->addAction(actionDefaultView);
        menuView->addAction(actionShowUsedStations);
        menuView->addAction(actionShowTraceValuesInNmS);
        menuView->addAction(actionShowTheoreticalArrivals);
        menuView->addSeparator();
        menuView->addAction(menuZoomtrace->menuAction());
        menuView->addAction(menuTraces->menuAction());
        menuView->addAction(menuComponents->menuAction());
        menuZoomtrace->addAction(actionIncreaseAmplitudeScale);
        menuZoomtrace->addAction(actionDecreaseAmplitudeScale);
        menuZoomtrace->addAction(actionTimeScaleUp);
        menuZoomtrace->addAction(actionTimeScaleDown);
        menuZoomtrace->addAction(actionResetScale);
        menuZoomtrace->addSeparator();
        menuZoomtrace->addAction(actionClipComponentsToViewport);
        menuTraces->addAction(actionIncreaseRowHeight);
        menuTraces->addAction(actionDecreaseRowHeight);
        menuTraces->addAction(actionIncreaseRowTimescale);
        menuTraces->addAction(actionDecreaseRowTimescale);
        menuTraces->addAction(actionMaximizeAmplitudes);
        menuTraces->addSeparator();
        menuTraces->addAction(actionResetDefaultConfig);
        menuTraces->addSeparator();
        menuTraces->addAction(menuAlignArrival->menuAction());
        menuAlignArrival->addAction(actionAlignOnPArrival);
        menuAlignArrival->addAction(actionAlignOnOriginTime);
        menuComponents->addAction(actionShowZComponent);
        menuComponents->addAction(actionShowNComponent);
        menuComponents->addAction(actionShowEComponent);
        menuNavigation->addAction(actionScrollLeft);
        menuNavigation->addAction(actionScrollRight);
        menuNavigation->addAction(actionScrollFineLeft);
        menuNavigation->addAction(actionScrollFineRight);
        menuLocate->addAction(actionPickAmplitude);
        menuLocate->addAction(actionDisablePicking);
        menuLocate->addSeparator();
        menuLocate->addAction(actionComputeMagnitudes);
        menuFilter->addAction(actionToggleFilter);
        toolBarFilter->addAction(actionToggleFilter);
        toolBarSetup->addAction(actionRecalculateAmplitude);
        toolBarSetup->addAction(actionRecalculateAmplitudes);
        toolBarComputeMagnitudes->addAction(actionComputeMagnitudes);

        retranslateUi(AmplitudeView);

        QMetaObject::connectSlotsByName(AmplitudeView);
    } // setupUi

    void retranslateUi(QMainWindow *AmplitudeView)
    {
        AmplitudeView->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Amplitude picker", nullptr));
        actionIncreaseAmplitudeScale->setText(QCoreApplication::translate("AmplitudeView", "Scale amplitudes up", nullptr));
        actionIncreaseAmplitudeScale->setIconText(QCoreApplication::translate("AmplitudeView", "Scale amplitudes up", nullptr));
#if QT_CONFIG(tooltip)
        actionIncreaseAmplitudeScale->setToolTip(QCoreApplication::translate("AmplitudeView", "Increase amplitude scale of current trace", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionIncreaseAmplitudeScale->setShortcut(QCoreApplication::translate("AmplitudeView", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDecreaseAmplitudeScale->setText(QCoreApplication::translate("AmplitudeView", "Scale amplitudes down", nullptr));
        actionDecreaseAmplitudeScale->setIconText(QCoreApplication::translate("AmplitudeView", "Scale amplitudes down", nullptr));
#if QT_CONFIG(tooltip)
        actionDecreaseAmplitudeScale->setToolTip(QCoreApplication::translate("AmplitudeView", "Descrease amplitude scale of current trace", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDecreaseAmplitudeScale->setShortcut(QCoreApplication::translate("AmplitudeView", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTimeScaleUp->setText(QCoreApplication::translate("AmplitudeView", "Increase visible timespan", nullptr));
#if QT_CONFIG(tooltip)
        actionTimeScaleUp->setToolTip(QCoreApplication::translate("AmplitudeView", "Increase visible timespan", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTimeScaleUp->setShortcut(QCoreApplication::translate("AmplitudeView", "Ctrl+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTimeScaleDown->setText(QCoreApplication::translate("AmplitudeView", "Decrease visible timespan", nullptr));
        actionTimeScaleDown->setIconText(QCoreApplication::translate("AmplitudeView", "Decrease visible timespan", nullptr));
#if QT_CONFIG(tooltip)
        actionTimeScaleDown->setToolTip(QCoreApplication::translate("AmplitudeView", "Decrease visible timespan", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTimeScaleDown->setShortcut(QCoreApplication::translate("AmplitudeView", "Ctrl+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScrollLeft->setText(QCoreApplication::translate("AmplitudeView", "Scroll left", nullptr));
#if QT_CONFIG(tooltip)
        actionScrollLeft->setToolTip(QCoreApplication::translate("AmplitudeView", "Scroll current trace left", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScrollLeft->setShortcut(QCoreApplication::translate("AmplitudeView", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScrollRight->setText(QCoreApplication::translate("AmplitudeView", "Scroll right", nullptr));
#if QT_CONFIG(tooltip)
        actionScrollRight->setToolTip(QCoreApplication::translate("AmplitudeView", "Scroll current trace right", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScrollRight->setShortcut(QCoreApplication::translate("AmplitudeView", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectNextTrace->setText(QCoreApplication::translate("AmplitudeView", "Next trace", nullptr));
        actionSelectNextTrace->setIconText(QCoreApplication::translate("AmplitudeView", "Next trace", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectNextTrace->setShortcut(QCoreApplication::translate("AmplitudeView", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectPreviousTrace->setText(QCoreApplication::translate("AmplitudeView", "Previous trace", nullptr));
        actionSelectPreviousTrace->setIconText(QCoreApplication::translate("AmplitudeView", "Previous trace", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectPreviousTrace->setShortcut(QCoreApplication::translate("AmplitudeView", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScrollFineLeft->setText(QCoreApplication::translate("AmplitudeView", "Scroll fine left", nullptr));
        actionScrollFineLeft->setIconText(QCoreApplication::translate("AmplitudeView", "Scroll fine left", nullptr));
#if QT_CONFIG(tooltip)
        actionScrollFineLeft->setToolTip(QCoreApplication::translate("AmplitudeView", "Scroll current trace left with finer steps", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScrollFineLeft->setShortcut(QCoreApplication::translate("AmplitudeView", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScrollFineRight->setText(QCoreApplication::translate("AmplitudeView", "Scroll fine right", nullptr));
        actionScrollFineRight->setIconText(QCoreApplication::translate("AmplitudeView", "Scroll fine right", nullptr));
#if QT_CONFIG(tooltip)
        actionScrollFineRight->setToolTip(QCoreApplication::translate("AmplitudeView", "Scroll current trace right with finer steps", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionScrollFineRight->setShortcut(QCoreApplication::translate("AmplitudeView", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIncreaseRowHeight->setText(QCoreApplication::translate("AmplitudeView", "Increase row height", nullptr));
#if QT_CONFIG(tooltip)
        actionIncreaseRowHeight->setToolTip(QCoreApplication::translate("AmplitudeView", "Increases the row height in traceview (Shift+Y)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionIncreaseRowHeight->setShortcut(QCoreApplication::translate("AmplitudeView", "Shift+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDecreaseRowHeight->setText(QCoreApplication::translate("AmplitudeView", "Decrease row height", nullptr));
#if QT_CONFIG(tooltip)
        actionDecreaseRowHeight->setToolTip(QCoreApplication::translate("AmplitudeView", "Decreases the row height in traceview (Y)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDecreaseRowHeight->setShortcut(QCoreApplication::translate("AmplitudeView", "Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIncreaseRowTimescale->setText(QCoreApplication::translate("AmplitudeView", "Increase row timescale", nullptr));
#if QT_CONFIG(tooltip)
        actionIncreaseRowTimescale->setToolTip(QCoreApplication::translate("AmplitudeView", "Increases the timescale in traceview (>)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionIncreaseRowTimescale->setShortcut(QCoreApplication::translate("AmplitudeView", ">", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDecreaseRowTimescale->setText(QCoreApplication::translate("AmplitudeView", "Decrease row timescale", nullptr));
#if QT_CONFIG(tooltip)
        actionDecreaseRowTimescale->setToolTip(QCoreApplication::translate("AmplitudeView", "Decreases the timescale in traceview (<)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDecreaseRowTimescale->setShortcut(QCoreApplication::translate("AmplitudeView", "<", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectFirstRow->setText(QCoreApplication::translate("AmplitudeView", "Select first row", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectFirstRow->setShortcut(QCoreApplication::translate("AmplitudeView", "Home", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectLastRow->setText(QCoreApplication::translate("AmplitudeView", "Select last row", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectLastRow->setShortcut(QCoreApplication::translate("AmplitudeView", "End", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResetDefaultConfig->setText(QCoreApplication::translate("AmplitudeView", "Reset default time windows", nullptr));
#if QT_CONFIG(shortcut)
        actionResetDefaultConfig->setShortcut(QCoreApplication::translate("AmplitudeView", "Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlignOnPArrival->setText(QCoreApplication::translate("AmplitudeView", "Align on trigger time", nullptr));
        actionAlignOnPArrival->setIconText(QCoreApplication::translate("AmplitudeView", "Align on trigger time", nullptr));
#if QT_CONFIG(tooltip)
        actionAlignOnPArrival->setToolTip(QCoreApplication::translate("AmplitudeView", "Align on trigger time", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAlignOnPArrival->setShortcut(QCoreApplication::translate("AmplitudeView", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlignOnOriginTime->setText(QCoreApplication::translate("AmplitudeView", "Align on origin time", nullptr));
        actionAlignOnOriginTime->setIconText(QCoreApplication::translate("AmplitudeView", "Align on origin time", nullptr));
#if QT_CONFIG(tooltip)
        actionAlignOnOriginTime->setToolTip(QCoreApplication::translate("AmplitudeView", "Align on origin time (Ctrl+0)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAlignOnOriginTime->setShortcut(QCoreApplication::translate("AmplitudeView", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDefaultView->setText(QCoreApplication::translate("AmplitudeView", "&Default view", nullptr));
#if QT_CONFIG(tooltip)
        actionDefaultView->setToolTip(QCoreApplication::translate("AmplitudeView", "Default view (Shift+N)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDefaultView->setShortcut(QCoreApplication::translate("AmplitudeView", "Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSortAlphabetically->setText(QCoreApplication::translate("AmplitudeView", "Sort by names", nullptr));
        actionSortAlphabetically->setIconText(QCoreApplication::translate("AmplitudeView", "Sort by names", nullptr));
#if QT_CONFIG(tooltip)
        actionSortAlphabetically->setToolTip(QCoreApplication::translate("AmplitudeView", "Sorts the traces by name (Alt+A)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSortAlphabetically->setShortcut(QCoreApplication::translate("AmplitudeView", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSortByDistance->setText(QCoreApplication::translate("AmplitudeView", "Sort by distance", nullptr));
#if QT_CONFIG(tooltip)
        actionSortByDistance->setToolTip(QCoreApplication::translate("AmplitudeView", "Sort by distance (Alt+D)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSortByDistance->setShortcut(QCoreApplication::translate("AmplitudeView", "Alt+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleFilter->setText(QCoreApplication::translate("AmplitudeView", "&Toggle filter", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleFilter->setToolTip(QCoreApplication::translate("AmplitudeView", "Toggles using a filter before displaying the traces (F)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleFilter->setShortcut(QCoreApplication::translate("AmplitudeView", "F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMaximizeAmplitudes->setText(QCoreApplication::translate("AmplitudeView", "Maximize visible amplitudes", nullptr));
        actionMaximizeAmplitudes->setIconText(QCoreApplication::translate("AmplitudeView", "Maximize visible amplitudes", nullptr));
#if QT_CONFIG(tooltip)
        actionMaximizeAmplitudes->setToolTip(QCoreApplication::translate("AmplitudeView", "Maximize visible amplitudes (S)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMaximizeAmplitudes->setShortcut(QCoreApplication::translate("AmplitudeView", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionComputeMagnitudes->setText(QCoreApplication::translate("AmplitudeView", "&Apply", nullptr));
        actionComputeMagnitudes->setIconText(QCoreApplication::translate("AmplitudeView", "Apply", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeMagnitudes->setToolTip(QCoreApplication::translate("AmplitudeView", "Compute the magnitude and update it in the origin.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionComputeMagnitudes->setStatusTip(QCoreApplication::translate("AmplitudeView", "Compute the magnitude and update it in the origin.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionComputeMagnitudes->setShortcut(QCoreApplication::translate("AmplitudeView", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowTheoreticalArrivals->setText(QCoreApplication::translate("AmplitudeView", "Show theoretical arrivals", nullptr));
        actionShowTheoreticalArrivals->setIconText(QCoreApplication::translate("AmplitudeView", "Show theoretical arrivals", nullptr));
#if QT_CONFIG(tooltip)
        actionShowTheoreticalArrivals->setToolTip(QCoreApplication::translate("AmplitudeView", "Shows theoretical arrivals as blue bars in the traces", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowTheoreticalArrivals->setShortcut(QCoreApplication::translate("AmplitudeView", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowAllStations->setText(QCoreApplication::translate("AmplitudeView", "Add stations in range", nullptr));
        actionShowAllStations->setIconText(QCoreApplication::translate("AmplitudeView", "Add stations in range", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAllStations->setToolTip(QCoreApplication::translate("AmplitudeView", "Adds all stations next to the origin with distance lower or equal than the entered value that haven't triggered. When view mode is \"used stations only\" you won't see the new stations until leaving this mode.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowUsedStations->setText(QCoreApplication::translate("AmplitudeView", "&Show used stations only", nullptr));
        actionShowUsedStations->setIconText(QCoreApplication::translate("AmplitudeView", "Used stations only", nullptr));
#if QT_CONFIG(tooltip)
        actionShowUsedStations->setToolTip(QCoreApplication::translate("AmplitudeView", "Toggles between hiding unpicked and deactivated stations and showing all stations", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowZComponent->setText(QCoreApplication::translate("AmplitudeView", "Vertical", nullptr));
        actionShowZComponent->setIconText(QCoreApplication::translate("AmplitudeView", "Vertical", nullptr));
#if QT_CONFIG(tooltip)
        actionShowZComponent->setToolTip(QCoreApplication::translate("AmplitudeView", "Show Vertical Component (Z)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowZComponent->setShortcut(QCoreApplication::translate("AmplitudeView", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowNComponent->setText(QCoreApplication::translate("AmplitudeView", "North", nullptr));
        actionShowNComponent->setIconText(QCoreApplication::translate("AmplitudeView", "North", nullptr));
#if QT_CONFIG(tooltip)
        actionShowNComponent->setToolTip(QCoreApplication::translate("AmplitudeView", "Show North Component (N)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowNComponent->setShortcut(QCoreApplication::translate("AmplitudeView", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowEComponent->setText(QCoreApplication::translate("AmplitudeView", "East", nullptr));
        actionShowEComponent->setIconText(QCoreApplication::translate("AmplitudeView", "East", nullptr));
#if QT_CONFIG(tooltip)
        actionShowEComponent->setToolTip(QCoreApplication::translate("AmplitudeView", "Show East Component (E)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowEComponent->setShortcut(QCoreApplication::translate("AmplitudeView", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGotoNextMarker->setText(QCoreApplication::translate("AmplitudeView", "Goto next marker", nullptr));
        actionGotoNextMarker->setIconText(QCoreApplication::translate("AmplitudeView", "Goto next marker", nullptr));
#if QT_CONFIG(tooltip)
        actionGotoNextMarker->setToolTip(QCoreApplication::translate("AmplitudeView", "Goto next marker", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGotoNextMarker->setShortcut(QCoreApplication::translate("AmplitudeView", "Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGotoPreviousMarker->setText(QCoreApplication::translate("AmplitudeView", "Goto previous marker", nullptr));
        actionGotoPreviousMarker->setIconText(QCoreApplication::translate("AmplitudeView", "Goto previous marker", nullptr));
#if QT_CONFIG(tooltip)
        actionGotoPreviousMarker->setToolTip(QCoreApplication::translate("AmplitudeView", "Goto previous marker", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGotoPreviousMarker->setShortcut(QCoreApplication::translate("AmplitudeView", "Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwitchFullscreen->setText(QCoreApplication::translate("AmplitudeView", "Toggle fullscreen", nullptr));
        actionSwitchFullscreen->setIconText(QCoreApplication::translate("AmplitudeView", "Toggle fullscreen", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchFullscreen->setToolTip(QCoreApplication::translate("AmplitudeView", "Toggle fullscreen", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchFullscreen->setShortcut(QCoreApplication::translate("AmplitudeView", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddStations->setText(QCoreApplication::translate("AmplitudeView", "Add stations", nullptr));
#if QT_CONFIG(shortcut)
        actionAddStations->setShortcut(QCoreApplication::translate("AmplitudeView", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSearchStation->setText(QCoreApplication::translate("AmplitudeView", "Search station", nullptr));
#if QT_CONFIG(shortcut)
        actionSearchStation->setShortcut(QCoreApplication::translate("AmplitudeView", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLimitFilterToZoomTrace->setText(QCoreApplication::translate("AmplitudeView", "&Limit filter to zoom trace", nullptr));
#if QT_CONFIG(tooltip)
        actionLimitFilterToZoomTrace->setToolTip(QCoreApplication::translate("AmplitudeView", "Limit filter to zoom trace", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionLimitFilterToZoomTrace->setStatusTip(QCoreApplication::translate("AmplitudeView", "Limits filtering to zoom trace. All other traces are not filtered. This is mostly used to gain performance.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionLimitFilterToZoomTrace->setShortcut(QCoreApplication::translate("AmplitudeView", "Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowTraceValuesInNmS->setText(QCoreApplication::translate("AmplitudeView", "Show trace values in nm/s", nullptr));
        actionClipComponentsToViewport->setText(QCoreApplication::translate("AmplitudeView", "Clip components to viewport", nullptr));
#if QT_CONFIG(shortcut)
        actionClipComponentsToViewport->setShortcut(QCoreApplication::translate("AmplitudeView", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreateAmplitude->setText(QCoreApplication::translate("AmplitudeView", "Create amplitude", nullptr));
        actionCreateAmplitude->setIconText(QCoreApplication::translate("AmplitudeView", "Create amplitude", nullptr));
#if QT_CONFIG(tooltip)
        actionCreateAmplitude->setToolTip(QCoreApplication::translate("AmplitudeView", "Create amplitude", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCreateAmplitude->setShortcut(QCoreApplication::translate("AmplitudeView", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConfirmAmplitude->setText(QCoreApplication::translate("AmplitudeView", "Confirm amplitude", nullptr));
        actionConfirmAmplitude->setIconText(QCoreApplication::translate("AmplitudeView", "Confirm amplitude", nullptr));
#if QT_CONFIG(tooltip)
        actionConfirmAmplitude->setToolTip(QCoreApplication::translate("AmplitudeView", "Confirm amplitude", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionConfirmAmplitude->setShortcut(QCoreApplication::translate("AmplitudeView", "Shift+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeleteAmplitude->setText(QCoreApplication::translate("AmplitudeView", "Delete amplitude", nullptr));
        actionDeleteAmplitude->setIconText(QCoreApplication::translate("AmplitudeView", "Delete amplitude", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteAmplitude->setToolTip(QCoreApplication::translate("AmplitudeView", "Delete amplitude (Del)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDeleteAmplitude->setShortcut(QCoreApplication::translate("AmplitudeView", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDisablePicking->setText(QCoreApplication::translate("AmplitudeView", "Leave picking mode", nullptr));
        actionDisablePicking->setIconText(QCoreApplication::translate("AmplitudeView", "Leave picking mode", nullptr));
#if QT_CONFIG(tooltip)
        actionDisablePicking->setToolTip(QCoreApplication::translate("AmplitudeView", "Leave picking mode (Esc)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDisablePicking->setShortcut(QCoreApplication::translate("AmplitudeView", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecalculateAmplitudes->setText(QCoreApplication::translate("AmplitudeView", "Remeasure all amplitudes", nullptr));
        actionRecalculateAmplitudes->setIconText(QCoreApplication::translate("AmplitudeView", "Remeasure all amplitudes", nullptr));
#if QT_CONFIG(tooltip)
        actionRecalculateAmplitudes->setToolTip(QCoreApplication::translate("AmplitudeView", "Remeasure all amplitudes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRecalculateAmplitudes->setShortcut(QCoreApplication::translate("AmplitudeView", "Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPickAmplitude->setText(QCoreApplication::translate("AmplitudeView", "Pick amplitudes", nullptr));
        actionPickAmplitude->setIconText(QCoreApplication::translate("AmplitudeView", "Pick amplitudes", nullptr));
#if QT_CONFIG(tooltip)
        actionPickAmplitude->setToolTip(QCoreApplication::translate("AmplitudeView", "Drag time window for measuring amplitudes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPickAmplitude->setShortcut(QCoreApplication::translate("AmplitudeView", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecalculateAmplitude->setText(QCoreApplication::translate("AmplitudeView", "Remeasure amplitude of selected waveform", nullptr));
        actionRecalculateAmplitude->setIconText(QCoreApplication::translate("AmplitudeView", "Remeasure amplitude of selected waveform", nullptr));
#if QT_CONFIG(tooltip)
        actionRecalculateAmplitude->setToolTip(QCoreApplication::translate("AmplitudeView", "Remeasure amplitude of selected waveform", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRecalculateAmplitude->setShortcut(QCoreApplication::translate("AmplitudeView", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetAmplitude->setText(QCoreApplication::translate("AmplitudeView", "Set amplitude", nullptr));
#if QT_CONFIG(shortcut)
        actionSetAmplitude->setShortcut(QCoreApplication::translate("AmplitudeView", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResetScale->setText(QCoreApplication::translate("AmplitudeView", "Reset Scale", nullptr));
#if QT_CONFIG(shortcut)
        actionResetScale->setShortcut(QCoreApplication::translate("AmplitudeView", "W", nullptr));
#endif // QT_CONFIG(shortcut)
        labelStationCode->setText(QCoreApplication::translate("AmplitudeView", "ABCD", nullptr));
        labelCode->setText(QCoreApplication::translate("AmplitudeView", "AB  BHZ", nullptr));
        label->setText(QCoreApplication::translate("AmplitudeView", ", distance: ", nullptr));
        labelDistance->setText(QCoreApplication::translate("AmplitudeView", "-1\302\260", nullptr));
        label_2->setText(QCoreApplication::translate("AmplitudeView", ", azimuth: ", nullptr));
        labelAzimuth->setText(QCoreApplication::translate("AmplitudeView", "-1\302\260", nullptr));
#if QT_CONFIG(tooltip)
        btnRowAccept->setToolTip(QCoreApplication::translate("AmplitudeView", "Accept picked phase", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRowAccept->setText(QString());
#if QT_CONFIG(tooltip)
        btnRowRemove->setToolTip(QCoreApplication::translate("AmplitudeView", "Deactivate current pick or trace depending on the picking mode", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRowRemove->setText(QString());
#if QT_CONFIG(shortcut)
        btnRowRemove->setShortcut(QCoreApplication::translate("AmplitudeView", "X", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnRowReset->setToolTip(QCoreApplication::translate("AmplitudeView", "Reset manual picks", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRowReset->setText(QString());
        toolBarScale->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Zooming", nullptr));
        toolBarSort->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Sort", nullptr));
        toolBarAlign->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Alignment", nullptr));
        toolBarComponent->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Components", nullptr));
        toolBarStations->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Add stations", nullptr));
        toolBarPicking->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Picking", nullptr));
        menuView->setTitle(QCoreApplication::translate("AmplitudeView", "&View", nullptr));
        menuZoomtrace->setTitle(QCoreApplication::translate("AmplitudeView", "&Zoomtrace", nullptr));
        menuTraces->setTitle(QCoreApplication::translate("AmplitudeView", "&Traces", nullptr));
        menuAlignArrival->setTitle(QCoreApplication::translate("AmplitudeView", "Align", nullptr));
        menuComponents->setTitle(QCoreApplication::translate("AmplitudeView", "&Components", nullptr));
        menuNavigation->setTitle(QCoreApplication::translate("AmplitudeView", "&Navigation", nullptr));
        menuLocate->setTitle(QCoreApplication::translate("AmplitudeView", "&Amplitudes", nullptr));
        menuFilter->setTitle(QCoreApplication::translate("AmplitudeView", "&Filter", nullptr));
        toolBarTTT->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Travel times", nullptr));
        toolBarSetup->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Calculate", nullptr));
        toolBarComputeMagnitudes->setWindowTitle(QCoreApplication::translate("AmplitudeView", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AmplitudeView: public Ui_AmplitudeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPLITUDEVIEW_H
