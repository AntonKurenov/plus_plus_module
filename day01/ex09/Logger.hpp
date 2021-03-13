#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <string>
#include <ctime>

class Logger
{
private:
	std::string m_name;
	void logToConsole(std::string const & t_input);
	void logToFile(std::string const & t_input);
	std::string makeLogEntry(std::string const & t_input);

public:
	Logger(std::string const & t_name);
	~Logger();
	void log(std::string const & dest, std::string const & message);
	std::string getName() const;
};

#endif //LOGGER_HPP
