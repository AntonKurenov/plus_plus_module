#include <cmath> // для sqrt()
#include <iostream>

std::string music_quiz(std::string const & str)
{
	std::cout << "Do you think you win?" << std::endl;
	if (str == "yes")
	{
		return "yes";
	}
	else
	{
		throw "You are really wrong";
	}
	return "something went wrong, you are not supposed to see this message, turn away";
}	

int main()
{
	std::cout << "Enter a word: ";
	std::string a;
	std::cin >> a;

	try // ищем исключения, которые выбрасываются в блоке try, и отправляем их для обработки в блок(и) catch
	{
		std::string str = music_quiz(a);
	}
	catch (const char* exception) // обработка исключений типа const char*
	{
		std::cerr << "Error: " << exception << std::endl;
		return 0;
	}
	std::cout << "you are really win, congratulations!" << std::endl;
	return 0;
}
