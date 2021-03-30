#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const& src): AMateria(src)
{
}

AMateria* Ice::clone() const
{
	std::cout << "inside clone Ice" << std::endl;
	Ice *clone = new Ice();
	*clone = *this;
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
	AMateria::use(target);
}
