#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:

public:
	Intern();
	virtual ~Intern();
	Intern& operator=(Intern const& src);
	Intern(Intern const& src);
	Form *makeForm(std::string const &name, std::string const &target);
	class UnkownFormException: public std::exception
	{
	public:
		const char* what() const throw();
	};
	Form *createShruberry(std::string const &);
	Form *createRobotomy(std::string const &);
	Form *createPardon(std::string const &);
};

#endif // INTERN_HPP
