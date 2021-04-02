#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target): 
	Form("RobotomyRequestForm", 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src): Form(src)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src)
{
	*this = src;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "* ZRZRZRRRZRZRZRZRZR DZDZDZDZDZDZD FZFZFZFZFZFZFZFZ *" << std::endl;
	if (std::rand() % 2 == 0)
	{
		std::cout << "<" + Form::getTarget() + "> has been robotomized successfully"\
			<< std::endl;
	}
	else
	{
		std::cout << "Robotomy failed" << std::endl;
	}
}
