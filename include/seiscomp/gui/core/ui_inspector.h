/********************************************************************************
** Form generated from reading UI file 'inspector.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSPECTOR_H
#define UI_INSPECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inspector
{
public:
    QVBoxLayout *vboxLayout;
    QToolButton *buttonBack;
    QLineEdit *editFilter;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Inspector)
    {
        if (Inspector->objectName().isEmpty())
            Inspector->setObjectName(QString::fromUtf8("Inspector"));
        Inspector->resize(657, 498);
        vboxLayout = new QVBoxLayout(Inspector);
        vboxLayout->setSpacing(4);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        buttonBack = new QToolButton(Inspector);
        buttonBack->setObjectName(QString::fromUtf8("buttonBack"));
        buttonBack->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/undo.png"));
        buttonBack->setIcon(icon);

        vboxLayout->addWidget(buttonBack);

        editFilter = new QLineEdit(Inspector);
        editFilter->setObjectName(QString::fromUtf8("editFilter"));

        vboxLayout->addWidget(editFilter);

        splitter = new QSplitter(Inspector);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        splitter->addWidget(treeWidget);
        tableWidget = new QTableWidget(splitter);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        splitter->addWidget(tableWidget);

        vboxLayout->addWidget(splitter);


        retranslateUi(Inspector);

        QMetaObject::connectSlotsByName(Inspector);
    } // setupUi

    void retranslateUi(QWidget *Inspector)
    {
        Inspector->setWindowTitle(QCoreApplication::translate("Inspector", "Inspector", nullptr));
#if QT_CONFIG(tooltip)
        buttonBack->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        buttonBack->setText(QCoreApplication::translate("Inspector", "...", nullptr));
#if QT_CONFIG(shortcut)
        buttonBack->setShortcut(QCoreApplication::translate("Inspector", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        editFilter->setToolTip(QCoreApplication::translate("Inspector", "Define an object filter, e.g. 'Network.code=GE'. Wildcards are allowed to match a value.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class Inspector: public Ui_Inspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSPECTOR_H
