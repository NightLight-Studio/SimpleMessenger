#include "user_message.h"

notification::UserMessage::UserMessage(common::ID userId, std::string message) :
	m_userId{ userId }, m_message{ message }
{
}

common::ID notification::UserMessage::getUserId() const
{
	return m_userId;
}

std::string notification::UserMessage::getMessage() const {
	return m_message;
}