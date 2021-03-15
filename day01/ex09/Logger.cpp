#include "Logger.hpp"

Logger::Logger(std::string const & t_name) : m_name(t_name)
{
	m_is_open = 0;
}

Logger::~Logger()
{
	if (m_is_open == 1)
	{
		m_ofs.close();
	}
}

void Logger::logToConsole(std::string const & t_input)
{
	std::cout << t_input << std::endl;
}

std::string Logger::getName() const
{
	return (m_name);
}

std::string Logger::makeLogEntry (std::string const & t_input)
{
	time_t rawtime;
	struct tm *timeinfo;
	char buff[30];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime (buff, 80, "[%T :: %D] |", timeinfo);
	std::string time(buff);
	std::string res("Login time:" + time + " Message: " + t_input);
	return (res);
}

void Logger::logToFile(std::string const & t_input)
{
	if (m_is_open == 2)
	{
		return ;
	}
	m_ofs << t_input << std::endl;
}

void Logger::log(std::string const & dest, std::string const & message)
{
	if (m_is_open == 0)
	{
		m_ofs.open(m_name, std::ios_base::app);
		if (!m_ofs.is_open())
		{
			std::cerr << "Error: Can't open file " + m_name + " to write. " +\
			"Log only to console is available" << std::endl;
			m_is_open = 2;
		}
		else
		{
			m_is_open = 1;
		}
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
			(this->*where[i])(res_str);
			return ;
		}
	}
	std::cout << "Error: destination with pathname \"" + dest + "\" is not found" << std::endl;
}
