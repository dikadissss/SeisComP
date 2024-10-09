/********************************************************************************
** Form generated from reading UI file 'aboutwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIDGET_H
#define UI_ABOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *labelVersion;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QWidget *tab_2;
    QVBoxLayout *vboxLayout1;
    QTextEdit *textLicense;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *buttonOk;

    void setupUi(QWidget *AboutWidget)
    {
        if (AboutWidget->objectName().isEmpty())
            AboutWidget->setObjectName(QString::fromUtf8("AboutWidget"));
        AboutWidget->resize(357, 292);
        vboxLayout = new QVBoxLayout(AboutWidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(AboutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        labelVersion = new QLabel(tab);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));

        gridLayout->addWidget(labelVersion, 0, 1, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        spacerItem = new QSpacerItem(351, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 6, 0, 1, 2);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        vboxLayout1 = new QVBoxLayout(tab_2);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        textLicense = new QTextEdit(tab_2);
        textLicense->setObjectName(QString::fromUtf8("textLicense"));
        textLicense->setReadOnly(true);

        vboxLayout1->addWidget(textLicense);

        tabWidget->addTab(tab_2, QString());

        vboxLayout->addWidget(tabWidget);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        buttonOk = new QPushButton(AboutWidget);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        hboxLayout->addWidget(buttonOk);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(AboutWidget);
        QObject::connect(buttonOk, SIGNAL(clicked()), AboutWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutWidget);
    } // setupUi

    void retranslateUi(QWidget *AboutWidget)
    {
        AboutWidget->setWindowTitle(QCoreApplication::translate("AboutWidget", "About SeisComP::GUI", nullptr));
        label_3->setText(QCoreApplication::translate("AboutWidget", "GFZ Potsdam", nullptr));
        labelVersion->setText(QCoreApplication::translate("AboutWidget", "-", nullptr));
        label_6->setText(QCoreApplication::translate("AboutWidget", "German Research Centre for Geosciences", nullptr));
        label_7->setText(QCoreApplication::translate("AboutWidget", "gempa GmbH (http://www.gempa.de)", nullptr));
        label->setText(QCoreApplication::translate("AboutWidget", "Version:", nullptr));
        label_5->setText(QCoreApplication::translate("AboutWidget", "geofon_dc@gfz-potsdam.de", nullptr));
        label_4->setText(QCoreApplication::translate("AboutWidget", "Contact:", nullptr));
        label_2->setText(QCoreApplication::translate("AboutWidget", "Authors:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AboutWidget", "About", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AboutWidget", "License", nullptr));
        buttonOk->setText(QCoreApplication::translate("AboutWidget", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutWidget: public Ui_AboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIDGET_H
