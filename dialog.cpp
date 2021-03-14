#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
   ui(new ui::Dialog)
{
    ui->setupUi(this);   
}
Dialog::~Dialog()
{
    delete ui;
}
void Dialog::setevenement(evenement e)
{
    ui->linEdit_CODEEVENEMENTD->setText(c.get_CODEEVENEMENT())
    ui->linEdit_NOMD->setText(c.get_NOM())
    ui->linEdit_LIEUD->setText(c.get_LIEU())
    ui->linEdit_DATD->setText(c.get_DAT())

}
