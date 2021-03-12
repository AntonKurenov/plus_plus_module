#include <iostream>

void func(int & a)
{
	a += 10;
	std::cout << "inside func " << a << std::endl;
} 

void swap(int & x, int & y)
{
	int temp = x;

	x = y;
	y = temp;
}

int main(void)
{
	// int a = 10;
	// int h = 70;
	// int* b = &a;
	// int& r = a;
	// int & ref_2 = h;
	// int x = 10;
	// int y = 88;
	int a = 7;
	int *p = &a;
	int *t = new int(50);

	// std::cout << "a = " << a << std::endl;
	// // std::cout << ref_2 + h << std::endl;
	// func(a);
	// std::cout << "outside func " << a << std::endl;
	// func(r);
	// std::cout << "2 outside func " << a << std::endl;
	// swap(x, y);
	// std::cout << "x = " << x << " y = " << y << std::endl;
	std::cout << &a << "   " << p << std::endl;
	std::cout << *t << std::endl;
	return (0);
}
