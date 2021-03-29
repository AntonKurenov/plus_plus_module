#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice();
	virtual ~Ice();
	Ice(Ice const& src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif // ICE_HPP
