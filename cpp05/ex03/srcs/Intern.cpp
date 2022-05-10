/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:56:53 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 22:35:19 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
	static_cast<void>(other);
}

Intern &Intern::operator=(const Intern &rhs)
{
	static_cast<void>(rhs);
	return (*this);
}

Intern::~Intern()
{

}

Form *Intern::createShrubberyForm(const std::string &target)
{
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

Form *Intern::createRobotomyForm(const std::string &target)
{
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

Form *Intern::createPresidentialForm(const std::string &target)
{
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	f[0] = &Intern::createShrubberyForm;
	f[1] = &Intern::createRobotomyForm;
	f[2] = &Intern::createPresidentialForm;

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
			return ((this->*f[i])(target));
	}
	std::cout << "cannot find matching form." << std::endl;
	return (NULL);
}
