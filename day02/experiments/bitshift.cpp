#include <iostream>
#include <cmath>

int main(void)
{
	int num1 = 10;
	int r = num1 >> 1;
	int l = num1 << 2;
	// float fl = 2.39;
	float fl = 2.5;
	int n = num1 * (1 << 2);
	int fx;

	fx = (int)roundf(fl * (1 << 8));
	std::cout << "fx = " << fx << std::endl;
	// std::cout << "r = " << r << std::endl;
	// std::cout << "l = " << l << std::endl;
	// std::cout << "num = " << n << std::endl;
	std::cout << "res = " << ((float)fx / (1 << 8)) << std::endl;
	return (0);
}
