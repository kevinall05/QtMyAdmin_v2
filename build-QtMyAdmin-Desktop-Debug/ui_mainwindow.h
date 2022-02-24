/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *FirstTitle;
    QLabel *SecondTitle;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QTableWidget *tableWidgetTablesList;
    QTabWidget *tabWidgetSections;
    QWidget *structure;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetStructure;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditTableName;
    QLabel *label_2;
    QSpinBox *spinBoxColumnNumber;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAddTable;
    QWidget *SQL;
    QWidget *inserer;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1122, 764);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setLayoutDirection(Qt::LeftToRight);
        splitter->setAutoFillBackground(false);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        FirstTitle = new QLabel(verticalLayoutWidget);
        FirstTitle->setObjectName(QStringLiteral("FirstTitle"));
        FirstTitle->setStyleSheet(QStringLiteral("color: #6c78af; font-size: 30px; font-weight: bold;"));

        horizontalLayout->addWidget(FirstTitle);

        SecondTitle = new QLabel(verticalLayoutWidget);
        SecondTitle->setObjectName(QStringLiteral("SecondTitle"));
        SecondTitle->setStyleSheet(QStringLiteral("color: #f89c0e; font-size: 30px; font-weight: bold;"));

        horizontalLayout->addWidget(SecondTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tableWidgetTablesList = new QTableWidget(verticalLayoutWidget);
        tableWidgetTablesList->setObjectName(QStringLiteral("tableWidgetTablesList"));
        tableWidgetTablesList->setStyleSheet(QStringLiteral(""));

        horizontalLayout_8->addWidget(tableWidgetTablesList);


        verticalLayout_2->addLayout(horizontalLayout_8);

        splitter->addWidget(verticalLayoutWidget);
        tabWidgetSections = new QTabWidget(splitter);
        tabWidgetSections->setObjectName(QStringLiteral("tabWidgetSections"));
        structure = new QWidget();
        structure->setObjectName(QStringLiteral("structure"));
        verticalLayout = new QVBoxLayout(structure);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidgetStructure = new QTableWidget(structure);
        tableWidgetStructure->setObjectName(QStringLiteral("tableWidgetStructure"));

        verticalLayout->addWidget(tableWidgetStructure);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(structure);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEditTableName = new QLineEdit(structure);
        lineEditTableName->setObjectName(QStringLiteral("lineEditTableName"));

        horizontalLayout_6->addWidget(lineEditTableName);

        label_2 = new QLabel(structure);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        spinBoxColumnNumber = new QSpinBox(structure);
        spinBoxColumnNumber->setObjectName(QStringLiteral("spinBoxColumnNumber"));
        spinBoxColumnNumber->setMinimum(1);
        spinBoxColumnNumber->setValue(4);

        horizontalLayout_6->addWidget(spinBoxColumnNumber);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButtonAddTable = new QPushButton(structure);
        pushButtonAddTable->setObjectName(QStringLiteral("pushButtonAddTable"));

        horizontalLayout_4->addWidget(pushButtonAddTable);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidgetSections->addTab(structure, QString());
        SQL = new QWidget();
        SQL->setObjectName(QStringLiteral("SQL"));
        tabWidgetSections->addTab(SQL, QString());
        inserer = new QWidget();
        inserer->setObjectName(QStringLiteral("inserer"));
        tabWidgetSections->addTab(inserer, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidgetSections->addTab(tab_2, QString());
        splitter->addWidget(tabWidgetSections);

        verticalLayout_3->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1122, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidgetSections->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        FirstTitle->setText(QApplication::translate("MainWindow", "Qt", nullptr));
        SecondTitle->setText(QApplication::translate("MainWindow", "MyAdmin", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Liste des tables :", nullptr));
        label->setText(QApplication::translate("MainWindow", "Ajouter une table :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Nombre de colonnes :", nullptr));
        pushButtonAddTable->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(structure), QApplication::translate("MainWindow", "Structure", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(SQL), QApplication::translate("MainWindow", "SQL", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(inserer), QApplication::translate("MainWindow", "Ins\303\251rer", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(tab_2), QApplication::translate("MainWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
