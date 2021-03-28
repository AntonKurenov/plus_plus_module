#ifndef ASSSAULTTERMINATOR_HPP
#define ASSSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
private:
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator& operator=(AssaultTerminator const& src);
	AssaultTerminator(AssaultTerminator const& src);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif // !ASSSAULTTERMINATOR_HPP
