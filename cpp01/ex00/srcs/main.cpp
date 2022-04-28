/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/28 17:36:47 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	randomChump("charlie0");
	Zombie	zombie1("charlie1");
	Zombie	*zombie2 = newZombie("charlie2");

	zombie1.announcement();
	zombie2->announcement();
	
	randomChump("charlie3");

	delete zombie2;
}
