#include "buttonchat.h"
#include "ui_buttonchat.h"
#include <iostream>
ButtonChat::ButtonChat(int id, QWidget *parent)
    : QPushButton(parent)
    , ui(new Ui::ButtonChat)
{
    ui->setupUi(this);
    QWidget::connect(this, &QPushButton::clicked, this, [this, id](){
        emit openChat(id);
        std::cout << "Presed" << "\n";
    });
}

ButtonChat::~ButtonChat()
{
    delete ui;
}

