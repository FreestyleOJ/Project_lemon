/********************************************************************************
** Form generated from reading UI file 'opencontestdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCONTESTDIALOG_H
#define UI_OPENCONTESTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include "opencontestwidget.h"

QT_BEGIN_NAMESPACE

class Ui_OpenContestDialog
{
public:
    QVBoxLayout *verticalLayout;
    OpenContestWidget *openContestWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OpenContestDialog)
    {
        if (OpenContestDialog->objectName().isEmpty())
            OpenContestDialog->setObjectName(QString::fromUtf8("OpenContestDialog"));
        OpenContestDialog->resize(450, 320);
        OpenContestDialog->setMinimumSize(QSize(450, 320));
        verticalLayout = new QVBoxLayout(OpenContestDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        openContestWidget = new OpenContestWidget(OpenContestDialog);
        openContestWidget->setObjectName(QString::fromUtf8("openContestWidget"));

        verticalLayout->addWidget(openContestWidget);

        buttonBox = new QDialogButtonBox(OpenContestDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OpenContestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OpenContestDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OpenContestDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OpenContestDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenContestDialog)
    {
        OpenContestDialog->setWindowTitle(QApplication::translate("OpenContestDialog", "Open an Existing Contest", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OpenContestDialog: public Ui_OpenContestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCONTESTDIALOG_H
