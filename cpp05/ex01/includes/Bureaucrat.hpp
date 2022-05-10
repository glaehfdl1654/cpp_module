/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:56:23 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 22:11:33 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private :
	const std::string	name;
	int	grade;

	Bureaucrat();
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
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat();

	std::string	getName() const;
	int		getGrade() const;
	void	increaseGrade();
	void	decreaseGrade();

	void	signForm(Form& form) const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureau);

#endif
