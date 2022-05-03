/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:46:02 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 14:39:34 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Wrong Cat Constructed" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "Wrong Cat Copy Constructed" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat Destructed" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Cat has no sound" << std::endl;
}
