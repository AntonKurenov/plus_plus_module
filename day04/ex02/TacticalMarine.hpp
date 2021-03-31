#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
private:
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &);
	virtual ~TacticalMarine();
	virtual ISpaceMarine* clone() const;
	TacticalMarine& operator=(TacticalMarine const & src);
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif // TACTICALMARINE_HPP
