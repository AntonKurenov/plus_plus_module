#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	int m_ap;
	std::string m_name;
	int m_max_ap;
	AWeapon *m_weapon;

public:
	Character();
	Character(std::string const &);
	Character(const Character &);
	~Character();
	void operator = (const Character &);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const & getName() const;
	int getAP() const;
	const AWeapon * getWeapon() const;
};

std::ostream & operator << (std::ostream &, const Character &);

#endif //CHARACTER_HPP
