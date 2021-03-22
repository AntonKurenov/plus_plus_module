#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const & t_name) : ClapTrap(t_name)
{
	max_hit_p = FragTrap::max_hit_p;
	hit_points = max_hit_p;
	max_energy = NinjaTrap::max_energy;
	energy_live = max_energy;
	level = 1;
	melee = NinjaTrap::melee;
	ranged = FragTrap::ranged;
	armor = FragTrap::armor;
	std::cout << "New SuperTrap has been created" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap <" + name + "> died" << std::endl;
}

void SuperTrap::operator=(const SuperTrap& t_old)
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
	std::cout << "SuperTrap's assignment called!" << std::endl;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
