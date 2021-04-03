#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void pardon_test()
{
	Bureaucrat dan("Dan", 50);
	Bureaucrat mike("Mike", 149);
	Bureaucrat jack("Jack", 120);
	Bureaucrat bob("Bob", 2);
	PresidentialPardonForm pardon("Gordon");

	std::cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*==*=*=*=*=*=*==*=*=*=*=*=*==*=*=*=*=*=*=*" << std::endl;
	try
	{
		pardon.beSigned(mike);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << pardon;
	std::cout << "====================================================" << std::endl;

	try
	{
		pardon.execute(bob);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << pardon;
	std::cout << "====================================================" << std::endl;

	try
	{
		pardon.beSigned(bob);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << pardon;
	std::cout << "====================================================" << std::endl;


	try
	{
		pardon.execute(jack);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		pardon.execute(bob);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		mike.executeForm(pardon);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		bob.executeForm(pardon);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;
}

void robo_test()
{
	Bureaucrat dan("Dan", 50);
	Bureaucrat mike("Mike", 149);
	Bureaucrat jack("Jack", 120);
	Bureaucrat bob("Bob", 2);
	RobotomyRequestForm robo("Gordon");

	std::cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*==*=*=*=*=*=*==*=*=*=*=*=*==*=*=*=*=*=*=*" << std::endl;
	try
	{
		robo.beSigned(mike);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << robo;
	std::cout << "====================================================" << std::endl;

	try
	{
		robo.beSigned(dan);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << robo;
	std::cout << "====================================================" << std::endl;

	try
	{
		robo.execute(mike);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		robo.execute(bob);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		mike.executeForm(robo);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		bob.executeForm(robo);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;
}

void shrub_test()
{
	Bureaucrat dan("Dan", 50);
	Bureaucrat mike("Mike", 149);
	Bureaucrat jack("Jack", 120);
	Bureaucrat bob("Bob", 2);
	ShrubberyCreationForm shrub("home");

	std::cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*==*=*=*=*=*=*==*=*=*=*=*=*==*=*=*=*=*=*=*" << std::endl;
	try
	{
		shrub.beSigned(mike);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << shrub;
	std::cout << "====================================================" << std::endl;

	try
	{
		shrub.beSigned(dan);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << shrub;
	std::cout << "====================================================" << std::endl;

	try
	{
		shrub.execute(mike);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		shrub.execute(bob);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		mike.executeForm(shrub);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		bob.executeForm(shrub);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;
}

int main()
{
	srand(time(NULL));
	shrub_test();
	robo_test();
	pardon_test();
	return 0;
}
