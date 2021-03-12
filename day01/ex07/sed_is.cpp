#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}

	std::string name(argv[1]);

	std::ifstream ifs(name);
	if (!ifs.is_open())
	{
		std::cerr << "File with the name " + name + " doesn't exist" << std::endl;
		return (1);
	}

	std::ofstream ofs(name + ".replace", std::ios_base::out | std::ios_base::trunc);
	if (!ofs.is_open())
	{
		std::cerr << "Couldn't create file with name " + name + ".replace" << std::endl;
		return (1);
	}

	std::string what(argv[2]

	// ofs << "hello world";
	// ifs >> dst >> dst2;
	// ifs_2 >> str;

	// std::cout << dst << " " << dst2 << std::endl;
	// std::cout << str << std::endl;
	// ifs.close();
	return (0);
}
