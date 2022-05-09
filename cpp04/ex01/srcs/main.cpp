/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:04:24 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 12:05:31 by jaejeong         ###   ########.fr       */
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

	if (num == 0)
		temp.push_back('0');
	for (; num != 0; num /= 10)
		temp.push_back(num % 10 + '0');
	for (int i = temp.size() - 1; i >= 0; i--)
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
		brain[0].setIdea(i, "number idea " + to_string(static_cast<int>(i)));
	for (i = 0; i < 26; i++)
		brain[1].setIdea(i, "alphabet idea " + to_string(static_cast<char>('a' + i)));
}

int main()
{
	std::cout << "\n" << "-------------------" << "\n\n";
	std::cout << "[subject's testcode]" << "\n\n";

	Brain	brain[2];
	makeBrain(brain);
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = new Dog(brain[0]);

	k->speakIdea(0, 5);

	delete j;//should not create a leak
	delete i;
	delete k;


	std::cout << "\n" << "-------------------" << "\n\n";
	std::cout << "[correct code]" << "\n\n";

	Animal *l = new Dog();
	Animal *m = new Cat();
	std::cout << "\n";
	l->makeSound();
	m->makeSound();
	l->setBrain(brain[0]);
	m->setBrain(brain[1]);
	l->speakIdea(5, 10);
	m->speakIdea(10, 15);
	delete l;
	delete m;

	std::cout << "\n" << "-------------------" << "\n\n";
	std::cout << "[wrong code]" << "\n\n";

	// check leaks, write wrong code

	return 0;
}
