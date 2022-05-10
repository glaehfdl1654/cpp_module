/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:56:28 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 10:52:11 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("a", 3);
		std::cout << a;
		a.increaseGrade();
		std::cout << a;
		a.increaseGrade();
		std::cout << a;
		a.increaseGrade();
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	b("b", 148);
		std::cout << b;
		b.decreaseGrade();
		std::cout << b;
		b.decreaseGrade();
		std::cout << b;
		b.decreaseGrade();
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	c("c", 250);
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	d("d", 0);
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}

	return (0);
}
