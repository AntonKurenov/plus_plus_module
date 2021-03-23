#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const & t_name, std::string const & t_title) : 
	m_name(t_name), m_title(t_title)
{
	std::cout << m_name + ", " + m_title + ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << m_name + ", " + m_title + ", is dead. Consequences will never" +\
	" be the same!" << std::endl;
}

void Sorcerer::introduce()
{
	std::cout << "I am " + m_name + ", " + m_title + ", and I like ponies!" << std::endl;
}
