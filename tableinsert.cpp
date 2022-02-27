#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addtable.h"
#include <QDebug>
#include <QSqlQuery>

void MainWindow::on_pushButtonAddTable_clicked()
{
    //Initialisation du tableau
    ui->tableWidgetSelect->clear();
    ui->tableWidgetSelect->setRowCount(0);
    ui->tableWidgetSelect->setColumnCount(0);
    ui->tableWidgetSelect->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    AddTable newTable;
    qDebug()<<"ici";
}

int MainWindow::getColumnNumber()
{
    return ui->spinBoxColumnNumber->value();
}
