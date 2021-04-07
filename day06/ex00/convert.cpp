#include "convert.hpp"

void convertToInt(Data);
void convertToChar(Data);
void convertToFloat(Data);
void convertToDouble(Data);

void convertToInt(Data data)
{
	int m_int;
	m_int = static_cast<int>(data.init_val);
	std::cout << "int: ";
	if (data.bad_double == 1)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (data.init_val <= std::numeric_limits<int>::max() && data.init_val >=\
		std::numeric_limits<int>::min())
	{
		std::cout << m_int << std::endl;
		return ;
	}
	std::cout << "impossible" << std::endl;
}

void convertToDouble(Data data)
{
	std::cout << "double: ";
	if (data.bad_double == 1)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	else
	{
		std::cout << data.init_val << std::endl;
	}
}

void convertToFloat(Data data)
{
	float m_float;
	double val = data.init_val;
	m_float = static_cast<float>(data.init_val);
	std::cout << "float: ";
	if (data.bad_double == 1 || val >= std::numeric_limits<float>::max() ||\
		val <= std::numeric_limits<float>::min())
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (isnan(data.init_val) || isinf(data.init_val))
	{
		std::cout << static_cast<float>(data.init_val) << "f" << std::endl;
		return ;
	}
	if (data.init_val - static_cast<long>(data.init_val) == 0)
	{
		std::cout << static_cast<float>(data.init_val) << ".0f" << std::endl;
	}
	else
	{
		std::cout << static_cast<float>(data.init_val) << "f" << std::endl;
	}
}

void convertToChar(Data data)
{
	int m_char;
	m_char = static_cast<int>(data.init_val);
	if (data.bad_double == 1 || isnan(data.init_val) || isinf(data.init_val))
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
		std::cout << "char: '" << static_cast<char>(m_char) << "'" << std::endl;
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
	Data data = {.bad_double = 0, .init_val = 0};
	std::string str = argv[1];
	try
	{
		data.init_val = std::stod(str);
	}
	catch(const std::exception &e)
	{
		data.bad_double = 1;	
	}
	convertToChar(data);
	convertToInt(data);
	convertToFloat(data);
	convertToDouble(data);
	return 0;
}
