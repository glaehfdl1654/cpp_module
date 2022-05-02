/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:51:49 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 18:27:15 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap " << "default" << " : constructor called" << std::endl;
	name = "default";
	hitPoints = 100;
	energePoints = 50;
	attackDamage = 20;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " : constructor called" << std::endl;
	hitPoints = 100;
	energePoints = 50;
	attackDamage = 20;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << name << " : copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energePoints = rhs.energePoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " : destructor called" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (energePoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << name << " attacks " << target
	<< ", causing " << attackDamage << " points of damage!" << std::endl
	<< "energe points : " << energePoints << " -> " << energePoints - 1 << std::endl;
	energePoints--;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	unsigned int	afterPoints = 0;
	if (hitPoints > amount)
		afterPoints = hitPoints - amount;
	std::cout << "FragTrap " << name << " take damage" << std::endl
	<< "hit points : " << hitPoints << " -> " << afterPoints << std::endl;
	hitPoints = afterPoints;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (energePoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << name << " is repaired." << std::endl
	<< "hit points : " << hitPoints << " -> " << hitPoints + (int)amount << std::endl
	<< "energe points : " << energePoints << " -> " << energePoints - 1 << std::endl;
	energePoints--;
	hitPoints += amount;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "HighFives!!!" << std::endl;
}
