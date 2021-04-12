#include <iostream>
#include <vector>

template <typename T>
class MyArray
{
private:
	T *m_arr;
	int m_num;
	MyArray();

public:
	class Iterator;
	T const * getArray();
	MyArray(int n = 1): m_num(n)
	{
		m_arr = new T[n];
	};
	T& operator[] (const int & n)
	{
		if (n >= 0 && n < m_num)
			return m_arr[n];
		throw std::runtime_error("Error: index out of range");
	};
	Iterator begin() { return m_arr; }
	Iterator end() { return m_arr + m_num; }
	int getSize() const { return m_num; };
	T const & getElem(size_t i) const
	{
		if (i >= 0 && i < m_num)
			return m_arr[i];
		throw std::runtime_error("Error: index out of range");
	};

	class Iterator
	{
	private:
		T* m_cur;

	public:
		Iterator(T* first): m_cur(first) {};
		T & operator-(size_t n) { return *(m_cur + n); };
		T & operator+(size_t n) { return *(m_cur + n); };
		T & operator++(int) { return *(m_cur++); };
		T & operator--(int) { return *(m_cur--); };
		T & operator++() { 
			T* tmp = m_cur;
			*m_cur++;
			return *tmp;
		};
		T & operator--() {
			T* tmp = m_cur;
			*m_cur--;
			return *tmp;
		};
		bool operator!=(const Iterator & it) { return m_cur != it.m_cur; }
		bool operator==(const Iterator & it) { return m_cur == it.m_cur; }
		T & operator* () { return *m_cur; }
	};
};

template <typename T>
std::ostream & operator<<(std::ostream & output, const MyArray<T> & t_inst)
{
	for (size_t i = 0; i < t_inst.getSize(); i++)
	{
		output << t_inst.getElem(i) << std::endl;
	}
	return output;
}

int main()
{
	MyArray<std::string> arr(3);
	arr[0] = "str1";
	arr[1] = "str2";
	arr[2] = "str3";

	std::cout << arr;
	// auto it = MyArray<std::string>::Iterator(arr.begin());
	MyArray<std::string>::Iterator it(arr.begin());
	MyArray<std::string>::Iterator it2(arr.end());
	for (it = arr.begin(); it != it2; it++)
		std::cout << *it << std::endl;
	return 0;
}
