/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:51:05 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/13 18:40:36 by jaejeong         ###   ########.fr       */
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
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	template<typename Iter>
	void	addNumber(Iter begin, Iter end)
	{
		for (Iter i = begin; i != end; i++)
			addNumber(*i);
	}
};

#endif
