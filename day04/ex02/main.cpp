#include "AsssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

void next_step_check()
{
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	Squad* vlc = new Squad;
	Squad* check = new Squad;
	vlc->push(bob);
	vlc->getUnit(0)->battleCry();
	vlc->push(jim);
	vlc->getUnit(1)->battleCry();
	*check = *vlc;
	ISpaceMarine *tmp;
	check->getUnit(4);
	tmp = check->getUnit(0);
	tmp->battleCry();
	tmp = check->getUnit(1);
	tmp->battleCry();
	vlc->getUnit(5);
	tmp = check->getUnit(0)->clone();
	tmp->battleCry();
	delete vlc;
	delete check;
	std::cout << "===========================================================" << std::endl;
}

int main()
{
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << "===========================================================" << std::endl;
	// next_step_check();
	return 0;
}
