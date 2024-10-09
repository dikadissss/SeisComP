/********************************************************************************
** Form generated from reading UI file 'mergeorigins.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERGEORIGINS_H
#define UI_MERGEORIGINS_H

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

class Ui_MergeOrigins
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *labelInfo;
    QCheckBox *checkAllAgencies;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *MergeOrigins)
    {
        if (MergeOrigins->objectName().isEmpty())
            MergeOrigins->setObjectName(QString::fromUtf8("MergeOrigins"));
        MergeOrigins->resize(411, 182);
        vboxLayout = new QVBoxLayout(MergeOrigins);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        labelInfo = new QLabel(MergeOrigins);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelInfo->setWordWrap(true);

        vboxLayout->addWidget(labelInfo);

        checkAllAgencies = new QCheckBox(MergeOrigins);
        checkAllAgencies->setObjectName(QString::fromUtf8("checkAllAgencies"));

        vboxLayout->addWidget(checkAllAgencies);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        okButton = new QPushButton(MergeOrigins);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(MergeOrigins);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(MergeOrigins);
        QObject::connect(okButton, SIGNAL(clicked()), MergeOrigins, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), MergeOrigins, SLOT(reject()));

        QMetaObject::connectSlotsByName(MergeOrigins);
    } // setupUi

    void retranslateUi(QDialog *MergeOrigins)
    {
        MergeOrigins->setWindowTitle(QCoreApplication::translate("MergeOrigins", "Merge origins", nullptr));
        labelInfo->setText(QCoreApplication::translate("MergeOrigins", "%1 origins are selected to be merged. Picks are not associated with the result more than once. The first associated pick and its defined phase is taken. If the same pick is associated with a successive origin in the merge list it is ignored. In a drag and drop operation the drop target is always the first element in the merge list. ", nullptr));
        checkAllAgencies->setText(QCoreApplication::translate("MergeOrigins", "Merge picks from all agencies instead of using only own picks.", nullptr));
        okButton->setText(QCoreApplication::translate("MergeOrigins", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("MergeOrigins", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MergeOrigins: public Ui_MergeOrigins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEORIGINS_H
