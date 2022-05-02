/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:50:23 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 22:37:33 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	
}
Harl::~Harl()
{
	
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"
	<< "I love having extra bacon for my 7XL-double-cheese-\
triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n"
	<< "I cannot believe adding extra bacon costs more money.\nYou didn’t put \
enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
	<< "I think I deserve to have some extra bacon for free.\nI’ve been coming for \
years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n"
<< "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	check[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == check[i])
		{
			(this->*f[i])();
			return ;
		}
	}
	std::cout << "Not found." << std::endl;
}
