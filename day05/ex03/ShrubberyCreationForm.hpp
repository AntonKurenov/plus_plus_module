#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string const & target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& src);
	ShrubberyCreationForm(ShrubberyCreationForm const& src);
	virtual void execute(Bureaucrat const & executor) const;
	void action() const;
};

#endif // SHRUBBERYCREATIONFORM_HPP
