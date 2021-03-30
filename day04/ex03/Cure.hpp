#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
class ICharacter;
class AMateria;

class Cure : public AMateria
{
private:

protected:
public:
	Cure();
	virtual ~Cure();
	Cure& operator=(Cure const& src);
	Cure(Cure const& src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif // CURE_HPP
