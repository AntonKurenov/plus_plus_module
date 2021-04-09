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

template<typename T, int N>
class Array
{
private:
	T m_arr[N];

public:
	size_t getSize();
};

template<typename T, int N>
size_t Array<T, N>::getSize()
{
	return N;
}

int main(void)
{
	int a = 21;
	int b = 42;

	char c1 = 'A';
	char c2 = 's';

	Array<std::string, 100> arr;
	std::cout << arr.getSize() << std::endl;
	std::cout << max<int>(a, b) << std::endl;
	std::cout << max<char>(c1, c2) << std::endl;
	int * x = new int();
	std::cout << x << std::endl;
	return 0;
}
