/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:14:30 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 17:51:05 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap " << "default" << " : constructor called" << std::endl;
	name = "default";
	hitPoints = 10;
	energePoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name) : name(name)
{
	std::cout << "ClapTrap " << name << " : constructor called" << std::endl;
	hitPoints = 10;
	energePoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap " << name << " : copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energePoints = rhs.energePoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " : destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energePoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target
	<< ", causing " << attackDamage << " points of damage!" << std::endl
	<< "energe points : " << energePoints << " -> " << energePoints - 1 << std::endl;
	energePoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	afterPoints = 0;

	if (hitPoints > amount)
		afterPoints = hitPoints - amount;
	std::cout << "ClapTrap " << name << " take damage" << std::endl
	<< "hit points : " << hitPoints << " -> " << afterPoints << std::endl;
	hitPoints = afterPoints;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energePoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " is repaired." << std::endl
	<< "hit points : " << hitPoints << " -> " << hitPoints + (int)amount << std::endl
	<< "energe points : " << energePoints << " -> " << energePoints - 1 << std::endl;
	energePoints--;
	hitPoints += amount;
}

std::string	ClapTrap::getName()
{
	return (name);
}

int		ClapTrap::getHitPoints()
{
	return (hitPoints);
}

int		ClapTrap::getEnergePoints()
{
	return (energePoints);
}

int		ClapTrap::getAttackDamage()
{
	return (attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	this->name = name;
}

void	ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void	ClapTrap::setEnergePoints(int energePoints)
{
	this->energePoints = energePoints;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;
}
