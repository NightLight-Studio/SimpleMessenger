#pragma once

#include "notification.h"

namespace notification {

    class InfoMessage;

    class ChatState : public INotification
    {
    public:
        ChatState(common::ID userId, std::string name, std::vector<InfoMessage>& infoMessage);

        common::ID getUserId() const override;
        std::string getName() const;
        std::vector<InfoMessage> getInfoMessage() const;

        void setUserId(common::ID userId);
        void setName(std::string name);
        void setInfoMessage(std::vector<InfoMessage>& infoMessage);

    private:
        common::ID m_userId;
        std::string m_name;
        std::vector<InfoMessage> m_infoMessage;
    };

    class InfoMessage {
    public:
        InfoMessage(common::ID userId, std::string name, std::string message);

        common::ID getUserId() const;
        std::string getName() const;
        std::string getMessage() const;

        void setUserId(common::ID userId);
        void setName(std::string name);
        void setMessage(std::string message);

    private:
        common::ID m_userId;
        std::string m_name;
        std::string m_message;
    };
}
