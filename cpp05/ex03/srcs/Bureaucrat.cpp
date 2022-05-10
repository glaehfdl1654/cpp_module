/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:56:26 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 16:30:57 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("grade is too high.");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("grade is too low.");
}

Bureaucrat::Bureaucrat()
	: name("unknown"), grade(150)
{
	
}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
	: name(name), grade(grade)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: name(other.name), grade(other.grade)
{
	
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	grade = rhs.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string	Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::increaseGrade()
{
	if (grade <= 1)
		throw (GradeTooHighException());
	grade--;
}

void	Bureaucrat::decreaseGrade()
{
	if (grade >= 150)
		throw (GradeTooLowException());
	grade++;
}

void	Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << name << " signed "
				  << "Form " << form.getName() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << name << " couldn't sign " << form.getName()
				  << " because " << exception.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << name << " executed "
				  << form.getName() << std::endl;
		form.formAction();
	}
	catch (std::exception &exception)
	{
		std::cout << name << " couldn't execute " << form.getName()
				  << " because " << exception.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureau)
{
	os << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << "." << std::endl;
	return (os);
}
