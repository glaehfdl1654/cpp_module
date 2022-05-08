/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:12:58 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 01:31:55 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal Constructed" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy Constructed" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& rhs)
{
	type = rhs.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructed" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal has no sound" << std::endl;
}

void	Animal::setBrain(const Brain &newBrain)
{
	std::cout << "Animal class cannot set brain" << std::endl;
	(void)newBrain;
}

void	Animal::speakIdea(int start, int end) const
{
	std::cout << "Animal class cannot speak idea" << std::endl;
	(void)start;
	(void)end;
}
