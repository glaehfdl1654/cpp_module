/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:11:02 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/02 17:38:42 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
protected:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energePoints;
	unsigned int	attackDamage;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& rhs);
	~ClapTrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName();
	int		getHitPoints();
	int		getEnergePoints();
	int		getAttackDamage();
	void	setName(std::string name);
	void	setHitPoints(int hitPoints);
	void	setEnergePoints(int energePoints);
	void	setAttackDamage(int attackDamage);
};

#endif