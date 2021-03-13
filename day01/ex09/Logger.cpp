#include "Logger.hpp"

Logger::Logger(std::string const & t_name) : m_name(t_name)
{
}

Logger::~Logger()
{
}

void Logger::logToConsole(std::string const & t_input)
{

}

std::string Logger::getName() const
{
	return (m_name);
}

std::string Logger::makeLogEntry (std::string const & t_input)
{
	time_t rawtime;
	struct tm *timeinfo;
	char buff[20];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	// std::string time(asctime(timeinfo));
	strftime (buff, 80, "[%T :: %D] |", timeinfo);
	std::string time(buff);
	std::string res("Login time is :" + time + " Message: " + t_input);
	return (res);
}

void Logger::log(std::string const & dest, std::string const & message)
{
	std::ofstream ofs(m_name, std::ios_base::out | std::ios_base::trunc);
	if (!ofs.is_open())
	{
		std::cerr << "Error: Can't open file" + m_name + " to write" << std::endl;
		return ;
	}
	std::string res_str(Logger::makeLogEntry(message));
	void (Logger::*where[2])(std::string const &) = {\
			&Logger::logToFile,
			&Logger::logToConsole};

	std::string var[2] = {"file", "console"};
	for (int i = 0; i < 2; i++)
	{
		if (dest.compare(var[i]) == 0)
		{
			(this->*where[i])(message);
			return ;
		}
	}
	std::cout << "Error: destination with pathname \"" + dest + "\" is not found" << std::endl;
}
