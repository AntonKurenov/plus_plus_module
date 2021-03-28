#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::operator = (const RadScorpion & t_inst)
{
	m_hp = t_inst.m_hp;
	m_type = t_inst.m_type;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & t_inst): Enemy(t_inst)
{
	std::cout << "* click click click *" << std::endl;
}
