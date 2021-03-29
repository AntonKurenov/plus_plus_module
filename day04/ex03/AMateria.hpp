#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"


class AMateria
{
protected:
	std::string m_type;
	unsigned int m_xp;

public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria& operator=(AMateria const& src);
	AMateria(AMateria const& src);
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP
