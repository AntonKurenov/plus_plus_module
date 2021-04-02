#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	srand(time(NULL));
	Bureaucrat dan("Dan", 50);
	Bureaucrat jack("Jack", 149);
	Bureaucrat bob("Bob", 2);
	Form one("one", 40, 30);
	Form two("two", 60, 90);
	std::cout << "====================================================" << std::endl;

	try
	{
		one.beSigned(dan);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		one.beSigned(bob);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << one;
	std::cout << "====================================================" << std::endl;

	try
	{
		jack.signForm(one);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		jack.signForm(two);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << two;

	std::cout << "====================================================" << std::endl;
	try
	{
		bob.signForm(two);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << two;
	return 0;
}
