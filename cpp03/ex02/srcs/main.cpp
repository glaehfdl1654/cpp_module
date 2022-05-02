/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:16:29 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 22:08:57 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	FragTrap	a("a");
	FragTrap	b("b");
	FragTrap	c = b; std::cout << std::endl;

	c.setName("c");
	c.attack(b.getName()); std::cout << std::endl;
	a.takeDamage(c.getAttackDamage()); std::cout << std::endl;
	c.attack(b.getName()); std::cout << std::endl;
	b.takeDamage(c.getAttackDamage()); std::cout << std::endl;
	b.beRepaired(3); std::cout << std::endl;

	c.highFivesGuys(); std::cout << std::endl;

	return (0);
}
