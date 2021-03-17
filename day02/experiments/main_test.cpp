#include "Sample.hpp"

class Point
{
private:
	int m_x;
	int m_y;
public:
	Point(int t_x, int t_y) : m_x(t_x), m_y(t_y)
	{
	};
	~Point();
	int getX()
	{
		return (m_x);
	};
	int getY()
	{
		return (m_y);
	};
};

Point::~Point()
{
}

class Demo
{
private:
	int *ptr;

public:
	Demo(int num)
	{
		ptr = new int(num);
	};
	~Demo()
	{
		delete(ptr);
	};
	void setNum(int num)
	{
		*ptr = num;
	}
	int getNum() const
	{
		return (*ptr);
	}
	Demo(Demo const & d)
	{
		ptr = new int;
		*ptr = *(d.ptr);
		std::cout << "copy constr" << std::endl;
	}
};

void passByVal(Demo d)
{
}

void passByRef(Demo const & d)
{
}

std::ostream& operator<<(std::ostream& output, Point p)
{
	output << "X is : " << p.getX();
	return (output);
}

int operator+(Point a, Point b)
{
	int sum;

	sum = a.getX() + a.getY() + b.getX() + b.getY();
	return (sum);
}

int main()
{
	Demo first(6);
	Demo sec = first;
	Demo thr = sec;
	// Point p1(10, 20);
	// Point p2(30, 40);
	// std::cout << p1 + p2 << std::endl;
	// std::cout << p1 << std::endl;
	std::cout << first.getNum() << std::endl;
	std::cout << sec.getNum() << std::endl;
	first.setNum(100);
	std::cout << first.getNum() << std::endl;
	std::cout << sec.getNum() << std::endl;
	passByVal(first);
	return (0);
}
