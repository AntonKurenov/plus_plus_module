#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(NULL));
	{
		FragTrap one("HELLO");
		one.meleeAttack("RAkk");
		one.takeDamage(20);
		one.rangedAttack("Bandit");
		one.takeDamage(40);
		one.rangedAttack("Bandit");
		one.takeDamage(50);
		one.takeDamage(200);
		one.beRepaired(10);
		one.beRepaired(10000);
		one.vaulthunter_dot_exe("Skag");
		one.vaulthunter_dot_exe("Spiderant");
		one.vaulthunter_dot_exe("Prisoner");
	}
	std::cout << "========================================================================" << std::endl;
	{
		ScavTrap scav("Droid");
		scav.challengeNewcomer();
		scav.rangedAttack("Skag");
		scav.meleeAttack("Drifter");
		scav.takeDamage(50);
		scav.takeDamage(60);
		scav.takeDamage(60);
		scav.beRepaired(10);
		scav.challengeNewcomer();
		scav.challengeNewcomer();
	}
	return (0);
}
