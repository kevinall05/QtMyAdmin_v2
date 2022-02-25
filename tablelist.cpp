#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QDialog>

void afficherTable()
{
    QString txtReq;
    txtReq=("SHOW TABLE");
    QSqlQuery req(txtReq);

    if(req.next())
    {
        qDebug()<<"Coucou";
    }
}
