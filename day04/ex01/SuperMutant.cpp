#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::operator = (const SuperMutant & t_inst)
{
	m_hp = t_inst.m_hp;
	m_type = t_inst.m_type;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & t_inst): Enemy(t_inst)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	Enemy::takeDamage(damage);
}
