#include <iostream>
#include <cstdlib>
#include <string>

class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};

class Unrelated {};

int main()
{
	int a = 25;
	double b = a;
	int c = b;
	int d = static_cast<int>(b);
	// int c = b;
	Child1 ch1;
	Parent *p1 = &ch1;
	// Child2 *ch3 = p1;
	Child2 *ch2 = static_cast<Child2 *>(p1);

	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	return 0;
}
