#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
# include <ctime>

class ScavTrap
{
private:
	std::string name;
	static const unsigned int max_hit_p = 100;
	static const unsigned int max_energy = 50;
	static const unsigned int level = 1;
	static const unsigned int melee = 20;
	static const unsigned int ranged = 15;
	static const unsigned int armor = 3;
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
