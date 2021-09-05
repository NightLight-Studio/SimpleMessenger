#pragma once
#include <vector>
#include <string>

#include "user.h"
#include "../../common/sources/types.h"

class ChatRoom {
public:
	ChatRoom(const std::string& nameChatRoom);
	
	void startSession();
	void addUserToChatRoom(const User& user);
	void removeUserFromChatRoom(const common::ID userId);

private:
	std::string m_nameChatRoom;
	common::ID m_chatRoomId;
	std::vector<User> m_users;
};