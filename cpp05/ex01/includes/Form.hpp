/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:01:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 22:13:23 by jaejeong         ###   ########.fr       */
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
public :
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &other);
	Form &operator=(const Form &rhs);
	~Form();

	std::string	getName() const;
	bool	getSignedFlag() const;
	int		getGradeToSign() const;
	int		getGradeToExecute() const;

	void	beSigned(const Bureaucrat &bureau);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
