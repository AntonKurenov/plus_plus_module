#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));
	{
		NinjaTrap ninja("Ninja");
		ninja.meleeAttack("Bandit");
		ninja.rangedAttack("Skagg");
		ninja.takeDamage(20);
		ninja.takeDamage(100);
		ninja.beRepaired(300);
		ClapTrap clap("clap");
		ninja.ninjaShoebox(clap);
		FragTrap frag("Frag");
		ninja.ninjaShoebox(frag);
		ScavTrap scav("Scav");
		ninja.ninjaShoebox(scav);
		ninja.ninjaShoebox(ninja);
	}
	std::cout << "====================================================" << std::endl;
	return (0);
}
