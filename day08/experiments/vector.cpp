#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::srand(time(NULL));

	std::vector<int> vec;
	for (int i = 0; i < 5; ++i)
		vec.push_back(rand() % 10);
	for (int i = 0; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	std::cout << "====" << std::endl;
	std::vector<int>::iterator it;
	// std::vector<int>::iterator it_1;
	it = vec.begin();
	std::vector<int>::iterator res;
	res = std::find(vec.begin(), vec.end(), 3);
	if (*res == 3)
		std::cout << "res = " << *res << std::endl;
	else
		std::cout << "Not found" << std::endl;

	std::cout << *it << std::endl;
	*it = 1000;
	std::cout << *it << std::endl;
	std::cout << std::endl;
	return 0;
}
