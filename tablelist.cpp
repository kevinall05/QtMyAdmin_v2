#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QDialog>
#include <QSqlRecord>
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
        ui->listWidgetTablesList->addItem(req.value(0).toString());
    }
}

void MainWindow::on_listWidgetTablesList_itemClicked(QListWidgetItem *item)
{
    //Initialisation du tableau
    ui->tableWidgetStructure->setRowCount(0);
    ui->tableWidgetStructure->setColumnCount(0);
    ui->tableWidgetStructure->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableWidgetRequestInsert->setRowCount(0);
    ui->tableWidgetRequestInsert->setColumnCount(0);
    ui->tableWidgetRequestInsert->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetRequestInsert->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // requête SQL
     QString txtReq= "SELECT * FROM "+ui->listWidgetTablesList->currentItem()->text();
     QString txtReqName= "SELECT * FROM "+ui->listWidgetTablesList->currentItem()->text();
     QSqlQuery req(txtReq);
     qDebug()<<txtReq;

     int compteur= 0;
     QSqlRecord recordRequest = req.record();
     int nbChamp=recordRequest.count();
     ui->tableWidgetStructure->setColumnCount(nbChamp);
     ui->tableWidgetDeleteEntry->setColumnCount(nbChamp);
     ui->tableWidgetRequestInsert->setRowCount(nbChamp);

     //affichage des noms de colonne
     for(int noCol=0;noCol<nbChamp;noCol++)
     {
         ui->tableWidgetStructure->setHorizontalHeaderItem(noCol,new QTableWidgetItem(recordRequest.fieldName(noCol)));
         ui->tableWidgetDeleteEntry->setHorizontalHeaderItem(noCol,new QTableWidgetItem(recordRequest.fieldName(noCol)));
     }

     //affichage des noms de ligne (inserer)
     for(int noRow=0;noRow<nbChamp;noRow++)
     {
         ui->tableWidgetRequestInsert->setHorizontalHeaderItem(noRow,new QTableWidgetItem(recordRequest.fieldName(noRow)));

     }

 //affichage des valeurs
 while(req.next())
 {
     // on insère la ligne
         ui->tableWidgetStructure->setRowCount(compteur+1);
         ui->tableWidgetDeleteEntry->setRowCount(compteur+1);
         ui->tableWidgetRequestInsert->setColumnCount(1);
         for(int counter = 0; counter < recordRequest.count(); counter++) {
             // on affiche l'item
             ui->tableWidgetStructure->setItem(compteur,counter,new QTableWidgetItem(req.value(counter).toString()));
             ui->tableWidgetDeleteEntry->setItem(compteur,counter,new QTableWidgetItem(req.value(counter).toString()));
             ui->tableWidgetRequestInsert->setVerticalHeaderItem(counter,new QTableWidgetItem(recordRequest.fieldName(counter)));
         }
         // on ajoute une ligne
         compteur+=1;

 }

}
