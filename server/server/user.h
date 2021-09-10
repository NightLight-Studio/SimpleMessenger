#pragma once
#include <string>

#include "../../common/sources/types.h"

class User {
	public:
		User(common::ID userId, std::string& name );

		common::ID getId() const;
		std::string getName() const;

	private:
		common::ID m_userId;
		std::string m_name;
};