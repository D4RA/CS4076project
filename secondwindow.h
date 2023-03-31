#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include "thirdwindow.h"
#include <QDialog>

namespace Ui {
class secondWIndow;
}

class secondWIndow : public QDialog
{
    Q_OBJECT

public:
    explicit secondWIndow(QWidget *parent = nullptr);
    ~secondWIndow();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::secondWIndow *ui;
    thirdWindow *thirdwin;
};

#endif // SECONDWINDOW_H
