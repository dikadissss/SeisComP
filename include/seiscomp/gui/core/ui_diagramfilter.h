/********************************************************************************
** Form generated from reading UI file 'diagramfilter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAMFILTER_H
#define UI_DIAGRAMFILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterSettings
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QComboBox *comboFilter;
    QFrame *line;
    QFrame *frameNoFilter;
    QVBoxLayout *vboxLayout1;
    QLabel *label_7;
    QSpacerItem *spacerItem;
    QFrame *frameAzimuthAroundEpicenter;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QDoubleSpinBox *spinAzimuthCenter;
    QLabel *label_3;
    QSpacerItem *spacerItem1;
    QLabel *label_4;
    QLabel *label_6;
    QDoubleSpinBox *spinAzimuthExtent;
    QLabel *label_5;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem3;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FilterSettings)
    {
        if (FilterSettings->objectName().isEmpty())
            FilterSettings->setObjectName(QString::fromUtf8("FilterSettings"));
        FilterSettings->resize(317, 132);
        vboxLayout = new QVBoxLayout(FilterSettings);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(FilterSettings);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(label);

        comboFilter = new QComboBox(FilterSettings);
        comboFilter->addItem(QString());
        comboFilter->addItem(QString());
        comboFilter->setObjectName(QString::fromUtf8("comboFilter"));

        hboxLayout->addWidget(comboFilter);


        vboxLayout->addLayout(hboxLayout);

        line = new QFrame(FilterSettings);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frameNoFilter = new QFrame(FilterSettings);
        frameNoFilter->setObjectName(QString::fromUtf8("frameNoFilter"));
        frameNoFilter->setFrameShape(QFrame::NoFrame);
        frameNoFilter->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frameNoFilter);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label_7 = new QLabel(frameNoFilter);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        vboxLayout1->addWidget(label_7);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        vboxLayout->addWidget(frameNoFilter);

        frameAzimuthAroundEpicenter = new QFrame(FilterSettings);
        frameAzimuthAroundEpicenter->setObjectName(QString::fromUtf8("frameAzimuthAroundEpicenter"));
        frameAzimuthAroundEpicenter->setFrameShape(QFrame::NoFrame);
        frameAzimuthAroundEpicenter->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frameAzimuthAroundEpicenter);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(frameAzimuthAroundEpicenter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_2);

        spinAzimuthCenter = new QDoubleSpinBox(frameAzimuthAroundEpicenter);
        spinAzimuthCenter->setObjectName(QString::fromUtf8("spinAzimuthCenter"));
        spinAzimuthCenter->setDecimals(1);
        spinAzimuthCenter->setMaximum(360.000000000000000);
        spinAzimuthCenter->setMinimum(-360.000000000000000);

        hboxLayout1->addWidget(spinAzimuthCenter);

        label_3 = new QLabel(frameAzimuthAroundEpicenter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_3);

        spacerItem1 = new QSpacerItem(10, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        label_4 = new QLabel(frameAzimuthAroundEpicenter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_4);

        label_6 = new QLabel(frameAzimuthAroundEpicenter);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_6);

        spinAzimuthExtent = new QDoubleSpinBox(frameAzimuthAroundEpicenter);
        spinAzimuthExtent->setObjectName(QString::fromUtf8("spinAzimuthExtent"));
        spinAzimuthExtent->setDecimals(1);
        spinAzimuthExtent->setMaximum(180.000000000000000);
        spinAzimuthExtent->setMinimum(0.000000000000000);
        spinAzimuthExtent->setValue(45.000000000000000);

        hboxLayout1->addWidget(spinAzimuthExtent);

        label_5 = new QLabel(frameAzimuthAroundEpicenter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_5);


        vboxLayout2->addLayout(hboxLayout1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        vboxLayout->addWidget(frameAzimuthAroundEpicenter);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem3 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        okButton = new QPushButton(FilterSettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(FilterSettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(FilterSettings);
        QObject::connect(okButton, SIGNAL(clicked()), FilterSettings, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), FilterSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterSettings);
    } // setupUi

    void retranslateUi(QDialog *FilterSettings)
    {
        FilterSettings->setWindowTitle(QCoreApplication::translate("FilterSettings", "Filter settings", nullptr));
        label->setText(QCoreApplication::translate("FilterSettings", "Filter:", nullptr));
        comboFilter->setItemText(0, QCoreApplication::translate("FilterSettings", "None", nullptr));
        comboFilter->setItemText(1, QCoreApplication::translate("FilterSettings", "Azimuth around epicenter", nullptr));

        label_7->setText(QCoreApplication::translate("FilterSettings", "No filter. Displays all values.", nullptr));
        label_2->setText(QCoreApplication::translate("FilterSettings", "Center:", nullptr));
        label_3->setText(QCoreApplication::translate("FilterSettings", "deg", nullptr));
        label_4->setText(QCoreApplication::translate("FilterSettings", "Extent:", nullptr));
        label_6->setText(QCoreApplication::translate("FilterSettings", "+/-", nullptr));
        label_5->setText(QCoreApplication::translate("FilterSettings", "deg", nullptr));
        okButton->setText(QCoreApplication::translate("FilterSettings", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("FilterSettings", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterSettings: public Ui_FilterSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAMFILTER_H
