#include "BigBoomer.hpp"

BigBoomer::BigBoomer(): AWeapon("Big Boomer", 20, 60)
{
}

BigBoomer::BigBoomer(const BigBoomer & t_inst) : AWeapon(t_inst)
{
}

BigBoomer::~BigBoomer()
{
}

void BigBoomer::operator = (const BigBoomer & t_inst)
{
	m_name = t_inst.m_name;
	m_apcost = t_inst.m_apcost;
	m_damage = t_inst.m_damage;
}

void BigBoomer::attack() const
{
	std::cout << "* Booms chick chick booms.. *" << std::endl;
}
