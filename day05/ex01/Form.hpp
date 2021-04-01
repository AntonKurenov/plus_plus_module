#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
private:
	bool m_is_signed;
	int const m_exec;
	int const m_sign;
	std::string const m_name;
	Form();

public:
	Form(int const, int const);
	virtual ~Form();
	Form& operator=(Form const& src);
	Form(Form const& src);
	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
	std::string getName() const;
	bool getStatus() const;
	int getExecGrade() const;
	int getSignGrade() const;
};

std::ostream & operator << (std::ostream &output, const Form &t_inst);

#endif // FORM_HPP
