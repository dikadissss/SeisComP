/********************************************************************************
** Form generated from reading UI file 'questionbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONBOX_H
#define UI_QUESTIONBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuestionBox
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *labelIcon;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout2;
    QLabel *labelMessage;
    QLabel *labelInfo;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout3;
    QCheckBox *checkBox;
    QHBoxLayout *hboxLayout1;
    QPushButton *yesButton;
    QSpacerItem *spacerItem2;
    QPushButton *noButton;

    void setupUi(QDialog *QuestionBox)
    {
        if (QuestionBox->objectName().isEmpty())
            QuestionBox->setObjectName(QString::fromUtf8("QuestionBox"));
        QuestionBox->resize(231, 131);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QuestionBox->sizePolicy().hasHeightForWidth());
        QuestionBox->setSizePolicy(sizePolicy);
        QuestionBox->setSizeGripEnabled(false);
        QuestionBox->setModal(true);
        vboxLayout = new QVBoxLayout(QuestionBox);
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
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        labelIcon = new QLabel(QuestionBox);
        labelIcon->setObjectName(QString::fromUtf8("labelIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelIcon->sizePolicy().hasHeightForWidth());
        labelIcon->setSizePolicy(sizePolicy1);
        labelIcon->setFrameShape(QFrame::NoFrame);

        vboxLayout1->addWidget(labelIcon);

        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        labelMessage = new QLabel(QuestionBox);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        sizePolicy.setHeightForWidth(labelMessage->sizePolicy().hasHeightForWidth());
        labelMessage->setSizePolicy(sizePolicy);
        labelMessage->setFrameShape(QFrame::NoFrame);

        vboxLayout2->addWidget(labelMessage);

        labelInfo = new QLabel(QuestionBox);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        sizePolicy.setHeightForWidth(labelInfo->sizePolicy().hasHeightForWidth());
        labelInfo->setSizePolicy(sizePolicy);
        labelInfo->setMinimumSize(QSize(0, 0));
        labelInfo->setFrameShape(QFrame::NoFrame);

        vboxLayout2->addWidget(labelInfo);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        vboxLayout->addItem(spacerItem1);

        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        checkBox = new QCheckBox(QuestionBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        vboxLayout3->addWidget(checkBox);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        yesButton = new QPushButton(QuestionBox);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));

        hboxLayout1->addWidget(yesButton);

        spacerItem2 = new QSpacerItem(54, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        noButton = new QPushButton(QuestionBox);
        noButton->setObjectName(QString::fromUtf8("noButton"));

        hboxLayout1->addWidget(noButton);


        vboxLayout3->addLayout(hboxLayout1);


        vboxLayout->addLayout(vboxLayout3);


        retranslateUi(QuestionBox);
        QObject::connect(yesButton, SIGNAL(clicked()), QuestionBox, SLOT(accept()));
        QObject::connect(noButton, SIGNAL(clicked()), QuestionBox, SLOT(reject()));

        QMetaObject::connectSlotsByName(QuestionBox);
    } // setupUi

    void retranslateUi(QDialog *QuestionBox)
    {
        QuestionBox->setWindowTitle(QCoreApplication::translate("QuestionBox", "Question", nullptr));
        labelIcon->setText(QString());
        labelMessage->setText(QString());
        labelInfo->setText(QString());
        checkBox->setText(QCoreApplication::translate("QuestionBox", "Do not show this message again", nullptr));
        yesButton->setText(QCoreApplication::translate("QuestionBox", "Yes", nullptr));
        noButton->setText(QCoreApplication::translate("QuestionBox", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionBox: public Ui_QuestionBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONBOX_H
