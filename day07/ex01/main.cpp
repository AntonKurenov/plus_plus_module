#include <iostream>

#include "iter.hpp"

template <typename T>
void print_elem(T const & val)
{
	std::cout << "Print: " << val << std::endl;
}

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
	std::cout << "====================================================" << std::endl;
	std::srand(time(NULL));
	std::string	str_arr[5];
	for (int i = 0; i < 5; i++)
	{
		str_arr[i] = i + '0';
		std::cout << str_arr[i] + " ";
	}
	std::cout << std::endl;
	iter(str_arr, 5, print_elem);
	std::cout << "====================================================" << std::endl;

	One test[5];
	for (int i = 0; i < 5; i++)
	{
		test[i].setValue(rand() % 10);
		std::cout << test[i] << " | ";
	}
	std::cout << std::endl;
	iter(test, 5, print_elem);
	std::cout << "====================================================" << std::endl;
	return 0;
}
