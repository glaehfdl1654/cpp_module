/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 02:25:14 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int	main(void)
{
	Zombie	*zombies = zombieHorde(5, "char");

	zombies[0].announce();
	zombies[1].announce();
	zombies[2].announce();

	delete []zombies;
}
