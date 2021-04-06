#include <iostream>
#include <string>
#include <cstdlib>

struct Data
{
	std::string str1;
	int num;
	std::string str2;
};

void *serialize(void)
{
	std::srand(time(NULL));
	char * str = new char[20];
	std::string symbols = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
	for (int i = 0; i < 8; i++)
	{
		str[i] = symbols[rand() % symbols.size()];
		std::cout << str[i];
	}
	std::cout << std::endl;
	int n = rand();
	std::cout << n << std::endl;
	*reinterpret_cast<int*>(str + 8) = n;
	for (int i = 0; i < 8; i++)
	{
		str[12 + i] = symbols[rand() % symbols.size()];
		std::cout << str[12 + i];
	}
	std::cout << std::endl << "====================================================" << std::endl;
	return str;
}

Data *deserialize(void *raw)
{
	Data *data = new Data;

	data->str1 = std::string(reinterpret_cast<char*>(raw), 8);
	data->num = *(reinterpret_cast<int*>(static_cast<char*>(raw) + 8));
	data->str2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);

	return data;
}

int main(void)
{
	Data *data = deserialize(serialize());

	std::cout << data->str1 << std::endl;
	std::cout << data->num << std::endl;
	std::cout << data->str2 << std::endl;

	delete data;
	return 0;
}
