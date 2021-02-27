#include "sample.class.hpp"

int main()
{
	Sample instance;
	int i;

	instance.new_func();
	std::cout << "Time to choose. Choose 1 or 2" << std::endl;
	std::cin >> i;
	instance.old_func(i);
	// instance.func();
	return 0;
}
