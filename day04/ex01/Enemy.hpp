#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
	int m_hp;
	std::string m_type;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &);
	virtual ~Enemy();
	Enemy & operator = (const Enemy &);
	std::string const & getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif //ENEMY_HPP
