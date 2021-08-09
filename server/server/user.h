#pragma once
#include <string>

#include "types.h"

class User {
	public:
		User( types::ID id, std::string& name );

		types::ID getId() const;
		std::string getName() const;

	private:
		types::ID m_id;
		std::string m_name;
};