/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:51:15 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/13 18:39:49 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span()
	: sizeMax(0)
{
	
}

Span::Span(unsigned int sizeMax)
	: sizeMax(sizeMax)
{

}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &rhs)
{
	sizeMax = rhs.sizeMax;
	data = rhs.data;
	return (*this);
}

Span::~Span()
{

}

void	Span::addNumber(int num)
{
	if (data.size() >= sizeMax)
		throw (std::runtime_error("Cannot put number."));
	data.push_back(num);
}

unsigned int	Span::shortestSpan()
{
	int min = INT_MAX;

	if (data.size() < 2)
		throw (std::logic_error("Cannot check span"));
	std::sort(data.begin(), data.end());
	for (size_t i = 0; i < data.size() - 1; i++)
	{
		if (data[i + 1] - data[i] < min)
			min = data[i + 1] - data[i];
	}
	return (min);
}

unsigned int	Span::longestSpan()
{
	if (data.size() < 2)
		throw (std::logic_error("Cannot check span"));
	std::sort(data.begin(), data.end());
	return (data.back() - data.front());
}
