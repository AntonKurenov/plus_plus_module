#include <iostream>

#include "Array.hpp"

class One
{
private:
	int m_value;

public:
	One(): m_value(0) {};
	One(int val): m_value(val) {};
	One(const One& src): m_value(src.m_value) {};
	~One() {};
	void operator=(const One& t_inst) {
		m_value = t_inst.m_value;
	};
	int getValue() const {
		return m_value;
	};
	void operator++()
	{
		m_value++;
	}
	void setValue(int n) {
		m_value = n; 
	};
};

std::ostream & operator<<(std::ostream &out, One const & src)
{
	out << src.getValue();
	return out;
}

int main()
{
	std::srand(time(NULL));
	{
		std::cout << "=====================INT TEST=======================" << std::endl;
		Array<int> arr(10);
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			arr[i] = i;
		}
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		try
		{
			std::cout << "an attempt to access an element of an array that does not exist" << std::endl;
			arr[50] = 50;
			std::cout << "after attempt" << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "====================================================" << std::endl;
	}

	{
		std::cout << "===============TEST WITH CLASS ONE========================" << std::endl;
		Array<One> arr(20);
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			arr[i] = i + 8;
		}
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		try
		{
			std::cout << "an attempt to access an element of an array that does not exist" << std::endl;
			arr[50] = 50;
			std::cout << "after attempt" << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "====================================================" << std::endl;
	}

	{
		std::cout << "=================TEST WITH FLOAT===================" << std::endl;
		Array<float> arr(14);
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			arr[i] = i + 3.4;
		}
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		try
		{
			std::cout << "an attempt to access an element of an array that does not exist" << std::endl;
			arr[-10] = 50;
			std::cout << "after attempt" << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "====================================================" << std::endl;
	}
	return 0;
}
