#include "Converter.hpp"

Converter::Converter(): m_is_int(false), m_is_double(false),
	m_is_float(false)
{
}

Converter::~Converter()
{
}

Converter::Converter(Converter const& src)
{
	*this = src;
}

Converter& Converter::operator=(Converter const& src)
{
	return *this;
}

void doConvert(std::string const & input)
{

}
