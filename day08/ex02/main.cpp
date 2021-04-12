#include "Mutantstack.hpp"

int main()
{

	{
		std::cout << "=================SUBJECT TEST=============================" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::Iterator it = mstack.begin();
		MutantStack<int>::Iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << ' ';
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}

	{
		std::cout << "=================MORE TESTS=============================" << std::endl;
		MutantStack<std::string> mstack;
		mstack.push("one");
		mstack.push("two");
		mstack.push("three");
		mstack.push("four");
		mstack.push("five");
		mstack.push("the_end");
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		MutantStack<std::string>::Iterator it = mstack.begin();
		MutantStack<std::string>::Iterator ite = mstack.end();
		it--;
		while (ite != it)
		{
			std::cout << *ite << ' ';
			--ite;
		}
		std::cout << std::endl;
		
	}
	return 0;
}
