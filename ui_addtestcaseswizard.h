/********************************************************************************
** Form generated from reading UI file 'addtestcaseswizard.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTESTCASESWIZARD_H
#define UI_ADDTESTCASESWIZARD_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWizard>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_AddTestCasesWizard
{
public:
    QWizardPage *wizardPage1;
    QVBoxLayout *verticalLayout;
    QLabel *stepOneLabel;
    QGridLayout *gridLayout;
    QLabel *fullScoreLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *fullScore;
    QSpacerItem *horizontalSpacer;
    QLabel *timeLimitLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *timeLimit;
    QLabel *msLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *memoryLimitLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *memoryLimit;
    QLabel *mbLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWizardPage *wizardPage2;
    QVBoxLayout *verticalLayout_3;
    QLabel *stepTwoLabel;
    QGridLayout *gridLayout_2;
    QLabel *inputFilesPatternLabel;
    QLineEdit *inputFilesPattern;
    QLabel *outputFilesPatternLabel;
    QLineEdit *outputFilesPattern;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *argumentList;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QToolButton *addArgumentButton;
    QToolButton *deleteArgumentButton;
    QSpacerItem *verticalSpacer_3;
    QWizardPage *wizardPage3;
    QVBoxLayout *verticalLayout_4;
    QLabel *stepThreeLabel;
    QTreeWidget *testCasesViewer;

    void setupUi(QWizard *AddTestCasesWizard)
    {
        if (AddTestCasesWizard->objectName().isEmpty())
            AddTestCasesWizard->setObjectName(QString::fromUtf8("AddTestCasesWizard"));
        AddTestCasesWizard->resize(459, 372);
        AddTestCasesWizard->setMinimumSize(QSize(459, 372));
        AddTestCasesWizard->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        verticalLayout = new QVBoxLayout(wizardPage1);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stepOneLabel = new QLabel(wizardPage1);
        stepOneLabel->setObjectName(QString::fromUtf8("stepOneLabel"));
        stepOneLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));
        stepOneLabel->setWordWrap(true);

        verticalLayout->addWidget(stepOneLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(10);
        fullScoreLabel = new QLabel(wizardPage1);
        fullScoreLabel->setObjectName(QString::fromUtf8("fullScoreLabel"));
        fullScoreLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(fullScoreLabel, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        fullScore = new QLineEdit(wizardPage1);
        fullScore->setObjectName(QString::fromUtf8("fullScore"));
        fullScore->setMinimumSize(QSize(73, 22));
        fullScore->setMaximumSize(QSize(73, 22));
        fullScore->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        horizontalLayout_3->addWidget(fullScore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        timeLimitLabel = new QLabel(wizardPage1);
        timeLimitLabel->setObjectName(QString::fromUtf8("timeLimitLabel"));
        timeLimitLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(timeLimitLabel, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        timeLimit = new QLineEdit(wizardPage1);
        timeLimit->setObjectName(QString::fromUtf8("timeLimit"));
        timeLimit->setMinimumSize(QSize(58, 22));
        timeLimit->setMaximumSize(QSize(58, 22));
        timeLimit->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        horizontalLayout_2->addWidget(timeLimit);

        msLabel = new QLabel(wizardPage1);
        msLabel->setObjectName(QString::fromUtf8("msLabel"));
        msLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        horizontalLayout_2->addWidget(msLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        memoryLimitLabel = new QLabel(wizardPage1);
        memoryLimitLabel->setObjectName(QString::fromUtf8("memoryLimitLabel"));
        memoryLimitLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(memoryLimitLabel, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        memoryLimit = new QLineEdit(wizardPage1);
        memoryLimit->setObjectName(QString::fromUtf8("memoryLimit"));
        memoryLimit->setMinimumSize(QSize(58, 22));
        memoryLimit->setMaximumSize(QSize(58, 22));
        memoryLimit->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        horizontalLayout->addWidget(memoryLimit);

        mbLabel = new QLabel(wizardPage1);
        mbLabel->setObjectName(QString::fromUtf8("mbLabel"));
        mbLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        horizontalLayout->addWidget(mbLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        AddTestCasesWizard->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QString::fromUtf8("wizardPage2"));
        verticalLayout_3 = new QVBoxLayout(wizardPage2);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        stepTwoLabel = new QLabel(wizardPage2);
        stepTwoLabel->setObjectName(QString::fromUtf8("stepTwoLabel"));
        stepTwoLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));
        stepTwoLabel->setWordWrap(true);

        verticalLayout_3->addWidget(stepTwoLabel);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(9);
        inputFilesPatternLabel = new QLabel(wizardPage2);
        inputFilesPatternLabel->setObjectName(QString::fromUtf8("inputFilesPatternLabel"));
        inputFilesPatternLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_2->addWidget(inputFilesPatternLabel, 0, 0, 1, 1);

        inputFilesPattern = new QLineEdit(wizardPage2);
        inputFilesPattern->setObjectName(QString::fromUtf8("inputFilesPattern"));
        inputFilesPattern->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_2->addWidget(inputFilesPattern, 0, 1, 1, 1);

        outputFilesPatternLabel = new QLabel(wizardPage2);
        outputFilesPatternLabel->setObjectName(QString::fromUtf8("outputFilesPatternLabel"));
        outputFilesPatternLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_2->addWidget(outputFilesPatternLabel, 1, 0, 1, 1);

        outputFilesPattern = new QLineEdit(wizardPage2);
        outputFilesPattern->setObjectName(QString::fromUtf8("outputFilesPattern"));
        outputFilesPattern->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_2->addWidget(outputFilesPattern, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        argumentList = new QTableWidget(wizardPage2);
        if (argumentList->columnCount() < 2)
            argumentList->setColumnCount(2);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        argumentList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        argumentList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        argumentList->setObjectName(QString::fromUtf8("argumentList"));
        argumentList->setStyleSheet(QString::fromUtf8("font-size: 11pt;"));
        argumentList->setSelectionMode(QAbstractItemView::SingleSelection);
        argumentList->horizontalHeader()->setHighlightSections(false);
        argumentList->horizontalHeader()->setMinimumSectionSize(70);
        argumentList->horizontalHeader()->setStretchLastSection(true);
        argumentList->verticalHeader()->setVisible(false);
        argumentList->verticalHeader()->setDefaultSectionSize(25);
        argumentList->verticalHeader()->setMinimumSectionSize(25);

        horizontalLayout_4->addWidget(argumentList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        addArgumentButton = new QToolButton(wizardPage2);
        addArgumentButton->setObjectName(QString::fromUtf8("addArgumentButton"));
        addArgumentButton->setMinimumSize(QSize(27, 27));
        addArgumentButton->setMaximumSize(QSize(27, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addArgumentButton->setIcon(icon);

        verticalLayout_2->addWidget(addArgumentButton);

        deleteArgumentButton = new QToolButton(wizardPage2);
        deleteArgumentButton->setObjectName(QString::fromUtf8("deleteArgumentButton"));
        deleteArgumentButton->setMinimumSize(QSize(27, 27));
        deleteArgumentButton->setMaximumSize(QSize(27, 27));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/rod.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteArgumentButton->setIcon(icon1);

        verticalLayout_2->addWidget(deleteArgumentButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        AddTestCasesWizard->addPage(wizardPage2);
        wizardPage3 = new QWizardPage();
        wizardPage3->setObjectName(QString::fromUtf8("wizardPage3"));
        verticalLayout_4 = new QVBoxLayout(wizardPage3);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        stepThreeLabel = new QLabel(wizardPage3);
        stepThreeLabel->setObjectName(QString::fromUtf8("stepThreeLabel"));
        stepThreeLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));
        stepThreeLabel->setWordWrap(true);

        verticalLayout_4->addWidget(stepThreeLabel);

        testCasesViewer = new QTreeWidget(wizardPage3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        testCasesViewer->setHeaderItem(__qtreewidgetitem);
        testCasesViewer->setObjectName(QString::fromUtf8("testCasesViewer"));
        testCasesViewer->setColumnCount(2);
        testCasesViewer->header()->setVisible(false);

        verticalLayout_4->addWidget(testCasesViewer);

        AddTestCasesWizard->addPage(wizardPage3);

        retranslateUi(AddTestCasesWizard);

        QMetaObject::connectSlotsByName(AddTestCasesWizard);
    } // setupUi

    void retranslateUi(QWizard *AddTestCasesWizard)
    {
        AddTestCasesWizard->setWindowTitle(QApplication::translate("AddTestCasesWizard", "Add Test Cases", 0, QApplication::UnicodeUTF8));
        stepOneLabel->setText(QApplication::translate("AddTestCasesWizard", "Step I: Input the full score, time limit and memory limit for each new test case.", 0, QApplication::UnicodeUTF8));
        fullScoreLabel->setText(QApplication::translate("AddTestCasesWizard", "Full Score", 0, QApplication::UnicodeUTF8));
        timeLimitLabel->setText(QApplication::translate("AddTestCasesWizard", "Time Limit", 0, QApplication::UnicodeUTF8));
        msLabel->setText(QApplication::translate("AddTestCasesWizard", "ms", 0, QApplication::UnicodeUTF8));
        memoryLimitLabel->setText(QApplication::translate("AddTestCasesWizard", "Memory Limit", 0, QApplication::UnicodeUTF8));
        mbLabel->setText(QApplication::translate("AddTestCasesWizard", "MB", 0, QApplication::UnicodeUTF8));
        stepTwoLabel->setText(QApplication::translate("AddTestCasesWizard", "Step II: Input patterns for input files and output files. You can use argument <1>, <2>, etc. to represent a regular expression. Input and output files will in the same test case when their matched parts of checked expressions are identical.", 0, QApplication::UnicodeUTF8));
        inputFilesPatternLabel->setText(QApplication::translate("AddTestCasesWizard", "Input Files Pattern", 0, QApplication::UnicodeUTF8));
        outputFilesPatternLabel->setText(QApplication::translate("AddTestCasesWizard", "Output Files Pattern", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = argumentList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AddTestCasesWizard", "Argument", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = argumentList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AddTestCasesWizard", "Regular Expression", 0, QApplication::UnicodeUTF8));
        addArgumentButton->setText(QString());
        deleteArgumentButton->setText(QString());
        stepThreeLabel->setText(QApplication::translate("AddTestCasesWizard", "Step III: Preview the result and finish the wizard.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddTestCasesWizard: public Ui_AddTestCasesWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTESTCASESWIZARD_H
