/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:14:30 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/28 20:49:12 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "default" << " : constructor called" << std::endl;
	name = "default";
	hitPoints = 10;
	energePoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name) : name(name)
{
	std::cout << name << " : constructor called" << std::endl;
	hitPoints = 10;
	energePoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << name << " : copy constructor called" << std::endl;
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
	std::cout << name << " : destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energePoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << name << " attack " << target << std::endl
	<< "energe points : " << energePoints << " -> " << energePoints - 1 << std::endl;
	energePoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " take damage" << std::endl
	<< "hit points : " << hitPoints << " -> " << hitPoints - (int)amount << std::endl;
	hitPoints -= (int)amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energePoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << name << " is repaired." << std::endl
	<< "hit points : " << hitPoints << " -> " << hitPoints + (int)amount << std::endl
	<< "energe points : " << energePoints << " -> " << energePoints - 1 << std::endl;
	energePoints--;
	hitPoints += (int)amount;
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
