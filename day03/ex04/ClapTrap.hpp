#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
# include <ctime>

class ClapTrap
{
protected:
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
	ClapTrap(std::string const &);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	void operator=(const ClapTrap&);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName();
};

#endif // CLAPTRAP_HPP
