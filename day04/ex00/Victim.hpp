#ifndef VICTIM_HPP
# define  VICTIM_HPP

#include <iostream>

class Victim
{
protected:
	std::string m_name;

public:
	Victim(std::string const &);
	Victim(const Victim&);
	~Victim();
	void operator=(const Victim&);
	void introduce();
	std::string getName() const;
	virtual void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &output, const Victim &t_inst);

#endif // VICTIM_HPP
