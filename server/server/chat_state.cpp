#include "chat_state.h"

notification::ChatState::ChatState(common::ID userId, std::string name, std::vector<InfoMessage>& infoMessage) :
	m_userId{ userId }, m_name{ name }, m_infoMessage{ infoMessage }
{
}

common::ID notification::ChatState::getUserId() const
{
	return m_userId;
}

void notification::ChatState::setUserId(common::ID userId) {
	m_userId = userId;
}

void notification::ChatState::setName(std::string name) {
	m_name = name;
}

void notification::ChatState::setInfoMessage(std::vector<InfoMessage>& infoMessage) {
	m_infoMessage = infoMessage;
}

notification::InfoMessage::InfoMessage(common::ID userId, std::string name, std::string message) :
	m_userId{ userId }, m_name{ name }, m_message{ message }
{
}

common::ID notification::InfoMessage::getUserId() const {
	return m_userId;
}

std::string notification::InfoMessage::getName() const {
	return m_name;
}

std::string notification::InfoMessage::getMessage() const {
	return m_message;
}

void notification::InfoMessage::setUserId(common::ID userId) {
	m_userId = userId;
}

void notification::InfoMessage::setName(std::string name) {
	m_name = name;
}

void notification::InfoMessage::setMessage(std::string message) {
	m_message = message;
}
