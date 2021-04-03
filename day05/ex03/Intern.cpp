#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const&)
{
}

Intern& Intern::operator=(Intern const&)
{
	return *this;
}

Form *Intern::createShruberry(std::string const & target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::createRobotomy(std::string const & target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::createPardon(std::string const & target)
{
	return new PresidentialPardonForm(target);
}

const char* Intern::UnkownFormException::what() const throw()
{
	return "Intern: error: there is no such form, sorry(";
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	Form* (Intern::*actions[3])(std::string const & target) = {\
			&Intern::createShruberry,
			&Intern::createRobotomy,
			&Intern::createPardon};
	std::string forms1[3] = {"shruberry creation",\
			"robotomy request", "presidential pardon"};
	std::string forms2[3] = {"ShruberryCreationForm", "RobotomyRequestForm",\
			"PresidentialPardonForm"}; 
	for (int i = 0; i < 3; i++)
	{
		if (name.compare(forms1[i]) == 0 || name.compare(forms2[i]) == 0)
		{
			return ((this->*actions[i])(target));
		}
	}
	throw Intern::UnkownFormException();
}
