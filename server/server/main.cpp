#include <iostream>
#include <string>

#include "chat_room.h"
#include "notification_server.h"

int main() {

	std::cout << "start server" << std::endl;

	NotificationServer ntServer;

	ChatRoom singleChatRoom(std::string("Chat_1"));
	singleChatRoom.startSession();

	return 0;
}
