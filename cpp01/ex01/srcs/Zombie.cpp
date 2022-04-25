/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:28 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/25 12:36:25 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie(std::string name) : name(name)
{
	
}

Zombie::~Zombie(void)
{
	cout << name << " is destroyed!!!!!!" << endl;
}

void	Zombie::SetName(std::string name)
{
	this->name = name;
}

void	Zombie::Announcement(void) const
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}
