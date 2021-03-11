#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify() const
{
	return (m_brain.identify());
}

Brain& Human::getBrain()
{
	return (m_brain);
}
