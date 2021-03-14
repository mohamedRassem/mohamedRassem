#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "evenement.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_CODEEVENEMENT->setValidator(new QIntValidator(0,999999999,this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{evenement e;
    e.setCODEEVENEMENT(ui->lineEdit_CODEEVENEMENT->text())
    e.setNOM(ui->lineEdit_NOM->text())
    e.setLIEU(ui->lineEdit_LIEU->text())
    e.setDAT(ui->lineEdit_DAT->text())
    Dialog d;
    d.setevenement(e);
    d.exee();

}
