#include "Sample.hpp"  
	
Sample::Sample()
{
	std::cout << "Constructor called" << std::endl;
}
	
Sample::~Sample()
{
}

void Sample::test() const
{
	std::cout << "Nothing is here, sorry" << std::endl;
}

void Sample::test(char const c) const
{
	std::cout << "Char = " << c << std::endl;
}

void Sample::test(float const fl) const
{
	std::cout << "Float = " << fl << std::endl;
}
void Sample::test(int const num) const
{
	std::cout << "Int is = " << num << std::endl;
}
