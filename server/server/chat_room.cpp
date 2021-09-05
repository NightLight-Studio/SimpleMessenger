#include "chat_room.h"

ChatRoom::ChatRoom(const std::string& nameChatRoom): m_nameChatRoom{ nameChatRoom }
{
}

void ChatRoom::startSession() {

}

void ChatRoom::addUserToChatRoom(const User& user) {
	for (const auto& us : m_users) {
		if (us.getId() == user.getId()) {
			return;
		}
	}
	m_users.push_back(user);
}

void ChatRoom::removeUserFromChatRoom(const common::ID userId) {
	for (auto it = m_users.begin(); it != m_users.end(); ++it) {
		if (it->getId() == userId) {
			m_users.erase(it);
			return;
		}
	}
}
