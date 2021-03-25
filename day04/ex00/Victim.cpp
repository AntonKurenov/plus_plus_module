#include "Victim.hpp"

Victim::Victim(std::string const & t_name) : m_name(t_name)
{
	std::cout << "Some random victim called " + m_name + " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " + m_name + " just died for no apparent reason!" << std::endl;
}

void Victim::operator = (const Victim &t_inst)
{
	m_name = t_inst.m_name;
	std::cout << "Some random victim called " + m_name + " just appeared!" << std::endl;
}

void Victim::introduce()
{
	std::cout << "I am " + m_name + " and I like otters!" << std::endl;
}

std::string Victim::getName() const
{
	return (m_name);
}

void Victim::getPolymorphed() const
{
	std::cout << m_name + " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator << (std::ostream &output, const Victim &t_inst)
{
	output << "I am " << t_inst.getName() << " and I like otters!" << std::endl;
	return (output);
}
