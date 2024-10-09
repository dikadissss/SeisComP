/********************************************************************************
** Form generated from reading UI file 'eventlistview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTLISTVIEW_H
#define UI_EVENTLISTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventListView
{
public:
    QAction *actionCopyRowToClipboard;
    QVBoxLayout *vboxLayout;
    QFrame *frameList;
    QFrame *frameControls;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QToolButton *btnClear;
    QToolButton *btnFilter;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QSpinBox *spinBox;
    QToolButton *btnReadDays;
    QSpacerItem *spacerItem1;
    QLabel *label;
    QDateTimeEdit *dateTimeEditStart;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEditEnd;
    QToolButton *btnReadInterval;
    QFrame *frameCustomControls;
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QCheckBox *cbHideOther;
    QSpacerItem *spacerItem2;
    QCheckBox *cbHideForeign;
    QSpacerItem *spacerItem3;
    QCheckBox *cbShowLatestOnly;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout2;
    QFrame *frameRegionFilter;
    QHBoxLayout *hboxLayout3;
    QCheckBox *cbFilterRegions;
    QComboBox *cbFilterRegionMode;
    QComboBox *lstFilterRegions;
    QToolButton *btnChangeRegion;
    QLabel *lbFilterRegions;
    QSpacerItem *spacerItem5;

    void setupUi(QWidget *EventListView)
    {
        if (EventListView->objectName().isEmpty())
            EventListView->setObjectName(QString::fromUtf8("EventListView"));
        EventListView->resize(802, 710);
        actionCopyRowToClipboard = new QAction(EventListView);
        actionCopyRowToClipboard->setObjectName(QString::fromUtf8("actionCopyRowToClipboard"));
        vboxLayout = new QVBoxLayout(EventListView);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frameList = new QFrame(EventListView);
        frameList->setObjectName(QString::fromUtf8("frameList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(frameList->sizePolicy().hasHeightForWidth());
        frameList->setSizePolicy(sizePolicy);
        frameList->setFrameShape(QFrame::NoFrame);
        frameList->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frameList);

        frameControls = new QFrame(EventListView);
        frameControls->setObjectName(QString::fromUtf8("frameControls"));
        frameControls->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(frameControls);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClear = new QToolButton(frameControls);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(btnClear);

        btnFilter = new QToolButton(frameControls);
        btnFilter->setObjectName(QString::fromUtf8("btnFilter"));
        sizePolicy1.setHeightForWidth(btnFilter->sizePolicy().hasHeightForWidth());
        btnFilter->setSizePolicy(sizePolicy1);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/filter2.png"));
        btnFilter->setIcon(icon);

        hboxLayout->addWidget(btnFilter);

        spacerItem = new QSpacerItem(16, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label_3 = new QLabel(frameControls);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label_3);

        spinBox = new QSpinBox(frameControls);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy3);
        spinBox->setMinimum(1);

        hboxLayout->addWidget(spinBox);

        btnReadDays = new QToolButton(frameControls);
        btnReadDays->setObjectName(QString::fromUtf8("btnReadDays"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnReadDays->sizePolicy().hasHeightForWidth());
        btnReadDays->setSizePolicy(sizePolicy4);
        btnReadDays->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(btnReadDays);

        spacerItem1 = new QSpacerItem(16, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        label = new QLabel(frameControls);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label);

        dateTimeEditStart = new QDateTimeEdit(frameControls);
        dateTimeEditStart->setObjectName(QString::fromUtf8("dateTimeEditStart"));
        dateTimeEditStart->setCurrentSection(QDateTimeEdit::YearSection);

        hboxLayout->addWidget(dateTimeEditStart);

        label_2 = new QLabel(frameControls);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label_2);

        dateTimeEditEnd = new QDateTimeEdit(frameControls);
        dateTimeEditEnd->setObjectName(QString::fromUtf8("dateTimeEditEnd"));
        dateTimeEditEnd->setCurrentSection(QDateTimeEdit::YearSection);

        hboxLayout->addWidget(dateTimeEditEnd);

        btnReadInterval = new QToolButton(frameControls);
        btnReadInterval->setObjectName(QString::fromUtf8("btnReadInterval"));
        sizePolicy4.setHeightForWidth(btnReadInterval->sizePolicy().hasHeightForWidth());
        btnReadInterval->setSizePolicy(sizePolicy4);
        btnReadInterval->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(btnReadInterval);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(frameControls);

        frameCustomControls = new QFrame(EventListView);
        frameCustomControls->setObjectName(QString::fromUtf8("frameCustomControls"));
        frameCustomControls->setFrameShape(QFrame::NoFrame);
        frameCustomControls->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frameCustomControls);

        frame = new QFrame(EventListView);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frame);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        cbHideOther = new QCheckBox(EventListView);
        cbHideOther->setObjectName(QString::fromUtf8("cbHideOther"));
        cbHideOther->setChecked(true);

        hboxLayout1->addWidget(cbHideOther);

        spacerItem2 = new QSpacerItem(16, 23, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        cbHideForeign = new QCheckBox(EventListView);
        cbHideForeign->setObjectName(QString::fromUtf8("cbHideForeign"));
        cbHideForeign->setChecked(false);

        hboxLayout1->addWidget(cbHideForeign);

        spacerItem3 = new QSpacerItem(16, 23, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        cbShowLatestOnly = new QCheckBox(EventListView);
        cbShowLatestOnly->setObjectName(QString::fromUtf8("cbShowLatestOnly"));

        hboxLayout1->addWidget(cbShowLatestOnly);

        spacerItem4 = new QSpacerItem(144, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        frameRegionFilter = new QFrame(EventListView);
        frameRegionFilter->setObjectName(QString::fromUtf8("frameRegionFilter"));
        frameRegionFilter->setFrameShape(QFrame::NoFrame);
        frameRegionFilter->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frameRegionFilter);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        cbFilterRegions = new QCheckBox(frameRegionFilter);
        cbFilterRegions->setObjectName(QString::fromUtf8("cbFilterRegions"));

        hboxLayout3->addWidget(cbFilterRegions);

        cbFilterRegionMode = new QComboBox(frameRegionFilter);
        cbFilterRegionMode->addItem(QString());
        cbFilterRegionMode->addItem(QString());
        cbFilterRegionMode->setObjectName(QString::fromUtf8("cbFilterRegionMode"));

        hboxLayout3->addWidget(cbFilterRegionMode);

        lstFilterRegions = new QComboBox(frameRegionFilter);
        lstFilterRegions->setObjectName(QString::fromUtf8("lstFilterRegions"));

        hboxLayout3->addWidget(lstFilterRegions);

        btnChangeRegion = new QToolButton(frameRegionFilter);
        btnChangeRegion->setObjectName(QString::fromUtf8("btnChangeRegion"));

        hboxLayout3->addWidget(btnChangeRegion);

        lbFilterRegions = new QLabel(frameRegionFilter);
        lbFilterRegions->setObjectName(QString::fromUtf8("lbFilterRegions"));

        hboxLayout3->addWidget(lbFilterRegions);


        hboxLayout2->addWidget(frameRegionFilter);

        spacerItem5 = new QSpacerItem(351, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem5);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(EventListView);

        QMetaObject::connectSlotsByName(EventListView);
    } // setupUi

    void retranslateUi(QWidget *EventListView)
    {
        EventListView->setWindowTitle(QCoreApplication::translate("EventListView", "Event List", nullptr));
        actionCopyRowToClipboard->setText(QCoreApplication::translate("EventListView", "copyRowToClipboard", nullptr));
#if QT_CONFIG(shortcut)
        actionCopyRowToClipboard->setShortcut(QCoreApplication::translate("EventListView", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnClear->setToolTip(QCoreApplication::translate("EventListView", "Removes all events from the list", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClear->setText(QCoreApplication::translate("EventListView", "Clear list", nullptr));
#if QT_CONFIG(tooltip)
        btnFilter->setToolTip(QCoreApplication::translate("EventListView", "Configures the server-side event filter", nullptr));
#endif // QT_CONFIG(tooltip)
        btnFilter->setText(QCoreApplication::translate("EventListView", "Filter", nullptr));
        label_3->setText(QCoreApplication::translate("EventListView", "Last days:", nullptr));
#if QT_CONFIG(tooltip)
        btnReadDays->setToolTip(QCoreApplication::translate("EventListView", "Reads the events of the last n days using the \"Last days:\" value", nullptr));
#endif // QT_CONFIG(tooltip)
        btnReadDays->setText(QCoreApplication::translate("EventListView", "Read", nullptr));
        label->setText(QCoreApplication::translate("EventListView", "From:", nullptr));
        dateTimeEditStart->setDisplayFormat(QCoreApplication::translate("EventListView", "yyyy/MM/dd HH:mm:ss", nullptr));
        label_2->setText(QCoreApplication::translate("EventListView", "To:", nullptr));
        dateTimeEditEnd->setDisplayFormat(QCoreApplication::translate("EventListView", "yyyy/MM/dd HH:mm:ss", nullptr));
#if QT_CONFIG(tooltip)
        btnReadInterval->setToolTip(QCoreApplication::translate("EventListView", "Reads the events of the given timespan using the \"From:\" and \"To:\" dates", nullptr));
#endif // QT_CONFIG(tooltip)
        btnReadInterval->setText(QCoreApplication::translate("EventListView", "Read", nullptr));
#if QT_CONFIG(tooltip)
        cbHideOther->setToolTip(QCoreApplication::translate("EventListView", "Hides/shows events with EventType set to OTHER/NOT_EXISTING", nullptr));
#endif // QT_CONFIG(tooltip)
        cbHideOther->setText(QCoreApplication::translate("EventListView", "Hide other/fake events", nullptr));
#if QT_CONFIG(tooltip)
        cbHideForeign->setToolTip(QCoreApplication::translate("EventListView", "Hides/shows events from non preferred agencies", nullptr));
#endif // QT_CONFIG(tooltip)
        cbHideForeign->setText(QCoreApplication::translate("EventListView", "Show only own events", nullptr));
#if QT_CONFIG(tooltip)
        cbShowLatestOnly->setToolTip(QCoreApplication::translate("EventListView", "Enables/disables the display of only one origin per agency (the latest one) or all origins", nullptr));
#endif // QT_CONFIG(tooltip)
        cbShowLatestOnly->setText(QCoreApplication::translate("EventListView", "Show only latest/preferred origin per agency", nullptr));
        cbFilterRegions->setText(QCoreApplication::translate("EventListView", "Hide events", nullptr));
        cbFilterRegionMode->setItemText(0, QCoreApplication::translate("EventListView", "outside", nullptr));
        cbFilterRegionMode->setItemText(1, QCoreApplication::translate("EventListView", "inside", nullptr));

        btnChangeRegion->setText(QCoreApplication::translate("EventListView", "...", nullptr));
        lbFilterRegions->setText(QCoreApplication::translate("EventListView", "region", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventListView: public Ui_EventListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTLISTVIEW_H
