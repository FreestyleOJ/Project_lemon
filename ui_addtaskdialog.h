/********************************************************************************
** Form generated from reading UI file 'addtaskdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKDIALOG_H
#define UI_ADDTASKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddTaskDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *taskLabel;
    QComboBox *taskBox;
    QLabel *fullScoreLabel;
    QLineEdit *fullScore;
    QLabel *timeLimitLabel;
    QLineEdit *timeLimit;
    QLabel *msLabel;
    QLabel *memoryLimitLabel;
    QLineEdit *memoryLimit;
    QLabel *mbLabel;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AddTaskDialog)
    {
        if (AddTaskDialog->objectName().isEmpty())
            AddTaskDialog->setObjectName(QString::fromUtf8("AddTaskDialog"));
        AddTaskDialog->resize(261, 177);
        AddTaskDialog->setMinimumSize(QSize(197, 164));
        gridLayout = new QGridLayout(AddTaskDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(10);
        taskLabel = new QLabel(AddTaskDialog);
        taskLabel->setObjectName(QString::fromUtf8("taskLabel"));
        taskLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));

        gridLayout->addWidget(taskLabel, 0, 0, 1, 1);

        taskBox = new QComboBox(AddTaskDialog);
        taskBox->setObjectName(QString::fromUtf8("taskBox"));
        taskBox->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(taskBox, 0, 1, 1, 2);

        fullScoreLabel = new QLabel(AddTaskDialog);
        fullScoreLabel->setObjectName(QString::fromUtf8("fullScoreLabel"));
        fullScoreLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));

        gridLayout->addWidget(fullScoreLabel, 1, 0, 1, 1);

        fullScore = new QLineEdit(AddTaskDialog);
        fullScore->setObjectName(QString::fromUtf8("fullScore"));
        fullScore->setMaximumSize(QSize(75, 22));
        fullScore->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(fullScore, 1, 1, 1, 1);

        timeLimitLabel = new QLabel(AddTaskDialog);
        timeLimitLabel->setObjectName(QString::fromUtf8("timeLimitLabel"));
        timeLimitLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));

        gridLayout->addWidget(timeLimitLabel, 2, 0, 1, 1);

        timeLimit = new QLineEdit(AddTaskDialog);
        timeLimit->setObjectName(QString::fromUtf8("timeLimit"));
        timeLimit->setMaximumSize(QSize(75, 22));
        timeLimit->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(timeLimit, 2, 1, 1, 1);

        msLabel = new QLabel(AddTaskDialog);
        msLabel->setObjectName(QString::fromUtf8("msLabel"));
        msLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(msLabel, 2, 2, 1, 1);

        memoryLimitLabel = new QLabel(AddTaskDialog);
        memoryLimitLabel->setObjectName(QString::fromUtf8("memoryLimitLabel"));
        memoryLimitLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));

        gridLayout->addWidget(memoryLimitLabel, 3, 0, 1, 1);

        memoryLimit = new QLineEdit(AddTaskDialog);
        memoryLimit->setObjectName(QString::fromUtf8("memoryLimit"));
        memoryLimit->setMaximumSize(QSize(75, 22));
        memoryLimit->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(memoryLimit, 3, 1, 1, 1);

        mbLabel = new QLabel(AddTaskDialog);
        mbLabel->setObjectName(QString::fromUtf8("mbLabel"));
        mbLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(mbLabel, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(AddTaskDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(33, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);


        retranslateUi(AddTaskDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddTaskDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddTaskDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddTaskDialog);
    } // setupUi

    void retranslateUi(QDialog *AddTaskDialog)
    {
        AddTaskDialog->setWindowTitle(QApplication::translate("AddTaskDialog", "Add Task", 0, QApplication::UnicodeUTF8));
        taskLabel->setText(QApplication::translate("AddTaskDialog", "Task", 0, QApplication::UnicodeUTF8));
        fullScoreLabel->setText(QApplication::translate("AddTaskDialog", "Full Score", 0, QApplication::UnicodeUTF8));
        timeLimitLabel->setText(QApplication::translate("AddTaskDialog", "Time Limit", 0, QApplication::UnicodeUTF8));
        msLabel->setText(QApplication::translate("AddTaskDialog", "ms", 0, QApplication::UnicodeUTF8));
        memoryLimitLabel->setText(QApplication::translate("AddTaskDialog", "Memory Limit", 0, QApplication::UnicodeUTF8));
        mbLabel->setText(QApplication::translate("AddTaskDialog", "MB", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddTaskDialog: public Ui_AddTaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKDIALOG_H
