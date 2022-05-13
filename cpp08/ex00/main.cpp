/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:09:06 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/13 13:56:01 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>
#include <vector>
#include <list>

int	main(void)
{
	std::vector<int>	vec;
	std::list<int>		lst;
	std::queue<int>		que;

	for (int i = 0; i < 42; i++)
	{
		vec.push_back(i);
		lst.push_back(i);
	}

	std::cout << "[Test vector]" << std::endl;
	try
	{
		std::cout << *easyfind(vec, 10) << std::endl;
		std::cout << *easyfind(vec, 30) << std::endl;
		std::cout << *easyfind(vec, 100) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "[Test list]" << std::endl;
	try
	{
		std::cout << *easyfind(lst, 0) << std::endl;
		std::cout << *easyfind(lst, 20) << std::endl;
		std::cout << *easyfind(lst, 30) << std::endl;
		std::cout << *easyfind(lst, 41) << std::endl;
		std::cout << *easyfind(lst, 42) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
