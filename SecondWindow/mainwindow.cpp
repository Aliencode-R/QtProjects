#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "secdialog.h"

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
    // modal approach(first window can't be accessed while on the second window.
//    SecDialog secDialog;
//    secDialog.setModal(true);
//    secDialog.exec();

    // hide the first window -> hide();
    secDialog = new SecDialog(this);
    secDialog->show();
}
