#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
	int m_size;
	std::vector<int> m_vec;
	Span();

public:
	Span(unsigned int n);
	virtual ~Span();
	Span& operator=(Span const& src);
	Span(Span const& src);
	void addNumber(int number);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
};

#endif // SPAN_HPP
