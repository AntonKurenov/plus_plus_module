#ifndef PEON_HPP
# define  PEON_HPP

#include <iostream>

#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string const &);
	Peon(const Peon&);
	Peon();
	~Peon();
	void operator=(const Peon&);
	void introduce();
	std::string getName() const;
	virtual void getPolymorphed() const;
};

#endif // PEON_HPP
