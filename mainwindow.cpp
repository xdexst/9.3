#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    this->setFixedWidth(300);
    this->setFixedHeight(200);
    Label1 = new QLabel(this);
    Label1->setGeometry(20,20,100,20);
    Label1->setText("Test v9.2: OK.");
    horizbtn = new QPushButton(this);
    vertbtn = new QPushButton(this);

    timer = new QTimer(this);

    horizbtn->setText("Horiz");
    vertbtn->setText("Vert");
    horizbtn->setGeometry(240,140,50,20);
    vertbtn->setGeometry(240,170,50,20);

    connect(horizbtn, &QPushButton::clicked, this, &MainWindow::horiz);
    connect(vertbtn, &QPushButton::clicked, this, &MainWindow::vert);
}

MainWindow::~MainWindow() {
}
