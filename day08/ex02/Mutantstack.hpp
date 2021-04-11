#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class Mutantstack : public std::stack<T>
{
public:
	Mutantstack();
	Mutantstack(Mutantstack<T> const &src);
	virtual ~Mutantstack();
	Mutantstack& operator=(Mutantstack const& src);
	Mutantstack(Mutantstack<T> const& src);
	class Iterator;
};

#endif // MUTANTSTACK_HPP
