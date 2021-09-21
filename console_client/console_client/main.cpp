#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include <mutex>
#include "windows.h"

void printMsg(std::vector<std::string> messages) {
	for (std::string message : messages) {
		std::cout << "message: " << message << std::endl;
	}
}

void startClient(std::vector<std::string> messages) {
	while (true) {
		system("cls");
		std::cout << "text_" << std::this_thread::get_id() << std::endl;
		printMsg(messages);
		std::cout << "enter message: ";
		std::string message;
		std::cin >> message;
		messages.push_back(message);
	}
}

int main()
{
	std::vector<std::string> m_messages;

	startClient(m_messages);
}