#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string const & Weapon::getType() const
{
	return (m_type);
}

void Weapon::setType(std::string t_new_type)
{
	m_type = t_new_type;
}
