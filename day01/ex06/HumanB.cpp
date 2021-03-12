#include "HumanB.hpp"

HumanB::HumanB(std::string t_name) : m_name(t_name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &t_weapon)
{
	m_weapon = &t_weapon;
}

void HumanB::attack() const
{
	std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}
