#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const &);
	NinjaTrap(const NinjaTrap&);
	~NinjaTrap();
	void operator=(const NinjaTrap&);
	void ninjaShoebox(FragTrap &target);
	void ninjaShoebox(ScavTrap &target);
	void ninjaShoebox(NinjaTrap &target);
	void ninjaShoebox(ClapTrap &target);
	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
};

#endif // NINJATRAP_HPP
