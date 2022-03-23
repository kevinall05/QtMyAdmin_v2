#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqltextrequest.cpp"
#include "tableinsert.cpp"
#include "tablelist.cpp"
#include "changedatabase.cpp"
#include "deletesqlentry.cpp"
#include "deletetable.cpp"

#include <QFile>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    afficherTable();

    // on désactive le bouton au démarrage de l'appli
    ui->pushButtonDeleteTable->setEnabled(0);
    modelTable = new QSqlTableModel(this, QSqlDatabase::database());
    modelQuery = new QSqlQueryModel;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_Close_triggered()
{
    close();
}

void MainWindow::on_actionChange_Database_triggered()
{
    on_pushButtonChangeDatabase_clicked();
}


void MainWindow::on_pushButtonExportTable_clicked()
{
    if(ui->comboBoxSeparator->currentText().isEmpty()) {
        // lineEdit du séparateur vide
        ui->statusBar->showMessage("You have to choose a separator !",4000);
    } else {
    // on récupère la table dans laquelle on est
    QString fileName = ui->listWidgetTablesList->currentItem()->text()+"Table.csv";

    // get the separator
    QString separator = ui->comboBoxSeparator->currentText();

    QString txtGetAllEntries = "SELECT * FROM "+ui->listWidgetTablesList->currentItem()->text();
    QSqlQuery getAllEntries(txtGetAllEntries);

    // choisir ou on crée le fichier
    QString currentPath=QFileDialog::getExistingDirectory();
    QDir::setCurrent(currentPath);
    // création du fichier
    QFile file(currentPath+"/"+fileName);
    qDebug()<<currentPath+"/"+fileName;

    if (!file.open(QIODevice::WriteOnly)) {
        qDebug()<<fileName+" not found";
    } else {
        qDebug()<<fileName+" has been successfully open and the selected table has been exported!";
    }

    // getNbChamp
    QSqlRecord requestRecord = getAllEntries.record();
    int columnCount = requestRecord.count();

    // on parcourt le résultat
    while(getAllEntries.next()) {
        QTextStream out(&file);
        for(int counter = 0; counter < columnCount; counter++) {
            if(counter==columnCount-1) {
                out << getAllEntries.value(counter).toString();
            } else {
            out << getAllEntries.value(counter).toString() + separator;
            }
        }
        // on va à la ligne
        out << "\n";
    }

    file.close();
    }
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->comboBoxSeparator->currentText().isEmpty()) {
        // lineEdit du séparateur vide
        ui->statusBar->showMessage("You have to choose a separator !",4000);
    } else {
    // on récupère la table dans laquelle on est
    //QString fileName = ui->listWidgetTablesList->currentItem()->text()+"Table.csv";

    QString fileName = QFileDialog::getSaveFileName(this,tr("Export to file"),tr("CSV Files (*.csv)"));

    // get the separator
    QString separator = ui->comboBoxSeparator->currentText();

    QString txtGetAllEntries = ui->plainTextEditSelectRequest->toPlainText();
    QSqlQuery getAllEntries(txtGetAllEntries);

    // choisir ou on crée le fichier
    QString currentPath=QFileDialog::getExistingDirectory();
    QDir::setCurrent(currentPath);
    // création du fichier
    QFile file(currentPath+"/"+fileName);
    qDebug()<<currentPath+"/"+fileName;

    if (!file.open(QIODevice::WriteOnly)) {
        qDebug()<<fileName+" not found";
    } else {
        qDebug()<<fileName+" has been successfully open !";
    }

    // getNbChamp
    QSqlRecord requestRecord = getAllEntries.record();
    int columnCount = requestRecord.count();

    // on parcourt le résultat
    while(getAllEntries.next()) {
        QTextStream out(&file);
        for(int counter = 0; counter < columnCount; counter++) {
            if(counter==columnCount-1) {
                out << getAllEntries.value(counter).toString();
            } else {
            out << getAllEntries.value(counter).toString() + separator;
            }
        }
        // on va à la ligne
        out << "\n";
    }

    file.close();
    }
}


void MainWindow::on_pushButtonImportTable_clicked()
{
    // récupération du chemin du fichier
    QString csvFile = QFileDialog::getOpenFileName(this,tr("Import"),tr("CSV Files (*.csv)"));

    // get the separator
    QString separator = ui->comboBoxSeparator->currentText();

    // ouverture du fichier
    QFile csv(csvFile);

    if (!csv.open(QIODevice::ReadOnly)) {
        qDebug()<<csvFile+" not found";
        ui->statusBar->showMessage("The selected file can't be import.",4000);
    } else {
        qDebug()<<csvFile+" has been successfully open !";
        // le fichier csv est ouvert
        QSqlQuery executeRequest;
        QTextStream content(&csv);

        while(!content.atEnd()) {
            // on crée notre requête
            QString txtRequest = "INSERT INTO "+ui->listWidgetTablesList->currentItem()->text()+" VALUES (";
            // on divise les lignes
            QStringList line = content.readLine().split(separator);
            qDebug()<<"line:"<<line;

            // pour chaque ligne
            for(int eachElement=0; eachElement<line.length(); eachElement++) {
                txtRequest.append("'"+line.at(eachElement)+"'");
                txtRequest.append(",");
            }

            // on enlève la dernière virgule
            txtRequest.chop(1);
            // fin de la requête
            txtRequest.append(");");

            // on exécute la requête
            if(executeRequest.exec(txtRequest)) {
                // le fichier a bien été importé
                ui->statusBar->showMessage("CSV file has been successfully imported.",4000);
            } else {
                // on affiche l'erreur
                ui->statusBar->showMessage(executeRequest.lastError().text(),4000);
            }
            // affichage du résultat
            qDebug()<<txtRequest;
        }
    }
}

