#include "Brain.hpp"

Brain::Brain()
{
	m_iq = rand() % 130;
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	std::string arr = "0123456890ABCDEF";
	std::string res;

	long poi = (unsigned long)this;
	for (; poi > 0; poi /= 16)
	{
		res += arr[poi % 16];
	}
	res = "0x" + res;
	return (res);
}
