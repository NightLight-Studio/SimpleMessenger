#pragma once

#include "notification.h"

namespace notification {

    class UserLogin : public INotification
    {
    public:
        UserLogin(common::ID userId, std::string name);

        common::ID getUserId() const override;
        std::string getName() const;

    private:
        common::ID m_userId;
        std::string m_name;
    };
}