#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

class Logger
{
private:
	std::string m_name;
	void logToConsole(std::string const & t_input);
	void logToFile(std::string const & t_input);
	std::string makeLogEntry(std::string const & t_input);
	int m_is_open;
	std::ofstream m_ofs;

public:
	Logger(std::string const & t_name);
	~Logger();
	void log(std::string const & dest, std::string const & message);
	std::string getName() const;
};

#endif //LOGGER_HPP
