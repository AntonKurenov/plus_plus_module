#ifndef FORM_HPP
# define FORM_HPP

#include <ctime>
#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
private:
	int const m_sign;
	int const m_exec;
	std::string const m_name;
	std::string const m_target;
	bool m_is_signed;
	Form();

public:
	Form(std::string const &, int const sign, int const exec,\
		 std::string const &target);
	virtual ~Form();
	Form& operator=(Form const& src);
	Form(Form const& src);
	class GradeTooHighException: public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		const char* what() const throw();
	};
	class FormAlreadySigned: public std::exception
	{
	public:
		const char* what() const throw();
	};
	class FormNotSigned: public std::exception
	{
	public:
		const char* what() const throw();
	};
	std::string getName() const;
	bool getStatus() const;
	int getExecGrade() const;
	int getSignGrade() const;
	std::string getTarget() const;
	void beSigned(Bureaucrat const &);
	virtual void execute(Bureaucrat const &) const;
	virtual void action() const = 0;
};

std::ostream & operator << (std::ostream &output, const Form &t_inst);

#endif // FORM_HPP
