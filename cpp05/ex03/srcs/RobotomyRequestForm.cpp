/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:55:28 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 22:08:43 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("robotomy", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: Form("robotomy", 72, 45), target(other.getTarget())
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	target = rhs.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

std::string		RobotomyRequestForm::getTarget() const
{
	return (target);
}

void	RobotomyRequestForm::formAction() const
{
	std::cout << "drrrrrrrrrrrrrrrrrrr" << std::endl;
	
	std::srand(time(0));
	if (std::rand() % 2)
		std::cout << target << " has been robotomized." << std::endl;
	else
		std::cout << target << " failed to robotomized." << std::endl;
}
