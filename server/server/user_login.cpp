#include "user_login.h"

notification::UserLogin::UserLogin(common::ID userId, std::string name) :
	m_userId{ userId }, m_name{ name }
{
}

common::ID notification::UserLogin::getUserId() const
{
	return m_userId;
}

std::string notification::UserLogin::getName() const {
	return m_name;
}