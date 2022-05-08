/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:30:27 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/08 14:21:13 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "Cat Constructed" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat Copy Constructed" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& rhs)
{
	type = rhs.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat has no sound" << std::endl;
}
