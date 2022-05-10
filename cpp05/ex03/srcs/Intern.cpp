/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:56:53 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 22:05:52 by jaejeong         ###   ########.fr       */
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


Form	*Intern::makeForm(const std::string &formName, const std::string &target)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	try {
		for (int i = 0; i < 3; i++)
		{
			if (forms[i] == formName)
			{
				switch (i) {
					case 0:
						return (createShrubberyForm(target));
					case 1:
						return (createRobotomyForm(target));
					case 2:
						return (createPresidentialForm(target));
					default:
						break ;
				}
			}
		}
		throw (NoMatchingFormNameException());
	} catch (const std::exception &e) {
		std::cout << "[ Intern ] " << e.what() << std::endl;
	}
	return (NULL);
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

//exception
const char *Intern::NoMatchingFormNameException::what() const throw()
{
	return ("ERROR: Cannot find matching form");
}