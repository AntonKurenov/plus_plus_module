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
	std::string m_type;

public:
	Zombie(std::string t_name, std::string t_type) : m_name(t_name), m_type(t_type)
	{
	};
	~Zombie();
	void announce(void) const;
};

#endif // ZOMBIE_HPP
