#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& where, int what)
{
	typename T::iterator it;

	it = std::find(where.begin(), where.end(), what);
	if (*it == what)
		return it;
	throw std::logic_error("The element not found");
}

#endif
