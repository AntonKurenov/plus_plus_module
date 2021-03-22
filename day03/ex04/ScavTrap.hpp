#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <ctime>

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string const & t_name);
	ScavTrap(const ScavTrap&);
	~ScavTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void operator=(const ScavTrap&);
	void challengeNewcomer();
};

#endif // SCAVTRAP_HPP
