#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): 
	Form("ShruberryCreationForm", 137, 145, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action() const
{
	std::ofstream ofs(getTarget() + "_shruberry", std::ios_base::out | std::ios_base::trunc);
	if (!ofs.is_open())
	{
		std::cerr << "Error: Can't open file to write" << std::endl;
		return ;
	}
	std::ifstream ifs("tree.txt");
	std::string buff;
	while (std::getline(ifs, buff, '\n'))
	{
		ofs << buff << std::endl;
	}
	ifs.close();
	ofs.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	action();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src): 
		Form(src)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	if (this == &src)
	{
		return *this;
	}
	*this = src;
	return *this;
}
