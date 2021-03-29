#include "AsssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	vlc->push(bob);
	vlc->getUnit(0)->battleCry();
	vlc->push(jim);
	vlc->getUnit(1)->battleCry();
	std::cout << "===========================================================" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "===========================================================" << std::endl;
	vlc->getUnit(5);
	delete vlc;
	return 0;
}
