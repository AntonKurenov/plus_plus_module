#include <iostream>
#include <string>

int main()
{
	try
	{
		// Здесь мы пишем стейтменты, которые будут генерировать следующее исключение
		// throw -1; // типичный стейтмент throw
		std::string str("hello");
		throw str;
		// throw "hello";
	}
	catch (int a)
	{
	    // Любые исключения типа int, сгенерированные в блоке try, приведенном выше, обрабатываются здесь
	    std::cerr << "We caught an int exception with value: " << a << '\n';
	}
	catch (double) // мы не указываем имя переменной, так как в этом нет надобности (мы её нигде в блоке не используем)
	{
	    // Любые исключения типа double, сгенерированные в блоке try, приведенном выше, обрабатываются здесь
	    std::cerr << "We caught an exception of type double" << '\n';
	}
	catch (const std::string &str) // ловим исключения по константной ссылке
	{
	    // Любые исключения типа std::string, сгенерированные внутри блока try, приведенном выше, обрабатываются здесь
	    std::cerr << "We caught an exception of type std::string" << '\n';
	}

	std::cout << "Continuing our way!\n";

    return 0;
}
