#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string m_name;
	int m_amount;
	AMateria **m_invent;
	static const int max_size = 4;

public:
	Character();
	Character(std::string const &);
	Character(Character const& src);
	virtual ~Character();
	Character& operator=(Character const& src);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP
