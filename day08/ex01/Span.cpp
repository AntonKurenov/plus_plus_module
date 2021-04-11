#include "Span.hpp"

Span::Span(unsigned int n): m_size(n), m_count(0)
{
	m_vec.reserve(m_size);
}

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(Span const& src)
{
	*this = src;
}

Span& Span::operator=(Span const& src)
{
	if (this == &src)
		return *this;
	m_vec = src.m_vec;
	m_count = src.m_count;
	m_size = src.m_size;
	return *this;
}

int Span::longestSpan() const
{
	if (m_count > 1)
	{
		unsigned int long_span;
		long_span = *std::max_element(m_vec.begin(), m_vec.end()) -\
				*std::min_element(m_vec.begin(), m_vec.end());
		return long_span;
	}
	throw std::logic_error("Error: not enough elements to calculate span");
}

int Span::shortestSpan() const
{
	if (m_count > 1)
	{
		std::vector<int> sorted_vec = m_vec;
		std::vector<int>::iterator it = sorted_vec.begin() + m_count;
		std::sort(sorted_vec.begin(), it);
		int short_span;
		short_span = *std::max_element(m_vec.begin(), m_vec.end());
		int tmp;
		for (unsigned int i = 1; i < m_count; i++)
		{
			tmp = sorted_vec[i] - sorted_vec[i - 1];
			if (short_span > tmp)
			{
				short_span = tmp;
			}
		}
		return short_span;
	}
	throw std::logic_error("Error: not enough elements to calculate span");
}

void Span::addNumber(int number)
{
	if (m_count < m_size)
	{
		m_vec.push_back(number);
		m_count++;
		return ;
	}
	throw std::logic_error("Error: no space left");
}

int & Span::operator[](unsigned int i)
{
	if (i < m_count)
	{
		return m_vec[i];
	}
	throw std::logic_error("Error: no such index");
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
	{
		addNumber(*start);
		start++;
	}
}
