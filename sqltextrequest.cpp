#include <QSqlRecord>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QStringList>

// insertion de la mainWindow
#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButtonSqlExecut_clicked()
{
    // on initialise le tableau
    QString txtRequete = ui->plainTextEditSelectRequest->toPlainText();
    QSqlQuery requete(txtRequete);
    requete.first();

    modelQuery->setQuery(requete);
    ui->tableViewSelect->setModel(modelQuery);
    ui->tableViewSelect->show();
    ui->tableViewSelect->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}
