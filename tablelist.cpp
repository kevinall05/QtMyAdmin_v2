#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QDialog>
#include <QStringList>
#include <QSqlRecord>
#include "ui_mainwindow.h"
#include "mainwindow.h"

void MainWindow::afficherTable()
{
    QStringList listeDesTables = QSqlDatabase::database().tables();

    ui->listWidgetTablesList->addItems(listeDesTables);

}

void MainWindow::on_listWidgetTablesList_itemClicked(QListWidgetItem *item)
{
   qDebug()<<"void MainWindow::on_listWidgetTablesList_itemClicked(QListWidgetItem *item)";
   modelTable->setTable(item->text());
   modelTable->select();
   ui->tableViewStructure->setModel(modelTable);
   ui->tableViewStructure->show();
   ui->tableViewStructure->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

   ui->labelTableSelected->setText(ui->listWidgetTablesList->currentItem()->text());

}

void MainWindow::on_pushButtonInsertExecut_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonInsert_clicked()";

    modelTable->insertRow(modelTable->rowCount());
}

void MainWindow::on_pushButtonDeleteEntry_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonDelete_clicked()";

    modelTable->removeRow(ui->tableViewStructure->currentIndex().row());

    modelTable->select();
}


