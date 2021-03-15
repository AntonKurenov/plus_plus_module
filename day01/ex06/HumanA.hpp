#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon& m_weapon;
	std::string m_name;

public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void attack(void);
};

#endif // HUMANA_HPP
