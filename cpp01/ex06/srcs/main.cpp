/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:36:16 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/28 16:46:55 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Use only one argument" << std::endl;
		return (0);
	}

	Harl	harl;
	harl.complain(argv[1]);

	return (0);
}
