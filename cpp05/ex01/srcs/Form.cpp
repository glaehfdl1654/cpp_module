/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:01:29 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 13:50:06 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
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

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	std::string	printSigned;
	if (form.getSignedFlag())
		printSigned = " is signed.";
	else
		printSigned = " is not signed.";

	os << "Form " << form.getName() << printSigned << "\n"
	   << "Grade to sign : " << form.getGradeToSign() << "\n"
	   << "Grade to execute : " << form.getGradeToExecute() << "\n\n";
	return (os);
}
