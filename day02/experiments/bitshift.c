#include <iostream>

int main(void)
{
	int num1 = 10;
	int r = num1 >> 1;
	int l = num1 << 1;

	std::cout << "r = " << r << std::endl;
	std::cout << "l = " << l << std::endl;
	return (0);
}
