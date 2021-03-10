#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string names[5] = {"Anton", "Artemon", "Animen", "Anemion", "Auemen"};

ZombieEvent::~ZombieEvent()
{
}

ZombieEvent::ZombieEvent() : m_type("standart")
{
	m_names[0] = names[0];
	m_names[1] = names[1];
	m_names[2] = names[2];
	m_names[3] = names[3];
	m_names[4] = names[4];
}

void ZombieEvent::randomChump(void)
{
	Zombie zomb(m_names[rand() % 5], m_type);
	zomb.announce();
}

void ZombieEvent::setZombieType(const std::string& t_type)
{
	m_type = t_type;
}

Zombie* ZombieEvent::newZombie(const std::string& t_name)
{
	Zombie* zomb = new Zombie(t_name, m_type);
	return (zomb);
}
