#include "user.h"

User::User(common::ID id, std::string& name) : m_userId{ id }, m_name{ name } {}

common::ID User::getId() const {
	return m_userId;
}

std::string User::getName() const {
	return m_name;
}
