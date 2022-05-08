/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:30:27 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/08 17:06:17 by jaejeong         ###   ########.fr       */
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

Cat::Cat(const Brain &brain)
{
	type = "Cat";
	*(this->brain) = brain;
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
