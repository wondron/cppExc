#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stack.h"
#include "qdebug.h"
#include "ctime"
#include "ArrayTp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ArrayTp<ArrayTp<int, 5>, 10> hehe;


}

MainWindow::~MainWindow()
{
    delete ui;
}

