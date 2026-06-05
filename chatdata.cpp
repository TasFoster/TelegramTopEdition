#include "chatdata.h"

ChatData::ChatData() {}

void ChatData::SaveSMS(std::string sms){
    ListSms.push_back(sms);
}
