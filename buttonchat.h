#ifndef BUTTONCHAT_H
#define BUTTONCHAT_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class ButtonChat;
}

class ButtonChat : public QPushButton
{
    Q_OBJECT

public:
    explicit ButtonChat(int id, QWidget *parent = nullptr);
    ~ButtonChat();
    
signals:
    void openChat(int id);

private:
    int id;
    Ui::ButtonChat *ui;
};

#endif // BUTTONCHAT_H
