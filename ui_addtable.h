/********************************************************************************
** Form generated from reading UI file 'addtable.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTABLE_H
#define UI_ADDTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddTable
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetAddTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCreateTable;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelError;

    void setupUi(QDialog *AddTable)
    {
        if (AddTable->objectName().isEmpty())
            AddTable->setObjectName(QString::fromUtf8("AddTable"));
        AddTable->resize(1364, 764);
        AddTable->setStyleSheet(QString::fromUtf8("*{\n"
"font-family: quicksand;\n"
"font-size: 15px; \n"
"}\n"
"\n"
"QPushButton {\n"
"border: 2px solid #6c78af; \n"
"border-radius: 15; \n"
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
"QPlainTextEdit {\n"
"border: 2px solid #6c78af; \n"
"color: blue;\n"
"}\n"
"\n"
"QLabel {\n"
"font-size: 16px;\n"
"}"));
        verticalLayout = new QVBoxLayout(AddTable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidgetAddTable = new QTableWidget(AddTable);
        if (tableWidgetAddTable->columnCount() < 8)
            tableWidgetAddTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetAddTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetAddTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetAddTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetAddTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetAddTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetAddTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetAddTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetAddTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidgetAddTable->setObjectName(QString::fromUtf8("tableWidgetAddTable"));
        tableWidgetAddTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidgetAddTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonCreateTable = new QPushButton(AddTable);
        pushButtonCreateTable->setObjectName(QString::fromUtf8("pushButtonCreateTable"));

        horizontalLayout->addWidget(pushButtonCreateTable);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelError = new QLabel(AddTable);
        labelError->setObjectName(QString::fromUtf8("labelError"));
        labelError->setStyleSheet(QString::fromUtf8(""));
        labelError->setTextFormat(Qt::PlainText);
        labelError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelError->setWordWrap(false);

        horizontalLayout_2->addWidget(labelError);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(AddTable);

        QMetaObject::connectSlotsByName(AddTable);
    } // setupUi

    void retranslateUi(QDialog *AddTable)
    {
        AddTable->setWindowTitle(QCoreApplication::translate("AddTable", "Add a table - QtMyAdmin", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetAddTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AddTable", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetAddTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AddTable", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetAddTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AddTable", "Lenght/Values", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetAddTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AddTable", "Default", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetAddTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AddTable", "Attributes", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetAddTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AddTable", "Null", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetAddTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AddTable", "Index", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetAddTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AddTable", "A.I", nullptr));
        pushButtonCreateTable->setText(QCoreApplication::translate("AddTable", "CREATE TABLE", nullptr));
        labelError->setText(QCoreApplication::translate("AddTable", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTable: public Ui_AddTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTABLE_H
