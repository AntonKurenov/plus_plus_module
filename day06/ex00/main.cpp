#include "Converter.hpp"


int char_to_int(char str)
{
	return static_cast<int>(str);
}

bool is_only_digits(std::string const & str)
{
	std::size_t found = str.find_first_not_of("1234567890");
	if (found == std::string::npos)
	{
		return true;
	}
	return false;
}

void checkForNaNs(std::string const & str)
{
}

void checkInput(std::string const & str)
{
	bool not_int;

	std::size_t found = str.find_first_not_of("1234567890");
	if (found == std::string::npos)
	{
		not_int = false;
	}
	else
	{
		not_int = true;
	}
}

int checkArg(std::string const & arg)
{

}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	std::string arg = argv[1];
	if (checkArg(arg) == 1)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	TypeFinder(argv[1]);
	std::string type;
	checkInput(argv[1]);
	return 0;
}
