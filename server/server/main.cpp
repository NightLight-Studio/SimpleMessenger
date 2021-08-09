#include <iostream>

#include "chat_room.h"

int main() {

	std::cout << "start server" << std::endl;

	ChatRoom singleChatRoom;
	singleChatRoom.startSession();

	return 0;
}
