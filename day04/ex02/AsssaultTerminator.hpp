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
	virtual ISpaceMarine* clone() const;
	AssaultTerminator& operator=(AssaultTerminator const & src);
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif // ASSSAULTTERMINATOR_HPP
