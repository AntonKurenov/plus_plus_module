#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist & t_inst) : AWeapon(t_inst)
{
}

PowerFist::~PowerFist()
{
}

void PowerFist::operator = (const PowerFist & t_inst)
{
	m_name = t_inst.m_name;
	m_apcost = t_inst.m_apcost;
	m_damage = t_inst.m_damage;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
