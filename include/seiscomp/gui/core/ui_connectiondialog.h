/********************************************************************************
** Form generated from reading UI file 'connectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONDIALOG_H
#define UI_CONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectionDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *btnClose;
    QGroupBox *groupDatabase;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout1;
    QPushButton *btnDbSwitchToReported;
    QSpacerItem *spacerItem1;
    QPushButton *btnDbConnect;
    QComboBox *comboDbType;
    QLineEdit *editDbConnection;
    QLabel *labelDbType;
    QLabel *labelDbConnection;
    QLabel *label_7;
    QLineEdit *labelDbReported;
    QSplitter *splitter;
    QGroupBox *groupMessaging;
    QGridLayout *gridLayout2;
    QLabel *label_4;
    QSpinBox *timeoutSpinBox;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem2;
    QPushButton *btnConnect;
    QLineEdit *editPrimaryGroup;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *editServer;
    QLineEdit *editUser;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editPeerCertificate;
    QToolButton *btnPeerCertificateOpen;
    QGroupBox *groupSubscriptions;
    QVBoxLayout *vboxLayout;
    QListWidget *listSubscriptions;
    QHBoxLayout *hboxLayout3;
    QPushButton *btnSelectAll;
    QSpacerItem *spacerItem3;
    QPushButton *btnDeselectAll;

    void setupUi(QDialog *ConnectionDialog)
    {
        if (ConnectionDialog->objectName().isEmpty())
            ConnectionDialog->setObjectName(QString::fromUtf8("ConnectionDialog"));
        ConnectionDialog->resize(868, 652);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConnectionDialog->sizePolicy().hasHeightForWidth());
        ConnectionDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ConnectionDialog);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(261, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnClose = new QPushButton(ConnectionDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        hboxLayout->addWidget(btnClose);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        groupDatabase = new QGroupBox(ConnectionDialog);
        groupDatabase->setObjectName(QString::fromUtf8("groupDatabase"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupDatabase->sizePolicy().hasHeightForWidth());
        groupDatabase->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupDatabase);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        btnDbSwitchToReported = new QPushButton(groupDatabase);
        btnDbSwitchToReported->setObjectName(QString::fromUtf8("btnDbSwitchToReported"));
        btnDbSwitchToReported->setEnabled(false);

        hboxLayout1->addWidget(btnDbSwitchToReported);

        spacerItem1 = new QSpacerItem(71, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        btnDbConnect = new QPushButton(groupDatabase);
        btnDbConnect->setObjectName(QString::fromUtf8("btnDbConnect"));

        hboxLayout1->addWidget(btnDbConnect);


        gridLayout1->addLayout(hboxLayout1, 3, 1, 1, 1);

        comboDbType = new QComboBox(groupDatabase);
        comboDbType->setObjectName(QString::fromUtf8("comboDbType"));
        comboDbType->setModelColumn(0);

        gridLayout1->addWidget(comboDbType, 0, 1, 1, 1);

        editDbConnection = new QLineEdit(groupDatabase);
        editDbConnection->setObjectName(QString::fromUtf8("editDbConnection"));

        gridLayout1->addWidget(editDbConnection, 1, 1, 1, 1);

        labelDbType = new QLabel(groupDatabase);
        labelDbType->setObjectName(QString::fromUtf8("labelDbType"));

        gridLayout1->addWidget(labelDbType, 0, 0, 1, 1);

        labelDbConnection = new QLabel(groupDatabase);
        labelDbConnection->setObjectName(QString::fromUtf8("labelDbConnection"));

        gridLayout1->addWidget(labelDbConnection, 1, 0, 1, 1);

        label_7 = new QLabel(groupDatabase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 2, 0, 1, 1);

        labelDbReported = new QLineEdit(groupDatabase);
        labelDbReported->setObjectName(QString::fromUtf8("labelDbReported"));
        labelDbReported->setReadOnly(true);

        gridLayout1->addWidget(labelDbReported, 2, 1, 1, 1);


        gridLayout->addWidget(groupDatabase, 1, 0, 1, 1);

        splitter = new QSplitter(ConnectionDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupMessaging = new QGroupBox(splitter);
        groupMessaging->setObjectName(QString::fromUtf8("groupMessaging"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupMessaging->sizePolicy().hasHeightForWidth());
        groupMessaging->setSizePolicy(sizePolicy2);
        gridLayout2 = new QGridLayout(groupMessaging);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_4 = new QLabel(groupMessaging);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout2->addWidget(label_4, 2, 0, 1, 1);

        timeoutSpinBox = new QSpinBox(groupMessaging);
        timeoutSpinBox->setObjectName(QString::fromUtf8("timeoutSpinBox"));

        gridLayout2->addWidget(timeoutSpinBox, 2, 1, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        btnConnect = new QPushButton(groupMessaging);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        hboxLayout2->addWidget(btnConnect);


        gridLayout2->addLayout(hboxLayout2, 6, 0, 1, 2);

        editPrimaryGroup = new QLineEdit(groupMessaging);
        editPrimaryGroup->setObjectName(QString::fromUtf8("editPrimaryGroup"));

        gridLayout2->addWidget(editPrimaryGroup, 3, 1, 1, 1);

        label_5 = new QLabel(groupMessaging);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout2->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(groupMessaging);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 1, 0, 1, 1);

        editServer = new QLineEdit(groupMessaging);
        editServer->setObjectName(QString::fromUtf8("editServer"));

        gridLayout2->addWidget(editServer, 1, 1, 1, 1);

        editUser = new QLineEdit(groupMessaging);
        editUser->setObjectName(QString::fromUtf8("editUser"));

        gridLayout2->addWidget(editUser, 0, 1, 1, 1);

        label = new QLabel(groupMessaging);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(verticalSpacer, 5, 1, 1, 1);

        label_3 = new QLabel(groupMessaging);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout2->addWidget(label_3, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editPeerCertificate = new QLineEdit(groupMessaging);
        editPeerCertificate->setObjectName(QString::fromUtf8("editPeerCertificate"));
        sizePolicy2.setHeightForWidth(editPeerCertificate->sizePolicy().hasHeightForWidth());
        editPeerCertificate->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(editPeerCertificate);

        btnPeerCertificateOpen = new QToolButton(groupMessaging);
        btnPeerCertificateOpen->setObjectName(QString::fromUtf8("btnPeerCertificateOpen"));

        horizontalLayout->addWidget(btnPeerCertificateOpen);


        gridLayout2->addLayout(horizontalLayout, 4, 1, 1, 1);

        splitter->addWidget(groupMessaging);
        groupSubscriptions = new QGroupBox(splitter);
        groupSubscriptions->setObjectName(QString::fromUtf8("groupSubscriptions"));
        groupSubscriptions->setEnabled(false);
        sizePolicy2.setHeightForWidth(groupSubscriptions->sizePolicy().hasHeightForWidth());
        groupSubscriptions->setSizePolicy(sizePolicy2);
        vboxLayout = new QVBoxLayout(groupSubscriptions);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        listSubscriptions = new QListWidget(groupSubscriptions);
        listSubscriptions->setObjectName(QString::fromUtf8("listSubscriptions"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listSubscriptions->sizePolicy().hasHeightForWidth());
        listSubscriptions->setSizePolicy(sizePolicy3);

        vboxLayout->addWidget(listSubscriptions);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        btnSelectAll = new QPushButton(groupSubscriptions);
        btnSelectAll->setObjectName(QString::fromUtf8("btnSelectAll"));

        hboxLayout3->addWidget(btnSelectAll);

        spacerItem3 = new QSpacerItem(70, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        btnDeselectAll = new QPushButton(groupSubscriptions);
        btnDeselectAll->setObjectName(QString::fromUtf8("btnDeselectAll"));

        hboxLayout3->addWidget(btnDeselectAll);


        vboxLayout->addLayout(hboxLayout3);

        splitter->addWidget(groupSubscriptions);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        QWidget::setTabOrder(editUser, editServer);
        QWidget::setTabOrder(editServer, timeoutSpinBox);
        QWidget::setTabOrder(timeoutSpinBox, editPrimaryGroup);
        QWidget::setTabOrder(editPrimaryGroup, btnConnect);
        QWidget::setTabOrder(btnConnect, listSubscriptions);
        QWidget::setTabOrder(listSubscriptions, comboDbType);
        QWidget::setTabOrder(comboDbType, editDbConnection);
        QWidget::setTabOrder(editDbConnection, btnDbSwitchToReported);
        QWidget::setTabOrder(btnDbSwitchToReported, btnDbConnect);
        QWidget::setTabOrder(btnDbConnect, btnClose);

        retranslateUi(ConnectionDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), ConnectionDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectionDialog)
    {
        ConnectionDialog->setWindowTitle(QCoreApplication::translate("ConnectionDialog", "Setup connection", nullptr));
        btnClose->setText(QCoreApplication::translate("ConnectionDialog", "Continue", nullptr));
        groupDatabase->setTitle(QCoreApplication::translate("ConnectionDialog", "Database", nullptr));
        btnDbSwitchToReported->setText(QCoreApplication::translate("ConnectionDialog", "Switch to reported", nullptr));
        btnDbConnect->setText(QCoreApplication::translate("ConnectionDialog", "Connect", nullptr));
        labelDbType->setText(QCoreApplication::translate("ConnectionDialog", "Type:", nullptr));
        labelDbConnection->setText(QCoreApplication::translate("ConnectionDialog", "Connection:", nullptr));
        label_7->setText(QCoreApplication::translate("ConnectionDialog", "Reported:", nullptr));
        groupMessaging->setTitle(QCoreApplication::translate("ConnectionDialog", "Messaging", nullptr));
        label_4->setText(QCoreApplication::translate("ConnectionDialog", "Timeout in sec.:", nullptr));
        btnConnect->setText(QCoreApplication::translate("ConnectionDialog", "Connect", nullptr));
        label_5->setText(QCoreApplication::translate("ConnectionDialog", "Primary group:", nullptr));
        label_2->setText(QCoreApplication::translate("ConnectionDialog", "Server:", nullptr));
        editServer->setText(QCoreApplication::translate("ConnectionDialog", "localhost", nullptr));
        editUser->setText(QCoreApplication::translate("ConnectionDialog", "user", nullptr));
        label->setText(QCoreApplication::translate("ConnectionDialog", "User:", nullptr));
        label_3->setText(QCoreApplication::translate("ConnectionDialog", "Peer certificate:", nullptr));
#if QT_CONFIG(tooltip)
        btnPeerCertificateOpen->setToolTip(QCoreApplication::translate("ConnectionDialog", "Select peer certificate file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPeerCertificateOpen->setText(QCoreApplication::translate("ConnectionDialog", "...", nullptr));
        groupSubscriptions->setTitle(QCoreApplication::translate("ConnectionDialog", "Subscriptions", nullptr));
        btnSelectAll->setText(QCoreApplication::translate("ConnectionDialog", "Select All", nullptr));
        btnDeselectAll->setText(QCoreApplication::translate("ConnectionDialog", "Deselect All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionDialog: public Ui_ConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONDIALOG_H
