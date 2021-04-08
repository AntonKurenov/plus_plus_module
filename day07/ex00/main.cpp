#include "whatever.hpp"

class One
{
private:
	int m_value;
	One();

public:
	One(int val): m_value(val) {};
	One(const One& src): m_value(src.m_value) {};
	~One() {};
	void operator=(const One& t_inst) {
		m_value = t_inst.m_value;
	};
	int getValue() const {
		return m_value;
	};
	bool operator>(const One& t_inst) const;
	bool operator<(const One& t_inst) const;
	bool operator==(const One& t_inst) const;
};

bool One::operator==(const One& t_inst) const
{
	if (m_value == t_inst.m_value)
	{
		return true;
	}
	return false;
}

bool One::operator>(const One& t_inst) const
{
	if (m_value > t_inst.m_value)
		return true;
	return false;
}

bool One::operator<(const One& t_inst) const
{
	if (m_value < t_inst.m_value)
		return true;
	return false;
}

std::ostream & operator<<(std::ostream &out, One const & src)
{
	out << src.getValue();
	return out;
}

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "====================================================" << std::endl;
	int x = 100;
	int y = 300;
	std::cout << "Max : ";
	std::cout << max<int>(x, y) << std::endl;
	std::cout << "Min : ";
	std::cout << min<int>(x, y) << std::endl;
	std::cout << "x = " << x << "  y= " << y << std::endl;
	std::cout << "Swap : ";
	swap<int>(x, y);
	std::cout << "x = " << x << "  y = " << y << std::endl;
	std::cout << "====================================================" << std::endl;
	// One one(10);
	// One two(20);
	// std::cout << "Max : ";
	// std::cout << max<One>(one, two) << std::endl;
	// std::cout << "Min : ";
	// std::cout << min<One>(one, two) << std::endl;
	// std::cout << "one = " << one << "  two = " << two << std::endl;
	// std::cout << "Swap : ";
	// swap<One>(one, two);
	// std::cout << "one : " << one;
	// std::cout << " | two : " << two << std::endl;

	return 0;
}
