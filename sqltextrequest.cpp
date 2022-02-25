#include <QSqlRecord>

void MainWindow::on_pushButtonSqlExecut_clicked()
{
    QString txtSqlRequest = ui->plainTextEdit->toPlainText();
    qDebug()<<txtSqlRequest;
    if (txtSqlRequest.contains("SELECT")) {
       // ui->tabWidgetSelect->setVisible(1);
    }
}
