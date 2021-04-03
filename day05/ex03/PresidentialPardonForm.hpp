#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string const & target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
	PresidentialPardonForm(PresidentialPardonForm const& src);
	virtual void execute(Bureaucrat const & executor) const;
	void action() const;
};

#endif // PRESIDENTIALPARDONFORM_HPP
