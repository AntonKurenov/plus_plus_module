#ifndef ARRAY_NEW_HPP
#define ARRAY_NEW_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T *m_arr;
	size_t m_size;

public:
	Array();
	Array(size_t n);
	Array(Array<T> const &);
	void operator=(Array<T> const & src);
	T & operator[](size_t i);
	class OutOfRangeException: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "Error: index out of range";
		};
	};
};
	
template <typename T>




#endif
