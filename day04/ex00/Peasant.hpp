#ifndef PEASANT_HPP
# define PEASANT_HPP

#include <iostream>

#include "Victim.hpp"

class Peasant : public Victim
{
public:
	Peasant(std::string const &);
	Peasant(const Peasant&);
	~Peasant();
	void operator=(const Peasant&);
	void introduce();
	std::string getName() const;
	virtual void getPolymorphed() const;
};

#endif // PEASANT_HPP
