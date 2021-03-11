#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class Zombie
{
private:
	std::string m_name;
	int m_index;

public:
	Zombie();
	~Zombie();
	void announce(void) const;
};

#endif // ZOMBIE_HPP
