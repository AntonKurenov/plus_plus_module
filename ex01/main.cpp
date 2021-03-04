#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int check_command(std::string command)
{
	if (command == "EXIT" || command == "exit")
		return (1);
	if (command == "ADD" || command == "add")
		return (2);
	if (command == "search" || command == "SEARCH")
		return (3);
	return (0);
}

int main()
{
	Phonebook book;
	bool is_exit = 0;
	std::string command;
	int command_id;
	int index = 0;
	int is_full = 0;

	std::cout << "Welcome!" << std::endl;
	while (command_id != 1) 
	{
		std::cout << "Print command: ";
		std::getline(std::cin, command, '\n');
		command_id = check_command(command);
		if (command_id == 2 && index <= MAX)
		{
			index++;
			book.addContact(index);
		}
		else if (command_id == 2 && index > MAX)
		{
			std::cout << "Sorry, memory is full, now only SEARCH command works";
		}
		if (command_id == 3)
		{
			book.doSearch();
		}
	}
	return 0;
}
