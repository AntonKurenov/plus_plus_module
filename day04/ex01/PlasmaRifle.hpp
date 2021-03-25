#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const AWeapon &);
	virtual ~PlasmaRifle();
	void operator = (const PlasmaRifle &);
	virtual void attack() const = 0;
};

#endif // PLASMARIFLE_HPP
