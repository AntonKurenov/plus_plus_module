#include "Span.hpp"

Span::Span(unsigned int n): m_size(n)
{
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
	return *this;
}
