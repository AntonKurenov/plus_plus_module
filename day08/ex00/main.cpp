#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{

	std::srand(time(NULL));
	{
		std::cout << "=================VECTOR=============================" << std::endl;
		std::vector<int> vec(10);
		for (size_t i = 0; i < vec.size(); i++)
		{
			vec[i] = i;
		}
		for (size_t i = 0; i < vec.size(); i++)
		{
			std::cout << vec[i] << " ";
		}
		int what = rand() % vec.size();
		std::cout << "Let's find : " << what << std::endl;
		std::cout << "Easyfind iterator value: " << *easyfind(vec, what) << std::endl;
		try
		{
			what = vec.size() * 2;
			std::cout << "Lets find : " << what << std::endl;
			*easyfind(vec, what);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "====================================================" << std::endl;
	}

	{
		std::cout << "=================LIST=============================" << std::endl;
		std::list<int> ls;
		for (size_t i = 0; i < 10; i++)
		{
			ls.push_back(i);
		}
		int what = rand() % ls.size();
		std::cout << "Let's find : " << what << std::endl;
		std::cout << "Easyfind iterator value: " << *easyfind(ls, what) << std::endl;
		try
		{
			what = ls.size() * 2;
			std::cout << "Lets find : " << what << std::endl;
			*easyfind(ls, what);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "====================================================" << std::endl;
	}
	return 0;
}
