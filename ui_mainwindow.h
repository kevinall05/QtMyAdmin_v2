/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Close;
    QAction *actionChange_Database;
    QAction *action_Reduce;
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
    QListWidget *listWidgetTablesList;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QPushButton *pushButtonDeleteTable;
    QPushButton *pushButtonChangeDatabase;
    QTabWidget *tabWidgetSections;
    QWidget *structure;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLabel *labelTableSelected;
    QSpacerItem *horizontalSpacer_14;
    QTableView *tableViewStructure;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButtonInsertExecut;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButtonDeleteEntry;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QComboBox *comboBoxSeparator;
    QPushButton *pushButtonExportTable;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_7;
    QComboBox *comboBox;
    QPushButton *pushButtonImportTable;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEditTableName;
    QLabel *label_2;
    QSpinBox *spinBoxColumnNumber;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAddTable;
    QWidget *SQL;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QPlainTextEdit *plainTextEditSelectRequest;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonSqlExecut;
    QLabel *label_5;
    QTableView *tableViewSelect;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLineEdit *lineEditExportFileName;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_10;
    QPushButton *pushButtonExportDatabase;
    QMenuBar *menuBar;
    QMenu *menu_Close;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(886, 773);
        QFont font;
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"font-family: quicksand;\n"
"font-size: 15px; \n"
"}\n"
"\n"
"QPushButton {\n"
"border: 2px solid #6c78af; \n"
"border-radius: 15; \n"
"background: #fff;\n"
"padding: 5px 30px;\n"
"font-weight: 700;\n"
"color: #6c78af;\n"
"}\n"
"QPushButton:hover {\n"
"background:#292929;\n"
"color: white;\n"
"border: 2px solid #f89c0e; \n"
"}\n"
"\n"
"QLineEdit{\n"
"border: 2px solid #6c78af; \n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPlainTextEdit {\n"
"border: 2px solid #6c78af; \n"
"color: blue;\n"
"}\n"
"\n"
"QLabel {\n"
"font-size: 16px;\n"
"}\n"
"\n"
"QStatusBar {\n"
"color: #343c63;\n"
"}"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QString::fromUtf8("action_Close"));
        actionChange_Database = new QAction(MainWindow);
        actionChange_Database->setObjectName(QString::fromUtf8("actionChange_Database"));
        action_Reduce = new QAction(MainWindow);
        action_Reduce->setObjectName(QString::fromUtf8("action_Reduce"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setMinimumSize(QSize(0, 0));
        splitter->setMaximumSize(QSize(16777215, 791));
        splitter->setBaseSize(QSize(0, 0));
        splitter->setFont(font);
        splitter->setLayoutDirection(Qt::LeftToRight);
        splitter->setAutoFillBackground(false);
        splitter->setStyleSheet(QString::fromUtf8(""));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        splitter->setChildrenCollapsible(true);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FirstTitle = new QLabel(verticalLayoutWidget);
        FirstTitle->setObjectName(QString::fromUtf8("FirstTitle"));
        QFont font1;
        font1.setBold(true);
        FirstTitle->setFont(font1);
        FirstTitle->setStyleSheet(QString::fromUtf8("color: #6c78af; font-size: 35px; font-weight: bold;"));

        horizontalLayout->addWidget(FirstTitle);

        SecondTitle = new QLabel(verticalLayoutWidget);
        SecondTitle->setObjectName(QString::fromUtf8("SecondTitle"));
        SecondTitle->setFont(font1);
        SecondTitle->setStyleSheet(QString::fromUtf8("color: #f89c0e; font-size: 30px; font-weight: bold;"));

        horizontalLayout->addWidget(SecondTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_7);

        listWidgetTablesList = new QListWidget(verticalLayoutWidget);
        listWidgetTablesList->setObjectName(QString::fromUtf8("listWidgetTablesList"));
        listWidgetTablesList->setStyleSheet(QString::fromUtf8("border: 2px solid #6c78af; \n"
"max-width : 240px;"));

        verticalLayout_2->addWidget(listWidgetTablesList);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_13->addWidget(label_9);

        pushButtonDeleteTable = new QPushButton(verticalLayoutWidget);
        pushButtonDeleteTable->setObjectName(QString::fromUtf8("pushButtonDeleteTable"));

        horizontalLayout_13->addWidget(pushButtonDeleteTable);


        verticalLayout_2->addLayout(horizontalLayout_13);

        pushButtonChangeDatabase = new QPushButton(verticalLayoutWidget);
        pushButtonChangeDatabase->setObjectName(QString::fromUtf8("pushButtonChangeDatabase"));
        pushButtonChangeDatabase->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(pushButtonChangeDatabase);

        splitter->addWidget(verticalLayoutWidget);
        tabWidgetSections = new QTabWidget(splitter);
        tabWidgetSections->setObjectName(QString::fromUtf8("tabWidgetSections"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidgetSections->sizePolicy().hasHeightForWidth());
        tabWidgetSections->setSizePolicy(sizePolicy1);
        tabWidgetSections->setMinimumSize(QSize(0, 0));
        tabWidgetSections->setStyleSheet(QString::fromUtf8(""));
        structure = new QWidget();
        structure->setObjectName(QString::fromUtf8("structure"));
        verticalLayout = new QVBoxLayout(structure);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_12 = new QLabel(structure);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_15->addWidget(label_12);

        labelTableSelected = new QLabel(structure);
        labelTableSelected->setObjectName(QString::fromUtf8("labelTableSelected"));
        labelTableSelected->setStyleSheet(QString::fromUtf8("color: #ff6830;"));

        horizontalLayout_15->addWidget(labelTableSelected);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_15);

        tableViewStructure = new QTableView(structure);
        tableViewStructure->setObjectName(QString::fromUtf8("tableViewStructure"));
        tableViewStructure->setStyleSheet(QString::fromUtf8(""));
        tableViewStructure->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewStructure->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewStructure->verticalHeader()->setVisible(false);
        tableViewStructure->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout->addWidget(tableViewStructure);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        pushButtonInsertExecut = new QPushButton(structure);
        pushButtonInsertExecut->setObjectName(QString::fromUtf8("pushButtonInsertExecut"));

        horizontalLayout_16->addWidget(pushButtonInsertExecut);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);

        pushButtonDeleteEntry = new QPushButton(structure);
        pushButtonDeleteEntry->setObjectName(QString::fromUtf8("pushButtonDeleteEntry"));

        horizontalLayout_16->addWidget(pushButtonDeleteEntry);


        verticalLayout->addLayout(horizontalLayout_16);

        verticalSpacer_3 = new QSpacerItem(20, 90, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        label_6 = new QLabel(structure);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        comboBoxSeparator = new QComboBox(structure);
        comboBoxSeparator->addItem(QString());
        comboBoxSeparator->addItem(QString());
        comboBoxSeparator->addItem(QString());
        comboBoxSeparator->addItem(QString());
        comboBoxSeparator->setObjectName(QString::fromUtf8("comboBoxSeparator"));

        horizontalLayout_3->addWidget(comboBoxSeparator);

        pushButtonExportTable = new QPushButton(structure);
        pushButtonExportTable->setObjectName(QString::fromUtf8("pushButtonExportTable"));

        horizontalLayout_3->addWidget(pushButtonExportTable);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        label_7 = new QLabel(structure);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_10->addWidget(label_7);

        comboBox = new QComboBox(structure);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_10->addWidget(comboBox);

        pushButtonImportTable = new QPushButton(structure);
        pushButtonImportTable->setObjectName(QString::fromUtf8("pushButtonImportTable"));

        horizontalLayout_10->addWidget(pushButtonImportTable);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(10, 150, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(structure);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(structure);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEditTableName = new QLineEdit(structure);
        lineEditTableName->setObjectName(QString::fromUtf8("lineEditTableName"));
        lineEditTableName->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(lineEditTableName);

        label_2 = new QLabel(structure);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        spinBoxColumnNumber = new QSpinBox(structure);
        spinBoxColumnNumber->setObjectName(QString::fromUtf8("spinBoxColumnNumber"));
        spinBoxColumnNumber->setStyleSheet(QString::fromUtf8(""));
        spinBoxColumnNumber->setMinimum(1);
        spinBoxColumnNumber->setValue(4);

        horizontalLayout_6->addWidget(spinBoxColumnNumber);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButtonAddTable = new QPushButton(structure);
        pushButtonAddTable->setObjectName(QString::fromUtf8("pushButtonAddTable"));
        pushButtonAddTable->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(pushButtonAddTable);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidgetSections->addTab(structure, QString());
        SQL = new QWidget();
        SQL->setObjectName(QString::fromUtf8("SQL"));
        verticalLayout_4 = new QVBoxLayout(SQL);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(SQL);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_2);

        plainTextEditSelectRequest = new QPlainTextEdit(SQL);
        plainTextEditSelectRequest->setObjectName(QString::fromUtf8("plainTextEditSelectRequest"));
        plainTextEditSelectRequest->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(plainTextEditSelectRequest);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        pushButtonSqlExecut = new QPushButton(SQL);
        pushButtonSqlExecut->setObjectName(QString::fromUtf8("pushButtonSqlExecut"));
        pushButtonSqlExecut->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(pushButtonSqlExecut);


        verticalLayout_4->addLayout(horizontalLayout_9);

        label_5 = new QLabel(SQL);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        tableViewSelect = new QTableView(SQL);
        tableViewSelect->setObjectName(QString::fromUtf8("tableViewSelect"));
        tableViewSelect->setStyleSheet(QString::fromUtf8(""));
        tableViewSelect->verticalHeader()->setVisible(false);
        tableViewSelect->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_4->addWidget(tableViewSelect);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton = new QPushButton(SQL);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_8->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout_8);

        tabWidgetSections->addTab(SQL, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_14->addWidget(label_11);

        lineEditExportFileName = new QLineEdit(tab);
        lineEditExportFileName->setObjectName(QString::fromUtf8("lineEditExportFileName"));

        horizontalLayout_14->addWidget(lineEditExportFileName);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_12->addWidget(label_10);

        pushButtonExportDatabase = new QPushButton(tab);
        pushButtonExportDatabase->setObjectName(QString::fromUtf8("pushButtonExportDatabase"));

        horizontalLayout_12->addWidget(pushButtonExportDatabase);


        verticalLayout_6->addLayout(horizontalLayout_12);

        tabWidgetSections->addTab(tab, QString());
        splitter->addWidget(tabWidgetSections);

        verticalLayout_3->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 886, 22));
        menuBar->setStyleSheet(QString::fromUtf8(""));
        menu_Close = new QMenu(menuBar);
        menu_Close->setObjectName(QString::fromUtf8("menu_Close"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setStyleSheet(QString::fromUtf8(""));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Close->menuAction());
        menu_Close->addAction(action_Close);
        menu_Close->addSeparator();
        menu_Close->addAction(actionChange_Database);

        retranslateUi(MainWindow);

        tabWidgetSections->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Connected - QtMyAdmin", nullptr));
        action_Close->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        actionChange_Database->setText(QCoreApplication::translate("MainWindow", "Change &Database", nullptr));
        action_Reduce->setText(QCoreApplication::translate("MainWindow", "&Reduce", nullptr));
        FirstTitle->setText(QCoreApplication::translate("MainWindow", "Qt", nullptr));
        SecondTitle->setText(QCoreApplication::translate("MainWindow", "MyAdmin", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tables list :", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Delete the table :", nullptr));
        pushButtonDeleteTable->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pushButtonChangeDatabase->setText(QCoreApplication::translate("MainWindow", "Change Database", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Selected table :", nullptr));
        labelTableSelected->setText(QCoreApplication::translate("MainWindow", "NULL", nullptr));
        pushButtonInsertExecut->setText(QCoreApplication::translate("MainWindow", "Insert a row", nullptr));
        pushButtonDeleteEntry->setText(QCoreApplication::translate("MainWindow", "Delete a row", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Choose a separator for the CSV file:", nullptr));
        comboBoxSeparator->setItemText(0, QCoreApplication::translate("MainWindow", ",", nullptr));
        comboBoxSeparator->setItemText(1, QCoreApplication::translate("MainWindow", ";", nullptr));
        comboBoxSeparator->setItemText(2, QCoreApplication::translate("MainWindow", "-", nullptr));
        comboBoxSeparator->setItemText(3, QCoreApplication::translate("MainWindow", "/", nullptr));

        pushButtonExportTable->setText(QCoreApplication::translate("MainWindow", "Export table", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Choose the separator used by the CSV file:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "-", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", ",", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", ":", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", ";", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "/", nullptr));

        pushButtonImportTable->setText(QCoreApplication::translate("MainWindow", "Import table", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Add a table :", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Name :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number of columns :", nullptr));
        pushButtonAddTable->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(structure), QCoreApplication::translate("MainWindow", "Structure", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Run an SQL query :", nullptr));
        plainTextEditSelectRequest->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type your SQL query here ...", nullptr));
        pushButtonSqlExecut->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Result of the SQL query :", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Export the result", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(SQL), QCoreApplication::translate("MainWindow", "SQL", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Type the final file name :", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "You can export your database :", nullptr));
        pushButtonExportDatabase->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(tab), QCoreApplication::translate("MainWindow", "Export", nullptr));
        menu_Close->setTitle(QCoreApplication::translate("MainWindow", "&Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
