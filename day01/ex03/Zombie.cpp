#include "Zombie.hpp"

std::string names[5] = {"Anton", "Artemon", "Animen", "Anemion", "Auemen"};

Zombie::Zombie()
{
	m_index = rand() % 5;
	m_name = names[m_index];
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << m_name << " dies" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << "<" << m_name << "> Braiiiiiinnnsssssssss....." << std::endl;
}
