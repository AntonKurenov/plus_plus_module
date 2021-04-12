#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(): std::stack<T>() {} ;
	class Iterator;
	MutantStack(MutantStack<T> const &src): std::stack<T>(src) {};
	virtual ~MutantStack() {};
	MutantStack& operator=(MutantStack const& src);
	Iterator begin() { return &(this->top()) - this->size() + 1; }
	Iterator end() { return &(this->top()) + 1; }
	class Iterator
	{
	private:
		T* m_cur;
		Iterator();

	public:
		Iterator(T* first): m_cur(first) {};
		~Iterator(){};
		Iterator& operator=(Iterator const & src) { m_cur = src.m_cur; };
		T & operator-(size_t n) { return *(m_cur + n); };
		T & operator+(size_t n) { return *(m_cur + n); };
		T & operator++(int) { return *(m_cur++); };
		T & operator--(int) { return *(m_cur--); };
		T & operator++() { 
			T* tmp = m_cur;
			m_cur++;
			return *tmp;
		};
		T & operator--() {
			T* tmp = m_cur;
			m_cur--;
			return *tmp;
		};
		bool operator!=(const Iterator & it) { return m_cur != it.m_cur; }
		bool operator==(const Iterator & it) { return m_cur == it.m_cur; }
		T & operator* () { return *m_cur; }
	};
};

#endif // MUTANTSTACK_HPP
