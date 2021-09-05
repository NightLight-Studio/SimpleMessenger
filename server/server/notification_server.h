#pragma once

#include "chat_state.h"
#include "join_chat_room.h"
#include "user_login.h"
#include "user_message.h"

#include "../../common/protobuf/protobuf/chat_state.pb.h"
#include "../../common/protobuf/protobuf/join_chat_room.pb.h"
#include "../../common/protobuf/protobuf/notification_type_moc.pb.h"
#include "../../common/protobuf/protobuf/user_login.pb.h"
#include "../../common/protobuf/protobuf/user_message.pb.h"

#include "../../../../common/sources/enum.h"
#include "notification.h"

#pragma comment (lib, "Ws2_32.lib")
#include <winsock2.h>

class NotificationServer {
	void start() {

	}

    INotification* getNotificationFromProtobuf(const std::string& protoString){
        
        NotificationTypeMoc typeMoc;
        typeMoc.ParseFromString(protoString);
        const auto type = static_cast<common::NotificationTypes>(typeMoc.nt_type());

        switch (type)
        {
            case common::NotificationTypes::ntJoinChatRoom:
            {
                JoinChatRoom proto;
                proto.ParseFromString(protoString);
                return &notification::JoinChatRoom{ proto.user_id(), proto.chat_room_id() };
            }
            case common::NotificationTypes::ntUserLogin:
            {
                UserLogin proto;
                proto.ParseFromString(protoString);
                return &notification::UserLogin{ proto.user_id(), proto.name() };
            }
            case common::NotificationTypes::ntUserMessage:
            {
                UserMessage proto;
                proto.ParseFromString(protoString);
                return &notification::UserMessage{ proto.user_id(), proto.message() };
            }
            default: {
                return nullptr;
            }
        }
	}

	void join();
};
