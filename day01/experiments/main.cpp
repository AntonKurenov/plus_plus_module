#include <iostream>
#include <iomanip>

int main()
{
	int i;
	int index;
	int flag = 0;
	bool is_num = false;
	std::string str;
	std::string t_index;

	std::cout << std::setw(5);
	std::cout << std::setw(20) << "hello world!!!" << std::endl;
	std::cout << "=============================================" << std::endl;
	// std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX|";
	// while (!is_num)
	// {
	// 	std::cout << "input a num: ";
	// 	std::getline(std::cin, t_index, '\n');
	// 	try
	// 	{
	// 		index = std::stoi(t_index);
	// 	}
	// 	catch (const std::invalid_argument)
	// 	{
	// 		std::cout << "Thats not a number, try again" << std::endl;
	// 		is_num = 0;
	// 		flag = 1;
	// 	}
	// 	if (flag == 0)
	// 	{
	// 		if (index > 8 || index < 1)
	// 		{
	// 			std::cout << "Input a number from 1 to 8 to search \
	// 			a contact" << std::endl;
	// 		}
	// 		else
	// 		{
	// 			is_num = 1;
	// 		}
	// 	}
	// }
	return 0;
}
