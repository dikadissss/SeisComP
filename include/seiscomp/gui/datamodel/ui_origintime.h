/********************************************************************************
** Form generated from reading UI file 'origintime.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINTIME_H
#define UI_ORIGINTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginTimeDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *vboxLayout2;
    QLabel *labelLatitude;
    QLabel *labelLongitude;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout1;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginTimeDialog)
    {
        if (OriginTimeDialog->objectName().isEmpty())
            OriginTimeDialog->setObjectName(QString::fromUtf8("OriginTimeDialog"));
        OriginTimeDialog->resize(229, 209);
        vboxLayout = new QVBoxLayout(OriginTimeDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(OriginTimeDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout1->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout1->addWidget(label_2);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        labelLatitude = new QLabel(groupBox);
        labelLatitude->setObjectName(QString::fromUtf8("labelLatitude"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLatitude->sizePolicy().hasHeightForWidth());
        labelLatitude->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        labelLatitude->setFont(font1);

        vboxLayout2->addWidget(labelLatitude);

        labelLongitude = new QLabel(groupBox);
        labelLongitude->setObjectName(QString::fromUtf8("labelLongitude"));
        sizePolicy.setHeightForWidth(labelLongitude->sizePolicy().hasHeightForWidth());
        labelLongitude->setSizePolicy(sizePolicy);
        labelLongitude->setFont(font1);

        vboxLayout2->addWidget(labelLongitude);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(OriginTimeDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout1 = new QHBoxLayout(groupBox_2);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        hboxLayout1->addWidget(timeEdit);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCurrentSection(QDateTimeEdit::DaySection);

        hboxLayout1->addWidget(dateEdit);


        vboxLayout->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(211, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        okButton = new QPushButton(OriginTimeDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(OriginTimeDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(OriginTimeDialog);
        QObject::connect(okButton, SIGNAL(clicked()), OriginTimeDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginTimeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *OriginTimeDialog)
    {
        OriginTimeDialog->setWindowTitle(QCoreApplication::translate("OriginTimeDialog", "OriginTime", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OriginTimeDialog", "Location", nullptr));
        label->setText(QCoreApplication::translate("OriginTimeDialog", "Latitude:", nullptr));
        label_2->setText(QCoreApplication::translate("OriginTimeDialog", "Longitude:", nullptr));
        labelLatitude->setText(QCoreApplication::translate("OriginTimeDialog", "--.- \302\260", nullptr));
        labelLongitude->setText(QCoreApplication::translate("OriginTimeDialog", "--.- \302\260", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("OriginTimeDialog", "Time", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("OriginTimeDialog", "hh:mm:ss", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("OriginTimeDialog", "dd-MM-yyyy", nullptr));
        okButton->setText(QCoreApplication::translate("OriginTimeDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("OriginTimeDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OriginTimeDialog: public Ui_OriginTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINTIME_H
