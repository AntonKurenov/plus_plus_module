#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Span
{
private:
	unsigned int m_size;
	unsigned int m_count;
	std::vector<int> m_vec;
	Span();

public:
	Span(unsigned int n);
	virtual ~Span();
	Span& operator=(Span const& src);
	Span(Span const& src);
	void addNumber(int number);
	void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
	int shortestSpan() const; 
	int longestSpan() const;
	int & operator[](unsigned int i);
};

#endif // SPAN_HPP
