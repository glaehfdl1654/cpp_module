/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:01:29 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 21:22:19 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("grade is too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("grade is too low");
}

const char* Form::IsNotSignedException::what(void) const throw()
{
	return ("This form is not signed.");
}

const char* Form::FileCanNotOpenException::what(void) const throw()
{
	return ("File cannot open.");
}

Form::Form()
	: name("unknown"),
	  gradeToSign(150),
	  gradeToExecute(150),
	  isSigned(false)
{
	
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
	: name(name),
	  gradeToSign(gradeToSign),
	  gradeToExecute(gradeToExecute),
	  isSigned(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw (GradeTooHighException());
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw (GradeTooLowException());
}

Form::Form(const Form &other)
	: name(other.getName()),
	  gradeToSign(other.getGradeToSign()),
	  gradeToExecute(other.getGradeToExecute()),
	  isSigned(other.getSignedFlag())
{
	
}

Form &Form::operator=(const Form &rhs)
{
	isSigned = rhs.isSigned;
	return (*this);
}

Form::~Form()
{

}

std::string	Form::getName() const
{
	return (name);
}

bool	Form::getSignedFlag() const
{
	return (isSigned);
}

int		Form::getGradeToSign() const
{
	return (gradeToSign);
}

int		Form::getGradeToExecute() const
{
	return (gradeToExecute);
}

void	Form::beSigned(const Bureaucrat &bureau)
{
	if (bureau.getGrade() > getGradeToSign())
		throw (GradeTooLowException());
	isSigned = true;
}

void	Form::execute(const Bureaucrat &executor) const
{
	if (isSigned == false)
		throw (IsNotSignedException());
	if (executor.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	std::string	printSigned;
	if (form.getSignedFlag())
		printSigned = " is signed.";
	else
		printSigned = " is not signed.";

	os << form.getName() << printSigned << "\n"
	   << "grade to sign : " << form.getGradeToSign() << "\n"
	   << "grade to execute : " << form.getGradeToExecute() << "\n\n";
	return (os);
}
