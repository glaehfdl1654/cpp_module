/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:10 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/22 09:15:32 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
private :
	std::string	name;
public :
	Zombie(std::string name = "default");
	~Zombie(void);
	void	Announcement(void) const;
};

Zombie* ZombieHorde(int n, std::string name);
