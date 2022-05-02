/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:51:49 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 21:44:34 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap " << "default" << " : constructor called" << std::endl;
	name = "default";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " : constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << name << " : copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " : destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (energyPoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target
	<< ", causing " << attackDamage << " points of damage!" << std::endl
	<< "energy points : " << energyPoints << " -> " << energyPoints - 1 << std::endl;
	energyPoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap has enterred in GateKeeper Mode!" << std::endl;
}
