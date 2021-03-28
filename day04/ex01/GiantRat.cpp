#include "GiantRat.hpp"

GiantRat::GiantRat(): Enemy(50, "GiantRat")
{
	std::cout << "* PIi - PIi! Yiu - iuuo *" << std::endl;
}

GiantRat::~GiantRat()
{
	std::cout << "* Arrgfghaf *" << std::endl;
}

void GiantRat::operator = (const GiantRat & t_inst)
{
	m_hp = t_inst.m_hp;
	m_type = t_inst.m_type;
	std::cout << "* PIi - PIi! Yiu - iuuo *" << std::endl;
}

GiantRat::GiantRat(const GiantRat & t_inst): Enemy(t_inst)
{
	std::cout << "* PIi - PIi! Yiu - iuuo *" << std::endl;
}
