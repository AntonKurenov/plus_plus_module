#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void Phonebook::fillColumn(std::string t_str) const
{
	std::cout << "|";
	if (t_str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << t_str[i];
		}
		std::cout << '.';
		return ;
	}
	std::cout << std::setw(10) << t_str;
}

void Phonebook::showFullInfo(int t_index) const
{
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "First name: " << m_contacts[t_index].getFirstName() << std::endl;
	std::cout << "Last name: " << m_contacts[t_index].getLastName() << std::endl;
	std::cout << "Nickname: " << m_contacts[t_index].getNickname() << std::endl;
	std::cout << "Login: " << m_contacts[t_index].getLogin() << std::endl;
	std::cout << "Postal address: " << m_contacts[t_index].getPostAddr() << std::endl;
	std::cout << "Email: " << m_contacts[t_index].getEmail() << std::endl;
	std::cout << "Phone number: " << m_contacts[t_index].getPhone() << std::endl;
	std::cout << "Birthday date: " << m_contacts[t_index].getBirthday() << std::endl;
	std::cout << "Favorite meal: " << m_contacts[t_index].getMeal() << std::endl;
	std::cout << "Underwear color: " << m_contacts[t_index].getColor() << std::endl;
	std::cout << "Darkest secret: " << m_contacts[t_index].getSecret() << std::endl;
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
}

void Phonebook::printTable(int t_index) const
{
	std::cout << "=============================================" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::setw(10) << "NICKNAME"; 
	std::cout << "|" << std::endl;
	std::cout << "-----------+----------+----------+-----------" << std::endl;
	for (int i = 0; i < t_index; i++)
	{
		std::cout << "|" << std::setw(10) << (i + 1);
		fillColumn(m_contacts[i].getFirstName());
		fillColumn(m_contacts[i].getLastName());
		fillColumn(m_contacts[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "=============================================" << std::endl;
}

void Phonebook::doSearch(int t_index) const
{
	int index;
	bool flag = 0;
	bool is_num = 0;
	std::string str_index;

	if (t_index > 0)
	{
		printTable(t_index);
	}
	else
	{
		std::cout << "Nothing to show, try to add contacts via add command"\
				 << std::endl;
		return ;
	}
	while (!is_num)
	{
		std::cout << "Input an index of a contact for full info: ";
		std::getline(std::cin, str_index, '\n');
		if (str_index.length() > 4)
		{
			std::cout << "It won't work, try again" << std::endl;
		}
		else
		{
			try
			{
				index = std::stoi(str_index);
				flag = 0;
			}
			catch (const std::invalid_argument)
			{
				std::cout << "Thats not a number, try again" << std::endl;
				is_num = 0;
				flag = 1;
			}
			if (flag == 0)
			{
				if (index > t_index || index < 1)
				{
					std::cout << "Input a number from 1 to " << t_index << \
					" to search a contact" << std::endl;
				}
				else
				{
					is_num = 1;
				}
			}
		}
	}
	showFullInfo(index - 1);
}

void Phonebook::addContact(int t_index) 
{
	std::string input;

	std::cout << "Ok, let's go" << std::endl;
	int i = 0;
	while (i <= 11)
	{
		switch (i)
		{
		case 0:
			std::cout << "Input name: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setFirstName(input);
			i++;
			break;
		case 1:
			std::cout << "Input last name: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setLastName(input);
			i++;
			break;
		case 2:
			std::cout << "Input login: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setLogin(input);
			i++;
			break;
		case 3:
			std::cout << "Input nickname: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setNickname(input);
			i++;
			break;
		case 4:
			std::cout << "Input postal address: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setPostAddr(input);
			i++;
			break;
		case 5:
			std::cout << "Input email: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setEmail(input);
			i++;
			break;
		case 6:
			std::cout << "Input phone: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setPhone(input);
			i++;
			break;
		case 7:
			std::cout << "Input birthday date: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setBirthday(input);
			i++;
			break;
		case 8:
			std::cout << "Input favorite meal: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setMeal(input);
			i++;
			break;
		case 9:
			std::cout << "Input favorite color: ";
			std::getline(std::cin, input, '\n');
			m_contacts[t_index].setColor(input);
			i++;
			break;
		case 10:
			std::cout << "Input darkest secret: ";
			std::getline(std::cin, input, '\n');		
			m_contacts[t_index].setSecret(input);
			i++;
			break;
		case 11:
			std::cout << "Contact added!" << std::endl;
			i++;
			break;
		default:
			break;
		}
	}
}
