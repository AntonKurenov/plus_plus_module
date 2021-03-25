#include "Peasant.hpp"

Peasant::Peasant(std::string const & t_name) : Victim(t_name)
{
	std::cout << "Ready to serve, my lord." << std::endl;
}

Peasant::~Peasant()
{
	std::cout << "Job's done..." << std::endl;
}

void Peasant::introduce()
{
	std::cout << "I am " + m_name + " and I like ponies!" << std::endl;
}

std::string Peasant::getName() const
{
	return (m_name);
}

void Peasant::getPolymorphed() const
{
	std::cout << m_name + " has been turned into a black pony!" << std::endl;
}

void Peasant::operator = (const Peasant &t_inst)
{
	m_name = t_inst.m_name;
	std::cout << "Zog zog." << std::endl;
}
