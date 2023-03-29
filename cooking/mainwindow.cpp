#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "secondwindow.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_radioButton_clicked()
{
secwin = new SecondWindow(this);
secwin->show();
}
