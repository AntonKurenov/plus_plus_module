#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm
{
private:

protected:
public:
	PresidentialPardonForm();
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
	PresidentialPardonForm(PresidentialPardonForm const& src);
};

#endif // PRESIDENTIALPARDONFORM_HPP
