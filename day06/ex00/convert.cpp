#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>
#include <cmath>

void convertToInt(std::string const &);
void convertToChar(std::string const &);
void convertToFloat(std::string const &);
void convertToDouble(std::string const &);

void convertToInt(std::string const & str)
{
	int m_int;
	try
	{
		m_int = std::stoi(str);
	}
	catch(const std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << m_int << std::endl;
}

void convertToDouble(std::string const & str)
{
	double m_double;	
	try
	{
		m_double = std::stod(str);
	}
	catch(const std::exception &e)
	{
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	std::cout << "double: " << m_double << std::endl;
}

void convertToFloat(std::string const & str)
{
	double m_float;
	std::cout << "float: ";
	try
	{
		m_float = std::stod(str);
	}
	catch(const std::exception &e)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (isnan(m_float) || isinf(m_float))
	{
		std::cout << static_cast<float>(m_float) << "f" << std::endl;
		return ;
	}
	if (m_float - static_cast<long>(m_float) == 0)
	{
		std::cout << static_cast<float>(m_float) << ".0f" << std::endl;
	}
	else
	{
		std::cout << static_cast<float>(m_float) << "f" << std::endl;
	}
}

void convertToChar(std::string const & str)
{
	int m_char;
	try
	{
		m_char = std::stoi(str);
	}
	catch(const std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (m_char >= 127)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (isprint(m_char))
	{
		std::cout << "char: " << static_cast<char>(m_char) << std::endl;
		return ;
	}
	else
	{
		std::cout << "char: not printable" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	std::string arg = argv[1];
	convertToChar(arg);
	convertToInt(arg);
	convertToFloat(arg);
	convertToDouble(arg);
	return 0;
}
