/********************************************************************************
** Form generated from reading UI file 'originlocatorview_comment.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINLOCATORVIEW_COMMENT_H
#define UI_ORIGINLOCATORVIEW_COMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginCommentOptions
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *labelHeadline;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QLabel *labelAuthor;
    QSpacerItem *spacerItem1;
    QLabel *labelDate;
    QLabel *labelComment;
    QSpacerItem *spacerItem2;
    QFrame *frame;
    QTextEdit *editComment;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem3;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginCommentOptions)
    {
        if (OriginCommentOptions->objectName().isEmpty())
            OriginCommentOptions->setObjectName(QString::fromUtf8("OriginCommentOptions"));
        OriginCommentOptions->resize(380, 231);
        vboxLayout = new QVBoxLayout(OriginCommentOptions);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(12);
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
        labelHeadline = new QLabel(OriginCommentOptions);
        labelHeadline->setObjectName(QString::fromUtf8("labelHeadline"));
        labelHeadline->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelHeadline->sizePolicy().hasHeightForWidth());
        labelHeadline->setSizePolicy(sizePolicy);
        labelHeadline->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/comment.png")));
        labelHeadline->setScaledContents(false);

        vboxLayout1->addWidget(labelHeadline);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
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
        labelAuthor = new QLabel(OriginCommentOptions);
        labelAuthor->setObjectName(QString::fromUtf8("labelAuthor"));

        hboxLayout1->addWidget(labelAuthor);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        labelDate = new QLabel(OriginCommentOptions);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));

        hboxLayout1->addWidget(labelDate);


        vboxLayout2->addLayout(hboxLayout1);

        labelComment = new QLabel(OriginCommentOptions);
        labelComment->setObjectName(QString::fromUtf8("labelComment"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelComment->sizePolicy().hasHeightForWidth());
        labelComment->setSizePolicy(sizePolicy1);
        labelComment->setWordWrap(true);

        vboxLayout2->addWidget(labelComment);

        spacerItem2 = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        frame = new QFrame(OriginCommentOptions);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frame);

        editComment = new QTextEdit(OriginCommentOptions);
        editComment->setObjectName(QString::fromUtf8("editComment"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(editComment->sizePolicy().hasHeightForWidth());
        editComment->setSizePolicy(sizePolicy2);
        editComment->setFrameShape(QFrame::StyledPanel);
        editComment->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(editComment);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem3 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        okButton = new QPushButton(OriginCommentOptions);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(OriginCommentOptions);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(OriginCommentOptions);
        QObject::connect(okButton, SIGNAL(clicked()), OriginCommentOptions, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginCommentOptions, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginCommentOptions);
    } // setupUi

    void retranslateUi(QDialog *OriginCommentOptions)
    {
        OriginCommentOptions->setWindowTitle(QCoreApplication::translate("OriginCommentOptions", "Edit comment", nullptr));
        labelHeadline->setText(QString());
        labelAuthor->setText(QString());
        labelDate->setText(QString());
        labelComment->setText(QCoreApplication::translate("OriginCommentOptions", "...", nullptr));
        okButton->setText(QCoreApplication::translate("OriginCommentOptions", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("OriginCommentOptions", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OriginCommentOptions: public Ui_OriginCommentOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINLOCATORVIEW_COMMENT_H
