#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int const grade):
	m_name(name), m_grade(grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& src)
{
	return *this;
}
