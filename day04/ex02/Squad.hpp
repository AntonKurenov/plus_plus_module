#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int m_count;
	ISpaceMarine **m_squad;

public:
	Squad();
	~Squad();
	Squad& operator=(Squad const& src);
	Squad(Squad const& src);
	virtual int getCount() const;
	virtual ISpaceMarine * getUnit(int) const;
	virtual int push(ISpaceMarine*);
};

#endif // SQUAD_HPP
