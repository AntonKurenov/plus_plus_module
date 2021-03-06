#include <iostream>

void converter(char *str)
{
	while (*str)
	{
		std::cout << (char)std::toupper(*str);
		str++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;

	argv++;
	while (*argv)
	{
		converter(*argv);
		i++;
		argv++;
		if (i < argc - 1)
			std::cout << " ";
	}
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return 0;
}
