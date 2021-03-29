#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>

class MateriaSource
{
private:

protected:
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource& operator=(MateriaSource const& src);
	MateriaSource(MateriaSource const& src);
};

#endif // MATERIASOURCE_HPP
