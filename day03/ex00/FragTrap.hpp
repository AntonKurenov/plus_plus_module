#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
# include <ctime>

class FragTrap
{
private:
	std::string name;
	static const unsigned int hit_points = 100;
	static const unsigned int max_hit_p = 100;
	static const unsigned int energy = 100;
	static const unsigned int level = 1;
	static const unsigned int melee = 30;
	static const unsigned int ranged = 20;
	static const unsigned int armor = 5;

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
