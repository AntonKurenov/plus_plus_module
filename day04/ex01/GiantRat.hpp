#ifndef GIANTRAT_HPP
# define GIANTRAT_HPP

#include <iostream>
#include "Enemy.hpp"

class GiantRat : public Enemy
{
public:
	GiantRat();
	GiantRat(const GiantRat &);
	virtual ~GiantRat();
	void operator = (const GiantRat &);
};

#endif //GIANTRAT_HPP
