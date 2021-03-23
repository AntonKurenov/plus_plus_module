#ifndef SORCERER_HPP
# define  SORCERER_HPP

#include <iostream>

class Sorcerer
{
private:
	std::string m_name;
	std::string m_title;

public:
	Sorcerer(std::string const &, std::string const &);
	~Sorcerer();
	void introduce();
};

#endif // SORCERER_HPP
