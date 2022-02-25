#include <QSqlRecord>
#include <QDebug>

// insertion de la mainWindow
#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButtonSqlExecut_clicked()
{
    QString txtSqlRequest = ui->plainTextEditSelectRequest->toPlainText();
    qDebug()<<txtSqlRequest;
    if (txtSqlRequest.contains("SELECT")) {
       // ui->tabWidgetSelect->setVisible(1);
    }
}
