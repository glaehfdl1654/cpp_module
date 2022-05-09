/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:46:02 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 15:34:04 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Wrong Cat Constructed" << std::endl;
	type = "WrongCat";
	brain = new Brain();
}

WrongCat::WrongCat(Brain &brain) : WrongAnimal()
{
	std::cout << "Wrong Cat Constructed" << std::endl;
	type = "Wrong Cat";
	this->brain = &brain;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "Wrong Cat Copy Constructed" << std::endl;
	brain = new Brain();
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	type = rhs.type;
	brain = rhs.brain;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat Destructed" << std::endl;
	delete brain;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Cat has no sound" << std::endl;
}

void	WrongCat::setBrain(Brain &newBrain)
{
	if (brain)
		delete brain;
	brain = &newBrain;
}

void	WrongCat::speakIdea(int start, int end) const
{
	if (!(0 <= start && start < 100) || !((0 <= end && end < 100)) || !(start < end))
	{
		std::cout << "speakIdea : Wrong index is entered" << std::endl;
		return ;
	}
	for (int i = start; i < end; i++)
		std::cout << i << " : " << brain->getIdea(i) << std::endl;
}
