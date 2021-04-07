#include <iostream>

template<typename T>
T const & max(T const & x, T const & y)
{
	if (x >= y)
	{
		return (x);
	}
	return (y);
}

int main(void)
{
	int a = 21;
	int b = 42;

	char c1 = 'A';
	char c2 = 's';

	std::cout << max<int>(a, b) << std::endl;
	std::cout << max<char>(c1, c2) << std::endl;
	return 0;
}
