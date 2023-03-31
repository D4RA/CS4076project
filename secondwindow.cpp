#include "secondwindow.h"
#include <iostream>
using namespace std;

#include "ui_secondwindow.h"

secondWIndow::secondWIndow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondWIndow)
{
    ui->setupUi(this);
}

secondWIndow::~secondWIndow()
{
    delete ui;
}



void secondWIndow::on_pushButton_clicked()
{
    ui->textEdit_3->setText("1 cup of water' 4 cups of sugar ,1 ¼ cups light corn syrup, Blue food coloring, Flavorants (optional)");
}


void secondWIndow::on_pushButton_2_clicked()
{
    ui->textEdit_4->setText("In a sauce pot, combine 1 cup of water, 4 cups of sugar, 1 ¼ cups light corn syrup, and some blue food coloring. Stir only until all the sugar has dissolved and then cease stirring until mixture has reached 300° F (use a candy thermometer!). At this point you can add flavorants like cotton candy or something similar.Pour mixture onto an aluminum baking sheet and let cool completely for 1 hour. Use the butt end of a wooden spoon, and smash into pieces until it looks like not meth.");
}


void secondWIndow::on_pushButton_4_clicked()
{
    ui->textEdit_5->setText("step 1 fry mince meat till brown step 2 )add seasonings of choice preferably basil peper & salts step 3) add crushed tomatoes and tomato paste step 4) boil pasta" );
}


void secondWIndow::on_pushButton_3_clicked()
{
    ui->textEdit->setText("mince meat,onions,garlic,tomato,tomato paste,salt,pepper,pasta");
}

