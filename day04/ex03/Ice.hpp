#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
class ICharacter;
class AMateria;

class Ice : public AMateria
{
private:
public:
	Ice();
	virtual ~Ice();
	Ice(Ice const& src);
	Ice& operator=(Ice const& src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif // ICE_HPP
