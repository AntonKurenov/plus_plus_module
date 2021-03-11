#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string m_type;
public:
	Weapon(/* args */);
	~Weapon();
	std::string const & getType() const;
	void setType(std::string);
};

#endif //WEAPON_HPP
