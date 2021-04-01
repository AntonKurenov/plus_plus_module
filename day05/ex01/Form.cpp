#include "Form.hpp"

Form::Form(int const sign, int const exec): m_sign(sign), m_exec(exec)
{
	if (m_sign > 150 || m_exec > 150)
	{
		throw Form::GradeTooLowException();
	}
	if (m_sign < 1 || m_exec < 1)
	{
		throw Form::GradeTooHighException();
	}
}

Form::~Form()
{
}

Form::Form(Form const& src): m_is_signed(src.m_is_signed), m_exec(src.m_exec),
	m_sign(src.m_sign), m_name(src.m_name)
{
}

Form& Form::operator=(Form const& src)
{
	m_is_signed = src.m_is_signed;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form: error: GradeTooHigh exception";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form: error: GradeTooLow exception";
}

std::string Form::getName() const
{
	return m_name;
}

int Form::getExecGrade() const
{
	return m_exec;
}

int Form::getSignGrade() const
{
	return m_sign;
}

std::ostream & operator << (std::ostream &output, const Form &t_inst)
{
	if (t_inst.getStatus() == 0)
	{
		output << "The Form <" << t_inst.getName() << "> requires <" << t_inst.getSignGrade()\
			<< "> for sign and <" << t_inst.getExecGrade() << "> grade for execution"\
			<< " and not signed yet" << std::endl;
	}
	else
	{
		output << "The Form <" << t_inst.getName() << "> requires <" << t_inst.getSignGrade()\
			<< "> for sign and <" << t_inst.getExecGrade() << "> grade for execution"\
			<< " and has been signed" << std::endl;
	}		
	return output;
}
