#ifndef SORCERER_HPP
# define  SORCERER_HPP

#include "Victim.hpp"

#include <iostream>

class Sorcerer
{
private:
	std::string m_name;
	std::string m_title;

public:
	Sorcerer(std::string const &, std::string const &);
	Sorcerer(const Sorcerer&);
	~Sorcerer();
	void operator=(const Sorcerer&);
	void introduce();
	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const & t_vict) const;
};

std::ostream & operator << (std::ostream &output, const Sorcerer &t_inst);

#endif // SORCERER_HPP
