#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
	std::string m_name;
	int m_apcost;
	int m_damage;

public:
	AWeapon();
	AWeapon(std::string const &, int, int);
	AWeapon(const AWeapon &);
	virtual ~AWeapon();
	void operator = (const AWeapon &);
	std::string const &getName() const;
	int getAPCost() const;
	int getDamage();
	virtual void attack() const = 0;
};


#endif // AWEAPON_HPP
