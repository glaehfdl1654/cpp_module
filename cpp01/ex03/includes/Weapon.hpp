/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 02:40:53 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/27 17:22:54 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private :
	std::string	type;
public :
	Weapon(const std::string type = "default");
	Weapon(const Weapon &other);
	~Weapon();

	const std::string	&getType() const;
	void	setType(std::string type);
};

#endif
