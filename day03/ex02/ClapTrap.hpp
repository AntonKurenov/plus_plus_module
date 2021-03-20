#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
# include <ctime>

class ClapTrap
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
	ClapTrap();
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	void operator=(const ClapTrap&);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif // CLAPTRAP_HPP
