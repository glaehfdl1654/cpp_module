/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:37:25 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 02:07:11 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*weapon;
	std::string	name;
public:
	HumanB(std::string name = "default");
	HumanB(Weapon &type);
	HumanB(std::string name, Weapon &weapon);
	~HumanB();

	std::string	getName() const;
	void	setName(const std::string name);
	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif
