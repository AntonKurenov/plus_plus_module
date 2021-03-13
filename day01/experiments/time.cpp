#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

int main()
{
	time_t rawtime;
	struct tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::string time(asctime(timeinfo));
	std::cout << time;
	return (0);
}
