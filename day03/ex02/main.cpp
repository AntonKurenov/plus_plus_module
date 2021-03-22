#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	srand(time(NULL));
	{
		FragTrap frag("Frag");
		frag.meleeAttack("Bandit");
		frag.rangedAttack("Skagg");
		frag.takeDamage(20);
		frag.takeDamage(100);
		frag.beRepaired(300);
		frag.vaulthunter_dot_exe("Bandit");
		frag.vaulthunter_dot_exe("Bandit");
		frag.vaulthunter_dot_exe("Bandit");
		frag.vaulthunter_dot_exe("Bandit");
	}

	std::cout << "====================================================" << std::endl;
	ScavTrap scav("Scav");
	{
		scav.meleeAttack("Bandit");
		scav.rangedAttack("Skagg");
		scav.takeDamage(20);
		scav.takeDamage(100);
		scav.takeDamage(30);
		scav.takeDamage(400);
		scav.beRepaired(300);
		scav.challengeNewcomer();
		scav.challengeNewcomer();
		scav.challengeNewcomer();
	}
	return (0);
}
