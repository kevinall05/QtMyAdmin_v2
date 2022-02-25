#include <QSqlRecord>
#include <QSqlQuery>
#include <QDebug>

// insertion de la mainWindow
#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButtonSqlExecut_clicked()
{
    // on initialise le tableau
    ui->tableWidgetSelect->clear();
    ui->tableWidgetSelect->setRowCount(0);
    ui->tableWidgetSelect->setColumnCount(0);
    ui->tableWidgetSelect->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // on récupère ce que l'utilisateur a saisi
    QString txtSqlRequest = ui->plainTextEditSelectRequest->toPlainText();
    qDebug()<<txtSqlRequest;

    QSqlQuery sqlRequest(txtSqlRequest);
    QSqlRecord recordRequest = sqlRequest.record();

    // si la requête contient SELECT
    if (txtSqlRequest.contains("SELECT") || txtSqlRequest.contains("select")) {

       // on affiche le tableau pour les SELECT
        ui->tableWidgetSelect->setVisible(1);
        ui->tableWidgetSelect->setColumnCount(recordRequest.count());

        int rows = 0;

        // création du tableau
        while(sqlRequest.next()) {
            // on insère la ligne
            ui->tableWidgetSelect->insertRow(rows);
            for(int counter = 0; counter < recordRequest.count(); counter++) {
                // on affiche l'item
                ui->tableWidgetSelect->setItem(rows,counter,new QTableWidgetItem(sqlRequest.value(counter).toString()));
                ui->tableWidgetSelect->setHorizontalHeaderItem(counter,new QTableWidgetItem(recordRequest.fieldName(counter)));
            }
            // on ajoute une ligne
            rows+=1;
        }

        qDebug()<<"On réactive le tableau";
    }

    // on exécute la requête
    if(sqlRequest.exec()) {
        // la requête est fonctionnelle
        ui->statusBar->showMessage("La requête a bien été exécuté",2000);
    } else {
        // la requête n'est pas fonctionnelle
        ui->statusBar->showMessage("Erreur: vérifier la syntaxe",2000);
    }
}
