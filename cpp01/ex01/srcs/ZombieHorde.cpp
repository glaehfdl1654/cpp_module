/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:13:38 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/28 17:18:26 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(const int N, const std::string name)
{
	Zombie	*zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].setName(name + std::to_string(i));
	return (zombies);
}
