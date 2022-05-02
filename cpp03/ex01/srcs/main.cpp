/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:16:29 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 18:10:04 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ScavTrap	a("a");
	ScavTrap	b("b");
	ScavTrap	c = b;

	c.attack(b.getName());
	a.takeDamage(c.getAttackDamage());
	c.attack(b.getName());
	b.takeDamage(c.getAttackDamage());
	b.beRepaired(3);

	c.guardGate();

	return (0);
}
