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

int operator+(Point a, Point b)
{
	int sum;

	sum = a.getX() + a.getY() + b.getX() + b.getY();
	return (sum);
}


int main()
{
	// Sample samp;
	// char c = 'a';
	// float fl = 9.999;

	// samp.test(c);
	// samp.test(789);
	// samp.test(fl);
	// samp.test();
	Point p1(10, 20);
	Point p2(30, 40);
	std::cout << p1 + p2 << std::endl;
	return (0);
}
