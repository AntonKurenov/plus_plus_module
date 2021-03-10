#include "Zombie.hpp"

Zombie::~Zombie()
{
}

void Zombie::announce(void) const
{
	std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiinnnsssssssss....." << std::endl;
}
