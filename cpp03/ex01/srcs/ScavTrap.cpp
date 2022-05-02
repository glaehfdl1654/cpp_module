/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:51:49 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 17:43:31 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap " << "default" << " : constructor called" << std::endl;
	name = "default";
	hitPoints = 100;
	energePoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " : constructor called" << std::endl;
	hitPoints = 100;
	energePoints = 50;
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
	energePoints = rhs.energePoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " : destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (energePoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target
	<< ", causing " << attackDamage << " points of damage!" << std::endl
	<< "energe points : " << energePoints << " -> " << energePoints - 1 << std::endl;
	energePoints--;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	afterPoints = 0;
	if (hitPoints > amount)
		afterPoints = hitPoints - amount;
	std::cout << "ScavTrap " << name << " take damage" << std::endl
	<< "hit points : " << hitPoints << " -> " << afterPoints << std::endl;
	hitPoints = afterPoints;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (energePoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " is repaired." << std::endl
	<< "hit points : " << hitPoints << " -> " << hitPoints + (int)amount << std::endl
	<< "energe points : " << energePoints << " -> " << energePoints - 1 << std::endl;
	energePoints--;
	hitPoints += amount;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap has enterred in GateKeeper Mode!" << std::endl;
}
