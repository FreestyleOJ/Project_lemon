/********************************************************************************
** Form generated from reading UI file 'newcontestwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCONTESTWIDGET_H
#define UI_NEWCONTESTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewContestWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *contestTitle;
    QLabel *label_2;
    QLineEdit *savingName;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *contestPath;
    QToolButton *selectButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NewContestWidget)
    {
        if (NewContestWidget->objectName().isEmpty())
            NewContestWidget->setObjectName(QString::fromUtf8("NewContestWidget"));
        NewContestWidget->resize(392, 290);
        verticalLayout = new QVBoxLayout(NewContestWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(15);
        label = new QLabel(NewContestWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        contestTitle = new QLineEdit(NewContestWidget);
        contestTitle->setObjectName(QString::fromUtf8("contestTitle"));

        gridLayout->addWidget(contestTitle, 0, 1, 1, 1);

        label_2 = new QLabel(NewContestWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        savingName = new QLineEdit(NewContestWidget);
        savingName->setObjectName(QString::fromUtf8("savingName"));

        gridLayout->addWidget(savingName, 1, 1, 1, 1);

        label_3 = new QLabel(NewContestWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        contestPath = new QLineEdit(NewContestWidget);
        contestPath->setObjectName(QString::fromUtf8("contestPath"));

        horizontalLayout->addWidget(contestPath);

        selectButton = new QToolButton(NewContestWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(selectButton);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 168, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(NewContestWidget);

        QMetaObject::connectSlotsByName(NewContestWidget);
    } // setupUi

    void retranslateUi(QWidget *NewContestWidget)
    {
        NewContestWidget->setWindowTitle(QApplication::translate("NewContestWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewContestWidget", "Contest Title", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewContestWidget", "Saving Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewContestWidget", "Contest Path", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewContestWidget: public Ui_NewContestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCONTESTWIDGET_H
