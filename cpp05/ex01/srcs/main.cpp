/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:56:28 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 19:19:11 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form	wrongForm("wrong", 50, 2000);
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}
	try
	{
		Bureaucrat	wrongBureau("wrong", -200);
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat	a("a", 1);
	Bureaucrat	b("b", 51);
	Form		form1("form1", 5, 1);
	Form		form2("form2", 50, 30);

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;

	a.signForm(form1);
	std::cout << std::endl;
	std::cout << form1 << std::endl;

	b.signForm(form2);
	std::cout << std::endl;
	std::cout << form2 << std::endl;

	b.increaseGrade();
	std::cout << b << std::endl;

	b.signForm(form2);
	std::cout << std::endl;
	std::cout << form2 << std::endl;

	return (0);
}
