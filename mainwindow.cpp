#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqltextrequest.cpp"
#include "tableinsert.cpp"
#include "tablelist.cpp"
#include "changedatabase.cpp"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    afficherTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

