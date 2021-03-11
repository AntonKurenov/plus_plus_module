#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	int m_max;
	Zombie* m_horde;

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announceEach() const;
};




#endif // ZOMBIEHORDE_HPP
