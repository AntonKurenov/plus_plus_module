#include "Peon.hpp"

Peon::Peon(std::string const & t_name) : Victim(t_name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::introduce()
{
	std::cout << "I am " + m_name + " and I like otters!" << std::endl;
}

std::string Peon::getName() const
{
	return (m_name);
}

void Peon::getPolymorphed() const
{
	std::cout << m_name + " has been turned into a pink pony!" << std::endl;
}

void Peon::operator = (const Peon &t_inst)
{
	m_name = t_inst.m_name;
	std::cout << "Zog zog." << std::endl;
}
