#include "Pony.hpp"

Pony::~Pony()
{
	if (this->m_is_stack == 1)
	{
		std::cout << "Pony with a name " << this->m_name << " which lived on the"\
		<< " stack is died" << std::endl;
	}
	else
	{
		std::cout << "Pony with a name " << this->m_name << " which lived on the"\
		<< " heap is died" << std::endl;
	}
}

std::string Pony::getName(void) const
{
	return Pony::m_name;
}

void Pony::doStuff()
{
	if (m_is_stack == 1)
		std::cout << "Pony with name " << this->m_name << " lives on the stack"\
		<< std::endl;
	else
		std::cout << "Pony with name " << this->m_name << " lives on the heap"\
		<< std::endl;
	std::cout << "Pony still lives" << std::endl;
}
