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

std::string Sorcerer::getName() const
{
	return (m_name);
}

std::string Sorcerer::getTitle() const
{
	return (m_title);
}

void Sorcerer::polymorph(Victim const & t_vict) const
{
	std::cout << "I like sheeps and ponies, and I will turn you into one of them." << std::endl;
	t_vict.getPolymorphed();
}

std::ostream & operator << (std::ostream &output, const Sorcerer &t_inst)
{
	output << "I am " + t_inst.getName() + ", " + t_inst.getTitle() + ", and I like ponies!" << std::endl;
	return (output);
}
