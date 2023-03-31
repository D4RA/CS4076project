#include "mainwindow.h"
#include "secondwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
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


void MainWindow::on_pushButton_clicked()
{
    secwin = new secondWIndow(this);
    secwin->show();
}



void MainWindow::on_actionQuit_2_triggered()
{
     QApplication :: quit();
}


void MainWindow::on_actionAbout_app_triggered()
{
    QMessageBox :: information(this,"About","This is acooking app made to help even the most basic of beginers on their path to cooking and I hppe it serves you well(as well as give me a decent chance of passing) ");
}

