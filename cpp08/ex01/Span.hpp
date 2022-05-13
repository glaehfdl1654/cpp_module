/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:51:05 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/13 16:03:13 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
private :
	std::vector<int>	data;
	unsigned int		sizeMax;
public :
	Span();
	Span(unsigned int sizeMax);
	Span(const Span &other);
	Span &operator=(const Span &rhs);
	~Span();
	
	void	addNumber(int num);

	template<typename Iter>
	void	addNumber(Iter begin, Iter end);

	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};

template<typename Iter>
void	Span::addNumber(Iter begin, Iter end)
{
	for (Iter i = begin; i != end; i++)
		addNumber(*i);
}

#endif
