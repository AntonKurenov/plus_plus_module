#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): 
	Form("ShruberryCreationForm", 137, 145, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream ofs(getName() + "_shruberry", std::ios_base::out | std::ios_base::trunc);
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

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src): 
		Form(src)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	*this = src;
	return *this;
}
