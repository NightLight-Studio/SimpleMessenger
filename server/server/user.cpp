#include "user.h"

User::User(types::ID id, std::string& name) : m_id{ id }, m_name{ name } {}

types::ID User::getId() const {
	return m_id;
}

std::string User::getName() const {
	return m_name;
}