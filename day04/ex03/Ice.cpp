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
	Ice *clone = new Ice();
	*clone = *this;
	return clone;
}

void Ice::use(ICharacter& target)
{

}
