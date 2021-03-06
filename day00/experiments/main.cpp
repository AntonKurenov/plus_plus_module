#include <iostream>
#include <iomanip>
#include "sample.class.hpp"

void func_1()
{
	Sample sam_2;

	std::cout << Sample::getCounter() << std::endl;

}

int main()
{
	Sample sam_1;

	std::cout << Sample::getCounter() << std::endl;
	func_1();
	return 0;
}
