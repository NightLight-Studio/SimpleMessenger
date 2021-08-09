#pragma once
#include <vector>

#include "user.h"
#include "types.h"

class ChatRoom {
public:
	ChatRoom();
	
	void startSession();

private:
	types::ID m_id{ 1 };
	std::vector<User> m_users;
};