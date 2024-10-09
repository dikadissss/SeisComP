/********************************************************************************
** Form generated from reading UI file 'eventlistviewregionfilterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTLISTVIEWREGIONFILTERDIALOG_H
#define UI_EVENTLISTVIEWREGIONFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EventListViewRegionFilterDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_6;
    QComboBox *cbRegions;
    QLabel *label_8;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QLineEdit *edMaxLon;
    QLabel *label_11;
    QLabel *label_7;
    QHBoxLayout *hboxLayout1;
    QLineEdit *edMinLon;
    QLabel *label_9;
    QHBoxLayout *hboxLayout2;
    QLineEdit *edMaxLat;
    QLabel *label_10;
    QLabel *label_5;
    QHBoxLayout *hboxLayout3;
    QLineEdit *edMinLat;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelPolys;
    QComboBox *cbPolys;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *EventListViewRegionFilterDialog)
    {
        if (EventListViewRegionFilterDialog->objectName().isEmpty())
            EventListViewRegionFilterDialog->setObjectName(QString::fromUtf8("EventListViewRegionFilterDialog"));
        EventListViewRegionFilterDialog->resize(676, 642);
        vboxLayout = new QVBoxLayout(EventListViewRegionFilterDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(EventListViewRegionFilterDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        cbRegions = new QComboBox(groupBox);
        cbRegions->setObjectName(QString::fromUtf8("cbRegions"));

        gridLayout->addWidget(cbRegions, 0, 1, 1, 4);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        edMaxLon = new QLineEdit(groupBox);
        edMaxLon->setObjectName(QString::fromUtf8("edMaxLon"));
        edMaxLon->setMaxLength(11);
        edMaxLon->setAlignment(Qt::AlignRight);

        hboxLayout->addWidget(edMaxLon);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        hboxLayout->addWidget(label_11);


        gridLayout->addLayout(hboxLayout, 2, 4, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        edMinLon = new QLineEdit(groupBox);
        edMinLon->setObjectName(QString::fromUtf8("edMinLon"));
        edMinLon->setMaxLength(11);
        edMinLon->setAlignment(Qt::AlignRight);

        hboxLayout1->addWidget(edMinLon);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        hboxLayout1->addWidget(label_9);


        gridLayout->addLayout(hboxLayout1, 2, 2, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        edMaxLat = new QLineEdit(groupBox);
        edMaxLat->setObjectName(QString::fromUtf8("edMaxLat"));
        edMaxLat->setMaxLength(10);
        edMaxLat->setAlignment(Qt::AlignRight);

        hboxLayout2->addWidget(edMaxLat);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        hboxLayout2->addWidget(label_10);


        gridLayout->addLayout(hboxLayout2, 1, 4, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        edMinLat = new QLineEdit(groupBox);
        edMinLat->setObjectName(QString::fromUtf8("edMinLat"));
        edMinLat->setMaxLength(10);
        edMinLat->setAlignment(Qt::AlignRight);

        hboxLayout3->addWidget(edMinLat);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout3->addWidget(label_3);


        gridLayout->addLayout(hboxLayout3, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        labelPolys = new QLabel(groupBox);
        labelPolys->setObjectName(QString::fromUtf8("labelPolys"));
        labelPolys->setEnabled(false);

        gridLayout->addWidget(labelPolys, 3, 0, 1, 1);

        cbPolys = new QComboBox(groupBox);
        cbPolys->setObjectName(QString::fromUtf8("cbPolys"));
        cbPolys->setEnabled(false);

        gridLayout->addWidget(cbPolys, 3, 1, 1, 4);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem1);

        okButton = new QPushButton(EventListViewRegionFilterDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout4->addWidget(okButton);

        cancelButton = new QPushButton(EventListViewRegionFilterDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout4->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout4);

        QWidget::setTabOrder(cbRegions, edMinLat);
        QWidget::setTabOrder(edMinLat, edMaxLat);
        QWidget::setTabOrder(edMaxLat, edMinLon);
        QWidget::setTabOrder(edMinLon, edMaxLon);
        QWidget::setTabOrder(edMaxLon, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(EventListViewRegionFilterDialog);

        QMetaObject::connectSlotsByName(EventListViewRegionFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *EventListViewRegionFilterDialog)
    {
        EventListViewRegionFilterDialog->setWindowTitle(QCoreApplication::translate("EventListViewRegionFilterDialog", "Edit region", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EventListViewRegionFilterDialog", "Region", nullptr));
        label_2->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "from", nullptr));
        label_6->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "Latitude range", nullptr));
        label_8->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "to", nullptr));
        label->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "Template", nullptr));
        edMaxLon->setText(QString());
        label_11->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "\302\260 ", nullptr));
        label_7->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "Longitude range", nullptr));
        edMinLon->setText(QString());
        label_9->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "\302\260 ", nullptr));
        edMaxLat->setText(QString());
        label_10->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "\302\260 ", nullptr));
        label_5->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "to", nullptr));
        edMinLat->setText(QString());
        label_3->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "\302\260 ", nullptr));
        label_4->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "from", nullptr));
#if QT_CONFIG(tooltip)
        labelPolys->setToolTip(QCoreApplication::translate("EventListViewRegionFilterDialog", "If a polygon is selected then it will override the latitude/longitude rect.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelPolys->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "Polygon", nullptr));
        okButton->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("EventListViewRegionFilterDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventListViewRegionFilterDialog: public Ui_EventListViewRegionFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTLISTVIEWREGIONFILTERDIALOG_H
