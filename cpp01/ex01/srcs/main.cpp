/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/25 12:42:55 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies = ZombieHorde(5, "char");

	zombies[1].Announcement();
	zombies[2].Announcement();
	zombies[3].Announcement();

	delete []zombies;
}
