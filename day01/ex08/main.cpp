#include "Human.hpp"

int main()
{
	Human hm;

	std::cout << "===============================================" << std::endl;
	hm.action("melee", "vehicle");
	hm.action("range", "airplane");
	hm.action("shout", "personal computer");
	hm.action("greeting", "human");
	hm.action("farewell", "another human");
	std::cout << "===============================================" << std::endl;
	return (0);
}
