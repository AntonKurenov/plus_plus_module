#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T & x, T & y)
{
	T tmp = y;
	y = x;
	x = tmp;
}

template <typename T>
T const & min(T const & x, T const & y)
{
	if (x < y)
	{
		return x;
	}
	if (x == y)
	{
		return y;
	}
	return y;
}

template <typename T>
T const & max(T const & x, T const & y)
{
	if (x > y)
	{
		return x;
	}
	if (x == y)
	{
		return y;
	}
	return y;
}

#endif
