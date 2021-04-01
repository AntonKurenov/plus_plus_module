#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat dan("Dan", 30);
	Bureaucrat jack("Jack", 149);
	Bureaucrat bob("Bob", 2);
	std::cout << "====================================================" << std::endl;

	try
	{
		dan.increment();
		std::cout << dan;
		dan.decrement();
		std::cout << dan;
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		jack.decrement();
		std::cout << jack;
		jack.decrement();
		std::cout << jack;
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "====================================================" << std::endl;
	try
	{
		bob.increment();
		std::cout << bob;
		bob.increment();
		std::cout << bob;
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	try
	{
		Bureaucrat last("Last", 157);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "====================================================" << std::endl;

	return 0;
}
