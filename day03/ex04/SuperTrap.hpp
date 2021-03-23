#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap(std::string const &);
	SuperTrap(const SuperTrap&);
	~SuperTrap();
	void operator=(const SuperTrap&);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const &target);
	std::string getName();
};

#endif // SUPERTRAP_HPP
