#include "Logger.hpp"

int main()
{
	Logger l_1("new.txt");
	Logger l_2("new_log.log");
	Logger l_3("hello");

	std::cout << "===============================================" << std::endl;
	l_1.log("file", "1 Hello World!");
	l_1.log("console", "First to console!!");
	l_1.log("hello", "Message");
	l_1.log("file", "3 Hello World!");
	l_1.log("file", "4 Hello World!");
	l_1.log("file", "5 Hello World!");
	l_2.log("file", "First message");
	l_2.log("file", "Second message");
	l_2.log("console", "New message");
	l_2.log("shhsh", "New message");
	l_3.log("file", "nooooooo");
	std::cout << "===============================================" << std::endl;
	return (0);
}
