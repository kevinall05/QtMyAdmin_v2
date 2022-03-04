#include "mainwindow.h"
#include "connexion.h"
#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    qDebug()<<"MAIN";
    QApplication a(argc, argv);

    // si l'utilisateur est connecté, on ouvre la MainWindow
    Connexion seConnecter;
    if(seConnecter.exec()==QDialog::Accepted)
    {
        qDebug()<<"ouverture de la MainWindow";
        MainWindow w;
        w.show();
        return a.exec();
    }
    else {
        return 20;
    }
}
