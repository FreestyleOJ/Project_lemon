/********************************************************************************
** Form generated from reading UI file 'compilersettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPILERSETTINGS_H
#define UI_COMPILERSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompilerSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QListWidget *compilerList;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QToolButton *moveUpButton;
    QToolButton *moveDownButton;
    QToolButton *addCompilerButton;
    QToolButton *deleteCompilerButton;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *compilerNameLabel;
    QLineEdit *compilerName;
    QLabel *sourceExtensionsLabel;
    QLineEdit *sourceExtensions;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *advancedButton;

    void setupUi(QWidget *CompilerSettings)
    {
        if (CompilerSettings->objectName().isEmpty())
            CompilerSettings->setObjectName(QString::fromUtf8("CompilerSettings"));
        CompilerSettings->resize(325, 352);
        CompilerSettings->setMinimumSize(QSize(325, 352));
        verticalLayout = new QVBoxLayout(CompilerSettings);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(10);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        compilerList = new QListWidget(CompilerSettings);
        compilerList->setObjectName(QString::fromUtf8("compilerList"));
        compilerList->setStyleSheet(QString::fromUtf8("font-size: 11pt;"));
        compilerList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        compilerList->setSelectionMode(QAbstractItemView::SingleSelection);

        horizontalLayout_11->addWidget(compilerList);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        moveUpButton = new QToolButton(CompilerSettings);
        moveUpButton->setObjectName(QString::fromUtf8("moveUpButton"));
        moveUpButton->setMinimumSize(QSize(27, 27));
        moveUpButton->setMaximumSize(QSize(27, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/uparrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUpButton->setIcon(icon);
        moveUpButton->setAutoRaise(false);
        moveUpButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(moveUpButton);

        moveDownButton = new QToolButton(CompilerSettings);
        moveDownButton->setObjectName(QString::fromUtf8("moveDownButton"));
        moveDownButton->setMinimumSize(QSize(27, 27));
        moveDownButton->setMaximumSize(QSize(27, 27));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/downarrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDownButton->setIcon(icon1);
        moveDownButton->setAutoRaise(false);
        moveDownButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(moveDownButton);

        addCompilerButton = new QToolButton(CompilerSettings);
        addCompilerButton->setObjectName(QString::fromUtf8("addCompilerButton"));
        addCompilerButton->setMinimumSize(QSize(27, 27));
        addCompilerButton->setMaximumSize(QSize(27, 27));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addCompilerButton->setIcon(icon2);
        addCompilerButton->setAutoRaise(false);
        addCompilerButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(addCompilerButton);

        deleteCompilerButton = new QToolButton(CompilerSettings);
        deleteCompilerButton->setObjectName(QString::fromUtf8("deleteCompilerButton"));
        deleteCompilerButton->setMinimumSize(QSize(27, 27));
        deleteCompilerButton->setMaximumSize(QSize(27, 27));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/rod.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteCompilerButton->setIcon(icon3);
        deleteCompilerButton->setAutoRaise(false);
        deleteCompilerButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(deleteCompilerButton);

        verticalSpacer_3 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_11->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_11);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        compilerNameLabel = new QLabel(CompilerSettings);
        compilerNameLabel->setObjectName(QString::fromUtf8("compilerNameLabel"));
        compilerNameLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(compilerNameLabel, 0, 0, 1, 1);

        compilerName = new QLineEdit(CompilerSettings);
        compilerName->setObjectName(QString::fromUtf8("compilerName"));
        compilerName->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(compilerName, 0, 1, 1, 1);

        sourceExtensionsLabel = new QLabel(CompilerSettings);
        sourceExtensionsLabel->setObjectName(QString::fromUtf8("sourceExtensionsLabel"));
        sourceExtensionsLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;font-weight:bold;"));

        gridLayout->addWidget(sourceExtensionsLabel, 1, 0, 1, 1);

        sourceExtensions = new QLineEdit(CompilerSettings);
        sourceExtensions->setObjectName(QString::fromUtf8("sourceExtensions"));
        sourceExtensions->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout->addWidget(sourceExtensions, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        advancedButton = new QPushButton(CompilerSettings);
        advancedButton->setObjectName(QString::fromUtf8("advancedButton"));

        horizontalLayout->addWidget(advancedButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CompilerSettings);

        QMetaObject::connectSlotsByName(CompilerSettings);
    } // setupUi

    void retranslateUi(QWidget *CompilerSettings)
    {
        CompilerSettings->setWindowTitle(QApplication::translate("CompilerSettings", "Form", 0, QApplication::UnicodeUTF8));
        moveUpButton->setText(QString());
        moveDownButton->setText(QString());
        addCompilerButton->setText(QString());
        deleteCompilerButton->setText(QString());
        compilerNameLabel->setText(QApplication::translate("CompilerSettings", "Compiler Name", 0, QApplication::UnicodeUTF8));
        sourceExtensionsLabel->setText(QApplication::translate("CompilerSettings", "Source Extensions", 0, QApplication::UnicodeUTF8));
        advancedButton->setText(QApplication::translate("CompilerSettings", "&Advanced", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CompilerSettings: public Ui_CompilerSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPILERSETTINGS_H
