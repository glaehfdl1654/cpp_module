/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:20:20 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/13 18:25:12 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	std::cout << "[Test subject code]" << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	for (int i = 40; i < 45; i++)
		mstack.push(i);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "mstack list" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;

	std::cout << "[Test reverse iterator]" << std::endl;
	MutantStack<int>::reverse_iterator	rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator	rite = mstack.rend();
	std::cout << "mstack list reverse" << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << std::endl;

	std::cout << "[Test with list]" << std::endl;
	std::list<int>	list;

	list.push_back(5);
	list.push_back(17);
	std::cout << "list top : " << list.front() << std::endl;
	list.pop_back();
	std::cout << "list size : " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	for (int i = 40; i < 45; i++)
		list.push_back(i);
	list.push_back(0);
	std::list<int>::iterator listIt = list.begin();
	std::list<int>::iterator listIte = list.end();
	++listIt;
	--listIt;
	std::cout << "mstack list" << std::endl;
	while (listIt != listIte)
	{
		std::cout << *listIt << std::endl;
		++listIt;
	}

	return 0;
}
