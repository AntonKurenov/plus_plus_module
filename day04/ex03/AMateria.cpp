#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type): m_type(type), m_xp(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const& src): m_type(src.m_type), m_xp(src.m_xp)
{
}

AMateria& AMateria::operator=(AMateria const& src)
{
	std::cout << "operator = amateria" << std::endl;
	m_type = src.m_type;
	m_xp = src.m_xp;
	return *this;
}

void AMateria::use(ICharacter& target)
{
	m_xp += 10;
}

unsigned int AMateria::getXP() const
{
	return m_xp;
}

std::string const & AMateria::getType() const
{
	return m_type;
}
