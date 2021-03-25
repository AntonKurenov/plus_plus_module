#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << "====================================================" << std::endl;
	{
		Sorcerer robert("Robert", "the Magnificent");
		Peasant pes("Peasant");
		std::cout << pes;
		robert.polymorph(pes);
	}
	return (0);
}
