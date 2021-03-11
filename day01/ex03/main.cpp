#include "Zombie.hpp"
#include "ZombieHorde.hpp"

#define N 10

int main(void)
{
	srand(time(NULL));
	std::cout << "======test ZombieHorde========" << std::endl;
	ZombieHorde* horde = new ZombieHorde(N);
	horde->announceEach();
	delete(horde);
	// system("leaks a.out");
	return (0);
}
