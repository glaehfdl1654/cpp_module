/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:13:38 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/25 12:47:39 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(const int N, const std::string name)
{
	Zombie	*zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].SetName(name + std::to_string(i));
	return (zombies);
}
