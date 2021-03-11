#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie* ret;
	srand(time(NULL));
	std::cout << "======test Zombie Class========" << std::endl;
	Zombie zomb_1("Hello", "from_main");
	zomb_1.announce();
	std::cout << "======test ZombieEvent========" << std::endl;
	ZombieEvent zomb_2;
	zomb_2.randomChump();
	ret = zomb_2.newZombie("Newbie");
	std::cout << "======test newZombie==========" << std::endl;
	ret->announce();
	zomb_2.setZombieType("hehe");
	delete(ret);
	// system("leaks a.out");
	return (0);
}
