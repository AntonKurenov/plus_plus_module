#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "New ClapTrap has been created" << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" + name + "> died" << std::endl;
}

void ClapTrap::operator=(const ClapTrap& t_old)
{
	hit_points = t_old.hit_points;
	energy_live = t_old.energy_live;
	hit_points = t_old.hit_points;
	energy_live = t_old.energy_live;
	name = t_old.name;
	max_hit_p = t_old.max_hit_p;
	max_energy = t_old.max_energy;
	level = t_old.level;
	melee = t_old.melee;
	ranged = t_old.ranged;
	armor = t_old.armor;
	std::cout << "ClapTrap's assignment called!" << std::endl;
}
