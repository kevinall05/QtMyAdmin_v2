#include "connexion.h"
#include "ui_connexion.h"
#include <QSqlDatabase>
#include <QDebug>

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
}

Connexion::~Connexion()
{
    delete ui;
}

void Connexion::on_pushButton_clicked()
{
    // connexion à la base de données
    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName(ui->lineEditHostname->text());
    maBase.setDatabaseName(ui->lineEditDatabase->text());
    maBase.setUserName(ui->lineEditUsername->text());
    maBase.setPassword(ui->lineEditPassword->text());

    // ouverture de la base
    bool ok = maBase.open();
    qDebug()<<ok;

    if(ok==true) {
        // on renvoie à la MainWindow que l'utilisateur est connecté
        accept();
    } else {
}
}
