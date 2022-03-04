#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonAddTable_clicked();
    void on_pushButtonSqlExecut_clicked();
    void on_listWidgetTablesList_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    void afficherTable();
    int getColumnNumber();
};

#endif // MAINWINDOW_H
