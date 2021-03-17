#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int m_value;
	static const int m_bits = 8;

public:
	Fixed(const int t_input);
	Fixed(const float t_input);
	Fixed(const Fixed&);
	~Fixed();
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	void operator=(const Fixed& t_inst);
};

#endif // FIXED_CLASS_HPP
