/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:56:38 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/27 17:16:46 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : type(type)
{

}

Weapon::Weapon(const Weapon &other)
{
	type = other.getType();
}

Weapon::~Weapon()
{

}

const std::string	&Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
