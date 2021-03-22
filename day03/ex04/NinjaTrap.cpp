#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const & t_name)
{
	max_hit_p = 60;
	max_energy = 120;
	level = 1;
	melee = 60;
	ranged = 5;
	armor = 0;
	hit_points = max_hit_p;
	energy_live = max_energy;
	name = t_name;
	std::cout << "New NinjaTrap has been created" << std::endl;
}

NinjaTrap::NinjaTrap()
{
	std::cout << "New NinjaTrap has been created" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap <" + name + "> died" << std::endl;
}

void NinjaTrap::operator=(const NinjaTrap& t_old)
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
	std::cout << "NinjaTrap's assignment called!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "Ohhh, well, you are FragTrap with name <" + target.getName() + ">, I will put you inside this old shoebox. AHAHAHA!!!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "Ohhh, well, you are ScavTrap with name <" + target.getName() + ">, I will put you inside this old shoebox. AHAHAHA!!!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "Hey, Handsome Robot <" + target.name + "> I see that we are the same. Nice painting!!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "Ohhh, well, you are ClapTrap with name <" + target.getName() + ">, I will put you inside this old shoebox. AHAHAHA!!!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "<" + name << "> : attacks " << target << " at melee, causing " << melee << " points of damage!" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << " at range, causing " << ranged << " points of damage!" << std::endl;
}
