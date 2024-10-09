/********************************************************************************
** Form generated from reading UI file 'origindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINDIALOG_H
#define UI_ORIGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
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

class Ui_OriginDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *depthLabel;
    QLabel *lonLabel;
    QLabel *latLabel;
    QLabel *timeLabel;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *latLineEdit;
    QLabel *latUnitLabel;
    QLabel *lonUnitLabel;
    QLabel *depthUnitLabel;
    QLineEdit *lonLineEdit;
    QLineEdit *depthLineEdit;
    QGroupBox *advancedGroupBox;
    QGridLayout *gridLayout1;
    QLabel *magTypeLabel;
    QLabel *magLabel;
    QLabel *phaseCountLabel;
    QLineEdit *phaseCountLineEdit;
    QLineEdit *magLineEdit;
    QComboBox *magTypeComboBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *sendButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginDialog)
    {
        if (OriginDialog->objectName().isEmpty())
            OriginDialog->setObjectName(QString::fromUtf8("OriginDialog"));
        OriginDialog->resize(284, 346);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OriginDialog->sizePolicy().hasHeightForWidth());
        OriginDialog->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(OriginDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(OriginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        depthLabel = new QLabel(groupBox);
        depthLabel->setObjectName(QString::fromUtf8("depthLabel"));

        gridLayout->addWidget(depthLabel, 3, 0, 1, 1);

        lonLabel = new QLabel(groupBox);
        lonLabel->setObjectName(QString::fromUtf8("lonLabel"));

        gridLayout->addWidget(lonLabel, 2, 0, 1, 1);

        latLabel = new QLabel(groupBox);
        latLabel->setObjectName(QString::fromUtf8("latLabel"));

        gridLayout->addWidget(latLabel, 1, 0, 1, 1);

        timeLabel = new QLabel(groupBox);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timeLabel->sizePolicy().hasHeightForWidth());
        timeLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(timeLabel, 0, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setAlignment(Qt::AlignRight);
        dateTimeEdit->setCurrentSection(QDateTimeEdit::YearSection);

        gridLayout->addWidget(dateTimeEdit, 0, 1, 1, 1);

        latLineEdit = new QLineEdit(groupBox);
        latLineEdit->setObjectName(QString::fromUtf8("latLineEdit"));

        gridLayout->addWidget(latLineEdit, 1, 1, 1, 1);

        latUnitLabel = new QLabel(groupBox);
        latUnitLabel->setObjectName(QString::fromUtf8("latUnitLabel"));

        gridLayout->addWidget(latUnitLabel, 1, 2, 1, 1);

        lonUnitLabel = new QLabel(groupBox);
        lonUnitLabel->setObjectName(QString::fromUtf8("lonUnitLabel"));

        gridLayout->addWidget(lonUnitLabel, 2, 2, 1, 1);

        depthUnitLabel = new QLabel(groupBox);
        depthUnitLabel->setObjectName(QString::fromUtf8("depthUnitLabel"));

        gridLayout->addWidget(depthUnitLabel, 3, 2, 1, 1);

        lonLineEdit = new QLineEdit(groupBox);
        lonLineEdit->setObjectName(QString::fromUtf8("lonLineEdit"));

        gridLayout->addWidget(lonLineEdit, 2, 1, 1, 1);

        depthLineEdit = new QLineEdit(groupBox);
        depthLineEdit->setObjectName(QString::fromUtf8("depthLineEdit"));

        gridLayout->addWidget(depthLineEdit, 3, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        advancedGroupBox = new QGroupBox(OriginDialog);
        advancedGroupBox->setObjectName(QString::fromUtf8("advancedGroupBox"));
        advancedGroupBox->setEnabled(true);
        advancedGroupBox->setCheckable(true);
        advancedGroupBox->setChecked(false);
        gridLayout1 = new QGridLayout(advancedGroupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        magTypeLabel = new QLabel(advancedGroupBox);
        magTypeLabel->setObjectName(QString::fromUtf8("magTypeLabel"));
        sizePolicy1.setHeightForWidth(magTypeLabel->sizePolicy().hasHeightForWidth());
        magTypeLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(magTypeLabel, 2, 0, 1, 1);

        magLabel = new QLabel(advancedGroupBox);
        magLabel->setObjectName(QString::fromUtf8("magLabel"));
        sizePolicy1.setHeightForWidth(magLabel->sizePolicy().hasHeightForWidth());
        magLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(magLabel, 1, 0, 1, 1);

        phaseCountLabel = new QLabel(advancedGroupBox);
        phaseCountLabel->setObjectName(QString::fromUtf8("phaseCountLabel"));
        sizePolicy1.setHeightForWidth(phaseCountLabel->sizePolicy().hasHeightForWidth());
        phaseCountLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(phaseCountLabel, 0, 0, 1, 1);

        phaseCountLineEdit = new QLineEdit(advancedGroupBox);
        phaseCountLineEdit->setObjectName(QString::fromUtf8("phaseCountLineEdit"));

        gridLayout1->addWidget(phaseCountLineEdit, 0, 1, 1, 1);

        magLineEdit = new QLineEdit(advancedGroupBox);
        magLineEdit->setObjectName(QString::fromUtf8("magLineEdit"));

        gridLayout1->addWidget(magLineEdit, 1, 1, 1, 1);

        magTypeComboBox = new QComboBox(advancedGroupBox);
        magTypeComboBox->setObjectName(QString::fromUtf8("magTypeComboBox"));
        magTypeComboBox->setEditable(true);
        magTypeComboBox->setMaxVisibleItems(30);

        gridLayout1->addWidget(magTypeComboBox, 2, 1, 1, 1);


        vboxLayout->addWidget(advancedGroupBox);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        sendButton = new QPushButton(OriginDialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(221, 223, 228, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(85, 85, 85, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(199, 199, 199, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush5(QColor(239, 239, 239, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush6(QColor(103, 141, 178, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush7(QColor(0, 0, 238, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(82, 24, 139, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        QBrush brush9(QColor(232, 232, 232, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(128, 128, 128, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush11(QColor(86, 117, 148, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        sendButton->setPalette(palette);

        hboxLayout->addWidget(sendButton);

        cancelButton = new QPushButton(OriginDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(dateTimeEdit, latLineEdit);
        QWidget::setTabOrder(latLineEdit, lonLineEdit);
        QWidget::setTabOrder(lonLineEdit, depthLineEdit);
        QWidget::setTabOrder(depthLineEdit, advancedGroupBox);
        QWidget::setTabOrder(advancedGroupBox, phaseCountLineEdit);
        QWidget::setTabOrder(phaseCountLineEdit, magLineEdit);
        QWidget::setTabOrder(magLineEdit, magTypeComboBox);
        QWidget::setTabOrder(magTypeComboBox, sendButton);
        QWidget::setTabOrder(sendButton, cancelButton);

        retranslateUi(OriginDialog);
        QObject::connect(sendButton, SIGNAL(clicked()), OriginDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginDialog);
    } // setupUi

    void retranslateUi(QDialog *OriginDialog)
    {
        OriginDialog->setWindowTitle(QCoreApplication::translate("OriginDialog", "Artificial Origin", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OriginDialog", "Origin", nullptr));
        depthLabel->setText(QCoreApplication::translate("OriginDialog", "Depth:", nullptr));
#if QT_CONFIG(tooltip)
        lonLabel->setToolTip(QCoreApplication::translate("OriginDialog", "Longitude", nullptr));
#endif // QT_CONFIG(tooltip)
        lonLabel->setText(QCoreApplication::translate("OriginDialog", "Lon:", nullptr));
#if QT_CONFIG(tooltip)
        latLabel->setToolTip(QCoreApplication::translate("OriginDialog", "Latitude", nullptr));
#endif // QT_CONFIG(tooltip)
        latLabel->setText(QCoreApplication::translate("OriginDialog", "Lat:", nullptr));
        timeLabel->setText(QCoreApplication::translate("OriginDialog", "Time:", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("OriginDialog", "yyyy-MM-dd hh:mm:ss", nullptr));
        latUnitLabel->setText(QCoreApplication::translate("OriginDialog", "deg", nullptr));
        lonUnitLabel->setText(QCoreApplication::translate("OriginDialog", "deg", nullptr));
        depthUnitLabel->setText(QCoreApplication::translate("OriginDialog", "km", nullptr));
        advancedGroupBox->setTitle(QCoreApplication::translate("OriginDialog", "Advanced", nullptr));
        magTypeLabel->setText(QCoreApplication::translate("OriginDialog", "Magnitude Type", nullptr));
        magLabel->setText(QCoreApplication::translate("OriginDialog", "Magnitude", nullptr));
#if QT_CONFIG(tooltip)
        phaseCountLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        phaseCountLabel->setText(QCoreApplication::translate("OriginDialog", "PhaseCount", nullptr));
        sendButton->setText(QCoreApplication::translate("OriginDialog", "Create", nullptr));
        cancelButton->setText(QCoreApplication::translate("OriginDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OriginDialog: public Ui_OriginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINDIALOG_H
