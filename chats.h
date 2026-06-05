#ifndef CHATS_H
#define CHATS_H

#include <QWidget>
#include "chat.h"
#include "chatdata.h"
#include <vector>
using namespace std;

namespace Ui {
class Chats;
}

class Chats : public QWidget
{
    Q_OBJECT

public:
    explicit Chats(QWidget *parent = nullptr);
    ~Chats();

private slots:
    void OpenChat(int id);

private:
    std::vector<ChatData> listChatData;
    Chat *chat;
    Ui::Chats *ui;
};

#endif // CHATS_H
