/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:46:41 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 15:24:51 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "Wrong Animal Constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "Wrong Animal Copy Constructed" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destructed" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal has no sound" << std::endl;
}

void	WrongAnimal::setBrain(const Brain &newBrain)
{
	std::cout << "Wrong Animal class cannot set brain" << std::endl;
	(void)newBrain;
}

void	WrongAnimal::speakIdea(int start, int end) const
{
	std::cout << "Wrong Animal class cannot speak idea" << std::endl;
	(void)start;
	(void)end;
}
