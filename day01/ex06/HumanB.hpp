#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string m_name;
	Weapon *m_weapon;
	
public:
	HumanB(std::string);
	~HumanB();
	void setWeapon(Weapon&);
	void attack() const;
};


#endif // HUMANB_HPP
