#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
private:
	int m_value;
	static const int m_bits = 8;

public:
	Fixed();
	Fixed(const Fixed&);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	void operator = (const Fixed& t_inst);
};

#endif // FIXED_CLASS_HPP
