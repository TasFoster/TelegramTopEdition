#include "chat.h"
#include "ui_chat.h"

Chat::Chat( QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Chat)
{
    ui->setupUi(this);
}

Chat::~Chat()
{
    delete ui;
}

void Chat::on_pushButton_clicked()
{
    QString message = ui->textEdit->toPlainText();
    data->ListSms.push_back(message.toStdString());
    ShowMessages();

}

void Chat::LoadChat(ChatData *data){

    delete this->data;
    this->data = data;
    ShowMessages();
}

void Chat::ShowMessages(){
    QLayoutItem *item;
    do{
        std::cout << "000" << "\n";
        if(ui->verticalLayout->count() == 0) break;
        std::cout << "111" << "\n";
        item = ui->verticalLayout->takeAt(0);
        std::cout << "222" << "\n";
        delete item->widget();
        std::cout << "333" << "\n";
    }while(ui->verticalLayout->count() > 0);
    for(std::string i : data->ListSms){
        QString message = QString::fromStdString(i);
        QLabel *pole_massage = new QLabel(message);
        ui->verticalLayout->addWidget(pole_massage);
    }
}

