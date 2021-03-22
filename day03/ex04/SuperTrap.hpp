#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

class SuperTrap : public NinjaTrap, FragTrap
{
public:
	SuperTrap(std::string const &);
	SuperTrap(const SuperTrap&);
	~SuperTrap();
	void operator=(const SuperTrap&);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const &target);
	std::string getName();
};

#endif // SUPERTRAP_HPP
