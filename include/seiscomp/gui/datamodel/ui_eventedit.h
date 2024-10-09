/********************************************************************************
** Form generated from reading UI file 'eventedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTEDIT_H
#define UI_EVENTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventEdit
{
public:
    QHBoxLayout *hboxLayout;
    QSplitter *splitter;
    QTextEdit *listJournal;
    QTabWidget *tabWidget;
    QWidget *originWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout1;
    QFrame *frameMap;
    QTreeWidget *treeMagnitudes;
    QFrame *line;
    QFrame *frameInformation;
    QGridLayout *gridLayout1;
    QComboBox *comboTypes;
    QLabel *labelPhasesValue;
    QLabel *labelDepthError;
    QLabel *labelLongitudeValue;
    QLabel *labelOriginStatus;
    QLabel *labelRMSValue;
    QLabel *labelAgency;
    QLabel *labelType;
    QPushButton *buttonFixOrigin;
    QLabel *labelLatitudeValue;
    QLabel *labelDepthUnit;
    QLabel *labelDepth;
    QLabel *labelLatitudeError;
    QLabel *labelTime;
    QLabel *labelLongitudeError;
    QLabel *labelLatitude;
    QLabel *labelLongitudeUnit;
    QLabel *labelLongitude;
    QLabel *labelAgencyValue;
    QPushButton *buttonReleaseOrigin;
    QComboBox *comboFixOrigin;
    QLabel *labelRegionValue;
    QLabel *labelLatitudeUnit;
    QLabel *labelTimeValue;
    QSpacerItem *spacerItem;
    QLabel *labelOriginStatusValue;
    QLabel *labelPhases;
    QLabel *labelRegion;
    QLabel *labelDepthValue;
    QLabel *labelRMS;
    QLabel *label;
    QComboBox *comboTypeCertainties;
    QFrame *frameInformationM;
    QGridLayout *gridLayout2;
    QPushButton *buttonReleaseMagnitudeType;
    QLabel *labelMagnitudeMethod;
    QLabel *labelMagnitude;
    QLabel *labelMagnitudeCount;
    QLabel *labelMagnitudeValue;
    QLabel *labelMagnitudeType;
    QLabel *labelMagnitudeMethodValue;
    QPushButton *buttonFixMagnitudeType;
    QLabel *labelMagnitudeTypeValue;
    QSpacerItem *spacerItem1;
    QLabel *labelMagnitudeCountValue;
    QLabel *labelMagnitudeError;
    QSpacerItem *spacerItem2;
    QLabel *label_2;
    QLabel *labelMagnitudeStatus;
    QFrame *frameOrigins;
    QSplitter *fmWidget;
    QFrame *fmTop;
    QHBoxLayout *hboxLayout2;
    QTreeWidget *fmTree;
    QFrame *fmInfo;
    QGridLayout *gridLayout3;
    QLabel *fmDist;
    QLabel *fmMisfitL;
    QLabel *fmDistL;
    QComboBox *fmFixCombo;
    QLabel *fmNP2L;
    QLabel *fmMethodL;
    QLabel *fmCountL;
    QSpacerItem *spacerItem3;
    QPushButton *fmFixButton;
    QLabel *fmGap;
    QLabel *fmNP2;
    QLabel *fmMode;
    QLabel *fmStatus;
    QLabel *fmGapL;
    QLabel *fmNP1;
    QLabel *fmMethod;
    QPushButton *fmAutoButton;
    QLabel *fmMisfit;
    QLabel *fmNP1L;
    QLabel *fmStatusL;
    QLabel *fmModeL;
    QLabel *fmCount;
    QPushButton *fmTriggerButton;
    QFrame *fmBottom;
    QHBoxLayout *hboxLayout3;
    QFrame *fmMap;
    QGroupBox *mtOriginInfo;
    QGridLayout *gridLayout4;
    QLabel *mtOriginPhasesL;
    QLabel *mtOriginDepth;
    QLabel *mtOriginDepthL;
    QLabel *mtOriginLatUnit;
    QLabel *mtOriginRegionL;
    QLabel *mtOriginDepthError;
    QLabel *mtOriginAgencyL;
    QLabel *mtOriginLon;
    QLabel *mtOriginLatL;
    QLabel *mtOriginPhases;
    QLabel *mtOriginTimeL;
    QLabel *mtOriginTime;
    QLabel *mtOriginRegion;
    QLabel *mtOriginAgency;
    QLabel *mtOriginStatusL;
    QLabel *mtOriginLat;
    QLabel *mtOriginDepthUnit;
    QLabel *mtOriginLatError;
    QLabel *mtOriginLonL;
    QLabel *mtOriginStatus;
    QLabel *mtOriginLonUnit;
    QLabel *mtOriginLonError;
    QSpacerItem *spacerItem4;
    QGroupBox *mtMagInfo;
    QGridLayout *gridLayout5;
    QLabel *mtMagTypeL;
    QLabel *mtMagMethod;
    QLabel *mtMagCount;
    QLabel *mtMagError;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QLabel *mtMagCountL;
    QPushButton *buttonReleaseMw;
    QLabel *mtMagMethodL;
    QLabel *mtMagL;
    QLabel *mtMag;
    QLabel *mtMagType;
    QPushButton *buttonFixMw;
    QPushButton *buttonFixFmMw;

    void setupUi(QWidget *EventEdit)
    {
        if (EventEdit->objectName().isEmpty())
            EventEdit->setObjectName(QString::fromUtf8("EventEdit"));
        EventEdit->resize(835, 795);
        hboxLayout = new QHBoxLayout(EventEdit);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        splitter = new QSplitter(EventEdit);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listJournal = new QTextEdit(splitter);
        listJournal->setObjectName(QString::fromUtf8("listJournal"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listJournal->sizePolicy().hasHeightForWidth());
        listJournal->setSizePolicy(sizePolicy);
        listJournal->setUndoRedoEnabled(false);
        listJournal->setLineWrapMode(QTextEdit::NoWrap);
        listJournal->setReadOnly(true);
        splitter->addWidget(listJournal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabPosition(QTabWidget::West);
        originWidget = new QWidget();
        originWidget->setObjectName(QString::fromUtf8("originWidget"));
        gridLayout = new QGridLayout(originWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        frameMap = new QFrame(originWidget);
        frameMap->setObjectName(QString::fromUtf8("frameMap"));
        sizePolicy1.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy1);
        frameMap->setFrameShape(QFrame::StyledPanel);
        frameMap->setFrameShadow(QFrame::Raised);

        hboxLayout1->addWidget(frameMap);

        treeMagnitudes = new QTreeWidget(originWidget);
        treeMagnitudes->setObjectName(QString::fromUtf8("treeMagnitudes"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeMagnitudes->sizePolicy().hasHeightForWidth());
        treeMagnitudes->setSizePolicy(sizePolicy2);
        treeMagnitudes->setAlternatingRowColors(true);
        treeMagnitudes->setRootIsDecorated(false);
        treeMagnitudes->setUniformRowHeights(true);

        hboxLayout1->addWidget(treeMagnitudes);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        line = new QFrame(originWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        frameInformation = new QFrame(originWidget);
        frameInformation->setObjectName(QString::fromUtf8("frameInformation"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(frameInformation->sizePolicy().hasHeightForWidth());
        frameInformation->setSizePolicy(sizePolicy3);
        frameInformation->setFrameShape(QFrame::NoFrame);
        frameInformation->setFrameShadow(QFrame::Plain);
        gridLayout1 = new QGridLayout(frameInformation);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        comboTypes = new QComboBox(frameInformation);
        comboTypes->setObjectName(QString::fromUtf8("comboTypes"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboTypes->sizePolicy().hasHeightForWidth());
        comboTypes->setSizePolicy(sizePolicy4);
        comboTypes->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboTypes->setMinimumContentsLength(9);

        gridLayout1->addWidget(comboTypes, 2, 1, 1, 3);

        labelPhasesValue = new QLabel(frameInformation);
        labelPhasesValue->setObjectName(QString::fromUtf8("labelPhasesValue"));
        labelPhasesValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelPhasesValue, 7, 2, 1, 2);

        labelDepthError = new QLabel(frameInformation);
        labelDepthError->setObjectName(QString::fromUtf8("labelDepthError"));
        labelDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthError, 4, 3, 1, 1);

        labelLongitudeValue = new QLabel(frameInformation);
        labelLongitudeValue->setObjectName(QString::fromUtf8("labelLongitudeValue"));
        labelLongitudeValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeValue, 6, 1, 1, 1);

        labelOriginStatus = new QLabel(frameInformation);
        labelOriginStatus->setObjectName(QString::fromUtf8("labelOriginStatus"));
        labelOriginStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelOriginStatus, 10, 0, 1, 1);

        labelRMSValue = new QLabel(frameInformation);
        labelRMSValue->setObjectName(QString::fromUtf8("labelRMSValue"));
        labelRMSValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelRMSValue, 8, 2, 1, 2);

        labelAgency = new QLabel(frameInformation);
        labelAgency->setObjectName(QString::fromUtf8("labelAgency"));
        labelAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgency, 9, 0, 1, 1);

        labelType = new QLabel(frameInformation);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        gridLayout1->addWidget(labelType, 2, 0, 1, 1);

        buttonFixOrigin = new QPushButton(frameInformation);
        buttonFixOrigin->setObjectName(QString::fromUtf8("buttonFixOrigin"));

        gridLayout1->addWidget(buttonFixOrigin, 12, 0, 1, 1);

        labelLatitudeValue = new QLabel(frameInformation);
        labelLatitudeValue->setObjectName(QString::fromUtf8("labelLatitudeValue"));
        sizePolicy1.setHeightForWidth(labelLatitudeValue->sizePolicy().hasHeightForWidth());
        labelLatitudeValue->setSizePolicy(sizePolicy1);
        labelLatitudeValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeValue, 5, 1, 1, 1);

        labelDepthUnit = new QLabel(frameInformation);
        labelDepthUnit->setObjectName(QString::fromUtf8("labelDepthUnit"));
        labelDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthUnit, 4, 2, 1, 1);

        labelDepth = new QLabel(frameInformation);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));
        sizePolicy1.setHeightForWidth(labelDepth->sizePolicy().hasHeightForWidth());
        labelDepth->setSizePolicy(sizePolicy1);
        labelDepth->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepth, 4, 0, 1, 1);

        labelLatitudeError = new QLabel(frameInformation);
        labelLatitudeError->setObjectName(QString::fromUtf8("labelLatitudeError"));
        sizePolicy1.setHeightForWidth(labelLatitudeError->sizePolicy().hasHeightForWidth());
        labelLatitudeError->setSizePolicy(sizePolicy1);
        labelLatitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeError, 5, 3, 1, 1);

        labelTime = new QLabel(frameInformation);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));

        gridLayout1->addWidget(labelTime, 0, 0, 1, 1);

        labelLongitudeError = new QLabel(frameInformation);
        labelLongitudeError->setObjectName(QString::fromUtf8("labelLongitudeError"));
        labelLongitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeError, 6, 3, 1, 1);

        labelLatitude = new QLabel(frameInformation);
        labelLatitude->setObjectName(QString::fromUtf8("labelLatitude"));
        sizePolicy1.setHeightForWidth(labelLatitude->sizePolicy().hasHeightForWidth());
        labelLatitude->setSizePolicy(sizePolicy1);
        labelLatitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitude, 5, 0, 1, 1);

        labelLongitudeUnit = new QLabel(frameInformation);
        labelLongitudeUnit->setObjectName(QString::fromUtf8("labelLongitudeUnit"));
        labelLongitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeUnit, 6, 2, 1, 1);

        labelLongitude = new QLabel(frameInformation);
        labelLongitude->setObjectName(QString::fromUtf8("labelLongitude"));
        labelLongitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitude, 6, 0, 1, 1);

        labelAgencyValue = new QLabel(frameInformation);
        labelAgencyValue->setObjectName(QString::fromUtf8("labelAgencyValue"));
        labelAgencyValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgencyValue, 9, 2, 1, 2);

        buttonReleaseOrigin = new QPushButton(frameInformation);
        buttonReleaseOrigin->setObjectName(QString::fromUtf8("buttonReleaseOrigin"));

        gridLayout1->addWidget(buttonReleaseOrigin, 13, 0, 1, 4);

        comboFixOrigin = new QComboBox(frameInformation);
        comboFixOrigin->setObjectName(QString::fromUtf8("comboFixOrigin"));

        gridLayout1->addWidget(comboFixOrigin, 12, 1, 1, 3);

        labelRegionValue = new QLabel(frameInformation);
        labelRegionValue->setObjectName(QString::fromUtf8("labelRegionValue"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelRegionValue->sizePolicy().hasHeightForWidth());
        labelRegionValue->setSizePolicy(sizePolicy5);

        gridLayout1->addWidget(labelRegionValue, 1, 1, 1, 3);

        labelLatitudeUnit = new QLabel(frameInformation);
        labelLatitudeUnit->setObjectName(QString::fromUtf8("labelLatitudeUnit"));
        sizePolicy1.setHeightForWidth(labelLatitudeUnit->sizePolicy().hasHeightForWidth());
        labelLatitudeUnit->setSizePolicy(sizePolicy1);
        labelLatitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeUnit, 5, 2, 1, 1);

        labelTimeValue = new QLabel(frameInformation);
        labelTimeValue->setObjectName(QString::fromUtf8("labelTimeValue"));

        gridLayout1->addWidget(labelTimeValue, 0, 1, 1, 3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 11, 0, 1, 1);

        labelOriginStatusValue = new QLabel(frameInformation);
        labelOriginStatusValue->setObjectName(QString::fromUtf8("labelOriginStatusValue"));
        labelOriginStatusValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelOriginStatusValue, 10, 2, 1, 2);

        labelPhases = new QLabel(frameInformation);
        labelPhases->setObjectName(QString::fromUtf8("labelPhases"));
        labelPhases->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelPhases, 7, 0, 1, 1);

        labelRegion = new QLabel(frameInformation);
        labelRegion->setObjectName(QString::fromUtf8("labelRegion"));

        gridLayout1->addWidget(labelRegion, 1, 0, 1, 1);

        labelDepthValue = new QLabel(frameInformation);
        labelDepthValue->setObjectName(QString::fromUtf8("labelDepthValue"));
        labelDepthValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthValue, 4, 1, 1, 1);

        labelRMS = new QLabel(frameInformation);
        labelRMS->setObjectName(QString::fromUtf8("labelRMS"));
        labelRMS->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelRMS, 8, 0, 1, 1);

        label = new QLabel(frameInformation);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 3, 0, 1, 1);

        comboTypeCertainties = new QComboBox(frameInformation);
        comboTypeCertainties->setObjectName(QString::fromUtf8("comboTypeCertainties"));

        gridLayout1->addWidget(comboTypeCertainties, 3, 1, 1, 3);


        gridLayout->addWidget(frameInformation, 0, 1, 1, 1);

        frameInformationM = new QFrame(originWidget);
        frameInformationM->setObjectName(QString::fromUtf8("frameInformationM"));
        sizePolicy3.setHeightForWidth(frameInformationM->sizePolicy().hasHeightForWidth());
        frameInformationM->setSizePolicy(sizePolicy3);
        frameInformationM->setFrameShape(QFrame::NoFrame);
        frameInformationM->setFrameShadow(QFrame::Plain);
        gridLayout2 = new QGridLayout(frameInformationM);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        buttonReleaseMagnitudeType = new QPushButton(frameInformationM);
        buttonReleaseMagnitudeType->setObjectName(QString::fromUtf8("buttonReleaseMagnitudeType"));

        gridLayout2->addWidget(buttonReleaseMagnitudeType, 6, 2, 1, 1);

        labelMagnitudeMethod = new QLabel(frameInformationM);
        labelMagnitudeMethod->setObjectName(QString::fromUtf8("labelMagnitudeMethod"));
        labelMagnitudeMethod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeMethod, 3, 0, 1, 1);

        labelMagnitude = new QLabel(frameInformationM);
        labelMagnitude->setObjectName(QString::fromUtf8("labelMagnitude"));
        sizePolicy1.setHeightForWidth(labelMagnitude->sizePolicy().hasHeightForWidth());
        labelMagnitude->setSizePolicy(sizePolicy1);
        labelMagnitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitude, 1, 0, 1, 1);

        labelMagnitudeCount = new QLabel(frameInformationM);
        labelMagnitudeCount->setObjectName(QString::fromUtf8("labelMagnitudeCount"));
        labelMagnitudeCount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeCount, 2, 0, 1, 1);

        labelMagnitudeValue = new QLabel(frameInformationM);
        labelMagnitudeValue->setObjectName(QString::fromUtf8("labelMagnitudeValue"));
        sizePolicy1.setHeightForWidth(labelMagnitudeValue->sizePolicy().hasHeightForWidth());
        labelMagnitudeValue->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(labelMagnitudeValue, 1, 1, 1, 1);

        labelMagnitudeType = new QLabel(frameInformationM);
        labelMagnitudeType->setObjectName(QString::fromUtf8("labelMagnitudeType"));
        sizePolicy1.setHeightForWidth(labelMagnitudeType->sizePolicy().hasHeightForWidth());
        labelMagnitudeType->setSizePolicy(sizePolicy1);
        labelMagnitudeType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeType, 0, 0, 1, 1);

        labelMagnitudeMethodValue = new QLabel(frameInformationM);
        labelMagnitudeMethodValue->setObjectName(QString::fromUtf8("labelMagnitudeMethodValue"));
        sizePolicy5.setHeightForWidth(labelMagnitudeMethodValue->sizePolicy().hasHeightForWidth());
        labelMagnitudeMethodValue->setSizePolicy(sizePolicy5);
        labelMagnitudeMethodValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeMethodValue, 3, 1, 1, 2);

        buttonFixMagnitudeType = new QPushButton(frameInformationM);
        buttonFixMagnitudeType->setObjectName(QString::fromUtf8("buttonFixMagnitudeType"));

        gridLayout2->addWidget(buttonFixMagnitudeType, 6, 0, 1, 1);

        labelMagnitudeTypeValue = new QLabel(frameInformationM);
        labelMagnitudeTypeValue->setObjectName(QString::fromUtf8("labelMagnitudeTypeValue"));

        gridLayout2->addWidget(labelMagnitudeTypeValue, 0, 1, 1, 2);

        spacerItem1 = new QSpacerItem(110, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem1, 5, 0, 1, 1);

        labelMagnitudeCountValue = new QLabel(frameInformationM);
        labelMagnitudeCountValue->setObjectName(QString::fromUtf8("labelMagnitudeCountValue"));

        gridLayout2->addWidget(labelMagnitudeCountValue, 2, 1, 1, 2);

        labelMagnitudeError = new QLabel(frameInformationM);
        labelMagnitudeError->setObjectName(QString::fromUtf8("labelMagnitudeError"));
        sizePolicy1.setHeightForWidth(labelMagnitudeError->sizePolicy().hasHeightForWidth());
        labelMagnitudeError->setSizePolicy(sizePolicy1);
        labelMagnitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeError, 1, 2, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 6, 1, 1, 1);

        label_2 = new QLabel(frameInformationM);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 4, 0, 1, 1);

        labelMagnitudeStatus = new QLabel(frameInformationM);
        labelMagnitudeStatus->setObjectName(QString::fromUtf8("labelMagnitudeStatus"));

        gridLayout2->addWidget(labelMagnitudeStatus, 4, 1, 1, 2);


        gridLayout->addWidget(frameInformationM, 2, 1, 1, 1);

        frameOrigins = new QFrame(originWidget);
        frameOrigins->setObjectName(QString::fromUtf8("frameOrigins"));
        sizePolicy.setHeightForWidth(frameOrigins->sizePolicy().hasHeightForWidth());
        frameOrigins->setSizePolicy(sizePolicy);
        frameOrigins->setFrameShape(QFrame::NoFrame);
        frameOrigins->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frameOrigins, 0, 0, 1, 1);

        tabWidget->addTab(originWidget, QString());
        fmWidget = new QSplitter();
        fmWidget->setObjectName(QString::fromUtf8("fmWidget"));
        fmWidget->setOrientation(Qt::Vertical);
        fmTop = new QFrame(fmWidget);
        fmTop->setObjectName(QString::fromUtf8("fmTop"));
        hboxLayout2 = new QHBoxLayout(fmTop);
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        fmTree = new QTreeWidget(fmTop);
        fmTree->setObjectName(QString::fromUtf8("fmTree"));
        sizePolicy.setHeightForWidth(fmTree->sizePolicy().hasHeightForWidth());
        fmTree->setSizePolicy(sizePolicy);
        fmTree->setAlternatingRowColors(true);
        fmTree->setRootIsDecorated(false);
        fmTree->setUniformRowHeights(true);
        fmTree->setItemsExpandable(false);

        hboxLayout2->addWidget(fmTree);

        fmInfo = new QFrame(fmTop);
        fmInfo->setObjectName(QString::fromUtf8("fmInfo"));
        sizePolicy3.setHeightForWidth(fmInfo->sizePolicy().hasHeightForWidth());
        fmInfo->setSizePolicy(sizePolicy3);
        fmInfo->setFrameShape(QFrame::NoFrame);
        fmInfo->setFrameShadow(QFrame::Plain);
        gridLayout3 = new QGridLayout(fmInfo);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        fmDist = new QLabel(fmInfo);
        fmDist->setObjectName(QString::fromUtf8("fmDist"));
        sizePolicy5.setHeightForWidth(fmDist->sizePolicy().hasHeightForWidth());
        fmDist->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmDist, 8, 1, 1, 3);

        fmMisfitL = new QLabel(fmInfo);
        fmMisfitL->setObjectName(QString::fromUtf8("fmMisfitL"));

        gridLayout3->addWidget(fmMisfitL, 7, 0, 1, 1);

        fmDistL = new QLabel(fmInfo);
        fmDistL->setObjectName(QString::fromUtf8("fmDistL"));

        gridLayout3->addWidget(fmDistL, 8, 0, 1, 1);

        fmFixCombo = new QComboBox(fmInfo);
        fmFixCombo->setObjectName(QString::fromUtf8("fmFixCombo"));

        gridLayout3->addWidget(fmFixCombo, 13, 1, 1, 3);

        fmNP2L = new QLabel(fmInfo);
        fmNP2L->setObjectName(QString::fromUtf8("fmNP2L"));

        gridLayout3->addWidget(fmNP2L, 1, 0, 1, 1);

        fmMethodL = new QLabel(fmInfo);
        fmMethodL->setObjectName(QString::fromUtf8("fmMethodL"));

        gridLayout3->addWidget(fmMethodL, 9, 0, 1, 1);

        fmCountL = new QLabel(fmInfo);
        fmCountL->setObjectName(QString::fromUtf8("fmCountL"));

        gridLayout3->addWidget(fmCountL, 6, 0, 1, 1);

        spacerItem3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem3, 12, 0, 1, 1);

        fmFixButton = new QPushButton(fmInfo);
        fmFixButton->setObjectName(QString::fromUtf8("fmFixButton"));

        gridLayout3->addWidget(fmFixButton, 13, 0, 1, 1);

        fmGap = new QLabel(fmInfo);
        fmGap->setObjectName(QString::fromUtf8("fmGap"));
        sizePolicy5.setHeightForWidth(fmGap->sizePolicy().hasHeightForWidth());
        fmGap->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmGap, 5, 1, 1, 3);

        fmNP2 = new QLabel(fmInfo);
        fmNP2->setObjectName(QString::fromUtf8("fmNP2"));
        sizePolicy5.setHeightForWidth(fmNP2->sizePolicy().hasHeightForWidth());
        fmNP2->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmNP2, 1, 1, 1, 3);

        fmMode = new QLabel(fmInfo);
        fmMode->setObjectName(QString::fromUtf8("fmMode"));
        sizePolicy5.setHeightForWidth(fmMode->sizePolicy().hasHeightForWidth());
        fmMode->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmMode, 10, 1, 1, 3);

        fmStatus = new QLabel(fmInfo);
        fmStatus->setObjectName(QString::fromUtf8("fmStatus"));
        sizePolicy5.setHeightForWidth(fmStatus->sizePolicy().hasHeightForWidth());
        fmStatus->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmStatus, 11, 1, 1, 3);

        fmGapL = new QLabel(fmInfo);
        fmGapL->setObjectName(QString::fromUtf8("fmGapL"));

        gridLayout3->addWidget(fmGapL, 5, 0, 1, 1);

        fmNP1 = new QLabel(fmInfo);
        fmNP1->setObjectName(QString::fromUtf8("fmNP1"));
        sizePolicy5.setHeightForWidth(fmNP1->sizePolicy().hasHeightForWidth());
        fmNP1->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmNP1, 0, 1, 1, 3);

        fmMethod = new QLabel(fmInfo);
        fmMethod->setObjectName(QString::fromUtf8("fmMethod"));
        sizePolicy5.setHeightForWidth(fmMethod->sizePolicy().hasHeightForWidth());
        fmMethod->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmMethod, 9, 1, 1, 3);

        fmAutoButton = new QPushButton(fmInfo);
        fmAutoButton->setObjectName(QString::fromUtf8("fmAutoButton"));

        gridLayout3->addWidget(fmAutoButton, 14, 0, 1, 4);

        fmMisfit = new QLabel(fmInfo);
        fmMisfit->setObjectName(QString::fromUtf8("fmMisfit"));
        sizePolicy5.setHeightForWidth(fmMisfit->sizePolicy().hasHeightForWidth());
        fmMisfit->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmMisfit, 7, 1, 1, 3);

        fmNP1L = new QLabel(fmInfo);
        fmNP1L->setObjectName(QString::fromUtf8("fmNP1L"));

        gridLayout3->addWidget(fmNP1L, 0, 0, 1, 1);

        fmStatusL = new QLabel(fmInfo);
        fmStatusL->setObjectName(QString::fromUtf8("fmStatusL"));

        gridLayout3->addWidget(fmStatusL, 11, 0, 1, 1);

        fmModeL = new QLabel(fmInfo);
        fmModeL->setObjectName(QString::fromUtf8("fmModeL"));

        gridLayout3->addWidget(fmModeL, 10, 0, 1, 1);

        fmCount = new QLabel(fmInfo);
        fmCount->setObjectName(QString::fromUtf8("fmCount"));
        sizePolicy5.setHeightForWidth(fmCount->sizePolicy().hasHeightForWidth());
        fmCount->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmCount, 6, 1, 1, 3);

        fmTriggerButton = new QPushButton(fmInfo);
        fmTriggerButton->setObjectName(QString::fromUtf8("fmTriggerButton"));

        gridLayout3->addWidget(fmTriggerButton, 15, 0, 1, 4);


        hboxLayout2->addWidget(fmInfo);

        fmWidget->addWidget(fmTop);
        fmBottom = new QFrame(fmWidget);
        fmBottom->setObjectName(QString::fromUtf8("fmBottom"));
        hboxLayout3 = new QHBoxLayout(fmBottom);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        fmMap = new QFrame(fmBottom);
        fmMap->setObjectName(QString::fromUtf8("fmMap"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(fmMap->sizePolicy().hasHeightForWidth());
        fmMap->setSizePolicy(sizePolicy6);
        fmMap->setFrameShape(QFrame::StyledPanel);
        fmMap->setFrameShadow(QFrame::Raised);

        hboxLayout3->addWidget(fmMap);

        mtOriginInfo = new QGroupBox(fmBottom);
        mtOriginInfo->setObjectName(QString::fromUtf8("mtOriginInfo"));
        gridLayout4 = new QGridLayout(mtOriginInfo);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        mtOriginPhasesL = new QLabel(mtOriginInfo);
        mtOriginPhasesL->setObjectName(QString::fromUtf8("mtOriginPhasesL"));
        mtOriginPhasesL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginPhasesL, 6, 0, 1, 1);

        mtOriginDepth = new QLabel(mtOriginInfo);
        mtOriginDepth->setObjectName(QString::fromUtf8("mtOriginDepth"));
        mtOriginDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepth, 2, 1, 1, 1);

        mtOriginDepthL = new QLabel(mtOriginInfo);
        mtOriginDepthL->setObjectName(QString::fromUtf8("mtOriginDepthL"));
        sizePolicy1.setHeightForWidth(mtOriginDepthL->sizePolicy().hasHeightForWidth());
        mtOriginDepthL->setSizePolicy(sizePolicy1);
        mtOriginDepthL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthL, 2, 0, 1, 1);

        mtOriginLatUnit = new QLabel(mtOriginInfo);
        mtOriginLatUnit->setObjectName(QString::fromUtf8("mtOriginLatUnit"));
        sizePolicy1.setHeightForWidth(mtOriginLatUnit->sizePolicy().hasHeightForWidth());
        mtOriginLatUnit->setSizePolicy(sizePolicy1);
        mtOriginLatUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatUnit, 3, 2, 1, 1);

        mtOriginRegionL = new QLabel(mtOriginInfo);
        mtOriginRegionL->setObjectName(QString::fromUtf8("mtOriginRegionL"));

        gridLayout4->addWidget(mtOriginRegionL, 1, 0, 1, 1);

        mtOriginDepthError = new QLabel(mtOriginInfo);
        mtOriginDepthError->setObjectName(QString::fromUtf8("mtOriginDepthError"));
        mtOriginDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthError, 2, 3, 1, 1);

        mtOriginAgencyL = new QLabel(mtOriginInfo);
        mtOriginAgencyL->setObjectName(QString::fromUtf8("mtOriginAgencyL"));
        mtOriginAgencyL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginAgencyL, 8, 0, 1, 1);

        mtOriginLon = new QLabel(mtOriginInfo);
        mtOriginLon->setObjectName(QString::fromUtf8("mtOriginLon"));
        mtOriginLon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLon, 4, 1, 1, 1);

        mtOriginLatL = new QLabel(mtOriginInfo);
        mtOriginLatL->setObjectName(QString::fromUtf8("mtOriginLatL"));
        sizePolicy1.setHeightForWidth(mtOriginLatL->sizePolicy().hasHeightForWidth());
        mtOriginLatL->setSizePolicy(sizePolicy1);
        mtOriginLatL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatL, 3, 0, 1, 1);

        mtOriginPhases = new QLabel(mtOriginInfo);
        mtOriginPhases->setObjectName(QString::fromUtf8("mtOriginPhases"));
        mtOriginPhases->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginPhases, 6, 2, 1, 2);

        mtOriginTimeL = new QLabel(mtOriginInfo);
        mtOriginTimeL->setObjectName(QString::fromUtf8("mtOriginTimeL"));

        gridLayout4->addWidget(mtOriginTimeL, 0, 0, 1, 1);

        mtOriginTime = new QLabel(mtOriginInfo);
        mtOriginTime->setObjectName(QString::fromUtf8("mtOriginTime"));

        gridLayout4->addWidget(mtOriginTime, 0, 1, 1, 3);

        mtOriginRegion = new QLabel(mtOriginInfo);
        mtOriginRegion->setObjectName(QString::fromUtf8("mtOriginRegion"));
        sizePolicy5.setHeightForWidth(mtOriginRegion->sizePolicy().hasHeightForWidth());
        mtOriginRegion->setSizePolicy(sizePolicy5);

        gridLayout4->addWidget(mtOriginRegion, 1, 1, 1, 3);

        mtOriginAgency = new QLabel(mtOriginInfo);
        mtOriginAgency->setObjectName(QString::fromUtf8("mtOriginAgency"));
        mtOriginAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginAgency, 8, 2, 1, 2);

        mtOriginStatusL = new QLabel(mtOriginInfo);
        mtOriginStatusL->setObjectName(QString::fromUtf8("mtOriginStatusL"));
        mtOriginStatusL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginStatusL, 9, 0, 1, 1);

        mtOriginLat = new QLabel(mtOriginInfo);
        mtOriginLat->setObjectName(QString::fromUtf8("mtOriginLat"));
        sizePolicy1.setHeightForWidth(mtOriginLat->sizePolicy().hasHeightForWidth());
        mtOriginLat->setSizePolicy(sizePolicy1);
        mtOriginLat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLat, 3, 1, 1, 1);

        mtOriginDepthUnit = new QLabel(mtOriginInfo);
        mtOriginDepthUnit->setObjectName(QString::fromUtf8("mtOriginDepthUnit"));
        mtOriginDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthUnit, 2, 2, 1, 1);

        mtOriginLatError = new QLabel(mtOriginInfo);
        mtOriginLatError->setObjectName(QString::fromUtf8("mtOriginLatError"));
        sizePolicy1.setHeightForWidth(mtOriginLatError->sizePolicy().hasHeightForWidth());
        mtOriginLatError->setSizePolicy(sizePolicy1);
        mtOriginLatError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatError, 3, 3, 1, 1);

        mtOriginLonL = new QLabel(mtOriginInfo);
        mtOriginLonL->setObjectName(QString::fromUtf8("mtOriginLonL"));
        mtOriginLonL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonL, 4, 0, 1, 1);

        mtOriginStatus = new QLabel(mtOriginInfo);
        mtOriginStatus->setObjectName(QString::fromUtf8("mtOriginStatus"));
        mtOriginStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginStatus, 9, 2, 1, 2);

        mtOriginLonUnit = new QLabel(mtOriginInfo);
        mtOriginLonUnit->setObjectName(QString::fromUtf8("mtOriginLonUnit"));
        mtOriginLonUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonUnit, 4, 2, 1, 1);

        mtOriginLonError = new QLabel(mtOriginInfo);
        mtOriginLonError->setObjectName(QString::fromUtf8("mtOriginLonError"));
        mtOriginLonError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonError, 4, 3, 1, 1);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem4, 10, 0, 1, 1);


        hboxLayout3->addWidget(mtOriginInfo);

        mtMagInfo = new QGroupBox(fmBottom);
        mtMagInfo->setObjectName(QString::fromUtf8("mtMagInfo"));
        sizePolicy3.setHeightForWidth(mtMagInfo->sizePolicy().hasHeightForWidth());
        mtMagInfo->setSizePolicy(sizePolicy3);
        gridLayout5 = new QGridLayout(mtMagInfo);
#ifndef Q_OS_MAC
        gridLayout5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout5->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        mtMagTypeL = new QLabel(mtMagInfo);
        mtMagTypeL->setObjectName(QString::fromUtf8("mtMagTypeL"));
        sizePolicy1.setHeightForWidth(mtMagTypeL->sizePolicy().hasHeightForWidth());
        mtMagTypeL->setSizePolicy(sizePolicy1);
        mtMagTypeL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagTypeL, 0, 0, 1, 1);

        mtMagMethod = new QLabel(mtMagInfo);
        mtMagMethod->setObjectName(QString::fromUtf8("mtMagMethod"));
        sizePolicy5.setHeightForWidth(mtMagMethod->sizePolicy().hasHeightForWidth());
        mtMagMethod->setSizePolicy(sizePolicy5);
        mtMagMethod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagMethod, 3, 1, 1, 2);

        mtMagCount = new QLabel(mtMagInfo);
        mtMagCount->setObjectName(QString::fromUtf8("mtMagCount"));

        gridLayout5->addWidget(mtMagCount, 2, 1, 1, 2);

        mtMagError = new QLabel(mtMagInfo);
        mtMagError->setObjectName(QString::fromUtf8("mtMagError"));
        sizePolicy1.setHeightForWidth(mtMagError->sizePolicy().hasHeightForWidth());
        mtMagError->setSizePolicy(sizePolicy1);
        mtMagError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagError, 1, 2, 1, 1);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem5, 5, 1, 1, 1);

        spacerItem6 = new QSpacerItem(110, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem6, 4, 0, 1, 1);

        mtMagCountL = new QLabel(mtMagInfo);
        mtMagCountL->setObjectName(QString::fromUtf8("mtMagCountL"));
        mtMagCountL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagCountL, 2, 0, 1, 1);

        buttonReleaseMw = new QPushButton(mtMagInfo);
        buttonReleaseMw->setObjectName(QString::fromUtf8("buttonReleaseMw"));

        gridLayout5->addWidget(buttonReleaseMw, 5, 2, 1, 1);

        mtMagMethodL = new QLabel(mtMagInfo);
        mtMagMethodL->setObjectName(QString::fromUtf8("mtMagMethodL"));
        mtMagMethodL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagMethodL, 3, 0, 1, 1);

        mtMagL = new QLabel(mtMagInfo);
        mtMagL->setObjectName(QString::fromUtf8("mtMagL"));
        sizePolicy1.setHeightForWidth(mtMagL->sizePolicy().hasHeightForWidth());
        mtMagL->setSizePolicy(sizePolicy1);
        mtMagL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagL, 1, 0, 1, 1);

        mtMag = new QLabel(mtMagInfo);
        mtMag->setObjectName(QString::fromUtf8("mtMag"));
        sizePolicy1.setHeightForWidth(mtMag->sizePolicy().hasHeightForWidth());
        mtMag->setSizePolicy(sizePolicy1);

        gridLayout5->addWidget(mtMag, 1, 1, 1, 1);

        mtMagType = new QLabel(mtMagInfo);
        mtMagType->setObjectName(QString::fromUtf8("mtMagType"));

        gridLayout5->addWidget(mtMagType, 0, 1, 1, 2);

        buttonFixMw = new QPushButton(mtMagInfo);
        buttonFixMw->setObjectName(QString::fromUtf8("buttonFixMw"));

        gridLayout5->addWidget(buttonFixMw, 5, 0, 1, 1);

        buttonFixFmMw = new QPushButton(mtMagInfo);
        buttonFixFmMw->setObjectName(QString::fromUtf8("buttonFixFmMw"));

        gridLayout5->addWidget(buttonFixFmMw, 6, 0, 1, 1);


        hboxLayout3->addWidget(mtMagInfo);

        fmWidget->addWidget(fmBottom);
        tabWidget->addTab(fmWidget, QString());
        splitter->addWidget(tabWidget);

        hboxLayout->addWidget(splitter);


        retranslateUi(EventEdit);

        QMetaObject::connectSlotsByName(EventEdit);
    } // setupUi

    void retranslateUi(QWidget *EventEdit)
    {
        EventEdit->setWindowTitle(QCoreApplication::translate("EventEdit", "Form", nullptr));
#if QT_CONFIG(tooltip)
        comboTypes->setToolTip(QCoreApplication::translate("EventEdit", "Sets the type of the event. Selection changes are going to be sent immediately.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelPhasesValue->setText(QCoreApplication::translate("EventEdit", "0", nullptr));
        labelDepthError->setText(QCoreApplication::translate("EventEdit", "+/- 0 km", nullptr));
        labelLongitudeValue->setText(QCoreApplication::translate("EventEdit", "0.00", nullptr));
        labelOriginStatus->setText(QCoreApplication::translate("EventEdit", "Origin Status:", nullptr));
        labelRMSValue->setText(QCoreApplication::translate("EventEdit", "0.0", nullptr));
        labelAgency->setText(QCoreApplication::translate("EventEdit", "Agency:", nullptr));
        labelType->setText(QCoreApplication::translate("EventEdit", "Type:", nullptr));
        buttonFixOrigin->setText(QCoreApplication::translate("EventEdit", "Fix", nullptr));
        labelLatitudeValue->setText(QCoreApplication::translate("EventEdit", "0.00", nullptr));
        labelDepthUnit->setText(QCoreApplication::translate("EventEdit", "km", nullptr));
        labelDepth->setText(QCoreApplication::translate("EventEdit", "Depth:", nullptr));
        labelLatitudeError->setText(QCoreApplication::translate("EventEdit", "+/- 0 km", nullptr));
        labelTime->setText(QCoreApplication::translate("EventEdit", "Time:", nullptr));
        labelLongitudeError->setText(QCoreApplication::translate("EventEdit", "+/- 0 km", nullptr));
        labelLatitude->setText(QCoreApplication::translate("EventEdit", "Latitude:", nullptr));
        labelLongitudeUnit->setText(QCoreApplication::translate("EventEdit", "\302\260 E", nullptr));
        labelLongitude->setText(QCoreApplication::translate("EventEdit", "Longitude:", nullptr));
        labelAgencyValue->setText(QString());
#if QT_CONFIG(tooltip)
        buttonReleaseOrigin->setToolTip(QCoreApplication::translate("EventEdit", "Unfixes a previously fixed preferred origin and lets scevent decide which origin to set preferred.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonReleaseOrigin->setText(QCoreApplication::translate("EventEdit", "Unfix origin", nullptr));
        labelRegionValue->setText(QCoreApplication::translate("EventEdit", "Flinn-Engdahl region", nullptr));
        labelLatitudeUnit->setText(QCoreApplication::translate("EventEdit", "\302\260 N", nullptr));
        labelTimeValue->setText(QCoreApplication::translate("EventEdit", "1970-01-01 00:00:00", nullptr));
        labelOriginStatusValue->setText(QString());
        labelPhases->setText(QCoreApplication::translate("EventEdit", "Phase Count:", nullptr));
        labelRegion->setText(QCoreApplication::translate("EventEdit", "Region:", nullptr));
        labelDepthValue->setText(QCoreApplication::translate("EventEdit", "0", nullptr));
        labelRMS->setText(QCoreApplication::translate("EventEdit", "RMS Residual:", nullptr));
        label->setText(QCoreApplication::translate("EventEdit", "Type certainty:", nullptr));
#if QT_CONFIG(tooltip)
        buttonReleaseMagnitudeType->setToolTip(QCoreApplication::translate("EventEdit", "Unfixes a previouly fixed magnitude type and lets scevent decide which magnitude to set preferred.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonReleaseMagnitudeType->setText(QCoreApplication::translate("EventEdit", "Unfix type", nullptr));
        labelMagnitudeMethod->setText(QCoreApplication::translate("EventEdit", "Method:", nullptr));
        labelMagnitude->setText(QCoreApplication::translate("EventEdit", "Value:", nullptr));
        labelMagnitudeCount->setText(QCoreApplication::translate("EventEdit", "Count:", nullptr));
        labelMagnitudeValue->setText(QCoreApplication::translate("EventEdit", "0.00", nullptr));
        labelMagnitudeType->setText(QCoreApplication::translate("EventEdit", "Type:", nullptr));
        labelMagnitudeMethodValue->setText(QString());
#if QT_CONFIG(tooltip)
        buttonFixMagnitudeType->setToolTip(QCoreApplication::translate("EventEdit", "Use only magnitudes with the currently selected type as preferred magnitude.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonFixMagnitudeType->setText(QCoreApplication::translate("EventEdit", "Fix type", nullptr));
        labelMagnitudeTypeValue->setText(QCoreApplication::translate("EventEdit", "-", nullptr));
        labelMagnitudeCountValue->setText(QCoreApplication::translate("EventEdit", "0", nullptr));
        labelMagnitudeError->setText(QCoreApplication::translate("EventEdit", "+/- 0", nullptr));
        label_2->setText(QCoreApplication::translate("EventEdit", "Status:", nullptr));
        labelMagnitudeStatus->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(originWidget), QCoreApplication::translate("EventEdit", "Origins", nullptr));
#if QT_CONFIG(tooltip)
        fmDist->setToolTip(QCoreApplication::translate("EventEdit", "Station Distribution Ratio", nullptr));
#endif // QT_CONFIG(tooltip)
        fmDist->setText(QCoreApplication::translate("EventEdit", "-", nullptr));
        fmMisfitL->setText(QCoreApplication::translate("EventEdit", "Misfit:", nullptr));
        fmDistL->setText(QCoreApplication::translate("EventEdit", "Distribution:", nullptr));
        fmNP2L->setText(QCoreApplication::translate("EventEdit", "NP2:", nullptr));
        fmMethodL->setText(QCoreApplication::translate("EventEdit", "Method:", nullptr));
        fmCountL->setText(QCoreApplication::translate("EventEdit", "Count:", nullptr));
        fmFixButton->setText(QCoreApplication::translate("EventEdit", "Fix FM", nullptr));
#if QT_CONFIG(tooltip)
        fmGap->setToolTip(QCoreApplication::translate("EventEdit", "Azimuthal Gap", nullptr));
#endif // QT_CONFIG(tooltip)
        fmGap->setText(QCoreApplication::translate("EventEdit", "-", nullptr));
#if QT_CONFIG(tooltip)
        fmNP2->setToolTip(QCoreApplication::translate("EventEdit", "Nodal Plane 2 (strike/dip/rake)", nullptr));
#endif // QT_CONFIG(tooltip)
        fmNP2->setText(QCoreApplication::translate("EventEdit", "-/-/-", nullptr));
#if QT_CONFIG(tooltip)
        fmMode->setToolTip(QCoreApplication::translate("EventEdit", "Evaluation Mode", nullptr));
#endif // QT_CONFIG(tooltip)
        fmMode->setText(QString());
#if QT_CONFIG(tooltip)
        fmStatus->setToolTip(QCoreApplication::translate("EventEdit", "Evaluation Status", nullptr));
#endif // QT_CONFIG(tooltip)
        fmStatus->setText(QString());
        fmGapL->setText(QCoreApplication::translate("EventEdit", "Azi. Gap:", nullptr));
#if QT_CONFIG(tooltip)
        fmNP1->setToolTip(QCoreApplication::translate("EventEdit", "Nodal Plane 1 (strike/dip/rake)", nullptr));
#endif // QT_CONFIG(tooltip)
        fmNP1->setText(QCoreApplication::translate("EventEdit", "-/-/-", nullptr));
#if QT_CONFIG(tooltip)
        fmMethod->setToolTip(QCoreApplication::translate("EventEdit", "Method ID", nullptr));
#endif // QT_CONFIG(tooltip)
        fmMethod->setText(QString());
        fmAutoButton->setText(QCoreApplication::translate("EventEdit", "Automatic FM selection", nullptr));
#if QT_CONFIG(tooltip)
        fmMisfit->setToolTip(QCoreApplication::translate("EventEdit", "Misfit", nullptr));
#endif // QT_CONFIG(tooltip)
        fmMisfit->setText(QCoreApplication::translate("EventEdit", "-", nullptr));
        fmNP1L->setText(QCoreApplication::translate("EventEdit", "NP1:", nullptr));
        fmStatusL->setText(QCoreApplication::translate("EventEdit", "Status:", nullptr));
        fmModeL->setText(QCoreApplication::translate("EventEdit", "Mode:", nullptr));
#if QT_CONFIG(tooltip)
        fmCount->setToolTip(QCoreApplication::translate("EventEdit", "Station Polarity Count", nullptr));
#endif // QT_CONFIG(tooltip)
        fmCount->setText(QCoreApplication::translate("EventEdit", "-", nullptr));
        fmTriggerButton->setText(QCoreApplication::translate("EventEdit", "Trigger Mw computation", nullptr));
        mtOriginInfo->setTitle(QCoreApplication::translate("EventEdit", "Derived Origin", nullptr));
        mtOriginPhasesL->setText(QCoreApplication::translate("EventEdit", "Phase Count:", nullptr));
        mtOriginDepth->setText(QCoreApplication::translate("EventEdit", "0", nullptr));
        mtOriginDepthL->setText(QCoreApplication::translate("EventEdit", "Depth:", nullptr));
        mtOriginLatUnit->setText(QCoreApplication::translate("EventEdit", "\302\260 N", nullptr));
        mtOriginRegionL->setText(QCoreApplication::translate("EventEdit", "Region:", nullptr));
        mtOriginDepthError->setText(QCoreApplication::translate("EventEdit", "+/- 0 km", nullptr));
        mtOriginAgencyL->setText(QCoreApplication::translate("EventEdit", "Agency:", nullptr));
        mtOriginLon->setText(QCoreApplication::translate("EventEdit", "0.00", nullptr));
        mtOriginLatL->setText(QCoreApplication::translate("EventEdit", "Latitude:", nullptr));
        mtOriginPhases->setText(QCoreApplication::translate("EventEdit", "0", nullptr));
        mtOriginTimeL->setText(QCoreApplication::translate("EventEdit", "Time:", nullptr));
        mtOriginTime->setText(QCoreApplication::translate("EventEdit", "1970-01-01 00:00:00", nullptr));
        mtOriginRegion->setText(QCoreApplication::translate("EventEdit", "Flinn-Engdahl region", nullptr));
        mtOriginAgency->setText(QString());
        mtOriginStatusL->setText(QCoreApplication::translate("EventEdit", "Origin Status:", nullptr));
        mtOriginLat->setText(QCoreApplication::translate("EventEdit", "0.00", nullptr));
        mtOriginDepthUnit->setText(QCoreApplication::translate("EventEdit", "km", nullptr));
        mtOriginLatError->setText(QCoreApplication::translate("EventEdit", "+/- 0 km", nullptr));
        mtOriginLonL->setText(QCoreApplication::translate("EventEdit", "Longitude:", nullptr));
        mtOriginStatus->setText(QString());
        mtOriginLonUnit->setText(QCoreApplication::translate("EventEdit", "\302\260 E", nullptr));
        mtOriginLonError->setText(QCoreApplication::translate("EventEdit", "+/- 0 km", nullptr));
        mtMagInfo->setTitle(QCoreApplication::translate("EventEdit", "Magnitude", nullptr));
        mtMagTypeL->setText(QCoreApplication::translate("EventEdit", "Type:", nullptr));
        mtMagMethod->setText(QCoreApplication::translate("EventEdit", "-", nullptr));
        mtMagCount->setText(QCoreApplication::translate("EventEdit", "0", nullptr));
        mtMagError->setText(QCoreApplication::translate("EventEdit", "+/- 0", nullptr));
        mtMagCountL->setText(QCoreApplication::translate("EventEdit", "Count:", nullptr));
#if QT_CONFIG(tooltip)
        buttonReleaseMw->setToolTip(QCoreApplication::translate("EventEdit", "Unfixes a previously fixed moment magnitude as preferred magnitude and lets scevent decide which magnitude (part of the preferred origin) to set preferred.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonReleaseMw->setText(QCoreApplication::translate("EventEdit", "Unfix type", nullptr));
        mtMagMethodL->setText(QCoreApplication::translate("EventEdit", "Method:", nullptr));
        mtMagL->setText(QCoreApplication::translate("EventEdit", "Value:", nullptr));
        mtMag->setText(QCoreApplication::translate("EventEdit", "0.00", nullptr));
        mtMagType->setText(QCoreApplication::translate("EventEdit", "-", nullptr));
#if QT_CONFIG(tooltip)
        buttonFixMw->setToolTip(QCoreApplication::translate("EventEdit", "Fixes the moment magnitude of the current preferred focal mechanism as preferred magnitude if available.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonFixMw->setText(QCoreApplication::translate("EventEdit", "Fix Mw type", nullptr));
#if QT_CONFIG(tooltip)
        buttonFixFmMw->setToolTip(QCoreApplication::translate("EventEdit", "Fixes currently selected focal mechanism and the associated moment magnitude as preferred magnitude if available.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonFixFmMw->setText(QCoreApplication::translate("EventEdit", "Fix FM + Mw type", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(fmWidget), QCoreApplication::translate("EventEdit", "Focal Mechanisms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventEdit: public Ui_EventEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTEDIT_H
