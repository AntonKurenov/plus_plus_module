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

	return 0;
}
