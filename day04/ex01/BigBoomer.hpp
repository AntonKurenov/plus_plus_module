#ifndef BIGBOOMER_HPP
# define BIGBOOMER_HPP

#include <iostream>
#include "AWeapon.hpp"

class BigBoomer: public AWeapon
{
public:
	BigBoomer();
	BigBoomer(const BigBoomer &);
	virtual ~BigBoomer();
	void operator = (const BigBoomer &);
	virtual void attack() const;
};

#endif // BIGBOOMER_HPP
