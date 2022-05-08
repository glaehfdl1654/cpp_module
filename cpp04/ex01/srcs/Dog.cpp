/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:35:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/08 17:06:24 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "Dog Constructed" << std::endl;
	type = "Dog";
	brain = NULL;
}

Dog::Dog(const Brain &brain)
{
	type = "Dog";
	*(this->brain) = brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy Constructed" << std::endl;
	brain = new Brain();
	*this = other;
}

Dog& Dog::operator=(const Dog& rhs)
{
	type = rhs.type;
	*brain = *(rhs.brain);
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

void	Dog::setBrain(const Brain &newBrain)
{
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = newBrain;
}
