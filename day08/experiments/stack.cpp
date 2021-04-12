#include <stack>
#include <iostream>
#include <deque>

int main()
{
	std::stack<int> st;
	st.push(2);
	st.push(2);
	st.push(2);
	st.push(5);
	st.push(4);

	std::cout << st.top() << std::endl;
	st.pop();
	std::cout << st.top() << std::endl;
	
	std::cout << "size = ";
	std::cout << st.size() << std::endl;
	std::stack<int>::container_type::iterator it;
	// it = (st.pop() + st.size());

	return 0;
}
