#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & t_inst) : AWeapon(t_inst)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::operator = (const PlasmaRifle & t_inst)
{
	m_name = t_inst.m_name;
	m_apcost = t_inst.m_apcost;
	m_damage = t_inst.m_damage;
}
