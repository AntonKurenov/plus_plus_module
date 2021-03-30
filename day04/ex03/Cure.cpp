#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const& src): AMateria(src)
{
}

Cure& Cure::operator=(Cure const& src)
{
	return *this;
}

AMateria* Cure::clone() const
{
	Cure *clone = new Cure();
	*clone = *this;
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + " wounds *" << std::endl;
}
