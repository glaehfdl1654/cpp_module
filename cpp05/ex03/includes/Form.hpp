/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:01:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 21:21:52 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private :
	const std::string	name;
	const int	gradeToSign;
	const int	gradeToExecute;
	bool		isSigned;
	
	Form();
public :
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};
	class IsNotSignedException : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};
	class FileCanNotOpenException : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &other);
	Form &operator=(const Form &rhs);
	virtual	~Form();

	std::string	getName() const;
	bool	getSignedFlag() const;
	int		getGradeToSign() const;
	int		getGradeToExecute() const;

	void	beSigned(const Bureaucrat &bureau);
	void	execute(const Bureaucrat &executor) const;
	virtual void	formAction() const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
