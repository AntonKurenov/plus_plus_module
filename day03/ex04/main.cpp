#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));
	std::cout << "====================================================" << std::endl;
	{
		SuperTrap super("Super");
		super.meleeAttack("Bandit");
		super.rangedAttack("Skagg");
		super.takeDamage(20);
		super.takeDamage(100);
		super.beRepaired(300);
		ClapTrap clap("clap");
		super.ninjaShoebox(clap);
		FragTrap frag("Frag");
		super.ninjaShoebox(frag);
		ScavTrap scav("Scav");
		super.ninjaShoebox(scav);
		super.vaulthunter_dot_exe("Bandit");
		super.vaulthunter_dot_exe("Bandit");
	}
	std::cout << "====================================================" << std::endl;
	return (0);
}
