#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
private:
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine& operator=(TacticalMarine const& src);
	TacticalMarine(TacticalMarine const& src);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif // TACTICALMARINE_HPP
