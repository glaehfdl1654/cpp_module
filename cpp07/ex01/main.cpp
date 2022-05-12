/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:09:10 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/12 19:20:09 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			intArray[5] = {2, 4, 6, 8, 10};
	float		floatArray[7] = {1.1f, 2.2f, 3.3f, 5.5f, 25.43f, 100.0f, 99.99f};
	double		doubleArray[3] = {1.1, 22.22, 333.333};
	std::string	stringArray[5] = {"hello", "my", "nickname", "is", "jaejeong"};

	std::cout << "[Test int]" << std::endl;
	iter(intArray, 5, print);
	std::cout << std::endl;

	std::cout << "[Test float]" << std::endl;
	iter(floatArray, 7, print);
	std::cout << std::endl;

	std::cout << "[Test double]" << std::endl;
	iter(doubleArray, 3, print);
	std::cout << std::endl;
	
	std::cout << "[Test string]" << std::endl;
	iter(stringArray, 5, print);
	std::cout << std::endl;
}
