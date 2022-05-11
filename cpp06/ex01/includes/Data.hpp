/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:17:16 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/11 19:17:54 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct	Data
{
	int			i;
	double		d;
	std::string	str;
};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif
