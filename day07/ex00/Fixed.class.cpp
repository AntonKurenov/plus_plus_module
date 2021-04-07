#include "Fixed.class.hpp"

Fixed::Fixed(): m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

void Fixed::operator=(const Fixed& t_inst)
{
	std::cout << "Assignation operator called" << std::endl;
	m_value = t_inst.getRawBits();
}

Fixed::Fixed(const int t_input)
{
	m_value = t_input << m_bits;
	std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(const float t_input)
{
	m_value = (int)roundf(t_input * (1 << m_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& t_inst) : m_value(t_inst.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)m_value / (1 << m_bits));
}

int Fixed::toInt(void) const
{
	return (m_value >> m_bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (m_value);
}

void Fixed::setRawBits(int const raw)
{
	m_value = raw;
}

std::ostream& operator << (std::ostream &output, const Fixed &t_fix)
{
	output << t_fix.toFloat();
	return (output);
}
