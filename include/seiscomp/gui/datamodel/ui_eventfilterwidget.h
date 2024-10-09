/********************************************************************************
** Form generated from reading UI file 'eventfilterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTFILTERWIDGET_H
#define UI_EVENTFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "seiscomp/gui/core/optionaldoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_EventFilter
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    Seiscomp::Gui::OptionalDoubleSpinBox *toLatitude;
    QFrame *frame;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromMagnitude;
    QLabel *label_4;
    QLabel *label_15;
    Seiscomp::Gui::OptionalDoubleSpinBox *toLongitude;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromDepth;
    QFrame *frame_2;
    QLabel *label;
    Seiscomp::Gui::OptionalDoubleSpinBox *toDepth;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_9;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromLatitude;
    QLabel *label_6;
    QLabel *label_7;
    Seiscomp::Gui::OptionalDoubleSpinBox *toMagnitude;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromLongitude;
    QLabel *label_13;
    QFrame *frame_4;
    QLineEdit *editEventID;
    QFrame *frame_5;
    QToolButton *btnReset;

    void setupUi(QWidget *EventFilter)
    {
        if (EventFilter->objectName().isEmpty())
            EventFilter->setObjectName(QString::fromUtf8("EventFilter"));
        EventFilter->resize(407, 419);
        vboxLayout = new QVBoxLayout(EventFilter);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toLatitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toLatitude->setObjectName(QString::fromUtf8("toLatitude"));
        toLatitude->setDecimals(4);
        toLatitude->setMaximum(90.000000000000000);
        toLatitude->setMinimum(-90.000000000000000);
        toLatitude->setValue(-90.000000000000000);

        gridLayout->addWidget(toLatitude, 3, 3, 1, 1);

        frame = new QFrame(EventFilter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame, 4, 0, 1, 4);

        fromMagnitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromMagnitude->setObjectName(QString::fromUtf8("fromMagnitude"));
        fromMagnitude->setDecimals(1);
        fromMagnitude->setMaximum(20.000000000000000);
        fromMagnitude->setMinimum(-10.000000000000000);
        fromMagnitude->setSingleStep(0.500000000000000);
        fromMagnitude->setValue(-10.000000000000000);

        gridLayout->addWidget(fromMagnitude, 12, 1, 1, 1);

        label_4 = new QLabel(EventFilter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_15 = new QLabel(EventFilter);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 12, 2, 1, 1);

        toLongitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toLongitude->setObjectName(QString::fromUtf8("toLongitude"));
        toLongitude->setDecimals(4);
        toLongitude->setMaximum(180.000000000000000);
        toLongitude->setMinimum(-180.000000000000000);
        toLongitude->setValue(-180.000000000000000);

        gridLayout->addWidget(toLongitude, 6, 3, 1, 1);

        fromDepth = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromDepth->setObjectName(QString::fromUtf8("fromDepth"));
        fromDepth->setMaximum(999.000000000000000);
        fromDepth->setMinimum(-999.000000000000000);
        fromDepth->setValue(-999.000000000000000);

        gridLayout->addWidget(fromDepth, 9, 1, 1, 1);

        frame_2 = new QFrame(EventFilter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame_2, 7, 0, 1, 4);

        label = new QLabel(EventFilter);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 4);

        toDepth = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toDepth->setObjectName(QString::fromUtf8("toDepth"));
        toDepth->setMaximum(999.000000000000000);
        toDepth->setMinimum(-999.000000000000000);
        toDepth->setValue(-999.000000000000000);

        gridLayout->addWidget(toDepth, 9, 3, 1, 1);

        label_5 = new QLabel(EventFilter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        frame_3 = new QFrame(EventFilter);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame_3, 10, 0, 1, 4);

        label_14 = new QLabel(EventFilter);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 12, 0, 1, 1);

        label_11 = new QLabel(EventFilter);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        label_8 = new QLabel(EventFilter);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        label_10 = new QLabel(EventFilter);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 8, 0, 1, 4);

        label_12 = new QLabel(EventFilter);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 9, 2, 1, 1);

        label_9 = new QLabel(EventFilter);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 2, 1, 1);

        fromLatitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromLatitude->setObjectName(QString::fromUtf8("fromLatitude"));
        fromLatitude->setDecimals(4);
        fromLatitude->setMaximum(90.000000000000000);
        fromLatitude->setMinimum(-90.000000000000000);
        fromLatitude->setValue(-90.000000000000000);

        gridLayout->addWidget(fromLatitude, 3, 1, 1, 1);

        label_6 = new QLabel(EventFilter);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 3, 2, 1, 1);

        label_7 = new QLabel(EventFilter);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 4);

        toMagnitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toMagnitude->setObjectName(QString::fromUtf8("toMagnitude"));
        toMagnitude->setDecimals(1);
        toMagnitude->setMaximum(20.000000000000000);
        toMagnitude->setMinimum(-10.000000000000000);
        toMagnitude->setSingleStep(0.500000000000000);
        toMagnitude->setValue(-10.000000000000000);

        gridLayout->addWidget(toMagnitude, 12, 3, 1, 1);

        fromLongitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromLongitude->setObjectName(QString::fromUtf8("fromLongitude"));
        fromLongitude->setDecimals(4);
        fromLongitude->setMaximum(180.000000000000000);
        fromLongitude->setMinimum(-180.000000000000000);
        fromLongitude->setValue(-180.000000000000000);

        gridLayout->addWidget(fromLongitude, 6, 1, 1, 1);

        label_13 = new QLabel(EventFilter);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 11, 0, 1, 4);

        frame_4 = new QFrame(EventFilter);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::HLine);
        frame_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame_4, 1, 0, 1, 4);

        editEventID = new QLineEdit(EventFilter);
        editEventID->setObjectName(QString::fromUtf8("editEventID"));

        gridLayout->addWidget(editEventID, 0, 1, 1, 3);


        vboxLayout->addLayout(gridLayout);

        frame_5 = new QFrame(EventFilter);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::HLine);
        frame_5->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(frame_5);

        btnReset = new QToolButton(EventFilter);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        vboxLayout->addWidget(btnReset);

        QWidget::setTabOrder(fromLatitude, toLatitude);
        QWidget::setTabOrder(toLatitude, fromLongitude);
        QWidget::setTabOrder(fromLongitude, toLongitude);
        QWidget::setTabOrder(toLongitude, fromDepth);
        QWidget::setTabOrder(fromDepth, toDepth);
        QWidget::setTabOrder(toDepth, fromMagnitude);
        QWidget::setTabOrder(fromMagnitude, toMagnitude);

        retranslateUi(EventFilter);

        QMetaObject::connectSlotsByName(EventFilter);
    } // setupUi

    void retranslateUi(QWidget *EventFilter)
    {
        EventFilter->setWindowTitle(QCoreApplication::translate("EventFilter", "Filter Settings", nullptr));
        toLatitude->setSpecialValueText(QCoreApplication::translate("EventFilter", "Unset", nullptr));
        toLatitude->setSuffix(QCoreApplication::translate("EventFilter", "\302\260", nullptr));
        fromMagnitude->setSpecialValueText(QCoreApplication::translate("EventFilter", "Unset", nullptr));
        label_4->setText(QCoreApplication::translate("EventFilter", "Event ID", nullptr));
        label_15->setText(QCoreApplication::translate("EventFilter", "to", nullptr));
        toLongitude->setSpecialValueText(QCoreApplication::translate("EventFilter", "Unset", nullptr));
        toLongitude->setSuffix(QCoreApplication::translate("EventFilter", "\302\260", nullptr));
        fromDepth->setSpecialValueText(QCoreApplication::translate("EventFilter", "Unset", nullptr));
        fromDepth->setSuffix(QCoreApplication::translate("EventFilter", "km", nullptr));
        label->setText(QCoreApplication::translate("EventFilter", "Latitude range", nullptr));
        toDepth->setSpecialValueText(QCoreApplication::translate("EventFilter", "Unset", nullptr));
        toDepth->setSuffix(QCoreApplication::translate("EventFilter", "km", nullptr));
        label_5->setText(QCoreApplication::translate("EventFilter", "from", nullptr));
        label_14->setText(QCoreApplication::translate("EventFilter", "from", nullptr));
        label_11->setText(QCoreApplication::translate("EventFilter", "from", nullptr));
        label_8->setText(QCoreApplication::translate("EventFilter", "from", nullptr));
        label_10->setText(QCoreApplication::translate("EventFilter", "Depth range", nullptr));
        label_12->setText(QCoreApplication::translate("EventFilter", "to", nullptr));
        label_9->setText(QCoreApplication::translate("EventFilter", "to", nullptr));
        fromLatitude->setSpecialValueText(QCoreApplication::translate("EventFilter", "Unset", nullptr));
        fromLatitude->setSuffix(QCoreApplication::translate("EventFilter", "\302\260", nullptr));
        label_6->setText(QCoreApplication::translate("EventFilter", "to", nullptr));
        label_7->setText(QCoreApplication::translate("EventFilter", "Longitude range", nullptr));
        toMagnitude->setSpecialValueText(QCoreApplication::translate("EventFilter", "Unset", nullptr));
        fromLongitude->setSpecialValueText(QCoreApplication::translate("EventFilter", "Unset", nullptr));
        fromLongitude->setSuffix(QCoreApplication::translate("EventFilter", "\302\260", nullptr));
        label_13->setText(QCoreApplication::translate("EventFilter", "Magnitude range", nullptr));
#if QT_CONFIG(tooltip)
        editEventID->setToolTip(QCoreApplication::translate("EventFilter", "EventID filter which allows wildcards (* and ?)", nullptr));
#endif // QT_CONFIG(tooltip)
        btnReset->setText(QCoreApplication::translate("EventFilter", "Reset all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventFilter: public Ui_EventFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTFILTERWIDGET_H
