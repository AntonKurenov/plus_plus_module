#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): m_name("Bureaucrat"), m_grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const & name, int grade): m_name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	m_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const& src): 
	m_name(src.m_name), m_grade(src.m_grade)
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& src)
{
	if (this == &src)
	{
		return *this;
	}
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHigh exception";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLow exception";
}

void Bureaucrat::increment()
{
	if (m_grade == 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return ;
	}
	m_grade--;
}

void Bureaucrat::decrement()
{
	if (m_grade == 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	m_grade++;
}

std::string Bureaucrat::getName() const
{
	return m_name;
}

int Bureaucrat::getGrade() const
{
	return m_grade;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat <" << m_name << ">, signs <" +\
		form.getName() + "> " << std::endl;
	}
	catch (const Form::FormAlreadySigned& e)
	{
		std::cerr << "Bureaucrat <" << m_name << ">, cannot sign <" +\
		form.getName() + "> because form already signed" << std::endl;
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << "Bureaucrat <" << m_name << ">, cannot sign <" +\
		form.getName() + "> because his grade too low" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Bureaucrat <" << m_name << ">, cannot sign <" +\
		form.getName() + "> " << std::endl;
	}
}

std::ostream & operator << (std::ostream &output, const Bureaucrat &t_inst)
{
	output << "<" << t_inst.getName() << ">, bureaucrat grade <" << \
		t_inst.getGrade() << ">." << std::endl;
		return output;
}
