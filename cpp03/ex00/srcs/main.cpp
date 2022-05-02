/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:16:29 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 18:09:00 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");
	ClapTrap	c("c");
	std::cout << std::endl;

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;

	c.attack(b.getName());
	b.takeDamage(c.getAttackDamage());
	std::cout << std::endl;

	a.beRepaired(25);
	std::cout << std::endl;

	a.setAttackDamage(5);
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	b.attack(a.getName());
	std::cout << std::endl;

	return (0);
}
