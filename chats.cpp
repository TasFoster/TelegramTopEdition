#include "chats.h"
#include "ui_chats.h"
#include "buttonchat.h"
#include <iostream>

Chats::Chats(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Chats)
{
    ui->setupUi(this);

    ChatData *c1 = new ChatData();
    ChatData *c2 = new ChatData();
    ChatData *c3 = new ChatData();
    listChatData.push_back(*c1);
    listChatData.push_back(*c2);
    listChatData.push_back(*c3);

    ButtonChat *btn_saved = new ButtonChat(0);
    ui->ListChats->addWidget(btn_saved);
    ButtonChat *btn_saved1 = new ButtonChat(1);
    ui->ListChats->addWidget(btn_saved1);
    ButtonChat *btn_saved2 = new ButtonChat(2);
    ui->ListChats->addWidget(btn_saved2);

    auto connectBtn = [this](ButtonChat* btn){
        connect(btn, &ButtonChat::openChat, this, &Chats::OpenChat);
    };
    connectBtn(btn_saved);
    connectBtn(btn_saved1);
    connectBtn(btn_saved2);

    chat = new Chat();
    ui->ChatLayout->addWidget(chat);
    //chat->hide();

}

Chats::~Chats()
{
    delete ui;
}

void Chats::OpenChat(int id){
    std::cout << id << "\n";
    ChatData *data = &listChatData[id];
    chat->LoadChat(data);
}
