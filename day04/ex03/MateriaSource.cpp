#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
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
	// TODO
	static_cast<void>(src);
	return *this;
}
