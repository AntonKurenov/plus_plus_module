#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string& ref = str;
	std::string* pointer = &str;

	std::cout << "Pointer: " << *pointer << std::endl;
	std::cout << "Reference: " << ref << std::endl;
	return (0); 
}
