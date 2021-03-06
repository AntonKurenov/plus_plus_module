#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
private:
	std::string m_login;
	std::string m_greeting;
	std::string m_farewell;
	
public:
	Pony(std::string login) : m_login(login)
	{
	}
	

}

#endif // PONY_HPP
