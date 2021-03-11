#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Zombie " << m_name << " dies" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiinnnsssssssss....." << std::endl;
}
