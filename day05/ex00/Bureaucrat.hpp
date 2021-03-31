#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	std::string const m_name;
	int const m_grade;

public:
	Bureaucrat(std::string const &, int const);
	virtual ~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat const& src);
	Bureaucrat(Bureaucrat const& src);
};

#endif // BUREAUCRAT_HPP
