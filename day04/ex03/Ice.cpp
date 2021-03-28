#include "Ice.hpp"

Ice::Ice()
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const& src)
{
	*this = src;
}

Ice& Ice::operator=(Ice const& src)
{
	// TODO
	static_cast<void>(src);
	return *this;
}
