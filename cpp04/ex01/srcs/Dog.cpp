/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:35:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 15:19:27 by jaejeong         ###   ########.fr       */
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

Dog::Dog(const Brain &brain) : Animal()
{
	std::cout << "Dog Constructed" << std::endl;
	type = "Dog";
	this->brain = NULL;
	setBrain(brain);
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
	if (brain)
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

void	Dog::speakIdea(int start, int end) const
{
	if (!(0 <= start && start < 100) || !((0 <= end && end < 100)) || !(start < end))
	{
		std::cout << "speakIdea : Wrong index is entered" << std::endl;
		return ;
	}
	std::cout << "awegawerg" << std::endl;
	for (int i = start; i < end; i++)
		std::cout << i << " : " << brain->getIdea(i) << std::endl;
}
