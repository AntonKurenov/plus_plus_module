#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
private:
	int const m_sign;
	int const m_exec;
	std::string const m_name;
	bool m_is_signed;
	Form();

public:
	Form(std::string const &, int const sign, int const exec);
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
	std::string getName() const;
	bool getStatus() const;
	int getExecGrade() const;
	int getSignGrade() const;
	void beSigned(Bureaucrat const &);
};

std::ostream & operator << (std::ostream &output, const Form &t_inst);

#endif // FORM_HPP
