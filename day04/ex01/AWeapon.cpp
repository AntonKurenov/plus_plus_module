#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & t_name, int t_cost, int t_damage) :\
	m_name(t_name), m_apcost(t_cost), m_damage(t_damage)
{
}

AWeapon::AWeapon(const AWeapon & t_inst): m_name(t_inst.m_name),
		m_apcost(t_inst.m_apcost), m_damage(t_inst.m_damage)
{
}

AWeapon::~AWeapon()
{
}

void AWeapon::operator = (const AWeapon & t_inst)
{
	m_name = t_inst.m_name;
	m_apcost = t_inst.m_apcost;
	m_damage = t_inst.m_damage;
}

std::string const & AWeapon::getName() const
{
	return m_name;
}

int AWeapon::getAPCost() const
{
	return m_apcost;
}

int AWeapon::getDamage()
{
	return m_damage;
}
