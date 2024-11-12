#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->createTransmitterButton, &QPushButton::clicked, this, &MainWindow::createTransmitterClicked);
    connect(ui->createReceiverButton, &QPushButton::clicked, this, &MainWindow::createReceiverClicked);
    connect(ui->closeAll, &QPushButton::clicked, this, &MainWindow::closeAllClicked);
}

MainWindow::~MainWindow() {
    delete ui;
}
