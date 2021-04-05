#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Converter
{
private:
	bool m_is_int;
	bool m_is_double;
	bool m_is_float;

public:
	Converter();
	virtual ~Converter();
	Converter& operator=(Converter const& src);
	Converter(Converter const& src);
	void doConvert(std::string const & input);
};

#endif // CONVERTER_HPP
