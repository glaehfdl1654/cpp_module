/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:16:35 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/28 18:15:43 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name)
{
	weapon = NULL;
}

HumanB::HumanB(Weapon &type) : weapon(&type)
{
	name = "default";
}

HumanB::HumanB(std::string name, Weapon &type) : weapon(&type)
{
	this->name = name;
}

HumanB::~HumanB()
{

}

const std::string &HumanB::getName() const
{
	return (name);
}

void HumanB::setName(const std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their ";
	if (weapon)
		std::cout << weapon->getType();
	else
		std::cout << "Fist";
	std::cout << std::endl;
}
