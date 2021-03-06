/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:48:42 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 02:07:27 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(Weapon &type) : weapon(type)
{
	name = "default";
}

HumanA::HumanA(std::string name, Weapon &type) : weapon(type)
{
	this->name = name;
}

HumanA::~HumanA()
{

}

std::string HumanA::getName() const
{
	return (name);
}

void HumanA::setName(const std::string name)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
