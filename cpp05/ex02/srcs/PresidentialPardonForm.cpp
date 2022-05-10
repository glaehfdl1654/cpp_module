/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:28:44 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 18:43:15 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string &target)
	: Form("presidential", 25, 5), target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: Form("presidential", 25, 5), target(other.getTarget())
{
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	target = rhs.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

std::string		PresidentialPardonForm::getTarget() const
{
	return (target);
}

void	PresidentialPardonForm::formAction() const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
