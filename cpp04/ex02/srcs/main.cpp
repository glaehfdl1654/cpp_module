/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:04:24 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 17:49:51 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal	*animals[3];

	animals[0] = new Dog(); std::cout << std::endl;
	animals[1] = new Cat(); std::cout << std::endl;
	animals[0]->makeSound(); std::cout << std::endl;
	animals[1]->makeSound(); std::cout << std::endl;
	// animals[2] = new Animal(); std::cout << std::endl; // This is abstract class, error
	delete animals[0]; std::cout << std::endl;
	delete animals[1]; std::cout << std::endl;
	// delete animals[2]; std::cout << std::endl;

	std::cout << std::endl;
	system("leaks constractClass");
	std::cout << std::endl;
	return 0;
}
