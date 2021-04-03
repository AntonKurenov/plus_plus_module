#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class Form;
#include "Form.hpp"

class Bureaucrat
{
private:
	std::string const m_name;
	int m_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const &, int);
	virtual ~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat const& src);
	Bureaucrat(Bureaucrat const& src);
	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();
	void signForm(Form &form);
	void executeForm(Form const &form);
};

std::ostream & operator << (std::ostream &output, const Bureaucrat &t_inst);

#endif // BUREAUCRAT_HPP
