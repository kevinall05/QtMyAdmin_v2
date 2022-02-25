#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    void afficherTable();
};

#endif // MAINWINDOW_H
