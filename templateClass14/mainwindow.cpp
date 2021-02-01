#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stack.h"
#include "qdebug.h"
#include "ctime"
#include "ArrayTp.h"
#include "pair.h"
#include "string"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ArrayTp<int, 5> hihi;
    for (int i = 0 ; i < 5 ; i++) {
        hihi[i] = i;
    }
    ArrayTp<int, 5> heheh = hihi;
    qDebug() << heheh[2];

    using std::string;
    Pair<QString, int> rating[4] = {
        Pair<QString, int>("a", 1),
        Pair<QString, int>("b", 2),
        Pair<QString, int>("c", 3),
        Pair<QString, int>("d", 4)
    };
    //qDebug()<<rating[2].first();
    qDebug() << rating[2].first()<<rating[3].second();
}

MainWindow::~MainWindow()
{
    delete ui;
}

