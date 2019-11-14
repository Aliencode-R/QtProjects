#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QDir dir; // not working for linux
//    foreach (QFileInfo var, dir.drives()) {
//        ui->comboBox->addItem(var.absoluteFilePath());
//    }

    QDir dir2("/home/rishabh/Qt Projects/QDir");
    foreach (QFileInfo var, dir2.drives()) {
        ui->listWidget->addItem(var.absoluteFilePath());
    }
    // isDir(), isFile();

//    QDir dir("");
//    if(dir.exists())
//    {
//        QMessageBox::information(this,"title","true");
//    }
//    else{
//        QMessageBox::information(this,"title","false");
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
     QDir dir2("/home/rishabh/Qt Projects/QDir/yyy");
     if(dir2.exists())
             QMessageBox::information(this,"title","dir exists");
     else{
            dir2.mkpath("/home/rishabh/Qt Projects/QDir/yyy"); // create if not exists
      }
}
