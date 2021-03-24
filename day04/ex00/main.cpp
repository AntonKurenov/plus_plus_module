#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	// std::cout << "====================================================" << std::endl;
	// Peon peon("Peon");
	// Sorcerer sor("Magic", "Man");

	// sor.polymorph(peon);
	return (0);
}
