/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:04:16 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/13 11:05:57 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<class T>
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator	it;
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("cannot find value");
	return it;
}

#endif
