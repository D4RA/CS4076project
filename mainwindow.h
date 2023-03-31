#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "secondwindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();



    void on_actionQuit_2_triggered();

    void on_actionAbout_app_triggered();

private:
    Ui::MainWindow *ui;
    secondWIndow *secwin;
};
#endif // MAINWINDOW_H
