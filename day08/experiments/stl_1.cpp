#include <iostream>
#include <vector>
#include <algorithm>

template <typename T, int size>
class StaticArray
{
private:
	T m_array[size];

public:
	T* getArray();
	T& operator[](size_t i)
	{
		return m_array[i];
	}
};

template <typename T, int size>
T* StaticArray<T, size>::getArray()
{
	return m_array;
}

int main()
{
	std::srand(time(NULL));
	StaticArray<int, 10> arr;

	std::vector<int> vec;
	for (int i = 0; i < 100; ++i)
		vec.push_back(rand() % 10);
	for (int i = 0; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	try
	{
		std::cout << vec.at(110) << " ";
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// for (size_t i = 0; i < 10; ++i)
	// {
	// 	arr[i] = rand() % 10;
	// }
	// for (size_t i = 0; i < 10; ++i)
	// {
	// 	std::cout << arr[i] << " ";
	// }
	std::cout << std::endl;
	return 0;
}
