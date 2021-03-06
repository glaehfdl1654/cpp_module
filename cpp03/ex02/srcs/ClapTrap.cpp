/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:14:30 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/05 14:07:00 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("default"), trapType("ClapTrap"),
		hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), trapType("ClapTrap"),
		hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap : copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	name = rhs.name;
	trapType = rhs.trapType;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energyPoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return;
	}
	std::cout << trapType << " " << name << " attacks " << target
			  << ", causing " << attackDamage << " points of damage!" << std::endl
			  << "energy points : " << energyPoints << " -> " << energyPoints - 1 << std::endl;
	energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int afterPoints = 0;
	if (hitPoints > amount)
		afterPoints = hitPoints - amount;
	std::cout << trapType << " " << name << " take damage" << std::endl
			  << "hit points : " << hitPoints << " -> " << afterPoints << std::endl;
	hitPoints = afterPoints;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0 || hitPoints <= 0)
	{
		std::cout << name << " can not move." << std::endl;
		return ;
	}
	std::cout << trapType << " " << name << " is repaired." << std::endl
			  << "hit points : " << hitPoints << " -> " << hitPoints + amount << std::endl
			  << "energy points : " << energyPoints << " -> " << energyPoints - 1 << std::endl;
	energyPoints--;
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

int		ClapTrap::getEnergyPoints()
{
	return (energyPoints);
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

void	ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;
}
