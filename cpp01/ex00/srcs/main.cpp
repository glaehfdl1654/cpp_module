/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/22 08:47:56 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("charlie1");
	Zombie	*zombie2 = NewZombie("charlie2");

	zombie1.Announcement();
	zombie2->Announcement();
	
	RandomChump("charlie3");

	delete zombie2;
}
