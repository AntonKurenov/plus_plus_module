#include "FragTrap.hpp"

int main(void)
{
	srand(time(NULL));
	std::cout << "========================================================================" << std::endl;
	{
		FragTrap one("HELLO");
		one.meleeAttack("RAkk");
		one.takeDamage(20);
		one.rangedAttack("Bandit");
		one.takeDamage(40);
		one.rangedAttack("Bandit");
		one.takeDamage(50);
		one.takeDamage(200);
		one.takeDamage(50);
		one.beRepaired(10);
		one.beRepaired(10000);
		one.vaulthunter_dot_exe("Skag");
		one.vaulthunter_dot_exe("Spiderant");
		one.vaulthunter_dot_exe("Prisoner");
	}
	std::cout << "========================================================================" << std::endl;
	{
		FragTrap archer("ARCHER");
		archer.rangedAttack("Skag");
		archer.meleeAttack("Drifter");
		archer.takeDamage(50);
		archer.takeDamage(60);
		archer.takeDamage(60);
		archer.beRepaired(10);
		archer.vaulthunter_dot_exe("Drifter");
	}
	std::cout << "========================================================================" << std::endl;
	return (0);
}
