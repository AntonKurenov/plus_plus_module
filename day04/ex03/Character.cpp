#include "Character.hpp"

Character::Character(std::string const & name): m_name(name), m_amount(0) 
{
	m_invent = new AMateria*[max_size];
	for (int i = 0; i < max_size; i++)
	{
		m_invent[i] = NULL;
	}
}

Character::~Character()
{
}

Character::Character(Character const& src)
{
	*this = src;
}

Character& Character::operator=(Character const& src)
{
	m_name = src.m_name;
	m_amount = src.m_amount;
	if (m_amount)
	{
		delete [] m_invent;
	}
	m_invent = new AMateria*[max_size];
	for (int i = 0; i < m_amount; i++)
	{
		m_invent[i] = src.m_invent[i];
	}
	return *this;
}

std::string const & Character::getName() const
{
	return m_name;
}

void Character::equip(AMateria* m)
{
	if (m_amount < max_size)
	{
		m_invent[m_amount] = m->clone();
		m_amount++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && m_invent[idx])
	{
		m_invent[idx] = NULL;
	}
}
