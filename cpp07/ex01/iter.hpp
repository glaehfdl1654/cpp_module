/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:57:46 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/12 17:08:20 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	print(const T& arg)
{
	std::cout << arg << std::endl;
}

template <typename T>
void	iter(T* array, std::size_t len, void (*fPtr)(const T&))
{
	if (!array || len <= 0)
		return ;
	for (size_t i = 0; i < len; i++)
		(*fPtr)(array[i]);
}

#endif
