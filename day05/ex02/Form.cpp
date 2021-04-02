#include "Form.hpp"

Form::Form(std::string const &name, int const sign, int const exec,\
		std::string const & target): m_sign(sign), m_exec(exec), m_name(name),\
		m_target(target), m_is_signed(false)
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

Form::Form(Form const& src): m_is_signed(src.m_is_signed), m_sign(src.m_sign), 
	m_exec(src.m_exec),m_name(src.m_name)
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

const char* Form::FormAlreadySigned::what() const throw()
{
	return "Form: error: FormAlreadySigned exception";
}

const char* Form::FormNotSigned::what() const throw()
{
	return "Form: error: FormNotSigned exception";
}

std::string Form::getTarget() const
{
	return m_target;
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

bool Form::getStatus() const
{
	return m_is_signed;
}

void Form::beSigned(Bureaucrat const &bur)
{
	if (m_is_signed)
	{
		throw Form::FormAlreadySigned();
	}
	if (bur.getGrade() > m_sign)
	{
		throw Form::GradeTooLowException();
	}
	m_is_signed = true;
}

void Form::execute(Bureaucrat const & bur) const
{
	if (!m_is_signed)
	{
		throw Form::FormNotSigned();
	}
	if (bur.getGrade() > m_exec)
	{
		throw Form::GradeTooLowException();
	}
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
