#include <stdio.h>
#include <iostream>

int gl_var = 1;
int func(void) {
	return (2);
}

namespace one {
	int	gl_var = 2;
	int func(void) {
		return (3);
	}
}

namespace two {
	int gl_var = 3;
	int func(void) {
		return (5);
	}
}

int main(void)
{
	char buff[20];
	printf("1: %d\n", gl_var);
	printf("2: %d\n", one::gl_var);
	std::cout << one::gl_var << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered : " << buff << "" << std::endl;
	return (0);
}
