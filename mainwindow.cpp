#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chats.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Chats *chats = new Chats(ui->widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
