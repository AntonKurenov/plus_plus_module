#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

#include <iostream>
#include <string>


class Human
{
private:
	Brain m_brain;

public:
	Human();
	~Human();
	Brain& getBrain();
	std::string identify() const;
};

#endif //HUMAN_HPP
