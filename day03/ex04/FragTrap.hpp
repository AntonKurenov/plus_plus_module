#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
# include <ctime>

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string const & t_name);
	FragTrap(const FragTrap&);
	FragTrap();
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void operator=(const FragTrap&);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif // FRAGTRAP_HPP
