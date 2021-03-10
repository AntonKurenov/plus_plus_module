#include <iostream>

int main(void)
{
	int a = 10;
	int* b = &a;
	int& r = a;

	std::cout << "a = " << a << std::endl;
	std::cout << "r = " << r << std::endl;
	a = 1111;
	std::cout << "r = " << r << std::endl;
	return (0);
}
