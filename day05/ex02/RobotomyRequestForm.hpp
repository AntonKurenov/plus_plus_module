#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string const &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
	RobotomyRequestForm(RobotomyRequestForm const& src);
	virtual void execute(Bureaucrat const & executor) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP
