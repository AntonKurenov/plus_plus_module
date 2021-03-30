#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class IMateriaSource;

class MateriaSource : public IMateriaSource
{
private:
	AMateria *m_tmp[4];

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource& operator=(MateriaSource const& src);
	MateriaSource(MateriaSource const& src);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif // MATERIASOURCE_HPP
