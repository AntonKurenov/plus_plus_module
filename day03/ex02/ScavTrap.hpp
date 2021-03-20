#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
# include <ctime>

class ScavTrap
{
private:
	std::string name;
	unsigned int max_hit_p;
	unsigned int max_energy;
	unsigned int level;
	unsigned int melee;
	unsigned int ranged;
	unsigned int armor;
	unsigned int hit_points;
	unsigned int energy_live;

public:
	ScavTrap(std::string const & t_name);
	ScavTrap(const ScavTrap&);
	~ScavTrap();
	void operator=(const ScavTrap&);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
};

#endif // SCAVTRAP_HPP
