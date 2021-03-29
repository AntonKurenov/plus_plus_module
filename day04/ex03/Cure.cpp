#include "Cure.hpp"

Cure::Cure()
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const& src)
{
	*this = src;
}

Cure& Cure::operator=(Cure const& src)
{
	// TODO
	static_cast<void>(src);
	return *this;
}
