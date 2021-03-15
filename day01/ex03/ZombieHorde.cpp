#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) : m_max(n)
{
	m_horde = new Zombie[m_max];
}

ZombieHorde::~ZombieHorde()
{
	delete [] m_horde;
	std::cout << "The horde has been destroyed" << std::endl;
}

void ZombieHorde::announceEach() const
{
	for (int i = 0; i < m_max; i++)
		m_horde[i].announce();
}
