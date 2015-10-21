/********************************************************************************
** Form generated from reading UI file 'judgingdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUDGINGDIALOG_H
#define UI_JUDGINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JudgingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *logViewer;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;

    void setupUi(QDialog *JudgingDialog)
    {
        if (JudgingDialog->objectName().isEmpty())
            JudgingDialog->setObjectName(QString::fromUtf8("JudgingDialog"));
        JudgingDialog->setWindowModality(Qt::WindowModal);
        JudgingDialog->resize(448, 263);
        JudgingDialog->setMinimumSize(QSize(448, 263));
        verticalLayout = new QVBoxLayout(JudgingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logViewer = new QTextBrowser(JudgingDialog);
        logViewer->setObjectName(QString::fromUtf8("logViewer"));

        verticalLayout->addWidget(logViewer);

        progressBar = new QProgressBar(JudgingDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(JudgingDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(JudgingDialog);

        QMetaObject::connectSlotsByName(JudgingDialog);
    } // setupUi

    void retranslateUi(QDialog *JudgingDialog)
    {
        JudgingDialog->setWindowTitle(QApplication::translate("JudgingDialog", "Judging", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("JudgingDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JudgingDialog: public Ui_JudgingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUDGINGDIALOG_H
