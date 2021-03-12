#include "HumanA.hpp"

HumanA::HumanA(std::string t_name, Weapon& t_weapon) :\
				m_weapon(t_weapon), m_name(t_name)
{
}

void HumanA::attack(void)
{
	std::cout << m_name << " attacks with his "  << m_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
