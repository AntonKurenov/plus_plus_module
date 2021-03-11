#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string m_type;
	std::string m_names[5];

public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(const std::string&);
	Zombie* newZombie(const std::string&);
	void randomChump(void);
};	

#endif // ZOMBIE_EVENT_HPP
