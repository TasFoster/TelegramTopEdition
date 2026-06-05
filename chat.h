#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include "chatdata.h"
#include <iostream>
#include <QLabel>


namespace Ui {
class Chat;
}

class Chat : public QWidget
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr);
    ~Chat();
    void LoadChat(ChatData *data);
private slots:
    void on_pushButton_clicked();

private:
    ChatData *data;

    void ShowMessages();
    Ui::Chat *ui;
};

#endif // CHAT_H
