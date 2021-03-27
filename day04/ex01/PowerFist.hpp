#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &);
	virtual ~PowerFist();
	void operator = (const PowerFist &);
	virtual void attack() const;
};

#endif // POWERFIST_HPP
