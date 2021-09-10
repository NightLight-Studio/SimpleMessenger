#pragma once

#include "notification.h"

namespace notification {

    class UserMessage : public INotification
    {
    public:
        UserMessage(common::ID userId, std::string message);

        common::ID getUserId() const override;
        std::string getMessage() const;

    private:
        common::ID m_userId;
        std::string m_message;
    };
}