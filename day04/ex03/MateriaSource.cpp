#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		m_tmp[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& src)
{
	for (int i = 0; i < 4; i++)
	{
		m_tmp[i] = src.m_tmp[i];
	}
	return *this;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
	{
		return new Ice;
	}
	if (type == "cure")
	{
		return new Cure;
	}
	return 0;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
	{
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (m_tmp[i] != NULL)
		{
			m_tmp[i] = materia->clone();
			return ;
		}
	}
	return ;
}
