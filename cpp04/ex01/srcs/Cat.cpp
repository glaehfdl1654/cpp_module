/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:30:27 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 01:49:30 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "Cat Constructed" << std::endl;
	type = "Cat";
	brain = NULL;
}

Cat::Cat(const Brain &brain) : Animal()
{
	std::cout << "Cat Constructed" << std::endl;
	type = "Cat";
	this->brain = NULL;
	setBrain(brain);
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat Copy Constructed" << std::endl;
	brain = new Brain();
	*this = other;
}

Cat& Cat::operator=(const Cat& rhs)
{
	type = rhs.type;
	*brain = *(rhs.brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructed" << std::endl;
	if (brain)
		delete brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat has no sound" << std::endl;
}

void	Cat::setBrain(const Brain &newBrain)
{
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = newBrain;
}

void	Cat::speakIdea(int start, int end) const
{
	if (!(0 <= start && start < 100) || !((0 <= end && end < 100)) || !(start < end))
	{
		std::cout << "speakIdea : Wrong index is entered" << std::endl;
		return ;
	}
	for (int i = start; i < end; i++)
		std::cout << i << " : " << brain->getIdea(i) << std::endl;
}
