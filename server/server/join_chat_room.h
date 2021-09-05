#pragma once

#include "notification.h"

namespace notification {

    class JoinChatRoom : public INotification
    {
    public:
        JoinChatRoom(common::ID userId, common::ID name);

        common::ID getUserId() const override;
        common::ID getChatRoomId() const;

    private:
        common::ID m_userId;
        common::ID m_chatRoomId;
    };
}