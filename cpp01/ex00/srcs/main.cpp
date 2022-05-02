/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 02:25:01 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

int	main(void)
{
	randomChump("charlie0");
	Zombie	zombie1("charlie1");
	Zombie	*zombie2 = newZombie("charlie2");

	zombie1.announce();
	zombie2->announce();
	
	randomChump("charlie3");

	delete zombie2;
}
