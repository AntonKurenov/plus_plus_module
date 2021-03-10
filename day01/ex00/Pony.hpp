#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Pony
{
private:
	std::string m_name;
	bool m_is_stack;

public:
	Pony(std::string t_name, bool t_is_stack)\
	 : m_name(t_name), m_is_stack(t_is_stack)
	{
	}
	~Pony();
	std::string getName(void) const;
	std::string getColor(void) const;
	void doStuff(void);
};

#endif // PONY_HPP
