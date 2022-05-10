/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:56:28 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 21:32:03 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	a("a", 1);
	Bureaucrat	b("b", 51);
	Bureaucrat	c("c", 100);
	Bureaucrat	d("d", 150);
	std::string	target[3] = {"gaepo", "robo", "jaejeong"};
	Form		*form[3] = {new ShrubberyCreationForm(target[0]),
							new RobotomyRequestForm(target[1]),
							new PresidentialPardonForm(target[2])};

	// print form information
	std::cout << *form[0] << std::endl;
	std::cout << *form[1] << std::endl;
	std::cout << *form[2] << std::endl;

	// is not sign, fail
	for (int i = 0; i < 3; i++)
	{
		a.executeForm(*form[i]);
		b.executeForm(*form[i]);
		c.executeForm(*form[i]);
		d.executeForm(*form[i]);
		std::cout << std::endl;
	}

	// sign
	for (int i = 0; i < 3; i++)
	{
		a.signForm(*form[i]);
		b.signForm(*form[i]);
		c.signForm(*form[i]);
		d.signForm(*form[i]);
		std::cout << std::endl;
	}

	// execute
	for (int i = 0; i < 3; i++)
	{
		a.executeForm(*form[i]);
		b.executeForm(*form[i]);
		c.executeForm(*form[i]);
		d.executeForm(*form[i]);
		std::cout << std::endl;
	}

	return (0);
}
