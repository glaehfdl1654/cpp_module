/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:04:24 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/08 15:41:21 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

std::string	to_string(int num)
{
	std::string	temp;
	std::string	ret;

	for (; num != 0; num /= 10)
		temp.push_back(num / 10 + '0');
	for (size_t i = 0; i < temp.size(); i++)
		ret.push_back(temp[i]);
	
	return (ret);
}

std::string	to_string(char chr)
{
	std::string	ret;
	ret.push_back(chr);
	return (ret);
}

void	makeBrain(Brain *brain)
{
	int i;

	for (i = 0; i < 100; i++)
		brain[0].setIdea(i, "number idea" + to_string(i));
	for (i = 0; i < 26; i++)
		brain[1].setIdea(i, "alphabet idea" + to_string('a' + i));
}

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	

	Brain	brain[2];
	makeBrain(brain);

	std::cout << "\n\n";

	i->setBrain(brain[0]);

	std::cout << "\n\n";

	delete j;//should not create a leak
	delete i;

	return 0;
}
