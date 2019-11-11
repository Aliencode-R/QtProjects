#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QDebug>
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/login.png");
    int width = ui->label_pic->width();
    int height = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test")
    {
//        QMessageBox::information(this,"Login","username and password is correct");

//        hide();
//        SecDialog = new secDialog(this);
//        SecDialog->show();

        ui->statusbar->showMessage("username and password is correct");  // second parameter for time out in mil-sec

    }
    else
    {

//        QMessageBox::warning(this,"Login","username and password is not correct");

           ui->statusbar->showMessage("username and password is not correct");
    }
}
