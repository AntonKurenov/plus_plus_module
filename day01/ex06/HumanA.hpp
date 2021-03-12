#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string m_name;
	Weapon& m_weapon;
public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void attack(void);
};

#endif // HUMANA_HPP
