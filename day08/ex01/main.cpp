#include "Span.hpp"
#include <vector>
#include <list>
#include <cstdlib>

void subjectTest()
{
	std::cout << "=================SUBJECT TEST=============================" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void exceptionTest()
{
	std::cout << "====================EXCEPTIONS TEST==================" << std::endl;
	Span sp = Span(1);
	sp.addNumber(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp.addNumber(20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void improvedAddNumberTest()
{
	std::cout << "====================MULTIPLE ADD NUMBER TEST==================" << std::endl;
	int size = 10000;
	Span sp = Span(size);
	std::vector<int> vec(size);
	for (int i = 0; i < size; i++)
	{
		vec[i] = rand() % 100;
	}
	std::cout << vec.size() << std::endl;
	std::cout << "That numbers will be added to Span instance:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
	sp.addNumber(vec.begin(), vec.end());
	std::cout << "Span instance after:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << sp[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}

int main()
{
	std::srand(time(NULL));
	subjectTest();
	exceptionTest();
	improvedAddNumberTest();
}
