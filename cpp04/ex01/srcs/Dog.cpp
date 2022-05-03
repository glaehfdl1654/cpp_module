/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:35:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 17:51:19 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "Dog Constructed" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog Copy Constructed" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& rhs)
{
	type = rhs.type;
	for (int i = 0; i < 100; i++)
		brain->setIdea(i, rhs.brain->getIdea(i));
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructed" << std::endl;
	delete brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "bowwow bowwow!" << std::endl;
}
