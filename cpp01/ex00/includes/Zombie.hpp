/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:10 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 02:03:48 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
private :
	std::string	name;
public :
	Zombie(std::string name = "default");
	~Zombie(void);
	void	announce(void) const;
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
