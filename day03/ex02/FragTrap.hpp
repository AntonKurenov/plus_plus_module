#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
# include <ctime>

class FragTrap
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
	FragTrap(std::string const & t_name);
	FragTrap(const FragTrap&);
	~FragTrap();
	void operator=(const FragTrap&);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif // FRAGTRAP_HPP
