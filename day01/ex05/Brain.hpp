#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	int m_iq;

public:
	Brain();
	~Brain();
	std::string identify() const;
};

#endif //BRAIN_HPP
