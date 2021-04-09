#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T *m_arr;
	size_t m_size;

public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &);
	void operator=(Array<T> const &);
	T &operator[](unsigned int i);
	unsigned int size() const;
	class OutOfRangeException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

template <typename T>
unsigned int Array<T>::size() const
{
	return m_size;
}

template <typename T>
const char * Array<T>::OutOfRangeException::what() const throw()
{
	return "Error: Index out of range";
}

template <typename T>
Array<T>::Array(): m_size(0)
{
	m_arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n): m_size(n)
{
	m_arr = new T[m_size];
}

template <typename T>
Array<T>::Array(Array<T> const & src): m_size(src.m_size)
{
	m_arr = new T[m_size];
	for (int i = 0; i < m_size; i++)
	{
		m_arr[i] = src.m_arr[i];
	}
}

template <typename T>
void Array<T>::operator=(Array<T> const & src)
{
	if (this != &src)
	{
		m_size = src.m_size;
		m_arr = new T[m_size];
		for (int i = 0; i < m_size; i++)
		{
			m_arr[i] = src.m_arr[i];
		}
	}
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (!(i >= 0 && i < m_size))
	{
		throw Array<T>::OutOfRangeException();
	}
	return m_arr[i];
}

#endif
