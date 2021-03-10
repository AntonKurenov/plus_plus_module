#include "Pony.hpp"

void ponyOnTheHeap()
{
	std::string name;
	std::string color;

	std::cout << "Let's create pony on the heap" << std::endl;
	std::cout << "Enter a name: "; 
	std::getline(std::cin, name, '\n');	
	Pony* pony_heap = new Pony(name, 0);
	pony_heap->doStuff();
	delete(pony_heap);
	std::cout << "===================================================" << std::endl;
}

void ponyOnTheStack()
{
	std::string name;
	std::string color;

	std::cout << "Let's create pony on the stack" << std::endl;
	std::cout << "Enter a name: "; 
	std::getline(std::cin, name, '\n');	
	Pony pony_stack(name, 1);
	pony_stack.doStuff();
}

int main()
{
	std::cout << "Hello!" << std::endl;
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << "===================================================" << std::endl;
	std::cout << "The end" << std::endl;
	// system("leaks a.out");
	return (0);
}
