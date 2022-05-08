/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:04:24 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/08 16:51:25 by jaejeong         ###   ########.fr       */
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
	std::cout << "[subject's testcode]" << "\n\n";

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;


	std::cout << "\n\n";
	std::cout << "[correct code]" << "\n\n";

	Animal *k = new Dog();
	Animal *l = new Cat();
	Brain	brain[2];
	std::cout << "\n";
	makeBrain(brain);
	k->makeSound();
	l->makeSound();
	k->setBrain(brain[0]);
	l->setBrain(brain[1]);
	delete k;
	delete l;

	/* Dog class와 Cat class의 생성자
		-> 인자 없이 생성 시 brain 생성 안하도록. (포인터는 NULL로 초기화)
	   Wrong Animal과 Wrong Cat class 완성.
	*/

	std::cout << "\n\n";
	std::cout << "[wrong code]" << "\n\n";



	return 0;
}
