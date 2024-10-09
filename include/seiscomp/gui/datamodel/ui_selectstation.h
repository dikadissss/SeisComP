/********************************************************************************
** Form generated from reading UI file 'selectstation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSTATION_H
#define UI_SELECTSTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectStation
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *stationListLabel;
    QLineEdit *stationLineEdit;
    QTableView *table;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *btnAdd;

    void setupUi(QDialog *SelectStation)
    {
        if (SelectStation->objectName().isEmpty())
            SelectStation->setObjectName(QString::fromUtf8("SelectStation"));
        SelectStation->resize(265, 357);
        vboxLayout = new QVBoxLayout(SelectStation);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        stationListLabel = new QLabel(SelectStation);
        stationListLabel->setObjectName(QString::fromUtf8("stationListLabel"));

        vboxLayout->addWidget(stationListLabel);

        stationLineEdit = new QLineEdit(SelectStation);
        stationLineEdit->setObjectName(QString::fromUtf8("stationLineEdit"));

        vboxLayout->addWidget(stationLineEdit);

        table = new QTableView(SelectStation);
        table->setObjectName(QString::fromUtf8("table"));
        table->setAlternatingRowColors(true);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(table);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnAdd = new QPushButton(SelectStation);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        hboxLayout->addWidget(btnAdd);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(SelectStation);
        QObject::connect(btnAdd, SIGNAL(clicked()), SelectStation, SLOT(accept()));

        QMetaObject::connectSlotsByName(SelectStation);
    } // setupUi

    void retranslateUi(QDialog *SelectStation)
    {
        SelectStation->setWindowTitle(QCoreApplication::translate("SelectStation", "Add station(s)", nullptr));
        stationListLabel->setText(QCoreApplication::translate("SelectStation", "Station List:", nullptr));
        btnAdd->setText(QCoreApplication::translate("SelectStation", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectStation: public Ui_SelectStation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSTATION_H
