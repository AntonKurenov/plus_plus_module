#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T *m_arr;
	size_t m_len;

public:
	Array(): m_arr(NULL) {};
	Array(unsigned int n);

};

#endif
