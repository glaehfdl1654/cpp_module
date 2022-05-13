/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:06:04 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/13 18:09:26 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
public:
	MutantStack() : std::stack<T, C>() {}
	MutantStack(const MutantStack& other)
	{
		*this = other;
	}
	MutantStack& operator=(const MutantStack& rhs)
	{
		this->c = rhs.c;
		return *this;
	}
	~MutantStack() {}

	typedef typename
		std::stack<T, C>::container_type::iterator					iterator;
	typedef typename
		std::stack<T, C>::container_type::const_iterator			const_iterator;
	typedef typename
		std::stack<T, C>::container_type::reverse_iterator			reverse_iterator;
	typedef typename
		std::stack<T, C>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator begin() { return (this->c.begin()); }
	const_iterator begin() const { return (this->c.begin()); }
	iterator end() { return (this->c.end()); }
	const_iterator end() const { return (this->c.end()); }
	reverse_iterator rbegin() { return (this->c.rbegin()); }
	const_reverse_iterator rbegin() const { return (this->c.rbegin()); }
	reverse_iterator rend() { return (this->c.rend()); }
	const_reverse_iterator rend() const { return (this->c.rend()); }
};

#endif
