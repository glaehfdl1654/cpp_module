/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:24:26 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 15:02:55 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain Constructed" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy Constructed" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& rhs)
{
	for (int i = 0; i < 100; i++)
		setIdea(i, rhs.getIdea(i));
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructed" << std::endl;
}

void	Brain::setIdea(int index, const std::string &newIdea)
{
	if (!(0 <= index && index < 100))
		std::cout << "setIdea : Wrong index is entered." << std::endl;
	idea[index] = newIdea;
}

std::string	Brain::getIdea(int index) const
{
	if (!(0 <= index && index < 100))
		std::cout << "getIdea : Wrong index is entered." << std::endl;
	return (idea[index]);
}
