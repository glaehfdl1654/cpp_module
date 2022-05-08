/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:35:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/08 14:27:03 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "Dog Constructed" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy Constructed" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& rhs)
{
	type = rhs.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "bowwow bowbow!" << std::endl;
}
