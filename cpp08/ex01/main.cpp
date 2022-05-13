/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:58:39 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/13 18:39:00 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	std::cout << "[Test subject code]" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	std::cout << "[Test more than 10000]" << std::endl;
	Span sp2(30000);
	for (int i = 0; i < 30000; i++)
		sp2.addNumber(i * 2);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	std::cout << std::endl;

	Span sp3(30000);
	for (int i = 0; i < 30000; i++)
		sp3.addNumber(i * 3);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	std::cout << "[Test input range of iterators]" << std::endl;
	Span sp4(5);
	std::vector<int>	vec;
	vec.push_back(4);
	vec.push_back(40);
	vec.push_back(109);
	vec.push_back(-5);
	vec.push_back(7);
	sp4.addNumber(vec.begin(), vec.end());
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;

	std::cout << std::endl;

	std::cout << "[Test exception case]" << std::endl;
	try
	{
		Span	oneElementSpan(1);
		
		oneElementSpan.addNumber(50);
		std::cout << oneElementSpan.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span	span3(3);
		
		span3.addNumber(1);
		span3.addNumber(2);
		span3.addNumber(3);
		span3.addNumber(4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
