#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const & t_name) : name(t_name)
{
	std::cout << "New ClapTrap has been created" << std::endl;
}

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

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\n+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
	if (hit_points + amount > max_hit_p)
	{
		hit_points = max_hit_p;
		std::cout << "ClapTrap <" + name + "> Fully repaired" << std::endl;
		std::cout << "+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
		return ;
	}
	hit_points += amount;
	std::cout << "ClapTrap <" + name + "> has been repaired by <" << amount << "> of hit points" << std::endl;
	std::cout << "+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	if (armor != 0)
		amount = amount - (int)(amount - (amount * armor / 10));
	if (hit_points == 0)
	{
		std::cout << "ClapTrap <" + name + "> : Don't hit the lying one!!" << std::endl;
		return ;
	}
	if (amount > hit_points)
	{
		std::cout << "ClapTrap <" + name + "> is taking too much of damage and fall on to the ground" << std::endl;
		amount = hit_points;
		hit_points = 0;
		return ;
	}
	hit_points -= amount;
	std::cout << "ClapTrap <" + name + "> takes <" << amount << "> of damage" << std::endl;
	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
}

std::string ClapTrap::getName()
{
	return (name);
}
