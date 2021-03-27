#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &);
	virtual ~SuperMutant();
	void operator = (const SuperMutant &);
	virtual void takeDamage(int);
};

#endif //SUPERMUTANT_HPP
