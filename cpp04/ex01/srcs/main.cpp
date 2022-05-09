/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:04:24 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 17:37:03 by jaejeong         ###   ########.fr       */
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
	Brain	*brain = new Brain[2]();
	makeBrain(brain);

	std::cout << "\n" << "-------------------" << "\n\n";
	std::cout << "[subject's testcode]" << "\n\n";
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	delete j;//should not create a leak
	delete i;


	std::cout << "\n" << "-------------------" << "\n\n";
	std::cout << "[Animal array]" << "\n\n";

	Animal *animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	std::cout << "\n";
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "\n" << "-------------------" << "\n\n";
	std::cout << "[correct code]" << "\n\n";

	Dog *l = new Dog();
	std::cout << "\n";
	l->setBrain(brain[0]);
	Dog m(*l);
	l->speakIdea(5, 10);
	m.speakIdea(5, 10);
	delete l;

	std::cout << "\n" << "-------------------" << "\n\n";
	// std::cout << "[wrong code]" << "\n\n";

	// WrongCat *n = new WrongCat();
	// n->makeSound();
	// n->setBrain(brain[0]);
	// WrongCat o(*n);
	// n->speakIdea(3, 8);
	// o.speakIdea(3, 8);
	// delete n;

	delete []brain;
	std::cout << std::endl;
	system("leaks brain");
	std::cout << std::endl;
	return 0;
}
