#include "Mutantstack.hpp"

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack &src)
{
	if (this == &src)
		return *this;
	this->c = src.c;
	return *this;
}
