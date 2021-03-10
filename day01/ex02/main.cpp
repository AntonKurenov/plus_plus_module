#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	srand(time(NULL));
	Zombie zomb_1("anna", "from_main");
	zomb_1.announce();
	ZombieEvent zomb_2;
	zomb_2.randomChump();
	zomb_2.newZombie("hello");
	zomb_2.setZombieType("hehe");
	return (0);
}
