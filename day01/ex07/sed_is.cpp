#include <iostream>
#include <string>
#include <fstream>

void replace(std::string& what, std::string& repl,\
				std::ifstream& ifs ,std::ofstream& ofs)
{
	std::string buff;
	size_t start;

	while (std::getline(ifs, buff, '\n'))
	{
		while ((start = buff.find(what)) != std::string::npos)
		{
			buff.replace(start, what.length(), repl);
		}
		ofs << buff << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}

	std::string what(argv[2]), replacement(argv[3]);
	if (what.empty() || replacement.empty())
	{
		std::cout << "Error: input string is empty" << std::endl;
		return (1);
	}
	std::string name(argv[1]);

	std::ifstream ifs(name);
	if (!ifs.is_open())
	{
		std::cerr << "Error: Can't open file " + name + "to read" << std::endl;
		return (1);
	}

	std::ofstream ofs(name + ".replace", std::ios_base::out | std::ios_base::trunc);
	if (!ofs.is_open())
	{
		std::cerr << "Error: Can't open file" + name + ".replace to write" << std::endl;
		return (1);
	}

	replace(what, replacement, ifs, ofs);
	ofs.close();
	return (0);
}
