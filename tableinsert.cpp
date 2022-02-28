#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addtable.h"
#include <QDebug>
#include <QSqlQuery>

void MainWindow::on_pushButtonAddTable_clicked()
{
    AddTable newTable(getColumnNumber());
    newTable.show();
    qDebug()<<"ici";
}

int MainWindow::getColumnNumber()
{
    return ui->spinBoxColumnNumber->value();
}
