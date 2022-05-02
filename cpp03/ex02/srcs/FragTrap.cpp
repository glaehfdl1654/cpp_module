/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:51:49 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 22:10:56 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap " << "default" << " : constructor called" << std::endl;
	name = "default";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " : constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << name << " : copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " : destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "HighFives!!!" << std::endl;
}
