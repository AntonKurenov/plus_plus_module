#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	srand(time(NULL));
	Intern  someRandomIntern;
	Bureaucrat bob("Bob", 2);
	Form*   rrf;
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");	
		rrf->beSigned(bob);
		bob.executeForm(*rrf);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete rrf;
	try
	{
		rrf = someRandomIntern.makeForm("hello world request", "Bender");	
		rrf->beSigned(bob);
		bob.executeForm(*rrf);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
