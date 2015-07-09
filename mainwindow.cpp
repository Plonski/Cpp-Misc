#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


double MainWindow::on_pushButton_0_clicked()
{

    ui->lineEdit->setText(a+="0");
    if (pressed != true){
    fnum = QString(a+"0").toDouble();}
    else{
        ui->lineEdit->clear();
    return fnum;
    }
}

double MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(a+="1");
    fnum = QString(a+"1").toDouble();

    return fnum;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("2");
}

void MainWindow::on_pushButton_3_clicked()
{

    ui->lineEdit->setText("3");
}
void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText("4");
}

void MainWindow::on_pushButton_5_clicked()
{

    ui->lineEdit->setText("5");
}
void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText("6");
}

void MainWindow::on_pushButton_7_clicked()
{

    ui->lineEdit->setText("7");
}
void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText("8");
}

void MainWindow::on_pushButton_9_clicked()
{

    ui->lineEdit->setText("9");
}

double MainWindow::on_pushButton_plus_clicked(double fnum){
    ui->lineEdit->setText(secondnum);
    pressed = true;
    answer = fnum + snum;
    return answer;
}


double MainWindow::on_pushButton_minus_clicked(double fnum)
{
    pressed = true;
    ui->lineEdit->clear();
    answer = fnum - snum;
    return answer;
}

double MainWindow::on_pushButton_multiply_clicked(double fnum){
    pressed = true;
    ui->lineEdit->setText(secondnum);
    answer = fnum * snum;

    return answer;
}

double MainWindow::on_pushButton_divide_clicked(double fnum){
    pressed = true;
    ui->lineEdit->setText("");
    answer = fnum / snum;
    return answer;

}
