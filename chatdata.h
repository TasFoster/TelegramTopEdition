#ifndef CHATDATA_H
#define CHATDATA_H

#include <string>
#include <vector>


class ChatData
{

public:
    std::vector<std::string> ListSms;
    ChatData();
    void SaveSMS(std::string sms);
};

#endif // CHATDATA_H
