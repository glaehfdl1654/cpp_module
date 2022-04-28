/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:44:10 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/28 17:18:05 by jaejeong         ###   ########.fr       */
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
	void	setName(std::string name);
	void	announcement(void) const;
};

Zombie* zombieHorde(const int n, const std::string name);
