/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:37:01 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 02:07:18 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	const Weapon	&weapon;
	std::string		name;
public:
	HumanA(Weapon &type);
	HumanA(std::string name, Weapon &type);
	~HumanA();

	std::string	getName() const;
	void	setName(const std::string name);
	void	attack();
};

#endif
