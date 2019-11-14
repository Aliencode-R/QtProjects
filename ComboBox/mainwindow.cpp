#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/res/new.png"),"june");
    ui->comboBox->addItem(QIcon(":/res/open.png"),"july");
    ui->comboBox->addItem(QIcon(":/res/exit.png"),"august");

}

MainWindow::~MainWindow()
{
    delete ui;
}

