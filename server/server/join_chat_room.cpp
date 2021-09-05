#include "join_chat_room.h"

notification::JoinChatRoom::JoinChatRoom(common::ID userId, common::ID chatRoomId) :
	m_userId{ userId }, m_chatRoomId{ chatRoomId }
{
}

common::ID notification::JoinChatRoom::getUserId() const
{
	return m_userId;
}

common::ID notification::JoinChatRoom::getChatRoomId() const {
	return m_chatRoomId;
}