#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QDialog>
#include "ui_mainwindow.h"
#include "mainwindow.h"

void MainWindow::afficherTable()
{
    QString txtReq;
    txtReq=("SHOW TABLES");
    QSqlQuery req(txtReq);
    qDebug()<<txtReq;

    while(req.next())
    {
        qDebug()<<"Coucou";
        ui->listWidgetTablesList->addItem(req.value(0).toString());
    }
}


