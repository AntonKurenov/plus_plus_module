#include "Fixed.class.hpp"

void Fixed::operator=(const Fixed& t_inst)
{
	std::cout << "Assignation operator called" << std::endl;
	m_value = t_inst.getRawBits();
}

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& t_inst) : m_value(t_inst.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_value = raw;
}
