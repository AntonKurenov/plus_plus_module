#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	virtual ~RadScorpion();
	void operator = (const RadScorpion &);
};

#endif //RADSCORPION_HPP
